using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks the shipped XVRT format indexes and the uncompressed pixel paths.
/// </summary>
public sealed class XvmArchiveTests
{
	[Fact]
	public void ShippedFormatIndexSelectsDxt1()
	{
		byte[] archive = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 3, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		XvmTexture texture = Assert.Single(XvmArchive.Read(archive));
		Assert.Equal(XvmTextureFormat.Dxt1, texture.Format);
		Assert.Equal(4, texture.Width);
		Assert.Equal(4, texture.Height);
	}

	[Fact]
	public void AlternateFormatIndexMapsToTheSameFormat()
	{
		byte[] archive = TextureTestData.Xvm([TextureTestData.Xvr((XvmTextureFormat)11, 1, 1, 1, [0x10, 0x20, 0x30, 0x40])]);
		XvmTexture texture = Assert.Single(XvmArchive.Read(archive));
		Assert.Equal(XvmTextureFormat.Bgra8888, texture.Format);
		Assert.Equal([0x10, 0x20, 0x30, 0x40], texture.Image.Pixels.ToArray());
	}

	[Fact]
	public void BgrxPixelsBecomeOpaque()
	{
		byte[] archive = TextureTestData.Xvm([TextureTestData.Xvr((XvmTextureFormat)12, 1, 1, 1, [0x10, 0x20, 0x30, 0x00])]);
		XvmTexture texture = Assert.Single(XvmArchive.Read(archive));
		Assert.Equal([0x10, 0x20, 0x30, 0xFF], texture.Image.Pixels.ToArray());
	}

	[Fact]
	public void SixteenBitPixelsExpandToBgra()
	{
		byte[] archive = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.A4R4G4B4, 1, 1, 1, [0x8F, 0x7A])]);
		XvmTexture texture = Assert.Single(XvmArchive.Read(archive));
		Assert.Equal([0xFF, 0x88, 0xAA, 0x77], texture.Image.Pixels.ToArray());
	}

	[Fact]
	public void UnsupportedFormatIndexIsRejected()
	{
		byte[] archive = TextureTestData.Xvm([TextureTestData.Xvr((XvmTextureFormat)5, 1, 1, 1, [0, 0])]);
		Assert.Throws<TextureFormatException>(() => XvmArchive.Read(archive));
	}
}
