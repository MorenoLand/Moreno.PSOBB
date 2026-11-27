using System.Buffers.Binary;
using System.Runtime.InteropServices;
using PsoBB.Audio;
using PsoBB.Save;

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
	public const int FieldCount = 42;

	/// <summary>Gets the word array indexed by the original byte offset divided by four.</summary>
	public int[] Fields { get; } = new int[FieldCount];

	/// <summary>Gets or sets the theme pointer at <c>0x00A98480</c>.</summary>
	[OriginalGlobal(0x00A98480)]
	public static int ThemePointer { get; set; }

	/// <summary>Gets the z-order node the layout relinks.</summary>
	public Scene2ZNode ZNode { get; } = new();

	/// <summary>
	/// Runs the layout and the base-word initialiser at <c>0x007108C4</c>.
	/// </summary>
	/// <param name="first">The first bound descriptor.</param>
	/// <param name="second">The second bound descriptor.</param>
	/// <param name="grid">The grid words the cell reader consumes.</param>
	/// <param name="kind">The short kind word at offset 32.</param>
	/// <exception cref="ArgumentException">A descriptor is too short or the grid is invalid.</exception>
	[Original(0x007108C4)]
	public void InitializeBase(ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind)
	{
		InitializeLayout(first, second, grid, kind);
		InitializeFields();
	}

	/// <summary>Gets the cells the layout reads from the grid words.</summary>
	public Scene2Cell[] Cells { get; private set; } = [];

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

	/// <summary>
	/// Writes the bound words, the grid cells, the z-order value and the flag-dependent state at
	/// <c>0x00712C44</c>.
	/// </summary>
	/// <param name="first">The first bound descriptor.</param>
	/// <param name="second">The second bound descriptor.</param>
	/// <param name="grid">The grid words the cell reader consumes.</param>
	/// <param name="kind">The short kind word at offset 32.</param>
	/// <param name="play">The playback sink for the 1394 selection, or <see langword="null"/>.</param>
	/// <exception cref="ArgumentException">A descriptor is too short or the grid is invalid.</exception>
	[Original(0x00712C44)]
	public void InitializeLayout(ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind, Func<int, float, int>? play = null)
	{
		if (first.Length < 5 || second.Length < 2)
			throw new ArgumentException("A window descriptor needs five and two words.");
		Fields[12] = first[0];
		Fields[13] = first[1];
		Fields[14] = second[0];
		Fields[15] = second[1];
		CopyBounds();
		Fields[7] = first[2];
		Fields[21] = BitConverter.SingleToInt32Bits(-10000f);
		Fields[11] = first[4];
		ZNode.Key = BitConverter.Int32BitsToSingle(first[2]);
		ZNode.Relink();
		Fields[20] = 0;
		Span<byte> word32 = MemoryMarshal.AsBytes(Fields.AsSpan(8, 1));
		BinaryPrimitives.WriteUInt16LittleEndian(word32, unchecked((ushort)kind));
		BinaryPrimitives.WriteUInt16LittleEndian(word32[2..], 0);
		Cells = Scene2CellGrid.Read(grid);
		Fields[23] = 0;
		int flags = Fields[11];
		if ((flags & 3) == 0)
		{
			Span<byte> word8 = MemoryMarshal.AsBytes(Fields.AsSpan(2, 1));
			BinaryPrimitives.WriteUInt16LittleEndian(word8, (ushort)(BinaryPrimitives.ReadUInt16LittleEndian(word8) | 0x10));
		}
		if ((flags & 3) == 3 && (flags & 0x20) == 0)
			SoundSelection.Play(1394, [], 0, 0, play ?? SoundSelection.Playback ?? ((_, _) => 0));
		if (CharacterOptionTable.Value() <= 0f)
			Fields[23] = 0x1000000;
	}

	/// <summary>
	/// Creates a window from the theme list and its descriptors at <c>0x00710D30</c>.
	/// </summary>
	/// <param name="theme">The list the window links into.</param>
	/// <param name="first">The first bound descriptor.</param>
	/// <param name="second">The second bound descriptor.</param>
	/// <param name="grid">The grid words the cell reader consumes.</param>
	/// <param name="kind">The short kind word at offset 32.</param>
	/// <returns>The initialised window.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="theme"/> is null.</exception>
	[Original(0x00710D30)]
	public static Scene2WindowState Create(Scene2ZList theme, ReadOnlySpan<int> first, ReadOnlySpan<int> second, ReadOnlySpan<int> grid, short kind)
	{
		ArgumentNullException.ThrowIfNull(theme);
		Scene2WindowState state = new();
		theme.Append(state.ZNode);
		state.InitializeLayout(first, second, grid, kind);
		return state;
	}
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


