namespace PsoBB.Gui;

/// <summary>
/// One cell layout entry read by <c>0x0072A68C</c>.
/// </summary>
/// <param name="Type">The type word that selects the entry.</param>
/// <param name="Size">The allocation size.</param>
/// <param name="Stride">The number of words the next cell starts after.</param>
/// <param name="Constructor">The cell constructor address.</param>
public readonly record struct Scene2CellLayout(int Type, int Size, int Stride, uint Constructor);

/// <summary>
/// One cell read from a grid: the layout entry and the word offset of its type.
/// </summary>
/// <param name="Layout">The layout entry.</param>
/// <param name="Offset">The word offset of the cell type.</param>
public readonly record struct Scene2Cell(Scene2CellLayout Layout, int Offset);

/// <summary>
/// The cell layout at <c>0x0072A68C</c>: the row and column words, the cell type words and the
/// per-type size and stride table.
/// </summary>
/// <remarks>
/// The original allocates one object per cell through the constructor address in the table. This
/// reader returns the type and word offset of each cell; the thirteen constructors are the
/// unported boundary.
/// </remarks>
public static class Scene2CellGrid
{
	/// <summary>The layout table in type order.</summary>
	public static IReadOnlyList<Scene2CellLayout> Layouts { get; } = Array.AsReadOnly<Scene2CellLayout>(
	[
		new(0, 0x18, 5, 0x0072ACF4),
		new(1, 0x28, 9, 0x007298C8),
		new(2, 0x68, 11, 0x00729F3C),
		new(3, 0x2C, 7, 0x0072D8C0),
		new(4, 0x24, 7, 0x0072CB9C),
		new(5, 0x30, 7, 0x0072CF54),
		new(6, 0x38, 12, 0x0072E52C),
		new(7, 0x38, 14, 0x0072E5B4),
		new(8, 0x38, 1, 0x0072AE28),
		new(9, 0x28, 1, 0x0072E8F8),
		new(10, 0x14, 3, 0x0072D7C8),
		new(11, 0x24, 3, 0x0072D194),
		new(12, 0x2C, 1, 0x0072E17C),
	]);

	/// <summary>
	/// Builds a one-row template whose first cell is type 3 and whose remaining cells are type 0.
	/// </summary>
	/// <param name="columns">The cell count.</param>
	/// <returns>The grid words.</returns>
	public static int[] SingleRow(int columns)
	{
		if (columns <= 0)
			return [1, 0];
		int offset = 2 + 7;
		int[] words = new int[offset + (columns - 1) * 5 + 8];
		words[0] = 1;
		words[1] = columns;
		words[2] = 3;
		for (int index = 1; index < columns; index++)
		{
			words[offset] = 0;
			offset += 5;
		}
		return words;
	}

	/// <summary>
	/// Builds the cell states for every grid entry.
	/// </summary>
	/// <param name="words">The row word, column word, then the cell words.</param>
	/// <param name="kind">The base kind word.</param>
	/// <returns>The cell states in row-major order.</returns>
	/// <exception cref="ArgumentException">The words are too short or a type is outside the table.</exception>
	public static Scene2CellState[] ReadStates(ReadOnlySpan<int> words, short kind)
	{
		Scene2Cell[] cells = Read(words);
		Scene2CellState[] states = new Scene2CellState[cells.Length];
		for (int index = 0; index < cells.Length; index++)
		{
			Scene2Cell cell = cells[index];
			states[index] = Scene2CellState.Create(cell.Layout.Type, words[cell.Offset..], kind);
		}
		return states;
	}

	/// <summary>
	/// Reads the cell count and the type and offset of every cell.
	/// </summary>
	/// <param name="words">The row word, column word, then the cell words.</param>
	/// <returns>The cells in row-major order.</returns>
	/// <exception cref="ArgumentException">The words are too short or a type is outside the table.</exception>
	[Original(0x0072A68C)]
	public static Scene2Cell[] Read(ReadOnlySpan<int> words)
	{
		if (words.Length < 2)
			throw new ArgumentException("A cell grid needs the row and column words.", nameof(words));
		int rows = words[0];
		int columns = words[1];
		long count = (long)rows * columns;
		if (count == 0)
			return [];
		Scene2Cell[] cells = new Scene2Cell[count];
		int offset = 2;
		for (int index = 0; index < cells.Length; index++)
		{
			if ((uint)offset >= (uint)words.Length)
				throw new ArgumentException("The cell words end before the grid is complete.", nameof(words));
			int type = words[offset];
			if ((uint)type >= (uint)Layouts.Count)
				throw new ArgumentException($"Cell type {type} is outside the layout table.", nameof(words));
			Scene2CellLayout layout = Layouts[type];
			cells[index] = new Scene2Cell(layout, offset);
			offset += layout.Stride;
		}
		return cells;
	}
}

