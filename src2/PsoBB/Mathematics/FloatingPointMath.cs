namespace PsoBB.Mathematics;

/// <summary>
/// The floating-point helpers the client uses for vector and angle work.
/// </summary>
public static class FloatingPointMath
{
	/// <summary>
	/// Returns the absolute value, preserving negative zero and clearing only a set sign bit.
	/// </summary>
	/// <param name="value">The value to convert.</param>
	/// <returns>The absolute value.</returns>
	[Original(0x0082E900)]
	public static float Absolute(float value)
	{
		uint bits = BitConverter.SingleToUInt32Bits(value);
		return bits > 0x80000000u ? -value : value;
	}

	/// <summary>
	/// Returns the square root of a non-negative value; for a negative value it returns the
	/// negated square root of the magnitude instead of a NaN.
	/// </summary>
	/// <param name="value">The value to take the square root of.</param>
	/// <returns>The square root, with the sign of the input preserved.</returns>
	[Original(0x0082DC9C)]
	public static float SquareRoot(float value)
	{
		if (!(value >= 0.0f))
			return -(float)Math.Sqrt(-value);
		return (float)Math.Sqrt(value);
	}

	/// <summary>
	/// Converts a double to a 32-bit integer by truncating toward zero, returning
	/// <see cref="int.MinValue"/> for a NaN, an infinity or a value outside the integer range, as the x87
	/// integer store does.
	/// </summary>
	/// <param name="value">The value to convert.</param>
	/// <returns>The truncated integer or the integer indefinite value.</returns>
	public static int TruncateToInt32(double value)
	{
		if (!(value > -2147483649.0 && value < 2147483648.0))
			return int.MinValue;
		return (int)value;
	}

	/// <summary>
	/// Converts a double to a 64-bit integer by truncating toward zero, returning
	/// <see cref="long.MinValue"/> for a NaN, an infinity or a value outside the integer range, as the x87
	/// integer store does. The original <c>__ftol</c> returns this value in <c>edx:eax</c>.
	/// </summary>
	/// <param name="value">The value to convert.</param>
	/// <returns>The truncated integer or the integer indefinite value.</returns>
	[Original(0x008CB1E8, "__ftol")]
	public static long TruncateToInt64(double value)
	{
		if (!(value >= -9223372036854775808.0 && value < 9223372036854775808.0))
			return long.MinValue;
		return (long)value;
	}
}
