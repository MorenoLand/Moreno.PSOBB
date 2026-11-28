using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Gui;
using PsoBB.Imaging;

namespace PsoBB.Scenes;

/// <summary>
/// The publisher-logo surface scene 1 loads: the eight logo sprites and their placement rectangles.
/// </summary>
/// <remarks>
/// The title resources load the <c>logo.prs</c> texture archive through <c>0x411FB8</c>. The simple
/// descriptor selects the eight SEGA sprites; the cinematic descriptor selects twenty-four sprites
/// (the eight SEGA sprites and sixteen Sonic Team sprites). <c>0x415AB0</c> draws the eight
/// rectangles below in order, adding the state offset from <c>0x411E30</c> to each texture index.
/// </remarks>
public sealed class TitleLogo : IDisposable
{
	/// <summary>The archive the logo sprites are read from.</summary>
	public const string ArchiveName = "logo.prs";

	/// <summary>The number of sprites in the simple logo descriptor.</summary>
	public const int SimpleTextureCount = 8;

	/// <summary>The number of sprites in the cinematic logo descriptor.</summary>
	public const int CinematicTextureCount = 24;

	/// <summary>The sprite names in the simple logo descriptor.</summary>
	public static readonly string[] SimpleTextureNames =
	[
		"sega_logo01", "sega_logo02", "sega_logo03", "sega_logo04",
		"sega_logo05", "sega_logo06", "sega_logo07", "sega_logo08",
	];

	/// <summary>The sprite names in the cinematic logo descriptor.</summary>
	public static readonly string[] CinematicTextureNames =
	[
		"sega_logo01", "sega_logo02", "sega_logo03", "sega_logo04",
		"sega_logo05", "sega_logo06", "sega_logo07", "sega_logo08",
		"zarva_logo01", "zarva_logo02", "zarva_logo03", "zarva_logo04",
		"zarva_logo05", "zarva_logo06", "zarva_logo07", "zarva_logo08",
		"zarva_logo01", "zarva_logo02", "zarva_logo03", "zarva_logo04",
		"zarva_logo05", "zarva_logo06", "zarva_logo07", "zarva_logo08",
	];

	/// <summary>The eight sprite rectangles and texture indices from the table at <c>0x9A3840</c>.</summary>
	[OriginalGlobal(0x009A3840)]
	public static IReadOnlyList<TitleLogoQuad> Quads { get; } = Array.AsReadOnly<TitleLogoQuad>(
	[
		new(7, 0x200, 0x180, 0x80, 0x80),
		new(6, 0x200, 0x100, 0x80, 0x80),
		new(5, 0x200, 0x080, 0x80, 0x80),
		new(4, 0x200, 0x000, 0x80, 0x80),
		new(1, 0x000, 0x100, 0x100, 0x100),
		new(0, 0x000, 0x000, 0x100, 0x100),
		new(3, 0x100, 0x100, 0x100, 0x100),
		new(2, 0x100, 0x000, 0x100, 0x100),
	]);

	private readonly TextureRequest[] _requests;
	private readonly ITexture[] _frames;
	private bool _disposed;

