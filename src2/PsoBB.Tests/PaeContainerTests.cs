using PsoBB.Compression;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks PAE section parsing and the embedded XVRT texture archive.
/// </summary>
public sealed class PaeContainerTests
{
	/// <summary>
	/// An uncompressed archive exposes all sections and decodes its DXT1 texture.
	/// </summary>
	[Fact]
	public void UncompressedSectionsAndTextureAreParsed()
	{
		byte[] model = [1, 2, 3, 4];
		byte[] textureList = [5, 6];
		byte[] xvm = Dxt1Archive(0x12345678, 0xF800, 0x07E0, Repeat(0, 16));
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae(model, textureList, xvm));
		Assert.False(archive.IsCompressed);
		Assert.Equal(0x20u, archive.ModelOffset);
		Assert.Equal(model, archive.ModelData.ToArray());
		Assert.Equal(textureList, archive.TextureListData.ToArray());
		Assert.Equal(xvm, archive.TextureData.ToArray());
		XvmTexture texture = Assert.Single(archive.Textures);
		Assert.Equal(0x12345678u, texture.GlobalIndex);
		Assert.Equal(XvmTextureFormat.Dxt1, texture.Format);
		Assert.Equal(4, texture.Width);
		Assert.Equal(4, texture.Height);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(texture.Image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(texture.Image, 3, 3));
	}

	/// <summary>
	/// A compressed archive is decompressed through the shared PRS decompressor.
	/// </summary>
	[Fact]
	public void CompressedArchiveIsDecompressed()
	{
		byte[] model = [9, 8, 7, 6, 5, 4, 3, 2];
		byte[] textureList = [1, 1];
		byte[] xvm = Dxt1Archive(7, 0x001F, 0x07E0, Repeat(0, 16));
		PaeContainer archive = PaeContainer.Parse(TextureTestData.CompressedPae(model, textureList, xvm));
		Assert.True(archive.IsCompressed);
		Assert.Equal(model, archive.ModelData.ToArray());
		Assert.Equal(textureList, archive.TextureListData.ToArray());
		XvmTexture texture = Assert.Single(archive.Textures);
		Assert.Equal(7u, texture.GlobalIndex);
		Assert.Equal(TextureTestData.Bgra(255, 0, 0, 255), TextureTestData.Pixel(texture.Image, 0, 0));
	}

	/// <summary>
	/// DXT1's three-color mode makes the fourth index fully transparent.
	/// </summary>
	[Fact]
	public void Dxt1ThreeColorModeIsTransparent()
	{
		byte[] indices = Repeat(0, 16);
		indices[0] = 3;
		indices[2] = 1;
		indices[3] = 2;
		byte[] xvm = Dxt1Archive(1, 0x07E0, 0xF800, indices);
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae([0], [0], xvm));
		TextureImage image = Assert.Single(archive.Textures).Image;
		Assert.Equal(0u, TextureTestData.Pixel(image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 255, 0, 255), TextureTestData.Pixel(image, 1, 0));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(image, 2, 0));
		Assert.Equal(TextureTestData.Bgra(0, 127, 127, 255), TextureTestData.Pixel(image, 3, 0));
	}

	/// <summary>
	/// DXT3 and DXT5 alpha blocks reach BGRA without changing the color channels.
	/// </summary>
	[Fact]
	public void Dxt3AndDxt5AlphaIsPreserved()
	{
		byte[] alphaCodes = Repeat(8, 16);
		byte[] indices = Repeat(0, 16);
		byte[] dxt3 = TextureTestData.Xvr(XvmTextureFormat.Dxt3, 2, 4, 4, TextureTestData.Dxt3Block(alphaCodes, 0xF800, 0x07E0, indices));
		byte[] dxt5 = TextureTestData.Xvr(XvmTextureFormat.Dxt5, 3, 4, 4, TextureTestData.Dxt5Block(255, 0, Repeat(2, 16), 0xF800, 0x07E0, indices));
		byte[] xvm = TextureTestData.Xvm([dxt3, dxt5]);
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae([0], [0], xvm));
		Assert.Equal(2, archive.Textures.Count);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 136), TextureTestData.Pixel(archive.Textures[0].Image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 218), TextureTestData.Pixel(archive.Textures[1].Image, 0, 0));
	}

	/// <summary>
	/// A truncated header, an out-of-range section and a bad embedded archive are rejected.
	/// </summary>
	[Fact]
	public void InvalidArchivesAreRejected()
	{
		Assert.Throws<TextureFormatException>(() => PaeContainer.Parse(new byte[0x1F]));
		byte[] archive = TextureTestData.Pae([1], [2], Dxt1Archive(1, 0xF800, 0x07E0, Repeat(0, 16)));
		byte[] badSection = archive.ToArray();
		badSection[0x10] = 0xFF;
		badSection[0x11] = 0xFF;
		badSection[0x12] = 0xFF;
		badSection[0x13] = 0x7F;
		Assert.Throws<TextureFormatException>(() => PaeContainer.Parse(badSection));
		byte[] badTexture = archive.ToArray();
		badTexture[0x20 + 2] = 0;
		Assert.Throws<TextureFormatException>(() => PaeContainer.Parse(badTexture));
	}

	/// <summary>
	/// A malformed PRS payload keeps the decompressor's own error.
	/// </summary>
	[Fact]
	public void MalformedCompressedPayloadIsRejected()
	{
		byte[] archive = TextureTestData.CompressedPae([1], [2], Dxt1Archive(1, 0xF800, 0x07E0, Repeat(0, 16)));
		archive[0x20] = 0;
		Assert.Throws<PrsFormatException>(() => PaeContainer.Parse(archive));
	}

	private static byte[] Dxt1Archive(uint globalIndex, ushort first, ushort second, byte[] indices) =>
		TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, globalIndex, 4, 4, TextureTestData.Dxt1Block(first, second, indices))]);

	private static byte[] Repeat(byte value, int count)
	{
		byte[] bytes = new byte[count];
		bytes.AsSpan().Fill(value);
		return bytes;
	}
}
