namespace PsoBB.Mathematics;

/// <summary>
/// One-bit shifts of a 96-bit value held as three little-endian dwords, the helpers the original's
/// long-double conversion uses.
/// </summary>
public static class Int96Arithmetic
{
	/// <summary>
	/// Shifts a 96-bit value left by one bit, carrying each dword's top bit into the next dword, as the original's <c>__shl_12</c> does.
	/// </summary>
	/// <param name="value">The three dwords, least significant first, updated in place.</param>
	[Original(0x00869982, "__shl_12")]
	public static void ShiftLeftOne(Span<uint> value)
	{
		uint carryLow = value[0] >> 31;
		uint carryMiddle = value[1] >> 31;
		value[0] <<= 1;
		value[1] = (value[1] << 1) | carryLow;
		value[2] = (value[2] << 1) | carryMiddle;
	}

	/// <summary>
	/// Shifts a 96-bit value right by one bit, carrying each dword's low bit into the dword below, as the original's <c>__shr_12</c> does.
	/// </summary>
	/// <param name="value">The three dwords, least significant first, updated in place.</param>
	[Original(0x008699B0, "__shr_12")]
	public static void ShiftRightOne(Span<uint> value)
	{
		value[0] = (value[0] >> 1) | (value[1] << 31);
		value[1] = (value[1] >> 1) | (value[2] << 31);
		value[2] >>= 1;
	}

	/// <summary>
	/// Adds one 96-bit value into another, carrying across the three dwords, as the original's <c>___add_12</c> does.
	/// </summary>
	/// <param name="left">The three dwords of the sum, least significant first, updated in place.</param>
	/// <param name="right">The three dwords of the addend, least significant first.</param>
	[Original(0x00869924, "___add_12")]
	public static void Add(Span<uint> left, ReadOnlySpan<uint> right)
	{
		int carry = Int32Arithmetic.AddWithCarry(left[0], right[0], out uint low);
		left[0] = low;
		if (carry != 0)
		{
			int middleCarry = Int32Arithmetic.AddWithCarry(left[1], 1, out uint incremented);
			left[1] = incremented;
			if (middleCarry != 0)
				left[2] = unchecked(left[2] + 1);
		}
		int sumCarry = Int32Arithmetic.AddWithCarry(left[1], right[1], out uint middle);
		left[1] = middle;
		if (sumCarry != 0)
			left[2] = unchecked(left[2] + 1);
		Int32Arithmetic.AddWithCarry(left[2], right[2], out uint high);
		left[2] = high;
	}
}
