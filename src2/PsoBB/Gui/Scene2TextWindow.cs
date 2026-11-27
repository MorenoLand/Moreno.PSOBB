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
	public (int X, int Y, int Z) Point { get; }

	/// <summary>Gets or sets the scroll value at offset 112.</summary>
	public float Scroll { get; set; }

	/// <summary>Gets or sets the copy source at offset 116.</summary>
	public float ScrollLimitSource { get; set; }

	/// <summary>Gets or sets the stored scroll at offset 152.</summary>
	public float ScrollCopy { get; set; }

	/// <summary>Gets or sets the offset-76 float the scroll delta uses.</summary>
	public float Offset76 { get; set; }

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

	[Original(0x0073B71C)]
	private Scene2TextWindow(ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind, int count)
	{
		Base.InitializeBase(first, second, grid, kind);
		Count = count;
		Cells = Scene2CellGrid.ReadStates(grid, kind);
		Records = new byte[count * 8];
		Point = (-20 + Base.Fields[14], 0, 0);
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
			if (BinaryPrimitives.ReadInt32LittleEndian(cell.Data.AsSpan(32)) == 0)
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
}
