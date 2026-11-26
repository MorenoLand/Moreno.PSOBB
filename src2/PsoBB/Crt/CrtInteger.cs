namespace PsoBB.Crt;

/// <summary>
/// Writes unsigned integers as null-terminated byte strings in the original's digit order.
/// </summary>
public static class CrtInteger
{
	/// <summary>
	/// Writes <paramref name="value"/> in <paramref name="radix"/>, optionally prefixed with a minus sign, followed by a zero terminator.
	/// </summary>
	/// <param name="value">The value to format.</param>
	/// <param name="radix">The radix from 2 through 36.</param>
	/// <param name="negative">Whether to write a minus sign and negate <paramref name="value"/> first.</param>
	/// <param name="destination">The buffer receiving the sign, digits and terminator.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="radix"/> is outside 2 through 36.</exception>
	/// <exception cref="ArgumentException"><paramref name="destination"/> is too small.</exception>
	[Original(0x00863830)]
	public static void WriteUnsigned(uint value, int radix, bool negative, Span<byte> destination)
	{
		if (radix is < 2 or > 36)
			throw new ArgumentOutOfRangeException(nameof(radix), radix, "The radix must be between 2 and 36.");
		uint magnitude = negative ? unchecked(0u - value) : value;
		int digitCount = 1;
		for (uint remaining = magnitude; remaining >= (uint)radix; remaining /= (uint)radix)
			digitCount++;
		int required = digitCount + (negative ? 2 : 1);
		if (destination.Length < required)
			throw new ArgumentException("The destination is too small for the formatted value.", nameof(destination));
		int position = 0;
		if (negative)
			destination[position++] = (byte)'-';
		int digitStart = position;
		do
		{
			uint digit = magnitude % (uint)radix;
			magnitude /= (uint)radix;
			destination[position++] = digit > 9 ? (byte)(digit + 0x57) : (byte)(digit + 0x30);
		}
		while (magnitude != 0);
		destination[position] = 0;
		for (int first = digitStart, last = position - 1; first < last; first++, last--)
			(destination[first], destination[last]) = (destination[last], destination[first]);
	}
}
