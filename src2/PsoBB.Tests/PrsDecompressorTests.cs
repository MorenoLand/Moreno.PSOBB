using System.Text.Json;
using PsoBB.Compression;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PRS decompressor against streams executed on the original machine code.
/// </summary>
public sealed class PrsDecompressorTests
{
	/// <summary>
	/// Loads the compressed streams and the complete output the original produced.
	/// </summary>
	/// <returns>One row per synthetic stream.</returns>
	public static List<object[]> DecompressionVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "00788154.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				Convert.FromHexString(vector.GetProperty("source").GetString()!),
				vector.GetProperty("destination_size").GetInt32(),
				vector.GetProperty("written").GetInt32(),
				Convert.FromHexString(vector.GetProperty("output").GetString()!),
			]);
		return rows;
	}

	/// <summary>
	/// The ported decompressor reproduces every byte the original wrote and leaves the rest untouched.
	/// </summary>
	/// <param name="source">The compressed stream.</param>
	/// <param name="destinationSize">Size of the buffer the original wrote into.</param>
	/// <param name="written">Number of bytes the original reported.</param>
	/// <param name="output">The bytes the original wrote.</param>
	[Theory]
	[MemberData(nameof(DecompressionVectors))]
	public void DecompressMatchesTheMachineCode(byte[] source, int destinationSize, int written, byte[] output)
	{
		byte[] destination = new byte[destinationSize];
		destination.AsSpan().Fill(0xCC);
		int actual = PrsDecompressor.Decompress(source, destination);
		Assert.Equal(written, actual);
		Assert.Equal(output, destination[..actual]);
		Assert.All(destination[actual..], value => Assert.Equal(0xCC, value));
	}

	/// <summary>
	/// An empty source cannot contain the initial control byte.
	/// </summary>
	[Fact]
	public void EmptySourceIsRejected()
	{
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress([], new byte[16]));
	}

	/// <summary>
	/// A control byte that promises a literal after the stream ended is rejected.
	/// </summary>
	[Fact]
	public void TruncatedLiteralIsRejected()
	{
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress([0xFF, (byte)'A'], new byte[16]));
	}

	/// <summary>
	/// A reference without its 16-bit word is rejected.
	/// </summary>
	[Fact]
	public void TruncatedReferenceIsRejected()
	{
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress([0x02, 0x00], new byte[16]));
	}

	/// <summary>
	/// A long reference without its deferred length byte is rejected.
	/// </summary>
	[Fact]
	public void TruncatedReferenceLengthIsRejected()
	{
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress([0x02, 0x08, 0x00], new byte[16]));
	}

	/// <summary>
	/// A compact reference without its distance byte is rejected.
	/// </summary>
	[Fact]
	public void TruncatedCompactDistanceIsRejected()
	{
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress([0x01, (byte)'A'], new byte[16]));
	}

	/// <summary>
	/// A reference that reaches before the start of the output is rejected.
	/// </summary>
	[Fact]
	public void ReferenceBeforeTheOutputIsRejected()
	{
		byte[] source = [0x0B, (byte)'A', (byte)'B', 0xE2, 0xFF];
		Assert.Throws<PrsFormatException>(() => PrsDecompressor.Decompress(source, new byte[16]));
	}

	/// <summary>
	/// A destination smaller than the decompressed stream is rejected.
	/// </summary>
	[Fact]
	public void SmallDestinationIsRejected()
	{
		byte[] source = [0x5F, (byte)'H', (byte)'e', (byte)'l', (byte)'l', (byte)'o', 0x00, 0x00];
		Assert.Throws<ArgumentException>(() => PrsDecompressor.Decompress(source, new byte[4]));
	}
}
