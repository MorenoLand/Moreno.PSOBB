using System.Buffers.Binary;
using System.Numerics;
using System.Text;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Imaging;

namespace PsoBB.Scenes;

/// <summary>
/// The scene-2 title background: the eight-entry logo strip table, the twenty-one title textures and the title effect records.
/// </summary>
/// <remarks>
/// The draw methods reproduce the two strip passes at <c>0x00415AB0</c> and <c>0x00415BCC</c>. The title effect records and
/// their particle textures are loaded from <c>particleentry.dat</c> and <c>effect_nt.xvm</c> but are not referenced by the strip
/// draw at <c>0x006F475C</c>.
/// </remarks>
public sealed class Scene2TitleArt : IDisposable
{
	/// <summary>The original title texture-set entry count.</summary>
	public const int TextureCount = 21;

	/// <summary>The first texture index the opaque strip pass selects.</summary>
	public const int OpaqueFrameBase = 13;

	/// <summary>The first texture index the alpha strip pass selects.</summary>
	public const int AlphaFrameBase = 3;

	/// <summary>The depth divisor the opaque strip pass passes to the original vertex helper.</summary>
	public const float OpaqueDepthDivisor = -150f;

	/// <summary>The depth divisor the alpha strip pass passes to the original vertex helper.</summary>
	public const float AlphaDepthDivisor = -130f;

	/// <summary>The original texture-set strip table at <c>0x009A3840</c>.</summary>
	public static readonly IReadOnlyList<TitleArtStrip> Strips =
	[
		new(512, 384, 128, 128, 7),
		new(512, 256, 128, 128, 6),
		new(512, 128, 128, 128, 5),
		new(512, 0, 128, 128, 4),
		new(0, 256, 256, 256, 1),
		new(0, 0, 256, 256, 0),
		new(256, 256, 256, 256, 3),
		new(256, 0, 256, 256, 2),
	];

	private static readonly string[] TitleNames = ["title_eng.prs", "title.prs"];
	private readonly ITexture[] _textures;
	private readonly TitleEffectRecord[] _effectRecords;
	private readonly Dictionary<uint, ITexture> _effectTextures;
	private bool _disposed;

	/// <summary>
	/// Loads the title texture set and, when present, the title effect records and particle textures.
	/// </summary>
	/// <param name="files">The data registry that resolves the retail archives.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">No title texture archive is present.</exception>
	/// <exception cref="TextureFormatException">A title or effect archive is malformed.</exception>
	/// <exception cref="InvalidDataException">The effect record table or a referenced effect texture is malformed.</exception>
	public Scene2TitleArt(IDataFiles files, IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		IReadOnlyList<XvmTexture> title = ReadTitleTextures(files);
		if (title.Count != TextureCount)
			throw new TextureFormatException($"The title texture set has {title.Count} textures; the original set has {TextureCount}.", 0);
		_textures = new ITexture[title.Count];
		for (int index = 0; index < title.Count; index++)
			_textures[index] = CreateTexture(renderer, title[index]);
		(_effectRecords, _effectTextures) = LoadEffects(files, renderer);
	}

	/// <summary>Gets the twenty-one title textures in set order.</summary>
	public IReadOnlyList<ITexture> Textures => _textures;

	/// <summary>Gets records 483 through 485 from <c>particleentry.dat</c>, or an empty list when the table is absent.</summary>
	public IReadOnlyList<TitleEffectRecord> EffectRecords => _effectRecords;

	/// <summary>Gets the effect textures addressed by the records, keyed by their <c>effect_nt.xvm</c> global index.</summary>
	public IReadOnlyDictionary<uint, ITexture> EffectTextures => _effectTextures;

