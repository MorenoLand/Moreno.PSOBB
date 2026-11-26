namespace PsoBB.Mathematics;

/// <summary>
/// Integer helpers reproduced from the original client. Every operation wraps.
/// </summary>
public static class IntegerMath
{
	/// <summary>
	/// Returns <paramref name="addend"/> plus <paramref name="factor"/> times the signed 16-bit
	/// <paramref name="value"/>, with the original's 32-bit wrap-around.
	/// Original 0x007A9608.
	/// </summary>
	/// <param name="addend">Value added after the multiplication.</param>
	/// <param name="factor">32-bit multiplier.</param>
	/// <param name="value">Signed 16-bit operand.</param>
	/// <returns>The wrapped 32-bit result.</returns>
	[Original(0x007A9608)]
	public static int MultiplyAdd(int addend, int factor, short value) => unchecked(addend + factor * value);

	/// <summary>
	/// Computes <c>(total + divisor - 1) / divisor</c> with the original's 32-bit wrap and
	/// truncation toward zero, returning both the quotient and the remainder.
	/// Original 0x008A8CE1.
	/// </summary>
	/// <param name="total">Value the original adds the divisor bias to.</param>
	/// <param name="divisor">Non-zero divisor.</param>
	/// <returns>The quotient and remainder produced by the original division.</returns>
	[Original(0x008A8CE1)]
	public static DivisionResult DivideRoundingUp(int total, int divisor)
	{
		int dividend = unchecked(total + divisor - 1);
		long quotient = dividend / (long)divisor;
		long remainder = dividend % divisor;
		return new DivisionResult((int)quotient, (int)remainder);
	}
}
