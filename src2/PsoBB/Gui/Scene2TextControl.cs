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
