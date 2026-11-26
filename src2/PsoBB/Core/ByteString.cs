using System.Text;
using PsoBB.Crt;

namespace PsoBB.Core;

/// <summary>
/// Immutable string of Windows-1252 bytes, compared ordinally without converting to a .NET string.
/// </summary>
public sealed class ByteString : IEquatable<ByteString>, IComparable<ByteString>
{
	private static readonly Encoding CodePage = CreateCodePage();
	private readonly byte[] _bytes;

	private ByteString(byte[] bytes)
	{
		_bytes = bytes;
	}

	/// <summary>
	/// Gets the empty byte string.
	/// </summary>
	public static ByteString Empty { get; } = new(Array.Empty<byte>());

	/// <summary>
	/// Gets the number of bytes in the string.
	/// </summary>
	public int Length => _bytes.Length;

	/// <summary>
	/// Gets a value indicating whether the string contains no bytes.
	/// </summary>
	public bool IsEmpty => _bytes.Length == 0;

	/// <summary>
	/// Gets the code page bytes without a terminator.
	/// </summary>
	public ReadOnlySpan<byte> Bytes => _bytes;

	/// <summary>
	/// Gets the byte at <paramref name="index"/>.
	/// </summary>
	/// <param name="index">The zero-based byte index.</param>
	/// <returns>The byte at the index.</returns>
	public byte this[int index] => _bytes[index];

	/// <summary>
	/// Creates a byte string from code page bytes, stopping before the first zero terminator.
	/// </summary>
	/// <param name="bytes">The source bytes, with or without a terminator.</param>
	/// <returns>A byte string whose length excludes the terminator.</returns>
	public static ByteString FromBytes(ReadOnlySpan<byte> bytes)
	{
		int length = TerminatedLength(bytes);
		return length == 0 ? Empty : new ByteString(bytes[..length].ToArray());
	}

	/// <summary>
	/// Encodes a .NET string as Windows-1252, or returns <see langword="null"/> for a null input.
	/// </summary>
	/// <param name="text">The string to encode at the platform edge.</param>
	/// <returns>The encoded byte string, or <see langword="null"/> when <paramref name="text"/> is null.</returns>
	/// <remarks>Unmappable characters use the code page's replacement byte.</remarks>
	public static ByteString? FromText(string? text) => text is null ? null : FromBytes(CodePage.GetBytes(text));

	/// <summary>
	/// Formats an unsigned integer as a byte string.
	/// </summary>
	/// <param name="value">The value to format.</param>
	/// <param name="radix">The radix from 2 through 36.</param>
	/// <returns>The formatted byte string.</returns>
	public static ByteString FromUnsigned(uint value, int radix = 10) => FromRadix(value, radix, false);

	/// <summary>
	/// Formats a signed 32-bit integer, using a sign only for radix 10 as the original does; other radices use the raw 32-bit pattern.
	/// </summary>
	/// <param name="value">The value to format.</param>
	/// <param name="radix">The radix from 2 through 36.</param>
	/// <returns>The formatted byte string.</returns>
	public static ByteString FromInt32(int value, int radix = 10) => FromRadix(unchecked((uint)value), radix, radix == 10 && value < 0);

	/// <summary>
	/// Returns whether this string begins with <paramref name="value"/>.
	/// </summary>
	/// <param name="value">The prefix to test, matched ordinally.</param>
	/// <returns><see langword="true"/> when the prefix matches.</returns>
	public bool StartsWith(ByteString value)
	{
		ArgumentNullException.ThrowIfNull(value);
		return value._bytes.Length <= _bytes.Length && CrtString.CompareCount(_bytes, value._bytes, value._bytes.Length) == 0;
	}

	/// <summary>
	/// Compares this string with <paramref name="other"/> while folding ASCII letters A through Z to a through z.
	/// </summary>
	/// <param name="other">The byte string to compare.</param>
	/// <returns><see langword="true"/> when the folded strings are equal.</returns>
	public bool EqualsIgnoreAsciiCase(ByteString? other) => other is not null && CrtString.CompareIgnoreAsciiCase(_bytes, other._bytes) == 0;

