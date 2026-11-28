namespace PsoBB.Mathematics;

/// <summary>
/// The 32-bit integer operations the original's arithmetic helpers perform.
/// </summary>
public static class Int32Arithmetic
{
	/// <summary>
	/// Adds two 32-bit values, stores the wrapped sum and reports whether the addition carried out, as the original's <c>___addl</c> does.
	/// </summary>
	/// <param name="left">The first addend.</param>
	/// <param name="right">The second addend.</param>
	/// <param name="sum">The sum modulo 2^32.</param>
	/// <returns>One when the addition carried out of 32 bits, otherwise zero.</returns>
	[Original(0x00869903, "___addl")]
	public static int AddWithCarry(uint left, uint right, out uint sum)
	{
		sum = unchecked(left + right);
		return sum < left || sum < right ? 1 : 0;
	}
}
