using System.Buffers.Binary;

namespace PsoBB.Gui;

/// <summary>
/// The 168-byte text window created at <c>0x0073B698</c> and refreshed at <c>0x0073B0F0</c>.
/// </summary>
/// <remarks>
/// The constructor first runs the base window at <c>0x0073A610</c>/<c>0x007108C4</c>, stores the
/// 900000 scale at offset 140, allocates one eight-byte record per line at offset 144, stores the
/// line count at offset 160, sets the 0x80 bit at offset 44 and builds the 12-byte point at offset
/// 100 from the -20 offset. The theme-record loop at <c>0x0073AE38</c> and the scroll lookup at
/// <c>0x0073B59C</c> remain the boundary.
/// </remarks>
public sealed class Scene2TextWindow
{
	/// <summary>The default line count.</summary>
	public const int LineCount = 30;

	/// <summary>Gets the base window state.</summary>
	public Scene2WindowState Base { get; } = new();

	/// <summary>Gets the cell states read from the grid.</summary>
	public Scene2CellState[] Cells { get; }

	/// <summary>Gets the eight-byte line records.</summary>
	public byte[] Records { get; }

	/// <summary>Gets the line count at offset 160.</summary>
	public int Count { get; }

	/// <summary>Gets the three-word point at offset 100.</summary>
	public (float X, float Y, float Z) Point { get; private set; }

	/// <summary>Gets or sets the scroll value at offset 112.</summary>
	public float Scroll { get; set; }

	/// <summary>Gets or sets the copy source at offset 116.</summary>
	public float ScrollLimitSource { get; set; }

	/// <summary>Gets or sets the stored scroll at offset 152.</summary>
	public float ScrollCopy { get; set; }

	/// <summary>Gets or sets the offset-76 float the scroll delta uses.</summary>
	public float Offset76 { get; set; }

	/// <summary>Gets or sets the maximum text width at offset 72.</summary>
	public float MaxWidth { get; set; }

	/// <summary>Gets or sets the running line position at offset 148.</summary>
	public float LinePosition { get; set; }

	/// <summary>Gets or sets the tail value at offset 152.</summary>
	public float Tail { get; set; }

	/// <summary>Gets or sets the flags at offset 44.</summary>
	public int Flags44 { get; set; }

	/// <summary>Gets or sets the line index compared at offset 136.</summary>
	public int CompareLine { get; set; }

	/// <summary>Gets or sets the record value at offset 140.</summary>
	public int RecordValue { get; set; }

	/// <summary>Gets or sets the current line at offset 156.</summary>
	public int CurrentLine { get; set; }

	/// <summary>
	/// Clamps a scroll value between the point maximum and zero, at <c>0x0073F8A4</c>.
	/// </summary>
	/// <param name="maximum">The point maximum.</param>
	/// <param name="value">The value to clamp.</param>
	/// <param name="delta">The subtract amount.</param>
	/// <returns><see langword="true"/> when the value changed.</returns>
	[Original(0x0073F8A4)]
	public static bool ClampScroll(float maximum, ref float value, float delta)
	{
		if (delta > maximum)
		{
			value = 0f;
			return true;
		}
		if (value < 0f)
		{
			value = 0f;
			return true;
		}
		float limit = maximum - delta;
		if (value <= limit)
			return false;
		value = limit;
		return true;
	}

	/// <summary>
	/// Sets the point from the previous and current line and then updates the scroll at
	/// <c>0x0073B558</c>.
	/// </summary>
	/// <exception cref="InvalidOperationException">The grid has no cells.</exception>
	[Original(0x0073B558)]
	public void UpdatePosition()
	{
		if (Cells.Length == 0)
			throw new InvalidOperationException("The grid has no cells.");
		int index = Math.Min(CurrentLine, Cells.Length - 1);
		int previous = index - 1;
		if (previous < 0)
			previous = Math.Min(Count, Cells.Length) - 1;
		Scene2CellState current = Cells[index];
		Scene2CellState before = Cells[Math.Max(0, previous)];
		float value = before.TextPosition - current.TextPosition + before.TextHeight;
		Point = (MaxWidth - 19f, value, 0f);
		UpdateScroll();
	}

	/// <summary>
	/// Updates the scroll from the -20 delta and copies the scroll source when the clamp changes it.
	/// </summary>
	/// <returns><see langword="true"/> when the clamp changed the value.</returns>
	[Original(0x0073B59C)]
	public bool UpdateScroll()
	{
		float value = Scroll;
		bool changed = ClampScroll(Point.Y, ref value, -20f + Offset76);
		Scroll = value;
		if (changed)
			ScrollCopy = ScrollLimitSource;
		return changed;
	}

