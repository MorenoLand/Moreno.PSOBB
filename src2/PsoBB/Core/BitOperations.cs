namespace PsoBB.Core;

/// <summary>
/// Bit operations the client applies to small flags and identifiers.
/// </summary>
public static class BitOperations
{
	/// <summary>
	/// Sets the lowest bit of a 16-bit value.
	/// </summary>
	/// <param name="value">The value to update.</param>
	[Original(0x005CEA60)]
	public static void SetLowBit(ref ushort value) => value |= 0x0001;
}
