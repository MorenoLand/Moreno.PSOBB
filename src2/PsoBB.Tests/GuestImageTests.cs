using System.Buffers.Binary;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the piece-table reader against synthetic images built in the test code.
/// </summary>
public sealed class GuestImageTests
{
	[Fact]
	public void PiecesExposeTheirGuestBoundaries()
	{
		GuestImage image = GuestImage.Parse(BuildImage(
			(0x00402000u, [0xAA, 0xBB, 0xCC, 0xDD]),
			(0x00400000u, [0x4D, 0x5A])));
		Assert.Equal(2, image.Pieces.Count);
		Assert.Equal(0x00400000u, image.Pieces[0].Address);
		Assert.Equal(2, image.Pieces[0].Length);
		Assert.Equal(0x00400002UL, image.Pieces[0].EndAddress);
		Assert.Equal(0x00402000u, image.Pieces[1].Address);
		Assert.Equal(4, image.Pieces[1].Length);
		Assert.Equal(0x00402004UL, image.Pieces[1].EndAddress);
		Assert.True(image.IsMapped(0x00400000, 2));
		Assert.True(image.IsMapped(0x00402000, 4));
		Assert.False(image.IsMapped(0x00400002, 1));
		Assert.False(image.IsMapped(0x00402004, 1));
	}

	[Fact]
	public void LoadReadsTheSameImageAsParse()
	{
		byte[] bytes = BuildImage((0x00400000u, [0x4D, 0x5A, 0x90, 0x00]));
		using MemoryStream stream = new(bytes);
		GuestImage image = GuestImage.Load(stream);
		Assert.Equal(0x5A4Du, image.ReadUInt16(0x00400000));
		Assert.Equal(0x00905A4Du, image.ReadUInt32(0x00400000));
	}

	[Fact]
	public void ReadsDecodeLittleEndianValues()
	{
		byte[] piece =
		[
			0x78, 0x56, 0x34, 0x12,
			0x00, 0x00, 0x80, 0x3F,
			0xEF, 0xBE, 0xAD, 0xDE,
			0xFF, 0xFF, 0xFF, 0xFF,
			0x88, 0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x3F,
			0x34, 0x12, 0xFE, 0xFF, 0xAB,
		];
		GuestImage image = GuestImage.Parse(BuildImage((0x00400000u, piece)));
		Assert.Equal(0x5678, image.ReadUInt16(0x00400000));
		Assert.Equal(0x12345678u, image.ReadUInt32(0x00400000));
		Assert.Equal(0x12345678, image.ReadInt32(0x00400000));
		Assert.Equal(1.0f, image.ReadSingle(0x00400004));
		Assert.Equal(0xDEADBEEF, image.ReadUInt32(0x00400008));
		Assert.Equal(-559038737, image.ReadInt32(0x00400008));
		Assert.Equal(-1, image.ReadInt32(0x0040000C));
		Assert.Equal(0x1122334455667788UL, image.ReadUInt64(0x00400010));
		Assert.Equal(0x1122334455667788L, image.ReadInt64(0x00400010));
		Assert.Equal(1.0, image.ReadDouble(0x00400018));
		Assert.Equal(0x1234, image.ReadUInt16(0x00400020));
		Assert.Equal(0x1234, image.ReadInt16(0x00400020));
		Assert.Equal(-2, image.ReadInt16(0x00400022));
		Assert.Equal(0xAB, image.ReadByte(0x00400024));
	}

