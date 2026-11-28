using System.Buffers.Binary;

namespace PsoBB.Gui;

/// <summary>
/// The 156-byte text control created at <c>0x00735708</c> and its index setter at <c>0x00736510</c>.
/// </summary>
/// <remarks>
/// The constructor stores the capacity at offset 138 and allocates one eight-byte record per
/// capacity unit, all zeroed. The current index at offset 140 moves only to <c>0</c> through
/// <c>capacity - 1</c>. The base-window constructor at <c>0x007108C4</c> and the theme layout calls
/// at <c>0x00736138</c>/<c>0x00736458</c>/<c>0x00735C90</c> are not part of this state object.
/// </remarks>
public sealed class Scene2TextControl
{
	/// <summary>The allocation size <c>0x00735708</c> requests.</summary>
	public const int AllocationSize = 156;

	/// <summary>The record length in the array at offset 152.</summary>
	public const int RecordLength = 8;

	/// <summary>Gets the capacity stored at offset 138.</summary>
	public int Capacity { get; }

	/// <summary>Gets the zeroed records allocated for the capacity.</summary>
	public byte[] Records { get; }

	/// <summary>Gets or sets the cells the record builders use.</summary>
	public Scene2CellState[] Cells { get; set; } = [];

	/// <summary>Gets or sets the word at offset 132.</summary>
	public int Flags132 { get; set; }

	/// <summary>Gets or sets the base-window flag word at offset 44.</summary>
	public int Flags44 { get; set; }

	/// <summary>Gets or sets the list title.</summary>
	public string? Title { get; set; }

	/// <summary>
	/// Returns the tail value of the current record, or -1 past the count, at <c>0x007365F4</c>.
	/// </summary>
	/// <returns>The stored value.</returns>
	[Original(0x007365F4)]
	public int SelectedValue() => (uint)CurrentIndex < (uint)Count ? BinaryPrimitives.ReadInt32LittleEndian(Records.AsSpan(CurrentIndex * 8 + 4)) : -1;

	/// <summary>Gets or sets the word at offset 136.</summary>
	public int Compare136 { get; set; }

	/// <summary>Gets or sets the word at offset 144.</summary>
	public int Result144 { get; set; }

	/// <summary>Gets or sets the float at offset 56.</summary>
	public float Field56 { get; set; }

	/// <summary>Gets or sets the count at offset 134.</summary>
	public ushort Count { get; set; }

	/// <summary>Gets or sets the current index at offset 140.</summary>
	public ushort CurrentIndex { get; set; }

