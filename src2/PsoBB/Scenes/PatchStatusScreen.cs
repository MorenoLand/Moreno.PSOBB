using System.Globalization;
using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Net.Patch;
using PsoBB.Text;
using PsoBB.Data;

namespace PsoBB.Scenes;

/// <summary>
/// The download status screen: the "Current Status" and "All Status" bars, their progress housings,
/// the progress fills and the two progress lines.
/// </summary>
/// <remarks>
/// Every rectangle and texture rectangle comes from the draw routine at <c>0x0070CCDC</c> and the data
/// initialised at <c>0x0070D2C8</c>. The bars use the first texture of <c>patch.xvm</c>, the housings and fills the second.
/// </remarks>
public sealed class PatchStatusScreen : IDisposable
{
	/// <summary>The text list that holds the two bar labels.</summary>
	public const int LabelList = 41;

	/// <summary>The label of the current-file bar.</summary>
	public const int CurrentStatusLabel = 13;

	/// <summary>The label of the whole-download bar.</summary>
	public const int AllStatusLabel = 14;

	/// <summary>The width, in pixels, of a bar at one hundred percent.</summary>
	public const float BarLength = 400f;

	private const float CapWidth = 8f;

	private static readonly Vector2 CurrentLabelPosition = new(100f, 230f);
	private static readonly Vector2 AllLabelPosition = new(100f, 334f);
	private static readonly Vector2 CurrentLinePosition = new(100f, 280f);
	private static readonly Vector2 AllLinePosition = new(100f, 384f);

	private static readonly (float X, float Y, int Slice)[] BarStrips =
	[
		(0f, 226f, 0), (256f, 226f, 1), (512f, 226f, 2),
		(0f, 330f, 3), (256f, 330f, 4), (512f, 330f, 5),
	];

	private readonly ITexture _bars;
	private readonly ITexture _parts;
	private bool _disposed;

	/// <summary>
	/// Wraps the two textures of <c>patch.xvm</c>.
	/// </summary>
	/// <param name="bars">The bar sheet.</param>
	/// <param name="parts">The housing and fill sheet.</param>
	public PatchStatusScreen(ITexture bars, ITexture parts)
	{
		ArgumentNullException.ThrowIfNull(bars);
		ArgumentNullException.ThrowIfNull(parts);
		_bars = bars;
		_parts = parts;
	}

	/// <summary>
	/// Loads <c>patch.xvm</c> and creates the screen.
	/// </summary>
	/// <param name="files">The data files.</param>
	/// <param name="renderer">The renderer that creates the textures.</param>
	/// <param name="screen">The created screen.</param>
	/// <returns><see langword="true"/> when the archive holds both textures.</returns>
	public static bool TryLoad(IDataFiles files, IRenderer renderer, out PatchStatusScreen? screen)
	{
		screen = null;
		if (!files.TryRead("patch.xvm", out ReadOnlyMemory<byte> data))
			return false;
		IReadOnlyList<XvmTexture> textures = XvmArchive.Read(data.Span);
		if (textures.Count < 2)
			return false;
		ITexture bars = renderer.CreateTexture(textures[0].Width, textures[0].Height, textures[0].Image.Pixels.Span, textures[0].Image.Stride);
		ITexture parts = renderer.CreateTexture(textures[1].Width, textures[1].Height, textures[1].Image.Pixels.Span, textures[1].Image.Stride);
		screen = new PatchStatusScreen(bars, parts);
		return true;
	}

	/// <summary>
	/// Formats the current-file line.
	/// </summary>
	/// <param name="fileName">The file being downloaded.</param>
	/// <param name="length">The file length in bytes.</param>
	/// <param name="percent">The file percentage.</param>
	/// <returns>The line the original draws under the first bar.</returns>
	public static string FormatFileLine(string fileName, long length, uint percent) =>
		string.Create(CultureInfo.InvariantCulture, $"{fileName} ({(int)length}byte)...{percent,3}%");