	[Fact]
	public void ReadsSpanContiguousPieces()
	{
		GuestImage image = GuestImage.Parse(BuildImage(
			(0x00001000u, [0x11, 0x22, 0x33]),
			(0x00001003u, [0x44, 0x55])));
		Assert.Equal(0x44332211u, image.ReadUInt32(0x00001000));
		Assert.Equal(0x5544, image.ReadUInt16(0x00001003));
		Span<byte> bytes = stackalloc byte[3];
		image.ReadBytes(0x00001002, bytes);
		Assert.Equal([0x33, 0x44, 0x55], bytes.ToArray());
		Assert.True(image.IsMapped(0x00001001, 4));
		GuestImageAddressException exception = Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0x00001002));
		Assert.Equal(0x00001002u, exception.Address);
		Assert.Equal(4, exception.Length);
	}

	[Fact]
	public void ReadsAcrossGapsAreRejected()
	{
		GuestImage image = GuestImage.Parse(BuildImage(
			(0x00001000u, [0x11, 0x22]),
			(0x00002000u, [0x33, 0x44])));
		Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0x00000FFEu));
		Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0x00001000));
		Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0x00001FFEu));
		Assert.False(image.IsMapped(0x00001000, 4));
		Assert.True(image.IsMapped(0x00001000, 2));
		Assert.True(image.IsMapped(0x00002000, 2));
		Assert.False(image.IsMapped(0x00001001, 0x1000));
	}

	[Fact]
	public void UnmappedAddressesRaiseTheGuestException()
	{
		GuestImage image = GuestImage.Parse(BuildImage((0x00400000u, [0x4D, 0x5A, 0x90, 0x00])));
		GuestImageAddressException exception = Assert.Throws<GuestImageAddressException>(() => image.ReadByte(0x00401000));
		Assert.Equal(0x00401000u, exception.Address);
		Assert.Equal(1, exception.Length);
		Assert.Contains("0x00401000", exception.Message, StringComparison.Ordinal);
		Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0xFFFFFFFE));
		Assert.False(image.IsMapped(0xFFFFFFFE, 4));
		Assert.False(image.IsMapped(0, 1));
		Assert.Throws<ArgumentOutOfRangeException>(() => image.IsMapped(0x00400000, -1));
	}

	[Fact]
	public void PiecesMayEndAtTheTopOfTheAddressSpace()
	{
		GuestImage image = GuestImage.Parse(BuildImage((0xFFFFFFFEu, [0x34, 0x12])));
		Assert.Equal(0x1234, image.ReadUInt16(0xFFFFFFFE));
		Assert.Equal(0x100000000UL, image.Pieces[0].EndAddress);
		Assert.Throws<GuestImageAddressException>(() => image.ReadUInt32(0xFFFFFFFE));
	}

	[Fact]
	public void EmptyImageMapsNothing()
	{
		GuestImage image = GuestImage.Parse(BuildImage());
		Assert.Empty(image.Pieces);
		Assert.False(image.IsMapped(0, 1));
		Assert.Throws<GuestImageAddressException>(() => image.ReadByte(0));
		image.ReadBytes(0x12345678, []);
	}

	[Fact]
	public void MalformedHeadersAreRejected()
	{
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse([]));
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(new byte[3]));
		byte[] shortTable = new byte[4];
		WriteUInt32(shortTable, 0, 1);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(shortTable));
		byte[] zeroLength = BuildImage((0x00400000u, [0x01, 0x02]));
		PatchEntry(zeroLength, 0, 1, 0);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(zeroLength));
		byte[] outsideFile = BuildImage((0x00400000u, [0x01, 0x02]));
		PatchEntry(outsideFile, 0, 2, 0xFFFF);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(outsideFile));
		byte[] insideTable = BuildImage((0x00400000u, [0x01, 0x02]));
		PatchEntry(insideTable, 0, 2, 4);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(insideTable));
		byte[] hugeLength = BuildImage((0x00400000u, [0x01, 0x02]));
		PatchEntry(hugeLength, 0, 1, 0x80000000);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(hugeLength));
		byte[] wrapped = BuildImage((0xFFFFFFF0u, new byte[0x20]));
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(wrapped));
		byte[] overlapping = BuildImage(
			(0x00001000u, [0x01, 0x02, 0x03]),
			(0x00002000u, [0x04, 0x05]));
		PatchEntry(overlapping, 1, 0, 0x00001002);
		Assert.Throws<InvalidDataException>(() => GuestImage.Parse(overlapping));
	}

	private static byte[] BuildImage(params (uint Address, byte[] Bytes)[] pieces)
	{
		int headerSize = 4 + 12 * pieces.Length;
		int size = headerSize;
		foreach ((_, byte[] bytes) in pieces)
			size += bytes.Length;
		byte[] image = new byte[size];
		WriteUInt32(image, 0, (uint)pieces.Length);
		int offset = headerSize;
		for (int index = 0; index < pieces.Length; index++)
		{
			WriteUInt32(image, 4 + 12 * index, pieces[index].Address);
			WriteUInt32(image, 8 + 12 * index, (uint)pieces[index].Bytes.Length);
			WriteUInt32(image, 12 + 12 * index, (uint)offset);
			pieces[index].Bytes.CopyTo(image, offset);
			offset += pieces[index].Bytes.Length;
		}
		return image;
	}

	private static void PatchEntry(byte[] image, int index, int field, uint value) => WriteUInt32(image, 4 + 12 * index + 4 * field, value);

	private static void WriteUInt32(byte[] bytes, int offset, uint value) => BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(offset, 4), value);
}
