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

	/// <summary>The texture frame the flash binds at <c>0x006F475C</c>.</summary>
	public const int FlashTextureFrame = 12;

	/// <summary>The depth the flash passes to <c>0x0082B440</c>.</summary>
	public const float FlashDepth = 1f - 0.007142857f;

	/// <summary>The element index of the press-enter strip in the table at <c>0x009CFF00</c>.</summary>
	public const int SelectorElement = 10;

	/// <summary>The frame index of the press-enter strip in the table at <c>0x009CFB60</c>.</summary>
	public const int SelectorFrame = 10;

	/// <summary>The press-enter strip position from element 10.</summary>
	public static readonly Vector2 SelectorPosition = new(193f, 338f);

	/// <summary>The press-enter strip size from frame 10: 256 by 32 pixels.</summary>
	public static readonly Vector2 SelectorSize = new(256f, 32f);

	/// <summary>The inclusive source rectangle of frame 10 in title texture 0.</summary>
	public static readonly Vector4 SelectorTextureCoordinates = new(0f, 0f, 255f / 256f, 31f / 256f);

	/// <summary>Gets the selected title set.</summary>
	public Scene2TitleSet TitleSet { get; }

	/// <summary>
	/// Maps a title set to the archive name the original loader builds by appending <c>.prs</c>.
	/// </summary>
	/// <param name="titleSet">The selected title set.</param>
	/// <returns>The archive name.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The set has no archive name.</exception>
	public static string GetArchiveName(Scene2TitleSet titleSet) => titleSet switch
	{
		Scene2TitleSet.Title => TitleArchiveName,
		Scene2TitleSet.TitleEp4 => TitleEp4ArchiveName,
		Scene2TitleSet.TitleCs => TitleCsArchiveName,
		_ => throw new ArgumentOutOfRangeException(nameof(titleSet), titleSet, "The title set has no archive name."),
	};

	/// <summary>
	/// Mirrors <c>0x00708514</c>: the Episode 4 configuration is selected by mode 3, the network flag or an <c>Episode4</c> account name.
	/// </summary>
	/// <param name="mode">The value compared with 3.</param>
	/// <param name="networkMode">Whether <c>0x0082D2F8</c> is set.</param>
	/// <param name="accountName">The account name compared with <c>Episode4</c>.</param>
	/// <returns><see langword="true"/> when the Episode 4 configuration is selected.</returns>
	public static bool IsEpisode4Configuration(int mode, bool networkMode, ReadOnlySpan<char> accountName) =>
		mode == 3 || networkMode || accountName.StartsWith("Episode4", StringComparison.Ordinal);

	/// <summary>
	/// Mirrors <c>0x006FB914</c>: any nonzero mode keeps the <c>Title</c> set, otherwise the Episode 4 flag selects <c>TitleEP4</c>.
	/// </summary>
	/// <param name="mode">The value returned by <c>0x006DC358</c>.</param>
	/// <param name="episode4Configuration">Whether <c>0x00708514</c> selected the Episode 4 configuration.</param>
	/// <returns>The title set the original initialiser selects.</returns>
	public static Scene2TitleSet SelectTitleSet(int mode, bool episode4Configuration)
	{
		if (mode != 0)
			return Scene2TitleSet.Title;
		return episode4Configuration ? Scene2TitleSet.TitleEp4 : Scene2TitleSet.Title;
	}

	/// <summary>
	/// Selects a title set from the mode, network flag and account name using both original checks.
	/// </summary>
	/// <param name="mode">The value returned by <c>0x006DC358</c> and compared with 3.</param>
	/// <param name="networkMode">Whether <c>0x0082D2F8</c> is set.</param>
	/// <param name="accountName">The account name compared with <c>Episode4</c>.</param>
	/// <returns>The title set the original initialiser selects.</returns>
	public static Scene2TitleSet SelectTitleSet(int mode, bool networkMode, ReadOnlySpan<char> accountName) =>
		SelectTitleSet(mode, IsEpisode4Configuration(mode, networkMode, accountName));

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

	private static readonly (float X, float Y)[] RingPoints = [(-137f, -79f), (137f, -79f), (0f, 156f)];

	/// <summary>The archive name the original <c>Title</c> pointer builds.</summary>
	public const string TitleArchiveName = "Title.prs";

	/// <summary>The archive name the original <c>TitleEP4</c> pointer builds.</summary>
	public const string TitleEp4ArchiveName = "TitleEP4.prs";

	/// <summary>The archive name the original <c>Title_cs</c> pointer builds.</summary>
	public const string TitleCsArchiveName = "Title_cs.prs";

	private readonly ITexture[] _textures;
	private readonly TitleEffectRecord[] _effectRecords;
	private readonly Dictionary<uint, ITexture> _effectTextures;
	private bool _disposed;

	/// <summary>
	/// Loads the selected title texture set and, when present, the title effect records and particle textures.
	/// </summary>
	/// <param name="files">The data registry that resolves the retail archives.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <param name="titleSet">The set selected by the caller; the default is the mode-zero <c>Title</c> set.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The selected title texture archive is absent.</exception>
	/// <exception cref="TextureFormatException">A title or effect archive is malformed.</exception>
	/// <exception cref="InvalidDataException">The effect record table or a referenced effect texture is malformed.</exception>
	public Scene2TitleArt(IDataFiles files, IRenderer renderer, Scene2TitleSet titleSet = Scene2TitleSet.Title)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		TitleSet = titleSet;
		IReadOnlyList<XvmTexture> title = ReadTitleTextures(files, titleSet);
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
	/// Adds the rotating 430/178 radius emblem and the three 104-radius ring quads from <c>0x006F475C</c>.
	/// </summary>
	/// <param name="draw">The draw list that receives the overlay quads.</param>
	/// <param name="frame">The controller frame counter at <c>0x006F475C+0x8</c>.</param>
	/// <param name="state">The runtime centre, flags and UV origins; the image defaults are used when null.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	public void DrawEmblem(TitleArtDrawList draw, int frame, TitleEmblemState? state = null)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		TitleEmblemState emblem = state ?? TitleEmblemState.ImageDefault;
		int angle = GetEmblemAngle(frame, emblem.RotationFlags);
		uint color = GetEmblemColor(frame);
		AddEmblemQuad(draw, 11, emblem.Center, 430f, -angle, emblem.PrimaryU, emblem.PrimaryV, 0.83984375f, color, 1f - 0.008333334f);
		AddEmblemQuad(draw, 12, emblem.Center, 178f, angle, emblem.PrimaryU, emblem.PrimaryV, 0.34765625f, color, 1f - 0.008403362f);
		float cosine = MathF.Cos(AngleRadians(angle));
		float sine = MathF.Sin(AngleRadians(angle));
		foreach ((float x, float y) in RingPoints)
		{
			Vector2 center = new(
				sine * y + emblem.Center.X - x * cosine,
				cosine * y + x * sine + emblem.Center.Y);
			AddEmblemQuad(draw, 12, center, 104f, -2 * angle, emblem.RingU, emblem.RingV, 0.203125f, color, 1f - 0.008474576f);
		}
	}

	/// <summary>
	/// Adds the press-enter strip: element 10 of <c>0x009CFF00</c>, frame 10 of <c>0x009CFB60</c>,
	/// using the first title texture and the original alpha-blend mode.
	/// </summary>
	/// <param name="draw">The draw list that receives the strip quad.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	[Original(0x006FF0D4, "TitleMenu_DrawSelector_006ff0d4")]
	public void DrawSelectorStrip(TitleArtDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		Vector2 right = new(SelectorPosition.X + SelectorSize.X, SelectorPosition.Y);
		Vector2 bottom = new(SelectorPosition.X + SelectorSize.X, SelectorPosition.Y + SelectorSize.Y);
		Vector2 leftBottom = new(SelectorPosition.X, SelectorPosition.Y + SelectorSize.Y);
		draw.AddOverlay(new TitleArtOverlayQuad(
			_textures[0],
			new TitleArtVertex(SelectorPosition, new Vector2(SelectorTextureCoordinates.X, SelectorTextureCoordinates.Y)),
			new TitleArtVertex(right, new Vector2(SelectorTextureCoordinates.Z, SelectorTextureCoordinates.Y)),
			new TitleArtVertex(bottom, new Vector2(SelectorTextureCoordinates.Z, SelectorTextureCoordinates.W)),
			new TitleArtVertex(leftBottom, new Vector2(SelectorTextureCoordinates.X, SelectorTextureCoordinates.W)),
			0xFFFFFFFFu,
			1f,
			TitleArtBlend.Alpha));
	}

	/// <summary>
	/// Returns the original 16-bit angle for a controller frame and <c>dword_A96920</c> flags.
	/// </summary>
	/// <param name="frame">The controller frame counter.</param>
	/// <param name="rotationFlags">The <c>dword_A96920</c> value.</param>
	/// <returns>The signed 16-bit angle.</returns>
	public static int GetEmblemAngle(int frame, int rotationFlags)
	{
		int angle = unchecked(frame << 16);
		angle = (rotationFlags & 2) != 0 ? angle / 450 : angle / 900;
		return (rotationFlags & 1) != 0 ? -angle : angle;
	}

	/// <summary>
	/// Returns the original <c>0x007A919C(0, 88, 115, frame, 300, 150, 165, 180)</c> colour.
	/// </summary>
	/// <param name="frame">The controller frame counter.</param>
	/// <returns>The diffuse colour in 0xAARRGGBB form.</returns>
	public static uint GetEmblemColor(int frame)
	{
		int position = frame % 300;
		if (position < 150 || position > 180)
			return 0xFF005873u;
		double fraction = position >= 165 ? (180 - position) / 15.0 : (position - 150) / 15.0;
		byte red = (byte)(255 * fraction);
		byte green = (byte)(88 + 167 * fraction);
		byte blue = (byte)(115 + 140 * fraction);
		return 0xFF000000u | ((uint)red << 16) | ((uint)green << 8) | blue;
	}

	private void AddEmblemQuad(TitleArtDrawList draw, int frame, Vector2 center, float radius, int angle, float u, float v, float extent, uint color, float depth)
	{
		float cosine = MathF.Cos(AngleRadians(angle));
		float sine = MathF.Sin(AngleRadians(angle));
		float width = cosine * radius;
		float height = sine * radius;
		Vector2 origin = new(
			(height - width) * 0.5f + center.X,
			(height + width) * -0.5f + center.Y);
		TitleArtVertex p0 = new(origin, new Vector2(u, v));
		TitleArtVertex p1 = new(origin + new Vector2(width, height), new Vector2(u + extent, v));
		TitleArtVertex p2 = new(origin + new Vector2(width - height, height + width), new Vector2(u + extent, v + extent));
		TitleArtVertex p3 = new(origin + new Vector2(-height, width), new Vector2(u, v + extent));
		draw.AddOverlay(new TitleArtOverlayQuad(_textures[frame], p0, p1, p2, p3, color, depth, TitleArtBlend.Additive));
	}

	/// <summary>
	/// Adds the frame 150-170 full-screen flash from <c>0x006F475C</c>.
	/// </summary>
	/// <param name="draw">The draw list that receives the flash quad.</param>
	/// <param name="frame">The controller frame counter.</param>
	/// <param name="textureCoordinates">The four flash UV values; the caller supplies the runtime values.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The title art is released.</exception>
	public void DrawFlash(TitleArtDrawList draw, int frame, Vector4 textureCoordinates)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (!IsFlashVisible(frame))
			return;
		float t = (frame % 300 - 150) / 20f;
		float half = 64f * 4.2f * t;
		Vector2 min = new(320f - half, 200f - half);
		Vector2 max = new(320f + half, 200f + half);
		draw.AddOverlay(new TitleArtOverlayQuad(
			_textures[FlashTextureFrame],
			new TitleArtVertex(min, new Vector2(textureCoordinates.X, textureCoordinates.Y)),
			new TitleArtVertex(new Vector2(max.X, min.Y), new Vector2(textureCoordinates.Z, textureCoordinates.Y)),
			new TitleArtVertex(max, new Vector2(textureCoordinates.Z, textureCoordinates.W)),
			new TitleArtVertex(new Vector2(min.X, max.Y), new Vector2(textureCoordinates.X, textureCoordinates.W)),
			GetFlashColor(frame),
			FlashDepth,
			TitleArtBlend.Alpha));
	}

	/// <summary>Gets a value indicating whether the frame is inside the 150-170 flash window.</summary>
	/// <param name="frame">The controller frame counter.</param>
	/// <returns><see langword="true"/> from frame 150 through 170 of each 300-frame cycle.</returns>
	public static bool IsFlashVisible(int frame)
	{
		int position = frame % 300;
		return position >= 150 && position <= 170;
	}

	/// <summary>
	/// Returns the flash grey used by <c>0x006F475C</c>; zero outside the window.
	/// </summary>
	/// <param name="frame">The controller frame counter.</param>
	/// <returns>The 0xAARRGGBB colour, or zero outside frames 150 through 170.</returns>
	public static uint GetFlashColor(int frame)
	{
		if (!IsFlashVisible(frame))
			return 0;
		int value = (int)((1f - (frame % 300 - 150) / 20f) * 255f);
		byte grey = (byte)value;
		return 0xFF000000u | ((uint)grey << 16) | ((uint)grey << 8) | grey;
	}

	private static float AngleRadians(int angle) => angle * (MathF.PI * 2f / 65536f);

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

	private static IReadOnlyList<XvmTexture> ReadTitleTextures(IDataFiles files, Scene2TitleSet titleSet)
	{
		string name = GetArchiveName(titleSet);
		ReadOnlyMemory<byte> data = default;
		bool found = files.TryRead(name, out data);
		if (!found)
			found = files.TryRead($"data/{name}", out data);
		if (!found)
			throw new FileNotFoundException($"The title texture archive '{name}' is missing.", name);
		IReadOnlyList<XvmTexture> textures = ReadXvm(data, name);
		if (textures.Count == 0)
			throw new TextureFormatException($"The title archive '{name}' has no textures.", 0);
		return textures;
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
/// The three title sets assigned by <c>0x006FB914</c>.
/// </summary>
public enum Scene2TitleSet
{
	/// <summary>The <c>Title</c> archive used by mode 0 and the fallback path.</summary>
	Title,
	/// <summary>The <c>TitleEP4</c> archive used by the Episode 4 configuration.</summary>
	TitleEp4,
	/// <summary>The <c>Title_cs</c> archive used for Chinese.</summary>
	TitleCs,
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
/// The runtime inputs to the rotating emblem and ring overlay.
/// </summary>
/// <param name="Center">The original <c>dword_A96918</c>/<c>dword_A9691C</c> centre.</param>
/// <param name="RotationFlags">The original <c>dword_A96920</c> flags.</param>
/// <param name="PrimaryU">The original <c>dword_A96924</c> primary U origin.</param>
/// <param name="PrimaryV">The original <c>dword_A96928</c> primary V origin.</param>
/// <param name="RingU">The original <c>dword_A9692C</c> ring U origin.</param>
/// <param name="RingV">The original <c>dword_A96930</c> ring V origin.</param>
public readonly record struct TitleEmblemState(Vector2 Center, int RotationFlags, float PrimaryU, float PrimaryV, float RingU, float RingV)
{
	/// <summary>Gets the centre, flags and UV origins observed in the running host.</summary>
	public static TitleEmblemState ImageDefault => new(new Vector2(320f, 220f), 0, 0f, 0f, 0.35f, 0f);
}

/// <summary>
/// One overlay vertex with its texture coordinate.
/// </summary>
/// <param name="Position">The screen position.</param>
/// <param name="TextureCoordinates">The texture coordinate.</param>
public readonly record struct TitleArtVertex(Vector2 Position, Vector2 TextureCoordinates);

/// <summary>
/// One four-corner overlay quad.
/// </summary>
/// <param name="Texture">The bound texture.</param>
/// <param name="P0">The first corner.</param>
/// <param name="P1">The second corner.</param>
/// <param name="P2">The third corner.</param>
/// <param name="P3">The fourth corner.</param>
/// <param name="Color">The diffuse colour in 0xAARRGGBB form.</param>
/// <param name="Depth">The transformed z value.</param>
/// <param name="Blend">The original alpha-blend mode.</param>
public readonly record struct TitleArtOverlayQuad(ITexture Texture, TitleArtVertex P0, TitleArtVertex P1, TitleArtVertex P2, TitleArtVertex P3, uint Color, float Depth, TitleArtBlend Blend);

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
	/// <summary>Source-alpha over inverse-source-alpha blending.</summary>
	Alpha = 1,
	/// <summary>Additive source-one, destination-one blending.</summary>
	Additive = 2,
	/// <summary>Source-alpha, destination-one blending for the pulsing loading emblem.</summary>
	AdditiveAlpha = 3,
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
	private readonly List<TitleArtOverlayQuad> _overlay = [];

	/// <summary>Gets the collected strip quads in submission order.</summary>
	public IReadOnlyList<TitleArtQuad> Quads => _quads;

	/// <summary>Gets the collected emblem and ring quads in submission order.</summary>
	public IReadOnlyList<TitleArtOverlayQuad> OverlayQuads => _overlay;

	/// <summary>Adds a strip quad.</summary>
	/// <param name="quad">The quad to add.</param>
	public void Add(TitleArtQuad quad) => _quads.Add(quad);

	/// <summary>Adds an emblem or ring overlay quad.</summary>
	/// <param name="quad">The quad to add.</param>
	public void AddOverlay(TitleArtOverlayQuad quad) => _overlay.Add(quad);

	/// <summary>Removes every collected quad.</summary>
	public void Clear()
	{
		_quads.Clear();
		_overlay.Clear();
	}

	/// <summary>Submits the collected strip and overlay quads to a renderer in order.</summary>
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
				SetBlend(renderer, quad.Blend);
			}
			renderer.SetTexture(0, quad.Texture);
			WriteQuad(vertices, quad);
			renderer.Draw(PrimitiveType.TriangleList, 2, vertices, VertexStride, VertexFormat);
		}
		foreach (TitleArtOverlayQuad quad in _overlay)
		{
			if (currentBlend != quad.Blend)
			{
				currentBlend = quad.Blend;
				SetBlend(renderer, quad.Blend);
			}
			renderer.SetTexture(0, quad.Texture);
			WriteOverlay(vertices, quad);
			renderer.Draw(PrimitiveType.TriangleList, 2, vertices, VertexStride, VertexFormat);
		}
	}

	private static void SetBlend(IRenderer renderer, TitleArtBlend blend)
	{
		renderer.SetRenderState(RenderStateId.AlphaTestEnable, 0);
		renderer.SetRenderState(RenderStateId.AlphaBlendEnable, blend == TitleArtBlend.Opaque ? 0u : 1u);
		if (blend == TitleArtBlend.Alpha)
		{
			renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
			renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
		}
		else if (blend == TitleArtBlend.Additive)
		{
			renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendOne);
			renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendOne);
		}
		else if (blend == TitleArtBlend.AdditiveAlpha)
		{
			renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
			renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendOne);
		}
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.SetRenderState(RenderStateId.DiffuseMaterialSource, RenderStateId.MaterialColorDiffuse);
		if (renderer is IFixedFunctionRenderer fixedRenderer)
		{
			fixedRenderer.SetTextureStageState(0, 4, blend == TitleArtBlend.Opaque ? 3u : 4u);
			fixedRenderer.SetTextureStageState(0, 13, 3);
			fixedRenderer.SetTextureStageState(0, 14, 3);
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

	private static void WriteOverlay(Span<byte> vertices, TitleArtOverlayQuad quad)
	{
		WriteVertex(vertices[..VertexStride], quad.P0.Position.X, quad.P0.Position.Y, quad.Depth, quad.P0.TextureCoordinates.X, quad.P0.TextureCoordinates.Y, quad.Color);
		WriteVertex(vertices[VertexStride..(VertexStride * 2)], quad.P3.Position.X, quad.P3.Position.Y, quad.Depth, quad.P3.TextureCoordinates.X, quad.P3.TextureCoordinates.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 2)..(VertexStride * 3)], quad.P1.Position.X, quad.P1.Position.Y, quad.Depth, quad.P1.TextureCoordinates.X, quad.P1.TextureCoordinates.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 3)..(VertexStride * 4)], quad.P3.Position.X, quad.P3.Position.Y, quad.Depth, quad.P3.TextureCoordinates.X, quad.P3.TextureCoordinates.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 4)..(VertexStride * 5)], quad.P2.Position.X, quad.P2.Position.Y, quad.Depth, quad.P2.TextureCoordinates.X, quad.P2.TextureCoordinates.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 5)..], quad.P1.Position.X, quad.P1.Position.Y, quad.Depth, quad.P1.TextureCoordinates.X, quad.P1.TextureCoordinates.Y, quad.Color);
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