	/// <summary>
	/// Returns the last index of <paramref name="value"/> at or before the terminator, or -1 when absent.
	/// </summary>
	/// <param name="value">The byte to find.</param>
	/// <returns>The last matching index, the length for a zero byte, or -1 when absent.</returns>
	public int LastIndexOf(byte value) => CrtString.LastIndexOf(_bytes, value);

	/// <summary>
	/// Returns the number of bytes before the first byte in <paramref name="delimiters"/> or the terminator.
	/// </summary>
	/// <param name="delimiters">The delimiter bytes to stop at.</param>
	/// <returns>The index of the first delimiter or terminator, or the length when neither is present.</returns>
	public int CountUntilAny(ByteString delimiters)
	{
		ArgumentNullException.ThrowIfNull(delimiters);
		return CrtString.CountUntilAny(_bytes, delimiters._bytes);
	}

	/// <summary>
	/// Compares this string with <paramref name="other"/> by ordinal byte value.
	/// </summary>
	/// <param name="other">The byte string to compare.</param>
	/// <returns>Zero when equal, negative when this string sorts first, and positive when it sorts last.</returns>
	public int CompareTo(ByteString? other)
	{
		if (other is null)
			return 1;
		int shared = Math.Min(_bytes.Length, other._bytes.Length);
		int result = CrtString.CompareCount(_bytes, other._bytes, shared);
		if (result != 0)
			return result;
		return _bytes.Length < other._bytes.Length ? -1 : _bytes.Length > other._bytes.Length ? 1 : 0;
	}

	/// <summary>
	/// Compares this string with <paramref name="other"/> by ordinal byte value.
	/// </summary>
	/// <param name="other">The byte string to compare.</param>
	/// <returns><see langword="true"/> when both strings contain the same bytes.</returns>
	public bool Equals(ByteString? other) => other is not null && _bytes.AsSpan().SequenceEqual(other._bytes);

	/// <inheritdoc/>
	public override bool Equals(object? obj) => obj is ByteString other && Equals(other);

	/// <inheritdoc/>
	public override int GetHashCode()
	{
		int hash = unchecked((int)2166136261);
		foreach (byte value in _bytes)
			hash = unchecked((hash ^ value) * 16777619);
		return hash;
	}

	/// <summary>
	/// Returns a copy of the code page bytes.
	/// </summary>
	/// <returns>A new array containing the string bytes.</returns>
	public byte[] ToByteArray() => _bytes.ToArray();

	/// <summary>
	/// Returns a copy of the code page bytes followed by a zero terminator.
	/// </summary>
	/// <returns>A new null-terminated array.</returns>
	public byte[] ToNullTerminatedByteArray()
	{
		byte[] terminated = new byte[_bytes.Length + 1];
		_bytes.CopyTo(terminated, 0);
		return terminated;
	}

	/// <summary>
	/// Decodes the bytes as Windows-1252 at the platform edge.
	/// </summary>
	/// <returns>The decoded string.</returns>
	public string Decode() => CodePage.GetString(_bytes);

	/// <inheritdoc/>
	public override string ToString() => Decode();

	/// <summary>
	/// Returns whether both operands contain the same bytes or are both null.
	/// </summary>
	/// <param name="left">The first operand.</param>
	/// <param name="right">The second operand.</param>
	/// <returns><see langword="true"/> when the operands are equal.</returns>
	public static bool operator ==(ByteString? left, ByteString? right) => left is null ? right is null : left.Equals(right);

	/// <summary>
	/// Returns whether the operands differ.
	/// </summary>
	/// <param name="left">The first operand.</param>
	/// <param name="right">The second operand.</param>
	/// <returns><see langword="true"/> when the operands are not equal.</returns>
	public static bool operator !=(ByteString? left, ByteString? right) => !(left == right);

	private static ByteString FromRadix(uint value, int radix, bool negative)
	{
		Span<byte> buffer = stackalloc byte[40];
		CrtInteger.WriteUnsigned(value, radix, negative, buffer);
		return FromBytes(buffer[..TerminatedLength(buffer)]);
	}

	private static int TerminatedLength(ReadOnlySpan<byte> bytes)
	{
		int terminator = bytes.IndexOf((byte)0);
		return terminator < 0 ? bytes.Length : terminator;
	}

	private static Encoding CreateCodePage()
	{
		Encoding.RegisterProvider(CodePagesEncodingProvider.Instance);
		return Encoding.GetEncoding(1252);
	}
}
