namespace PsoBB.Mathematics;

/// <summary>
/// The integer helpers the client uses for scaling and biased division.
/// </summary>
public static class IntegerMath
{
	/// <summary>
	/// Returns the sum of an addend and the product of a 32-bit factor and a signed 16-bit value.
	/// The multiplication and addition wrap at 32 bits.
	/// </summary>
	/// <param name="addend">The value added after the multiplication.</param>
	/// <param name="factor">The 32-bit multiplier.</param>
	/// <param name="value">The signed 16-bit operand.</param>
	/// <returns>The wrapped sum.</returns>
	[Original(0x007A9608)]
	public static int MultiplyAdd(int addend, int factor, short value) => unchecked(addend + factor * value);

	/// <summary>
	/// Divides a value after adding one less than the divisor and truncates toward zero, returning
	/// the quotient and the remainder. The bias addition wraps at 32 bits.
	/// </summary>
	/// <param name="total">The value the divisor bias is added to.</param>
	/// <param name="divisor">The non-zero divisor.</param>
	/// <returns>The quotient and remainder of the adjusted division.</returns>
	[Original(0x008A8CE1)]
	public static DivisionResult DivideRoundingUp(int total, int divisor)
	{
		int dividend = unchecked(total + divisor - 1);
		long quotient = dividend / (long)divisor;
		long remainder = dividend % divisor;
		return new DivisionResult((int)quotient, (int)remainder);
	}
}
