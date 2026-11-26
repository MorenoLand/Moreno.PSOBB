using System.Buffers.Binary;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PowerVR pixel layouts and BGRA conversion.
/// </summary>
public sealed class PvrTextureTests
{
	/// <summary>
	/// ARGB1555 keeps one-bit alpha and expands the five-bit channels.
	/// </summary>
	[Fact]
	public void Argb1555PreservesOneBitAlpha()
	{
		byte[] pixels = new byte[8];
		BinaryPrimitives.WriteUInt16LittleEndian(pixels, 0x7C00);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(2), 0x83E0);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(4), 0x801F);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(6), 0x0000);
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Argb1555, 2, 2, pixels));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 0), TextureTestData.Pixel(image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 255, 0, 255), TextureTestData.Pixel(image, 1, 0));
		Assert.Equal(TextureTestData.Bgra(255, 0, 0, 255), TextureTestData.Pixel(image, 0, 1));
		Assert.Equal(0u, TextureTestData.Pixel(image, 1, 1));
	}

	/// <summary>
	/// RGB565 expands five and six bit channels and forces opaque alpha.
	/// </summary>
	[Fact]
	public void Rgb565IsOpaque()
	{
		byte[] pixels = [0x00, 0xF8, 0xE0, 0x07];
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 1, pixels));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 255, 0, 255), TextureTestData.Pixel(image, 1, 0));
	}

	/// <summary>
	/// ARGB4444 scales each four-bit channel by seventeen.
	/// </summary>
	[Fact]
	public void Argb4444ScalesChannels()
	{
		byte[] pixels = [0x0F, 0xF0, 0x00, 0x8F];
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Argb4444, 2, 1, pixels));
		Assert.Equal(TextureTestData.Bgra(255, 0, 0, 255), TextureTestData.Pixel(image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 136), TextureTestData.Pixel(image, 1, 0));
	}

	/// <summary>
	/// Twiddled pixels are placed by alternating the x and y bits of the source index.
	/// </summary>
	[Fact]
	public void TwiddledOrderReordersPixels()
	{
		byte[] pixels = new byte[32];
		for (int index = 0; index < 16; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(index * 2), (ushort)(index << 11));
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.SquareTwiddled, PvrPixelFormat.Rgb565, 4, 4, pixels));
		Assert.Equal(TextureTestData.Bgra(0, 0, 24, 255), TextureTestData.Pixel(image, 1, 1));
		Assert.Equal(TextureTestData.Bgra(0, 0, 33, 255), TextureTestData.Pixel(image, 2, 0));
		Assert.Equal(TextureTestData.Bgra(0, 0, 66, 255), TextureTestData.Pixel(image, 0, 2));
	}

	/// <summary>
	/// A twiddled mipmap chain places the largest level last.
	/// </summary>
	[Fact]
	public void TwiddledMipmapsUseTheLargestLevel()
	{
		byte[] pixels = new byte[2 + 8 + 32];
		pixels.AsSpan(0, 2).Fill(0xAA);
		pixels.AsSpan(2, 8).Fill(0xBB);
		for (int index = 0; index < 16; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(10 + index * 2), 0xF800);
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.SquareTwiddledMipmaps, PvrPixelFormat.Rgb565, 4, 4, pixels));
		Assert.All(Enumerable.Range(0, 16), index => Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(image, index % 4, index / 4)));
	}

	/// <summary>
	/// Four-bit indices use the high nibble first and resolve through the palette.
	/// </summary>
	[Fact]
	public void Palette4UsesHighNibbleFirst()
	{
		ushort[] colors = new ushort[16];
		for (int index = 0; index < colors.Length; index++)
			colors[index] = (ushort)(0x8000 | index << 10);
		PvpPalette palette = PvpPalette.Parse(TextureTestData.Pvp(PvrPixelFormat.Argb1555, colors));
		byte[] indices = new byte[8];
		for (int index = 0; index < 16; index++)
		{
			if ((index & 1) == 0)
				indices[index / 2] = (byte)(index << 4);
			else
				indices[index / 2] |= (byte)index;
		}
		TextureImage image = PvrTexture.Parse(TextureTestData.Pvr(PvrDataFormat.Palette4, PvrPixelFormat.Argb1555, 4, 4, indices)).Decode(palette);
		Assert.Equal(TextureTestData.Bgra(0, 0, 24, 255), TextureTestData.Pixel(image, 1, 1));
		Assert.Equal(TextureTestData.Bgra(0, 0, 33, 255), TextureTestData.Pixel(image, 2, 0));
	}

	/// <summary>
	/// An indexed texture without its palette is rejected.
	/// </summary>
	[Fact]
	public void PaletteIsRequiredForIndexedPixels()
	{
		byte[] pixels = new byte[2];
		PvrTexture texture = PvrTexture.Parse(TextureTestData.Pvr(PvrDataFormat.Palette8, PvrPixelFormat.Argb1555, 2, 2, pixels));
		Assert.Throws<TextureFormatException>(() => texture.Decode());
	}

	/// <summary>
	/// A vector-quantized block takes its four colors from one codebook entry.
	/// </summary>
	[Fact]
	public void VectorQuantizedBlockExpandsCodebookEntry()
	{
		byte[] pixels = new byte[2049];
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(8), 0xF800);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(10), 0x07E0);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(12), 0x001F);
		BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(14), 0xFFFF);
		pixels[2048] = 1;
		TextureImage image = Decode(TextureTestData.Pvr(PvrDataFormat.VectorQuantized, PvrPixelFormat.Rgb565, 2, 2, pixels));
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(image, 0, 0));
		Assert.Equal(TextureTestData.Bgra(0, 255, 0, 255), TextureTestData.Pixel(image, 1, 0));
		Assert.Equal(TextureTestData.Bgra(255, 0, 0, 255), TextureTestData.Pixel(image, 0, 1));
		Assert.Equal(TextureTestData.Bgra(255, 255, 255, 255), TextureTestData.Pixel(image, 1, 1));
	}

	/// <summary>
	/// A chunk that ends before its declared pixel bytes is rejected.
	/// </summary>
	[Fact]
	public void TruncatedPixelDataIsRejected()
	{
		PvrTexture texture = PvrTexture.Parse(TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 4, 4, new byte[8]));
		Assert.Throws<TextureFormatException>(() => texture.Decode());
	}

	/// <summary>
	/// Bad magic, truncated headers and impossible dimensions are rejected.
	/// </summary>
	[Fact]
	public void InvalidHeadersAreRejected()
	{
		Assert.Throws<TextureFormatException>(() => PvrTexture.Parse(new byte[8]));
		byte[] badMagic = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 2, 2, new byte[8]);
		BinaryPrimitives.WriteUInt32LittleEndian(badMagic, 0);
		Assert.Throws<TextureFormatException>(() => PvrTexture.Parse(badMagic));
		byte[] zeroWidth = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, 0, 2, Array.Empty<byte>());
		Assert.Throws<TextureFormatException>(() => PvrTexture.Parse(zeroWidth));
	}

	/// <summary>
	/// A layout the client does not use fails instead of returning a fake image.
	/// </summary>
	[Fact]
	public void UnsupportedLayoutIsRejected()
	{
		PvrTexture texture = PvrTexture.Parse(TextureTestData.Pvr(PvrDataFormat.Abgr, PvrPixelFormat.Rgb555, 2, 2, new byte[16]));
		Assert.Throws<TextureFormatException>(() => texture.Decode());
	}

	private static TextureImage Decode(byte[] chunk, PvpPalette? palette = null) => PvrTexture.Parse(chunk).Decode(palette);
}