	/// <summary>
	/// Formats the whole-download line.
	/// </summary>
	/// <param name="fileNumber">The one-based file number.</param>
	/// <param name="totalFiles">The number of files.</param>
	/// <param name="percent">The overall percentage.</param>
	/// <returns>The line the original draws under the second bar.</returns>
	public static string FormatTotalLine(uint fileNumber, uint totalFiles, uint percent) =>
		string.Create(CultureInfo.InvariantCulture, $"({fileNumber,2} / {totalFiles,2})...{percent,3}%");

	/// <summary>
	/// Adds the status screen to a draw list.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <param name="progress">The download progress.</param>
	/// <param name="text">The game text that holds the bar labels.</param>
	/// <param name="surface">The surface that draws the labels and lines.</param>
	/// <exception cref="ArgumentNullException">An argument is null.</exception>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	[Original(0x0070CCDC)]
	public void Draw(UiDrawList draw, PatchProgress progress, GameText text, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(surface);
		ObjectDisposedException.ThrowIf(_disposed, this);
		foreach ((float x, float y, int slice) in BarStrips)
		{
			float v = slice * 32f / 256f;
			AddQuad(draw, _bars, new Vector2(x, y), new Vector2(256f, 26f), new Vector4(0f, v, 1f, v + 26f / 256f));
		}
		AddHousing(draw, 255f);
		AddHousing(draw, 359f);
		bool named = !string.IsNullOrEmpty(progress.FileName);
		if (named)
			AddFill(draw, 260f, progress.FilePercent, new Vector4(0.5f, 0.5f, 0.625f, 0.75f), new Vector4(0.625f, 0.5f, 0.75f, 0.75f), new Vector4(0.75f, 0.5f, 0.875f, 0.75f));
		AddFill(draw, 364f, progress.Percent, new Vector4(0.5f, 0.75f, 0.625f, 1f), new Vector4(0.625f, 0.75f, 0.75f, 1f), new Vector4(0.75f, 0.75f, 0.875f, 1f));
		surface.Draw(draw, text.GetString(LabelList, CurrentStatusLabel), CurrentLabelPosition, 0xFFFFFFFFu);
		surface.Draw(draw, text.GetString(LabelList, AllStatusLabel), AllLabelPosition, 0xFFFFFFFFu);
		if (named)
		{
			surface.Draw(draw, FormatFileLine(progress.FileName!, progress.FileLength, progress.FilePercent), CurrentLinePosition, 0xFFFFFFFFu);
			surface.Draw(draw, FormatTotalLine(progress.FileNumber, progress.TotalFiles, progress.Percent), AllLinePosition, 0xFFFFFFFFu);
		}
	}

	/// <summary>Releases the textures. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_bars.Dispose();
		_parts.Dispose();
	}

	private void AddHousing(UiDrawList draw, float y)
	{
		AddQuad(draw, _parts, new Vector2(99f, y), new Vector2(32f, 32f), new Vector4(0f, 0f, 0.5f, 0.5f));
		AddQuad(draw, _parts, new Vector2(131f, y), new Vector2(352f, 32f), new Vector4(0.75f, 0f, 0.765625f, 0.5f));
		AddQuad(draw, _parts, new Vector2(483f, y), new Vector2(32f, 32f), new Vector4(0f, 0.5f, 0.5f, 1f));
	}

	private void AddFill(UiDrawList draw, float y, uint percent, Vector4 left, Vector4 middle, Vector4 right)
	{
		float length = percent * BarLength / 100f - CapWidth * 2f;
		if (length <= 0f)
			return;
		AddQuad(draw, _parts, new Vector2(108f, y), new Vector2(CapWidth, 16f), left);
		AddQuad(draw, _parts, new Vector2(108f + CapWidth + length, y), new Vector2(CapWidth, 16f), right);
		AddQuad(draw, _parts, new Vector2(108f + CapWidth, y), new Vector2(length, 16f), middle);
	}

	private static void AddQuad(UiDrawList draw, ITexture texture, Vector2 position, Vector2 size, Vector4 uv)
		=> draw.Add(new UiQuad(position, size, uv, texture, 0xFFFFFFFFu));
}
