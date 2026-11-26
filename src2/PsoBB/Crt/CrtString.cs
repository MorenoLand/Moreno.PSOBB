namespace PsoBB.Crt;

/// <summary>
/// Null-terminated byte-string primitives used by <see cref="PsoBB.Core.ByteString"/>.
/// </summary>
public static class CrtString
{
	/// <summary>
	/// Returns the number of bytes before the first delimiter or zero terminator.
	/// </summary>
	/// <param name="text">The null-terminated byte string.</param>
	/// <param name="delimiters">The null-terminated set of delimiter bytes.</param>
	/// <returns>The index of the first delimiter or terminator, or the span length when neither is present.</returns>
	[Original(0x00867CD0)]
	public static int CountUntilAny(ReadOnlySpan<byte> text, ReadOnlySpan<byte> delimiters)
	{
		Span<bool> rejected = stackalloc bool[256];
		rejected.Clear();
		foreach (byte delimiter in delimiters)
		{
			if (delimiter == 0)
				break;
			rejected[delimiter] = true;
		}
		for (int index = 0; index < text.Length; index++)
		{
			byte value = text[index];
			if (value == 0 || rejected[value])
				return index;
		}
		return text.Length;
	}

	/// <summary>
	/// Compares up to <paramref name="count"/> bytes of two null-terminated byte strings.
	/// </summary>
	/// <param name="left">The first byte string.</param>
	/// <param name="right">The second byte string.</param>
	/// <param name="count">The maximum number of bytes to compare.</param>
	/// <returns>Negative when <paramref name="left"/> sorts first, positive when it sorts last, and zero when equal.</returns>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="count"/> is negative.</exception>
	[Original(0x008598C0)]
	public static int CompareCount(ReadOnlySpan<byte> left, ReadOnlySpan<byte> right, int count)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(count);
		for (int index = 0; index < count; index++)
		{
			byte leftByte = ByteAt(left, index);
			byte rightByte = ByteAt(right, index);
			if (leftByte != rightByte)
				return leftByte < rightByte ? -1 : 1;
			if (leftByte == 0)
				return 0;
		}
		return 0;
	}

	/// <summary>
	/// Compares two null-terminated byte strings after folding the ASCII letters A through Z to a through z.
	/// </summary>
	/// <param name="left">The first byte string.</param>
	/// <param name="right">The second byte string.</param>
	/// <returns>Negative when <paramref name="left"/> sorts first, positive when it sorts last, and zero when equal.</returns>
	[Original(0x00862400)]
	public static int CompareIgnoreAsciiCase(ReadOnlySpan<byte> left, ReadOnlySpan<byte> right)
	{
		for (int index = 0; ; index++)
		{
			byte leftByte = ToLowerAscii(ByteAt(left, index));
			byte rightByte = ToLowerAscii(ByteAt(right, index));
			if (leftByte != rightByte)
				return leftByte < rightByte ? -1 : 1;
			if (rightByte == 0)
				return 0;
		}
	}

	/// <summary>
	/// Returns the last index of <paramref name="value"/> at or before the first zero terminator, or -1 when absent.
	/// </summary>
	/// <param name="text">The null-terminated byte string.</param>
	/// <param name="value">The byte to find.</param>
	/// <returns>The last matching index, or -1 when the byte is absent.</returns>
	[Original(0x00868E50)]
	public static int LastIndexOf(ReadOnlySpan<byte> text, byte value)
	{
		int terminator = text.IndexOf((byte)0);
		int last = terminator < 0 ? text.Length : terminator;
		for (int index = last; index >= 0; index--)
		{
			byte candidate = index == text.Length ? (byte)0 : text[index];
			if (candidate == value)
				return index;
		}
		return -1;
	}

	private static byte ByteAt(ReadOnlySpan<byte> text, int index) => index < text.Length ? text[index] : (byte)0;

	private static byte ToLowerAscii(byte value) => value is >= (byte)'A' and <= (byte)'Z' ? (byte)(value + 0x20) : value;
}
