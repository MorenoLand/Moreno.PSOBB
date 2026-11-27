namespace PsoBB.Mathematics;

/// <summary>
/// The 64-bit integer operations the original compiler lowers to helper routines.
/// </summary>
public static class Int64Arithmetic
{
	/// <summary>
	/// Multiplies two 64-bit values and keeps the low 64 bits of the product, as the original's <c>__allmul</c> does.
	/// </summary>
	/// <param name="left">The first operand.</param>
	/// <param name="right">The second operand.</param>
	/// <returns>The low 64 bits of the product.</returns>
	[Original(0x0085ADA0, "__allmul")]
	public static long Multiply(long left, long right) => unchecked(left * right);

	/// <summary>
	/// Shifts a signed 64-bit value right by an 8-bit count, filling with the sign bit, as the original's <c>__allshr</c> does.
	/// </summary>
	/// <param name="value">The value to shift.</param>
	/// <param name="count">The shift count; counts of 64 or more give the sign fill.</param>
	/// <returns>The shifted value.</returns>
	[Original(0x008CAC90, "__allshr")]
	public static long ShiftRight(long value, byte count) => count >= 64 ? (value < 0 ? -1 : 0) : value >> count;

	/// <summary>
	/// Shifts an unsigned 64-bit value right by an 8-bit count, filling with zeros, as the original's <c>__aullshr</c> does.
	/// </summary>
	/// <param name="value">The value to shift.</param>
	/// <param name="count">The shift count; counts of 64 or more give zero.</param>
	/// <returns>The shifted value.</returns>
	[Original(0x008CB210, "__aullshr")]
	public static ulong ShiftRightUnsigned(ulong value, byte count) => count >= 64 ? 0UL : value >> count;
}