	/// <summary>
	/// Creates the text window.
	/// </summary>
	/// <param name="first">The first bound descriptor.</param>
	/// <param name="second">The second bound descriptor.</param>
	/// <param name="grid">The grid words the cell reader consumes.</param>
	/// <param name="kind">The short kind word at offset 32.</param>
	/// <param name="count">The line count.</param>
	/// <returns>The initialised window.</returns>
	/// <exception cref="ArgumentException">A descriptor or the grid is invalid.</exception>
	[Original(0x0073B698)]
	public static Scene2TextWindow Create(ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind, int count = LineCount)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(count);
		if (second.Length < 2)
			throw new ArgumentException("The second descriptor needs two words.", nameof(second));
		return new Scene2TextWindow(first, second, grid, kind, count);
	}

	/// <summary>
	/// Creates the default 30-line box from the descriptors at <c>0x008F87CC</c>/<c>0x008F87D4</c>.
	/// </summary>
	/// <param name="count">The line count written to the template column word.</param>
	/// <returns>The initialised window.</returns>
	/// <exception cref="ArgumentException">The count is invalid.</exception>
	public static Scene2TextWindow CreateDefault(int count = LineCount) =>
		Create([31, 20, 577, 184, 31], [577, 184], Scene2CellGrid.SingleRow(count), 0, count);

	[Original(0x0073B71C)]
	private Scene2TextWindow(ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind, int count)
	{
		Base.InitializeBase(first, second, grid, kind);
		Count = count;
		Cells = Scene2CellGrid.ReadStates(grid, kind);
		Records = new byte[count * 8];
		Point = (BitConverter.Int32BitsToSingle(Base.Fields[14]) - 20f, 0f, 0f);
		Base.Fields[35] = 180;
		Base.Fields[38] = 0;
		Base.Fields[33] = 0;
		Base.Fields[34] = 0;
		Base.Fields[39] = 0;
		Base.Fields[37] = 0;
		Base.Fields[40] = count;
		Base.Fields[41] = 0;
		Base.Fields[11] |= 0x80;
		RefreshChildren();
	}

	/// <summary>
	/// Copies the tail word and applies the 900000 reset to every line that carries the 0x08 record bit.
	/// </summary>
	[Original(0x0073B0F0)]
	public void RefreshChildren()
	{
		Base.Fields[29] = Base.Fields[38];
		Base.Fields[23] = 0x1000000;
		int lines = Math.Min(Count, Cells.Length);
		for (int index = 0; index < lines; index++)
		{
			Scene2CellState cell = Cells[index];
			if (cell.Text is null)
				continue;
			int offset = index * 8;
			int value = BinaryPrimitives.ReadInt32LittleEndian(Records.AsSpan(offset));
			if ((value & 8) != 0)
			{
				BinaryPrimitives.WriteInt32LittleEndian(Records.AsSpan(offset), value & ~8);
				BinaryPrimitives.WriteUInt16LittleEndian(cell.Data.AsSpan(4), (ushort)(BinaryPrimitives.ReadUInt16LittleEndian(cell.Data.AsSpan(4)) & ~8));
			}
			cell.ResetValue();
		}
	}

	/// <summary>
	/// Adds or replaces one line at <c>0x0073AE4C</c> and returns whether the text pointer was accepted.
	/// </summary>
	/// <param name="text">The line text.</param>
	/// <param name="flags">The caller flags.</param>
	/// <param name="value">The value stored at cell offset 36.</param>
	/// <param name="surface">The surface that supplies the glyph advance.</param>
	/// <returns><see langword="true"/> when the line was added.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="InvalidOperationException">The grid has no cell for the line.</exception>
	[Original(0x0073AE4C)]
	public bool AddLine(string? text, int flags, int value, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(surface);
		if (text is null)
			return false;
		if ((uint)CurrentLine >= (uint)Cells.Length)
			throw new InvalidOperationException("The grid has no cell for the line.");
		int stored = flags;
		Scene2CellState cell = Cells[CurrentLine];
		if (cell.Text is not null)
		{
			float shift = 6f + cell.TextHeight;
			Tail -= shift;
			ScrollLimitSource -= shift;
			LinePosition -= shift;
			foreach (Scene2CellState line in Cells)
				line.TextPosition -= shift;
			cell.TextPosition = 0f;
			cell.TextHeight = 0f;
		}
		if ((flags & 0x80) != 0)
			LinePosition = ScrollLimitSource;
		if ((flags & 0x10) != 0)
		{
			float limit = -20f + ScrollLimitSource + Offset76;
			if (LinePosition <= limit)
				LinePosition = limit;
		}
		if ((flags & 8) != 0)
		{
			if (CompareLine == CurrentLine)
				stored = flags & ~8;
			else
				cell.Flags = (ushort)(cell.Flags | 8);
		}
		cell.TextPosition = LinePosition;
		cell.SetText(text, (stored & 2) != 0 ? 32 : 0);
		float measureWidth = -20f + MaxWidth + ((Flags44 & 0x80) != 0 ? 1f : 0f);
		Scene2TextLayout.Measure(cell, measureWidth, surface);
		cell.TextOffset28 = (stored & 0x200) != 0 ? (int)(measureWidth - cell.TextWidth) : 0;
		int offset = CurrentLine * 8;
		BinaryPrimitives.WriteInt32LittleEndian(Records.AsSpan(offset), stored);
		BinaryPrimitives.WriteInt32LittleEndian(Records.AsSpan(offset + 4), RecordValue);
		CurrentLine = CurrentLine + 1 < Count ? CurrentLine + 1 : 0;
		float next = 6f + LinePosition + cell.TextHeight;
		LinePosition = next;
		if ((stored & 1) != 0)
			Tail = next - 6f - cell.TextHeight;
		else
		{
			if (ScrollLimitSource + Offset76 < next)
			{
				float candidate = next + 20f - Offset76;
				if (candidate > Tail)
					Tail = candidate;
			}
		}
		return true;
	}
}

