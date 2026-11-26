using System.Buffers.Binary;
using System.Text;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks PVM header, entry-table and texture-chunk parsing.
/// </summary>
public sealed class PvmArchiveTests
{
	/// <summary>
	/// Every optional entry field and both texture layouts survive a round trip.
	/// </summary>
	[Fact]
	public void ArchiveEntriesAndTexturesAreParsed()
	{
		byte[] rectangle = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 4, 4, Rgb565Pixels(16));
		byte[] indexed = TextureTestData.Pvr(PvrDataFormat.Palette8, PvrPixelFormat.Argb1555, 4, 4, Enumerable.Range(0, 16).Select(index => (byte)index).ToArray());
		byte[] palette = TextureTestData.Pvp(PvrPixelFormat.Argb1555, Enumerable.Range(0, 16).Select(index => (ushort)(0x8000 | index << 10)).ToArray());
		byte[] archiveData = TextureTestData.Pvm(
			PvmArchiveFlags.Filenames | PvmArchiveFlags.Dimensions | PvmArchiveFlags.Formats | PvmArchiveFlags.GlobalIndices,
			[
				(0, "first", (ushort)PvrDataFormat.Rectangle, 0, 0x11223344),
				(1, "second", (ushort)PvrDataFormat.Palette8, 0, 0x55667788),
			],
			[rectangle, indexed]);
		PvmArchive archive = PvmArchive.Parse(archiveData, PvpPalette.Parse(palette));
		Assert.Equal(PvmArchiveFlags.Filenames | PvmArchiveFlags.Dimensions | PvmArchiveFlags.Formats | PvmArchiveFlags.GlobalIndices, archive.Flags);
		Assert.Equal(2, archive.Textures.Count);
		Assert.Equal(Encoding.ASCII.GetBytes("first"), archive.Textures[0].Name.Bytes.ToArray());
		Assert.Equal(4, archive.Textures[0].DeclaredWidth);
		Assert.Equal(4, archive.Textures[0].DeclaredHeight);
		Assert.Equal(0x11223344u, archive.Textures[0].GlobalIndex);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(archive.Textures[0].Image, 0, 0));
		Assert.Equal(4, archive.Textures[1].DeclaredWidth);
		Assert.Equal(0x55667788u, archive.Textures[1].GlobalIndex);
		Assert.Equal(TextureTestData.Bgra(0, 0, 24, 255), TextureTestData.Pixel(archive.Textures[1].Image, 1, 1));
		Assert.True(archive.HeaderSize >= 4);
		Assert.Equal(0, archive.Textures[0].Offset % 16);
	}

	/// <summary>
	/// An archive without optional fields still yields the texture and empty metadata.
	/// </summary>
	[Fact]
	public void ArchiveWithoutOptionalFieldsIsAccepted()
	{
		byte[] chunk = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4));
		PvmArchive archive = PvmArchive.Parse(TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [chunk]));
		PvmTexture texture = Assert.Single(archive.Textures);
		Assert.True(texture.Name.IsEmpty);
		Assert.Equal(0, texture.DeclaredWidth);
		Assert.Equal(0u, texture.GlobalIndex);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(texture.Image, 0, 0));
	}

	/// <summary>
	/// A truncated or misidentified header is rejected.
	/// </summary>
	[Fact]
	public void InvalidHeadersAreRejected()
	{
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(new byte[8]));
		byte[] badMagic = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4))]);
		BinaryPrimitives.WriteUInt32LittleEndian(badMagic, 0);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(badMagic));
		byte[] badHeader = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4))]);
		BinaryPrimitives.WriteUInt32LittleEndian(badHeader.AsSpan(4), 0xFFFF);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(badHeader));
	}

	/// <summary>
	/// An entry count or entry field that runs into the texture data is rejected.
	/// </summary>
	[Fact]
	public void InvalidEntryTableIsRejected()
	{
		byte[] tooMany = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4))]);
		BinaryPrimitives.WriteUInt16LittleEndian(tooMany.AsSpan(0x0A), 0xFFFF);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(tooMany));
		byte[] nameDoesNotFit = TextureTestData.Pvm(PvmArchiveFlags.Filenames, [(0, "name", 0, 0, 0)], [TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4))]);
		BinaryPrimitives.WriteUInt32LittleEndian(nameDoesNotFit.AsSpan(4), 4);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(nameDoesNotFit));
	}

	/// <summary>
	/// Missing, truncated or misidentified texture chunks are rejected.
	/// </summary>
	[Fact]
	public void InvalidTextureChunksAreRejected()
	{
		byte[] missing = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], []);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(missing));
		byte[] chunk = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, Rgb565Pixels(4));
		byte[] badMagicChunk = chunk.ToArray();
		badMagicChunk[0] = 0;
		byte[] badMagic = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [badMagicChunk]);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(badMagic));
		byte[] truncated = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [chunk]);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(truncated.AsSpan(0, truncated.Length - 12)));
	}

	/// <summary>
	/// An indexed texture in an archive needs its external palette.
	/// </summary>
	[Fact]
	public void IndexedTextureNeedsPalette()
	{
		byte[] chunk = TextureTestData.Pvr(PvrDataFormat.Palette8, PvrPixelFormat.Argb1555, 2, 2, [0, 1, 2, 3]);
		byte[] archive = TextureTestData.Pvm(PvmArchiveFlags.None, [(0, string.Empty, 0, 0, 0)], [chunk]);
		Assert.Throws<TextureFormatException>(() => PvmArchive.Parse(archive));
	}

	private static byte[] Rgb565Pixels(int count)
	{
		byte[] pixels = new byte[count * 2];
		for (int index = 0; index < count; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(index * 2), (ushort)(index % 2 == 0 ? 0xF800 : 0x07E0));
		return pixels;
	}
}
