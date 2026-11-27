using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>One parsed world-list row from the <c>0x004170AC</c> parser.</summary>
/// <param name="Name1">The first <c>%s</c> field.</param>
/// <param name="Name2">The second <c>%s</c> field.</param>
/// <param name="Value1">The first <c>%d</c> field.</param>
/// <param name="Name3">The third <c>%s</c> field.</param>
/// <param name="Value2">The second <c>%d</c> field.</param>
/// <param name="Value3">The third <c>%d</c> field.</param>
/// <param name="Filter">The fourth <c>%d</c> field.</param>
public readonly record struct Scene2WorldListRow(string Name1, string Name2, int Value1, string Name3, int Value2, int Value3, int Filter);

/// <summary>
/// The 0x824-byte world-list object created at <c>0x004170AC</c> and its <c>%s %s %d %s %d %d %d</c> rows.
/// </summary>
/// <remarks>
/// The original reads <c>worldlist.prc</c> through <c>0x005B9780</c>, tokenizes wide lines on
/// <c>\n</c>, filters the fourth integer through <c>0x00708514</c> (zero for the normal
/// configuration, four for Episode 4), and adds each row to two UI lists. The file loader and the
/// UI constructors at <c>0x00417390</c>/<c>0x00417414</c>/<c>0x00415154</c> are host seams; this
/// class ports the row parse, the 0x20C row stride and the object fields.
/// </remarks>
public sealed class Scene2WorldList
{
	/// <summary>The original allocation size.</summary>
	public const int AllocationSize = 0x824;

	/// <summary>The child list allocation size.</summary>
	public const int ChildSize = 0x240;

	/// <summary>The static row stride.</summary>
	public const int RowStride = 0x20C;

	/// <summary>The object vtable address.</summary>
	public const uint Vtable = 0x00AF35A0;

	/// <summary>Gets the object backing store.</summary>
	public byte[] Data { get; } = new byte[AllocationSize];

	/// <summary>Gets the parsed rows.</summary>
	public IReadOnlyList<Scene2WorldListRow> Rows { get; }

	/// <summary>Gets the row count stored at <c>0x00A43660</c>.</summary>
	public int Count => Rows.Count;

	/// <summary>Gets the first list flag word at byte offset 0x84 used by the mode-28 handler.</summary>
	public int FirstListFlags => FirstList?.Flags132 ?? 0;

	/// <summary>Gets the first list slot at byte offset 0x81C, or <see langword="null"/>.</summary>
	public Scene2TextControl? FirstList { get; private set; }

	/// <summary>Gets the second text-box slot at byte offset 0x820, or <see langword="null"/>.</summary>
	public Scene2TextWindow? SecondList { get; private set; }

	/// <summary>
	/// Builds the two UI list states at <c>0x00417390</c> and <c>0x00417414</c>.
	/// </summary>
	/// <param name="text">The unitxt table for the list titles, or <see langword="null"/>.</param>
	/// <param name="surface">The surface that supplies the glyph advance.</param>
	/// <exception cref="ArgumentNullException"><paramref name="surface"/> is null.</exception>
	public void CreateControls(UnitxtTable? text, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(surface);
		FirstList = Scene2TextControl.CreateDefault(Math.Max(Count, 1));
		FirstList.Flags44 |= 0x40;
		FirstList.Title = ReadTitle(text, 384);
		for (int index = 0; index < Rows.Count; index++)
			FirstList.AddRecord(Rows[index].Name1, 13, Rows[index].Filter, surface);
		FirstList.MeasureLayout(0);
		SecondList = Scene2TextWindow.CreateWorldList();
		string? title = ReadTitle(text, 383);
		if (!string.IsNullOrEmpty(title))
			SecondList.AddLine(title, 3, -1, surface);
		SecondList.RefreshChildren();
	}

	private static string? ReadTitle(UnitxtTable? text, int index) =>
		text is not null && text.GetListLength(11) > index ? text.GetString(11, index) : null;

	private Scene2WorldList(IReadOnlyList<Scene2WorldListRow> rows)
	{
		Rows = rows;
		System.Buffers.Binary.BinaryPrimitives.WriteUInt32LittleEndian(Data, Vtable);
	}

	/// <summary>
	/// Parses wide lines with the original field format and Episode 4 filter.
	/// </summary>
	/// <param name="lines">The wide lines, without the terminating <c>END</c> line.</param>
	/// <param name="episode4">Whether <c>0x00708514</c> selected the Episode 4 configuration.</param>
	/// <returns>The world-list object.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="lines"/> is null.</exception>
	[Original(0x004170AC)]
	public static Scene2WorldList Create(IEnumerable<string> lines, bool episode4)
	{
		ArgumentNullException.ThrowIfNull(lines);
		List<Scene2WorldListRow> rows = [];
		foreach (string line in lines)
		{
			string trimmed = line.Trim();
			if (trimmed.Length == 0 || trimmed == "END")
				continue;
			string[] fields = trimmed.Split((char[]?)null, StringSplitOptions.RemoveEmptyEntries);
			int filter = fields.Length >= 7 && int.TryParse(fields[6], out int value) ? value : 0;
			if (episode4 ? filter != 4 : filter != 0)
				continue;
			rows.Add(new Scene2WorldListRow(
				fields.Length > 0 ? fields[0] : string.Empty,
				fields.Length > 1 ? fields[1] : string.Empty,
				fields.Length > 2 && int.TryParse(fields[2], out int value1) ? value1 : 0,
				fields.Length > 3 ? fields[3] : string.Empty,
				fields.Length > 4 && int.TryParse(fields[4], out int value2) ? value2 : 0,
				fields.Length > 5 && int.TryParse(fields[5], out int value3) ? value3 : 0,
				filter));
		}
		return new Scene2WorldList(rows);
	}
}
