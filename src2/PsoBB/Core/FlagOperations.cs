namespace PsoBB.Core;

/// <summary>
/// Bit operations the client applies to its 32-bit flag fields.
/// </summary>
public static class FlagOperations
{
	/// <summary>
	/// Clears the second-lowest bit of a 32-bit flag field. The original also ignores a null
	/// object pointer; the owning object performs that check before calling this operation.
	/// </summary>
	/// <param name="value">The flag field to update.</param>
	[Original(0x005DD34C)]
	public static void ClearSecondBit(ref int value) => value &= ~0x2;
}