	/// <summary>Gets a value indicating whether the title art has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Adds the opaque s256 strip pass and the alpha titlealpha strip pass.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	public void Draw(TitleArtDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		DrawOpaqueStrips(draw);
		DrawAlphaStrips(draw);
	}

	/// <summary>
	/// Adds the eight s256 first-title strips with alpha blending disabled.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	[Original(0x00415AB0)]
	public void DrawOpaqueStrips(TitleArtDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		DrawStrips(draw, OpaqueFrameBase, OpaqueDepthDivisor, TitleArtBlend.Opaque);
	}

	/// <summary>
	/// Adds the eight titlealpha strips with alpha blending enabled.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	[Original(0x00415BCC)]
	public void DrawAlphaStrips(TitleArtDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		DrawStrips(draw, AlphaFrameBase, AlphaDepthDivisor, TitleArtBlend.Alpha);
	}

	/// <summary>
	/// Releases the title and effect textures. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (ITexture texture in _textures)
			texture.Dispose();
		foreach (ITexture texture in _effectTextures.Values)
			texture.Dispose();
		_effectTextures.Clear();
	}

	private void DrawStrips(TitleArtDrawList draw, int frameBase, float depthDivisor, TitleArtBlend blend)
	{
		float depth = 1f + 1f / depthDivisor;
		foreach (TitleArtStrip strip in Strips)
		{
			int frame = frameBase + strip.FrameOffset;
			draw.Add(new TitleArtQuad(frame, _textures[frame], new Vector2(strip.X, strip.Y), new Vector2(strip.Width, strip.Height), 0xFFFFFFFFu, depth, blend));
		}
	}

	private static IReadOnlyList<XvmTexture> ReadTitleTextures(IDataFiles files)
	{
		foreach (string name in TitleNames)
		{
			if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
				continue;
			IReadOnlyList<XvmTexture> textures = ReadXvm(data, name);
			if (textures.Count != 0)
				return textures;
		}
		throw new FileNotFoundException("No title texture archive is present.", TitleNames[0]);
	}

	private static (TitleEffectRecord[] Records, Dictionary<uint, ITexture> Textures) LoadEffects(IDataFiles files, IRenderer renderer)
	{
		if (!files.TryRead("particleentry.dat", out ReadOnlyMemory<byte> table))
			return ([], []);
		TitleEffectRecord[] records = ParseEffectRecords(table.Span);
		if (!files.TryRead("effect_nt.xvm", out ReadOnlyMemory<byte> effectData))
			throw new FileNotFoundException("The title effect record table is present but effect_nt.xvm is missing.", "effect_nt.xvm");
		IReadOnlyList<XvmTexture> effectTextures = ReadXvm(effectData, "effect_nt.xvm");
		Dictionary<uint, ITexture> textures = [];
		foreach (uint id in records.Select(record => record.TextureId).Distinct())
		{
			XvmTexture? texture = effectTextures.FirstOrDefault(candidate => candidate.GlobalIndex == id);
			if (texture is null)
				throw new InvalidDataException($"The title effect record references the missing effect texture 0x{id:X}.");
			textures[id] = CreateTexture(renderer, texture);
		}
		return (records, textures);
	}

	private static TitleEffectRecord[] ParseEffectRecords(ReadOnlySpan<byte> table)
	{
		const int firstRecord = 483;
		const int recordCount = 3;
		const int recordSize = 152;
		int required = (firstRecord + recordCount) * recordSize;
		if (table.Length < required)
			throw new InvalidDataException($"The particle entry table has {table.Length} bytes; records 483 through 485 need {required}.");
		TitleEffectRecord[] records = new TitleEffectRecord[recordCount];
		for (int index = 0; index < recordCount; index++)
		{
			int offset = (firstRecord + index) * recordSize;
			ReadOnlySpan<byte> record = table.Slice(offset, recordSize);
			(string name, string secondaryName) = ReadNames(record[..16]);
			records[index] = new TitleEffectRecord(
				firstRecord + index,
				name,
				secondaryName,
				BinaryPrimitives.ReadInt32LittleEndian(record[0x10..]),
				BinaryPrimitives.ReadUInt32LittleEndian(record[0x14..]),
				BinaryPrimitives.ReadInt32LittleEndian(record[0x48..]),
				BinaryPrimitives.ReadInt32LittleEndian(record[0x4C..]));
		}
		return records;
	}

	private static (string First, string Second) ReadNames(ReadOnlySpan<byte> field)
	{
		int firstEnd = field.IndexOf((byte)0);
		if (firstEnd < 0)
			return (Encoding.ASCII.GetString(field), string.Empty);
		ReadOnlySpan<byte> remainder = field[(firstEnd + 1)..];
		int secondEnd = remainder.IndexOf((byte)0);
		return (Encoding.ASCII.GetString(field[..firstEnd]), Encoding.ASCII.GetString(secondEnd < 0 ? remainder : remainder[..secondEnd]));
	}

	private static IReadOnlyList<XvmTexture> ReadXvm(ReadOnlyMemory<byte> data, string name)
	{
		ReadOnlyMemory<byte> xvm = data;
		if (data.Length < 4 || BinaryPrimitives.ReadUInt32LittleEndian(data.Span) != 0x484D5658)
			xvm = Decompress(data, name);
		return XvmArchive.Read(xvm.Span);
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

	private static ITexture CreateTexture(IRenderer renderer, XvmTexture texture) =>
		renderer.CreateTexture(texture.Width, texture.Height, texture.Image.Pixels.Span, texture.Image.Stride);
}

/// <summary>
/// One row of the original logo strip table at <c>0x009A3840</c>.
/// </summary>
/// <param name="X">Left position.</param>
/// <param name="Y">Top position.</param>
/// <param name="Width">Width.</param>
/// <param name="Height">Height.</param>
/// <param name="FrameOffset">Texture offset added to the pass frame base.</param>
public readonly record struct TitleArtStrip(int X, int Y, int Width, int Height, int FrameOffset);

/// <summary>
/// One title strip draw command.
/// </summary>
/// <param name="Frame">The title texture-set frame index.</param>
/// <param name="Texture">The bound texture.</param>
/// <param name="Position">The top-left position.</param>
/// <param name="Size">The width and height.</param>
/// <param name="Color">The diffuse colour in 0xAARRGGBB form.</param>
/// <param name="Depth">The transformed z value.</param>
/// <param name="Blend">The original alpha-blend mode.</param>
public readonly record struct TitleArtQuad(int Frame, ITexture Texture, Vector2 Position, Vector2 Size, uint Color, float Depth, TitleArtBlend Blend);

