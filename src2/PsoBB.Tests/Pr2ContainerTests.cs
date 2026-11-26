using System.Buffers.Binary;
using PsoBB.Data;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PR2 header, PRC key stream and PRS payload handling.
/// </summary>
public sealed class Pr2ContainerTests
{
	/// <summary>
	/// A PR2 file decrypts and decompresses to the declared payload.
	/// </summary>
	[Fact]
	public void DecodesAPr2Payload()
	{
		byte[] payload = [.. Enumerable.Range(0, 300).Select(index => (byte)(index * 7 + 3))];
		byte[] file = TextSamples.Pr2(payload, 0x12345678);
		Assert.Equal(payload, Pr2Container.Decompress(file));
	}

	/// <summary>
	/// A payload whose length is not a multiple of four keeps its trailing bytes.
	/// </summary>
	[Fact]
	public void DecodesAPartialTrailingWord()
	{
		byte[] payload = [0x10, 0x20, 0x30, 0x40, 0x50];
		Assert.Equal(payload, Pr2Container.Decompress(TextSamples.Pr2(payload, 0x12345678)));
	}

	/// <summary>
	/// The key stream for the retail English text seed is pinned.
	/// </summary>
	[Fact]
	public void PinsTheRetailTextKeyStream()
	{
		uint[] expected = [0x133A3C04, 0xA2077038, 0x3046DFCB, 0x35E66C78, 0x57005FE8, 0xB75DCC07, 0xA84B63EB, 0xB30B4A63];
		PrcCipher cipher = new();
		cipher.Initialize(0xD35DD82D);
		uint[] actual = [.. Enumerable.Range(0, expected.Length).Select(_ => cipher.NextWord())];
		Assert.Equal(expected, actual);
	}

	/// <summary>
	/// A partial word is XORed with the low bytes of its key word.
	/// </summary>
	[Fact]
	public void DecryptsAPartialWordByteWise()
	{
		byte[] data = [1, 2, 3, 4, 5];
		PrcCipher cipher = new();
		cipher.Initialize(0x12345678);
		cipher.Decrypt(data);
		Assert.Equal([(byte)(1 ^ 0x96), (byte)(2 ^ 0x8B), (byte)(3 ^ 0xE8), (byte)(4 ^ 0xDA), (byte)(5 ^ 0xB9)], data);
	}

	/// <summary>
	/// A file shorter than the header is rejected.
	/// </summary>
	[Fact]
	public void RejectsAShortHeader() => Assert.Throws<Pr2FormatException>(() => Pr2Container.Decompress([1, 2, 3]));

	/// <summary>
	/// A declared size outside the readable range is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnOversizedDeclaredSize()
	{
		byte[] file = new byte[Pr2Container.HeaderSize];
		BinaryPrimitives.WriteUInt32LittleEndian(file, uint.MaxValue);
		Assert.Throws<Pr2FormatException>(() => Pr2Container.Decompress(file));
	}

	/// <summary>
	/// A stream that produces fewer bytes than the header declares is rejected.
	/// </summary>
	[Fact]
	public void RejectsADeclaredSizeMismatch()
	{
		byte[] file = TextSamples.Pr2([1, 2, 3, 4], 7);
		BinaryPrimitives.WriteUInt32LittleEndian(file, 5);
		Assert.Throws<Pr2FormatException>(() => Pr2Container.Decompress(file));
	}

	/// <summary>
	/// Random bytes after a valid header are not accepted as a PRS stream.
	/// </summary>
	[Fact]
	public void RejectsAnInvalidPrsPayload()
	{
		byte[] file = new byte[Pr2Container.HeaderSize + 8];
		BinaryPrimitives.WriteUInt32LittleEndian(file, 32);
		Assert.Throws<Pr2FormatException>(() => Pr2Container.Decompress(file));
	}

	/// <summary>
	/// A truncated PRS stream is reported as a container failure.
	/// </summary>
	[Fact]
	public void RejectsATruncatedPrsPayload()
	{
		byte[] file = TextSamples.Pr2([.. Enumerable.Range(0, 64).Select(index => (byte)index)], 9);
		Assert.Throws<Pr2FormatException>(() => Pr2Container.Decompress(file.AsSpan(0, file.Length - 1)));
	}
}