	/// <summary>
	/// Loads the logo archive and acquires every sprite the selected descriptor names.
	/// </summary>
	/// <param name="files">The data files that resolve the logo archive.</param>
	/// <param name="textures">The shared texture cache that owns the uploaded sprites.</param>
	/// <param name="cinematic">Whether the cinematic descriptor is selected.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The logo archive is absent.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed or has too few sprites.</exception>
	[Original(0x00411FB8, "TitleLogo_Load_00411fb8")]
	public TitleLogo(IDataFiles files, TextureCache textures, bool cinematic)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(textures);
		if (!files.TryRead(ArchiveName, out ReadOnlyMemory<byte> data))
			throw new FileNotFoundException("The logo texture archive is absent.", ArchiveName);
		ReadOnlyMemory<byte> xvm = IsXvm(data.Span) ? data : Decompress(data, ArchiveName);
		IReadOnlyList<XvmTexture> decoded = XvmArchive.Read(xvm.Span);
		int count = cinematic ? CinematicTextureCount : SimpleTextureCount;
		if (decoded.Count < count)
			throw new TextureFormatException($"The logo archive has {decoded.Count} sprites but {count} are required.", 0);
		_requests = new TextureRequest[count];
		_frames = new ITexture[count];
		try
		{
			for (int index = 0; index < count; index++)
			{
				TextureRequest request = textures.Acquire(KeyWhite(decoded[index]))
					?? throw new InvalidOperationException("The texture cache has no slot for a logo sprite.");
				_requests[index] = request;
				_frames[index] = request.Texture;
			}
		}
		catch
		{
			foreach (TextureRequest request in _requests)
				request?.Dispose();
			throw;
		}
	}

	/// <summary>Gets a value indicating whether the cinematic descriptor was loaded.</summary>
	public bool IsCinematic => _frames.Length == CinematicTextureCount;

	/// <summary>Gets the loaded sprites in descriptor order.</summary>
	public IReadOnlyList<ITexture> Frames => _frames;

	/// <summary>Gets a value indicating whether the sprites were released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Adds the eight logo rectangles using the texture offset for the given logo state.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <param name="variant">The logo variant from <see cref="TitleLogoSequence.Variant"/>.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The sprites were released.</exception>
	[Original(0x00411E30, "TitleLogo_Draw_00411e30")]
	public void Draw(UiDrawList draw, int state)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		int offset = state switch
		{
			0 => 0,
			1 => 8,
			2 => 0x10,
			_ => 0,
		};
		foreach (TitleLogoQuad quad in Quads)
		{
			int textureIndex = quad.TextureIndex + offset;
			if ((uint)textureIndex >= (uint)_frames.Length)
				continue;
			draw.Add(new UiQuad(
				new Vector2(quad.X, quad.Y),
				new Vector2(quad.Width, quad.Height),
				new Vector4(0f, 0f, 1f, 1f),
				_frames[textureIndex],
				0xFFFFFFFFu));
		}
	}

	/// <summary>
	/// Releases every sprite reference. Repeated calls do nothing.
	/// </summary>
	[Original(0x00411BCC, "TitleLogo_Release_00411bcc")]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (TextureRequest request in _requests)
			request.Dispose();
	}

	private static bool IsXvm(ReadOnlySpan<byte> data) =>
		data.Length >= 4 && BinaryPrimitives.ReadUInt32LittleEndian(data) == 0x484D5658;

	private static XvmTexture KeyWhite(XvmTexture texture)
	{
		byte[] pixels = texture.Image.Pixels.ToArray();
		for (int index = 0; index + 3 < pixels.Length; index += 4)
		{
			if (pixels[index] == 255 && pixels[index + 1] == 255 && pixels[index + 2] == 255)
				pixels[index + 3] = 0;
		}
		return new XvmTexture(texture.GlobalIndex, texture.Format, texture.Width, texture.Height, texture.Offset, new TextureImage(texture.Width, texture.Height, pixels));
	}

	private static ReadOnlyMemory<byte> Decompress(ReadOnlyMemory<byte> data, string name)
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
		throw new TextureFormatException($"The archive '{name}' is neither XVM nor a supported PRS stream.", 0);
	}
}

/// <summary>
/// One logo sprite rectangle from the table at <c>0x9A3840</c>.
/// </summary>
/// <param name="TextureIndex">The sprite index within the selected descriptor.</param>
/// <param name="X">The left edge in the original 640 by 512 logo coordinate space.</param>
/// <param name="Y">The top edge in the original 640 by 512 logo coordinate space.</param>
/// <param name="Width">The rectangle width.</param>
/// <param name="Height">The rectangle height.</param>
public readonly record struct TitleLogoQuad(int TextureIndex, int X, int Y, int Width, int Height);

