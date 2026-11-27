namespace PsoBB.Crt;

/// <summary>
/// Character classification and comparison in the C locale, the only locale the client uses.
/// </summary>
public static class CrtCharacters
{
	/// <summary>
	/// Compares at most <paramref name="count"/> bytes of two zero-terminated strings, folding only the ASCII capitals A to Z, as the original's <c>___ascii_strnicmp</c> does.
	/// </summary>
	/// <param name="first">The first string, with its terminator.</param>
	/// <param name="second">The second string, with its terminator.</param>
	/// <param name="count">The largest number of bytes to compare.</param>
	/// <returns>Negative one, zero or one.</returns>
	[Original(0x00863DE0, "___ascii_strnicmp")]
	public static int CompareAsciiIgnoreCase(ReadOnlySpan<byte> first, ReadOnlySpan<byte> second, uint count)
	{
		if (count == 0)
			return 0;
		for (int index = 0; ; index++)
		{
			byte a = FoldAsciiCapital(ByteAt(first, index));
			byte b = FoldAsciiCapital(ByteAt(second, index));
			if (a != b)
				return a < b ? -1 : 1;
			if (a == 0)
				return 0;
			if (--count == 0)
				return 0;
		}
	}

	/// <summary>
	/// Lowers a character on the C-locale path of the original's <c>___tolower_mt</c>: only the capitals A to Z change, and every other value, negative end-of-file included, is returned unchanged.
	/// </summary>
	/// <param name="character">The character value.</param>
	/// <returns>The lowercase letter, or the value unchanged.</returns>
	[Original(0x008598F9, "___tolower_mt")]
	public static int ToLowerC(int character) => character is >= 'A' and <= 'Z' ? character + 0x20 : character;

	private static byte ByteAt(ReadOnlySpan<byte> text, int index) => index < text.Length ? text[index] : (byte)0;

	private static byte FoldAsciiCapital(byte value) => value is >= (byte)'A' and <= (byte)'Z' ? (byte)(value + 0x20) : value;
}
