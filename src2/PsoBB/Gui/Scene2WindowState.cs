namespace PsoBB.Gui;

/// <summary>
/// The base window words at <c>0x00710918</c> and the bound copy at <c>0x00710F64</c>.
/// </summary>
/// <remarks>
/// The base initialiser stores the shared pointer at offset four, zeros offsets 24, 25, 28, 29,
/// 30, 31 and 32, and stores the float one at offsets 26 and 27. The bound copy moves offsets
/// 12 through 15 to offsets 16 through 19. The theme lookup at <c>0x00719930</c> returns the
/// global at <c>0x00A98480</c>.
/// </remarks>
public sealed class Scene2WindowState
{
	/// <summary>The number of base words these functions touch.</summary>
	public const int FieldCount = 33;

	/// <summary>Gets the word array indexed by the original byte offset divided by four.</summary>
	public int[] Fields { get; } = new int[FieldCount];

	/// <summary>Gets or sets the theme pointer at <c>0x00A98480</c>.</summary>
	[OriginalGlobal(0x00A98480)]
	public static int ThemePointer { get; set; }

	/// <summary>Gets or sets the theme flag at <c>0x00A98538</c>.</summary>
	[OriginalGlobal(0x00A98538)]
	public static int ThemeFlag { get; set; }

	/// <summary>Returns whether the theme flag is set.</summary>
	/// <returns><see langword="true"/> when <c>0x00A98538</c> is nonzero.</returns>
	[Original(0x00719914)]
	public static bool HasTheme() => ThemeFlag != 0;

	/// <summary>
	/// Writes the base initialiser words.
	/// </summary>
	[Original(0x00710918)]
	public void InitializeFields()
	{
		Fields[1] = ThemePointer;
		Fields[24] = 0;
		Fields[28] = 0;
		Fields[25] = 0;
		Fields[32] = 0;
		Fields[29] = 0;
		Fields[26] = 1065353216;
		Fields[27] = 1065353216;
		Fields[30] = 0;
		Fields[31] = 0;
	}

	/// <summary>
	/// Copies the four bound words from offsets 12 through 15 to offsets 16 through 19.
	/// </summary>
	[Original(0x00710F64)]
	public void CopyBounds()
	{
		Fields[16] = Fields[12];
		Fields[17] = Fields[13];
		Fields[18] = Fields[14];
		Fields[19] = Fields[15];
	}

	/// <summary>
	/// Returns the theme pointer at <c>0x00719930</c>/<c>0x00719940</c>.
	/// </summary>
	/// <returns>The value at <c>0x00A98480</c>.</returns>
	[Original(0x00719930)]
	public static int GetTheme() => ThemePointer;
}

/// <summary>
/// The three-word copy at <c>0x0073F670</c>.
/// </summary>
public static class Scene2Point
{
	/// <summary>
	/// Copies the first two words and clears the third.
	/// </summary>
	/// <param name="source">The two-word source.</param>
	/// <returns>The three words.</returns>
	/// <exception cref="ArgumentException">The source is shorter than two words.</exception>
	[Original(0x0073F670)]
	public static (int X, int Y, int Z) Copy(ReadOnlySpan<int> source)
	{
		if (source.Length < 2)
			throw new ArgumentException("A point needs two words.", nameof(source));
		return (source[0], source[1], 0);
	}
}
