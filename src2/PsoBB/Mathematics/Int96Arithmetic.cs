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
}
