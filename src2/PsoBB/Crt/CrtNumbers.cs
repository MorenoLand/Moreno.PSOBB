namespace PsoBB.Crt;

/// <summary>
/// Converts the leading decimal text of a string the way the original's C runtime does in the C locale: leading white space, one optional sign, then digits, with the result wrapping at the width of the type.
/// </summary>
public static class CrtNumbers
{
	/// <summary>
	/// Converts the leading decimal text to a 32-bit integer, as the original's <c>_atol</c> does.
	/// </summary>
	/// <param name="text">The text, read up to its first zero byte.</param>
	/// <returns>The converted value; text without digits converts to zero.</returns>
	[Original(0x0085A072, "_atol")]
	public static int ParseInt32(ReadOnlySpan<byte> text)
	{
		int index = SkipSpaceAndSign(text, out bool negative);
		uint value = 0;
		while (IsDigit(ByteAt(text, index)))
			value = unchecked(value * 10 + (uint)(ByteAt(text, index++) - '0'));
		return unchecked((int)(negative ? 0u - value : value));
	}

	/// <summary>
	/// Converts the leading decimal text to a 64-bit integer, as the original's <c>__atoi64</c> does.
	/// </summary>
	/// <param name="text">The text, read up to its first zero byte.</param>
	/// <returns>The converted value; text without digits converts to zero.</returns>
	[Original(0x0085A0FF, "__atoi64")]
	public static long ParseInt64(ReadOnlySpan<byte> text)
	{
		int index = SkipSpaceAndSign(text, out bool negative);
		ulong value = 0;
		while (IsDigit(ByteAt(text, index)))
			value = unchecked(value * 10 + (ulong)(ByteAt(text, index++) - '0'));
		return unchecked((long)(negative ? 0ul - value : value));
	}

	private static int SkipSpaceAndSign(ReadOnlySpan<byte> text, out bool negative)
	{
		int index = 0;
		while (IsSpace(ByteAt(text, index)))
			index++;
		byte sign = ByteAt(text, index);
		negative = sign == '-';
		if (sign is (byte)'-' or (byte)'+')
			index++;
		return index;
	}

	private static bool IsSpace(byte value) => value is (>= 9 and <= 13) or 32;

	private static bool IsDigit(byte value) => value is >= (byte)'0' and <= (byte)'9';

	private static byte ByteAt(ReadOnlySpan<byte> text, int index) => index < text.Length ? text[index] : (byte)0;
}