	/// <summary>
	/// Creates the control state for <paramref name="capacity"/> records.
	/// </summary>
	/// <param name="capacity">The record capacity.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="capacity"/> is negative.</exception>
	[Original(0x00735708)]
	public Scene2TextControl(int capacity)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(capacity);
		Capacity = capacity;
		Records = new byte[checked(capacity * RecordLength)];
	}

	/// <summary>
	/// Creates the control with one type-3 cell followed by type-0 cells and the window kind 4.
	/// </summary>
	/// <param name="capacity">The record capacity.</param>
	/// <returns>The control state.</returns>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="capacity"/> is negative.</exception>
	public static Scene2TextControl CreateDefault(int capacity = 2)
	{
		Scene2TextControl control = new(capacity);
		control.Cells = Scene2CellGrid.ReadStates(Scene2CellGrid.SingleRow(capacity), 4);
		control.Compare136 = 0;
		return control;
	}

	/// <summary>
	/// Moves the current index when the value is inside the capacity.
	/// </summary>
	/// <param name="index">The requested index.</param>
	/// <returns>The requested index, whether or not it was stored.</returns>
	[Original(0x00736510)]
	public int Select(int index)
	{
		if (index >= 0 && index < Capacity)
			CurrentIndex = (ushort)index;
		return index;
	}

	/// <summary>
	/// Stores the two descriptor words and the value at <c>0x0073B1E8</c>.
	/// </summary>
	/// <param name="descriptor">The two-word descriptor.</param>
	/// <param name="value">The value stored at <c>0x009F3248</c>.</param>
	/// <exception cref="ArgumentException">The descriptor is shorter than two words.</exception>
	[Original(0x0073B1E8)]
	public static void Bind(ReadOnlySpan<int> descriptor, int value)
	{
		if (descriptor.Length < 2)
			throw new ArgumentException("A descriptor needs two words.", nameof(descriptor));
		DescriptorFirst = descriptor[0];
		DescriptorSecond = descriptor[1];
		DescriptorValue = value;
	}

	/// <summary>
	/// Creates one control record and its cell at <c>0x00735C90</c>.
	/// </summary>
	/// <param name="text">The record text.</param>
	/// <param name="flags">The record flags.</param>
	/// <param name="value">The value stored at the record tail.</param>
	/// <param name="surface">The surface that supplies the advance.</param>
	/// <returns><see langword="false"/> when the capacity is full.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="surface"/> is null.</exception>
	/// <exception cref="InvalidOperationException">No cell is attached for the record.</exception>
	[Original(0x00735C90)]
	public bool AddRecord(string? text, int flags, int value, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(surface);
		if (Count >= Capacity)
			return false;
		if (Count >= Cells.Length)
			throw new InvalidOperationException("No cell is attached for the record.");
		int stored = flags;
		Scene2CellState cell = Cells[Count];
		cell.Data.AsSpan(36).Fill(0xFF);
		cell.TextPosition = 20f * Count;
		cell.SetText(text, (flags & 1) != 0 ? 32 : 0);
		if ((flags & 4) != 0)
			cell.Flags = (ushort)(cell.Flags | 1);
		if ((flags & 8) != 0)
			cell.Flags = (ushort)(cell.Flags | 0x40);
		if ((flags & 0x40) != 0)
			cell.Flags = (ushort)(cell.Flags | 0x200);
		if ((flags & 2) != 0)
		{
			if (Count == Compare136)
				stored = flags & ~2;
			else
				cell.Flags = (ushort)(cell.Flags | 8);
		}
		if ((Flags132 & 0x100) != 0)
			cell.ResetValue();
		Scene2TextLayout.Measure(cell, 1000000f, surface);
		int offset = Count * 8;
		BinaryPrimitives.WriteInt32LittleEndian(Records.AsSpan(offset), stored);
		BinaryPrimitives.WriteInt32LittleEndian(Records.AsSpan(offset + 4), value);
		Count++;
		return true;
	}

	/// <summary>
	/// Sums the text heights at <c>0x00736138</c> and stores the layout height.
	/// </summary>
	/// <param name="value">The value stored at offset 56.</param>
	[Original(0x00736138)]
	public void MeasureLayout(int value)
	{
		float total = 20f;
		int lines = Math.Min(Count, Cells.Length);
		for (int index = 0; index < lines; index++)
		{
			Scene2CellState cell = Cells[index];
			if (cell.Text is null)
				continue;
			float height = cell.TextHeight;
			if (height > 0f)
				total += height + 6f;
		}
		float result = total - 6f;
		if ((Flags44 & 0x40) != 0)
			result += 6f;
		Result144 = (int)result;
		Field56 = result;
	}

	/// <summary>
	/// Places the records at <c>0x00736458</c>.
	/// </summary>
	[Original(0x00736458)]
	public void PlaceChildren()
	{
		float value = Field56;
		float position = value - 20f;
		float width = 0.5f * value - 10f;
		int lines = Math.Min(Count, Cells.Length);
		for (int index = 0; index < lines; index++)
		{
			Scene2CellState cell = Cells[index];
			if (cell.Text is null)
				continue;
			cell.TextPosition = position;
			cell.TextX = cell.TextHeight <= 14f ? cell.TextWidth * -1f + width : 0f;
		}
	}

	/// <summary>Gets the word stored at <c>0x009F3268</c>.</summary>
	[OriginalGlobal(0x009F3268)]
	public static int DescriptorFirst { get; private set; }

	/// <summary>Gets the word stored at <c>0x009F326C</c>.</summary>
	[OriginalGlobal(0x009F326C)]
	public static int DescriptorSecond { get; private set; }

	/// <summary>Gets the value stored at <c>0x009F3248</c>.</summary>
	[OriginalGlobal(0x009F3248)]
	public static int DescriptorValue { get; private set; }
}