/// <summary>
/// The scene 1 logo timeline: the state machine at <c>0x411C94</c>, its timer callbacks and the
/// texture offset used by the draw at <c>0x411E30</c>.
/// </summary>
/// <remarks>
/// The sequence owns the full-screen black overlay task at <c>0x7889B0</c>: the initializer starts
/// it at alpha 255 and the update adds the negative step <c>flt_97A724</c> until it reaches
/// <c>flt_97A720</c>, then invokes the completion callback and sets bit 4. The scene states at
/// <c>0x411C94</c> hold for sixty updates, start the reverse task at <c>0x788938</c>, and switch the
/// sprite-group variant while the overlay is opaque. The draw at <c>0x411E30</c> uses the variant
/// offset for the eight logo rectangles.
/// </remarks>
public sealed class TitleLogoSequence
{
	/// <summary>The number of updates the frame counter must exceed to change state.</summary>
	public const int FrameLimit = 60;

	/// <summary>The alpha value the overlay task starts with and fades to.</summary>
	public const int FadeMaximum = 255;

	/// <summary>The amount the overlay alpha changes on every update.</summary>
	public const int FadeStep = 8;

	/// <summary>The number of updates the overlay takes to reach the other end.</summary>
	public const int FadeFrames = 32;

	private readonly bool _cinematic;
	private int _state;
	private int _frames;
	private int _variant;
	private int _alpha;
	private int _fadeDirection;
	private bool _fadeStarted;
	private bool _finished;

	/// <summary>
	/// Starts the sequence with the full-screen overlay at opaque black.
	/// </summary>
	/// <param name="cinematic">Whether the cinematic logo descriptor is loaded.</param>
	[Original(0x00411BE8, "TitleLogoSequence_Init_00411be8")]
	public TitleLogoSequence(bool cinematic)
	{
		_cinematic = cinematic;
		_alpha = FadeMaximum;
		_fadeDirection = -1;
	}

	/// <summary>Gets the current state, the global at <c>0xA3B07C</c>.</summary>
	public int State => _state;

	/// <summary>Gets the frame counter used by the sixty-update states.</summary>
	public int Frames => _frames;

	/// <summary>Gets the sprite-group variant at object offset <c>+0x20</c>.</summary>
	public int Variant => _variant;

	/// <summary>Gets the full-screen black overlay alpha from object offset <c>+0x1C</c>.</summary>
	public int Alpha => _alpha;

	/// <summary>Gets a value indicating whether the completion callback ran, the global at <c>0xA3B078</c>.</summary>
	public bool IsFinished => _finished;

	/// <summary>
	/// Advances the overlay task, then one state handler for this update.
	/// </summary>
	[Original(0x00411C94, "TitleLogoSequence_Update_00411c94")]
	public void Update()
	{
		switch (_state)
		{
			case 1:
				AdvanceThen(2);
				break;
			case 3:
				_frames = 0;
				_variant = 1;
				_state = 4;
				break;
			case 5:
				AdvanceThen(6);
				break;
			case 7:
				_frames = 0;
				_variant = 2;
				_state = 8;
				break;
			case 9:
				AdvanceThen(10);
				break;
		}
		if (_fadeStarted)
			_fadeStarted = false;
		else
			AdvanceFade();
	}

	private void AdvanceFade()
	{
		if (_fadeDirection == 0)
			return;
		int direction = _fadeDirection;
		_alpha += FadeStep * direction;
		if (direction < 0)
		{
			if (_alpha > 0)
				return;
			_alpha = 0;
		}
		else
		{
			if (_alpha < FadeMaximum)
				return;
			_alpha = FadeMaximum;
		}
		_fadeDirection = 0;
		if (direction > 0)
			Finish();
		else
			_state++;
	}

	private void AdvanceThen(int next)
	{
		_frames++;
		if (_frames <= FrameLimit)
			return;
		_state = next;
		_fadeDirection = 1;
		_fadeStarted = true;
	}

	private void Finish()
	{
		if (!_cinematic)
		{
			_finished = true;
			return;
		}
		switch (_state)
		{
			case 2:
				_state = 3;
				_fadeDirection = -1;
				_fadeStarted = true;
				break;
			case 6:
				_state = 7;
				_fadeDirection = -1;
				_fadeStarted = true;
				break;
			default:
				_finished = true;
				break;
		}
	}
}