/// <summary>
/// The original alpha-blend modes set by <c>0x0082BB30</c>.
/// </summary>
public enum TitleArtBlend
{
	/// <summary>Alpha blending disabled.</summary>
	Opaque = 0,
	/// <summary>Alpha blending enabled.</summary>
	Alpha = 1,
}

/// <summary>
/// Collects title strip quads and submits them with the original depth, colour, texture and blend modes.
/// </summary>
public sealed class TitleArtDrawList
{
	/// <summary>The original transformed, coloured, single-texture vertex format.</summary>
	public const uint VertexFormat = 0x144;

	/// <summary>The number of bytes per interface vertex.</summary>
	public const int VertexStride = 28;

	private readonly List<TitleArtQuad> _quads = [];

	/// <summary>Gets the collected quads in submission order.</summary>
	public IReadOnlyList<TitleArtQuad> Quads => _quads;

	/// <summary>Adds a quad.</summary>
	/// <param name="quad">The quad to add.</param>
	public void Add(TitleArtQuad quad) => _quads.Add(quad);

	/// <summary>Removes every collected quad.</summary>
	public void Clear() => _quads.Clear();

	/// <summary>Submits the collected quads to a renderer in order.</summary>
	/// <param name="renderer">The renderer that receives the state, texture binds and draw calls.</param>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	public void Render(IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		Span<byte> vertices = stackalloc byte[VertexStride * 6];
		TitleArtBlend? currentBlend = null;
		foreach (TitleArtQuad quad in _quads)
		{
			if (currentBlend != quad.Blend)
			{
				currentBlend = quad.Blend;
				renderer.SetRenderState(RenderStateId.AlphaBlendEnable, quad.Blend == TitleArtBlend.Alpha ? 1u : 0u);
				renderer.SetRenderState(RenderStateId.Lighting, 0);
				renderer.SetRenderState(RenderStateId.DiffuseMaterialSource, RenderStateId.MaterialColorDiffuse);
				if (renderer is IFixedFunctionRenderer fixedRenderer)
				{
					fixedRenderer.SetTextureStageState(0, 4, quad.Blend == TitleArtBlend.Opaque ? 3u : 4u);
					fixedRenderer.SetTextureStageState(0, 13, 3);
					fixedRenderer.SetTextureStageState(0, 14, 3);
				}
			}
			renderer.SetTexture(0, quad.Texture);
			WriteQuad(vertices, quad);
			renderer.Draw(PrimitiveType.TriangleList, 2, vertices, VertexStride, VertexFormat);
		}
	}

	private static void WriteQuad(Span<byte> vertices, TitleArtQuad quad)
	{
		float left = quad.Position.X;
		float top = quad.Position.Y;
		float right = left + quad.Size.X;
		float bottom = top + quad.Size.Y;
		WriteVertex(vertices[..VertexStride], left, top, quad.Depth, 0f, 0f, quad.Color);
		WriteVertex(vertices[VertexStride..(VertexStride * 2)], right, top, quad.Depth, 1f, 0f, quad.Color);
		WriteVertex(vertices[(VertexStride * 2)..(VertexStride * 3)], left, bottom, quad.Depth, 0f, 1f, quad.Color);
		WriteVertex(vertices[(VertexStride * 3)..(VertexStride * 4)], right, top, quad.Depth, 1f, 0f, quad.Color);
		WriteVertex(vertices[(VertexStride * 4)..(VertexStride * 5)], right, bottom, quad.Depth, 1f, 1f, quad.Color);
		WriteVertex(vertices[(VertexStride * 5)..], left, bottom, quad.Depth, 0f, 1f, quad.Color);
	}

	private static void WriteVertex(Span<byte> destination, float x, float y, float z, float u, float v, uint color)
	{
		BinaryPrimitives.WriteSingleLittleEndian(destination, x);
		BinaryPrimitives.WriteSingleLittleEndian(destination[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[8..], z);
		BinaryPrimitives.WriteSingleLittleEndian(destination[12..], 1f);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[16..], color);
		BinaryPrimitives.WriteSingleLittleEndian(destination[20..], u);
		BinaryPrimitives.WriteSingleLittleEndian(destination[24..], v);
	}
}

/// <summary>
/// Records 483 through 485 of <c>particleentry.dat</c>.
/// </summary>
/// <param name="Index">The record index.</param>
/// <param name="Name">The first null-terminated name in the 16-byte name block.</param>
/// <param name="SecondaryName">The second null-terminated name after the first terminator.</param>
/// <param name="Type">The value at +0x10.</param>
/// <param name="TextureId">The effect texture global index at +0x14.</param>
/// <param name="Field48">The value at +0x48.</param>
/// <param name="Field4C">The value at +0x4C.</param>
public sealed record TitleEffectRecord(int Index, string Name, string SecondaryName, int Type, uint TextureId, int Field48, int Field4C);
