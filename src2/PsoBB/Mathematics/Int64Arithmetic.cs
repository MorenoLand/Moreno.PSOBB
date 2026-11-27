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
}
