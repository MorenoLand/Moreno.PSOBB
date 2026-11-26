using PsoBB.Compression;

namespace PsoBB.Tests;

/// <summary>
/// Checks the patch LZSS stream against behaviour derived from the original decoder.
/// </summary>
public sealed class LzssDecompressorTests
{
	/// <summary>
	/// Literal flag bytes reproduce the original bytes in order.
	/// </summary>
	[Fact]
	public void LiteralsAreCopied()
	{
		byte[] compressed = [0xFF, (byte)'a', (byte)'b', (byte)'c', (byte)'d', (byte)'e', (byte)'f', (byte)'g', (byte)'h', 0xFF, (byte)'i', (byte)'j'];
		Assert.Equal("abcdefghij", System.Text.Encoding.ASCII.GetString(LzssDecompressor.Decompress(compressed)));
	}

	/// <summary>
	/// The ring's initial position and absolute 12-bit source address reproduce a three-byte match.
	/// </summary>
	[Fact]
	public void MatchCopiesFromTheRing()
	{
		byte[] compressed = [0x07, (byte)'a', (byte)'b', (byte)'c', 0xEE, 0xF0];
		Assert.Equal("abcabc", System.Text.Encoding.ASCII.GetString(LzssDecompressor.Decompress(compressed)));
	}

	/// <summary>
	/// An empty stream produces no bytes.
	/// </summary>
	[Fact]
	public void EmptyStreamIsEmpty() => Assert.Empty(LzssDecompressor.Decompress([]));

	/// <summary>
	/// A missing literal or match header is rejected.
	/// </summary>
	[Fact]
	public void TruncatedStreamIsRejected()
	{
		Assert.Throws<InvalidDataException>(() => LzssDecompressor.Decompress([0xFF]));
		Assert.Throws<InvalidDataException>(() => LzssDecompressor.Decompress([0xFE, 0x10]));
	}
}
