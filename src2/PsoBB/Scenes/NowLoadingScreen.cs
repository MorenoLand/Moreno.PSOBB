using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Imaging;

namespace PsoBB.Scenes;

/// <summary>
/// The loading surface the startup sequence shows between the publisher logos and the title art.
/// </summary>
/// <remarks>
/// The three NowLoading textures form two 128-pixel halves and the 64-pixel emblem. The draw at
/// <c>0x0078DDB8</c> advances the rotation word by 364, derives the emblem alpha from its sine and
/// runs only while bit 1 of the title drawing flag is set. The load routine at <c>0x0078DF88</c>
/// reads <c>NowLoading.prs</c> and registers the three frames.
/// </remarks>
public sealed class NowLoadingScreen : IDisposable
{
	/// <summary>The archive the loading surface loads.</summary>
	public const string ArchiveName = "NowLoading.prs";

	/// <summary>The number of frames in the archive.</summary>
	public const int TextureCount = 3;

	/// <summary>The value the rotation word advances by on every draw.</summary>
	public const int RotationStep = 364;

	/// <summary>The first quad position from the vertex array at <c>0x009FF0E0</c>.</summary>
	public static readonly Vector2 LeftPosition = new(368f, 352f);

	/// <summary>The first quad size; the right edge is 497, one pixel into the second quad.</summary>
	public static readonly Vector2 LeftSize = new(129f, 128f);

	/// <summary>The second quad position from the vertex array at <c>0x009FF080</c>.</summary>
	public static readonly Vector2 RightPosition = new(496f, 352f);

	/// <summary>The second quad size.</summary>
	public static readonly Vector2 RightSize = new(128f, 128f);

	/// <summary>The emblem position from the element at <c>0x009FF1A8</c>.</summary>
	public static readonly Vector2 EmblemPosition = new(496f, 416f);

	/// <summary>The emblem size of frame 2 in the frame table at <c>0x009FF16C</c>.</summary>
	public static readonly Vector2 EmblemSize = new(64f, 64f);

	/// <summary>The scale <c>0x00819F7C</c> applies to the element through its 0.5 argument.</summary>
	public const float EmblemScale = 2f;

	/// <summary>The drawn emblem rectangle after the 2x scale around the element centre.</summary>
	public static readonly Vector2 EmblemDrawPosition = new(464f, 384f);

	/// <summary>The drawn emblem size after the 2x scale.</summary>
	public static readonly Vector2 EmblemDrawSize = new(128f, 128f);

	/// <summary>The full texture coordinates both halves sample.</summary>
	public static readonly Vector4 TextureCoordinates = new(0f, 0f, 1f, 1f);

	private readonly ITexture[] _textures;
	private bool _disposed;

	/// <summary>
	/// Loads the three NowLoading frames.
	/// </summary>
	/// <param name="files">The data registry that resolves the archive.</param>
	/// <param name="renderer">The renderer that owns the textures.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The archive is absent.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed or has too few frames.</exception>
	[Original(0x0078DF88, "NowLoading_Load_0078df88")]
	public NowLoadingScreen(IDataFiles files, IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		if (!files.TryRead(ArchiveName, out ReadOnlyMemory<byte> data))
			throw new FileNotFoundException("The loading texture archive is absent.", ArchiveName);
		ReadOnlyMemory<byte> xvm = data;
		if (data.Length < 4 || BinaryPrimitives.ReadUInt32LittleEndian(data.Span) != 0x484D5658)
			xvm = Decompress(data);
		IReadOnlyList<XvmTexture> decoded = XvmArchive.Read(xvm.Span);
		if (decoded.Count < TextureCount)
			throw new TextureFormatException($"The loading archive has {decoded.Count} frames but {TextureCount} are required.", 0);
		_textures = new ITexture[TextureCount];
		for (int index = 0; index < TextureCount; index++)
			_textures[index] = renderer.CreateTexture(decoded[index].Width, decoded[index].Height, decoded[index].Image.Pixels.Span, decoded[index].Image.Stride);
	}

	/// <summary>Gets the three frames in archive order.</summary>
	public IReadOnlyList<ITexture> Textures => _textures;

	/// <summary>Gets the accumulated rotation word from <c>0x009FF1BC</c>.</summary>
	public int Rotation { get; private set; }

	/// <summary>Gets a value indicating whether the loading surface has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Returns the original 24-bit RGB colour with the sine-derived alpha byte.
	/// </summary>
	/// <param name="rotation">The rotation word at <c>0x009FF1BC</c>.</param>
	/// <returns>The diffuse colour in 0xAARRGGBB form.</returns>
	public static uint GetColor(int rotation)
	{
		double radians = rotation * (Math.PI * 2.0 / 65536.0);
		double alpha = ((Math.Sin(radians) + 1.0) / 4.0 + 0.5) * 255.0;
		uint value = (uint)(int)alpha & 0xFFu;
		return (value << 24) | 0xFFFFFFu;
	}

	/// <summary>
	/// Adds the two loading halves and the pulsing emblem.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The surface is released.</exception>
	[Original(0x0078DDB8, "NowLoading_Draw_0078ddb8")]
	public void Draw(TitleArtDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (!Scene1.TitleDrawingEnabled)
			return;
		Rotation = unchecked(Rotation + RotationStep);
		uint color = GetColor(Rotation);
		draw.AddOverlay(CreateQuad(_textures[0], LeftPosition, LeftSize, TextureCoordinates, 0xFFFFFFFFu, 1f, TitleArtBlend.Opaque));
		draw.AddOverlay(CreateQuad(_textures[1], RightPosition, RightSize, TextureCoordinates, 0xFFFFFFFFu, 1f, TitleArtBlend.Opaque));
		draw.AddOverlay(CreateQuad(_textures[2], EmblemDrawPosition, EmblemDrawSize, TextureCoordinates, color, 1f, TitleArtBlend.AdditiveAlpha));
	}

	/// <summary>
	/// Releases the three frames. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (ITexture texture in _textures)
			texture.Dispose();
	}

	private static TitleArtOverlayQuad CreateQuad(ITexture texture, Vector2 position, Vector2 size, Vector4 coordinates, uint color, float depth, TitleArtBlend blend)
	{
		Vector2 right = new(position.X + size.X, position.Y);
		Vector2 bottom = new(position.X + size.X, position.Y + size.Y);
		Vector2 leftBottom = new(position.X, position.Y + size.Y);
		return new TitleArtOverlayQuad(
			texture,
			new TitleArtVertex(position, new Vector2(coordinates.X, coordinates.Y)),
			new TitleArtVertex(right, new Vector2(coordinates.Z, coordinates.Y)),
			new TitleArtVertex(bottom, new Vector2(coordinates.Z, coordinates.W)),
			new TitleArtVertex(leftBottom, new Vector2(coordinates.X, coordinates.W)),
			color,
			depth,
			blend);
	}

	private static ReadOnlyMemory<byte> Decompress(ReadOnlyMemory<byte> data)
	{
		int capacity = Math.Max(0x10000, data.Length * 4);
		while (capacity <= 0x4000000)
		{
			byte[] destination = new byte[capacity];
			try
			{
				int written = PrsDecompressor.Decompress(data.Span, destination);
				return destination.AsMemory(0, written);
			}
			catch (ArgumentException)
			{
				capacity *= 2;
			}
		}
		throw new TextureFormatException("The loading archive is neither XVM nor a supported PRS stream.", 0);
	}
}
