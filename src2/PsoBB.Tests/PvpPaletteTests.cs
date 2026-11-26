using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks external PowerVR palette parsing and packed color conversion.
/// </summary>
public sealed class PvpPaletteTests
{
	/// <summary>
	/// ARGB1555 palette colors expand to BGRA and an absent index is transparent.
	/// </summary>
	[Fact]
	public void PaletteColorsAndMissingIndexesAreDecoded()
	{
		PvpPalette palette = PvpPalette.Parse(TextureTestData.Pvp(PvrPixelFormat.Argb1555, [0x7C00, 0x83E0, 0x801F, 0x0000]));
		Assert.Equal(4, palette.Count);
		Assert.Equal(PvrPixelFormat.Argb1555, palette.PixelFormat);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 0), palette.GetBgra(0));
		Assert.Equal(TextureTestData.Bgra(0, 255, 0, 255), palette.GetBgra(1));
		Assert.Equal(TextureTestData.Bgra(255, 0, 0, 255), palette.GetBgra(2));
		Assert.Equal(0u, palette.GetBgra(3));
		Assert.Equal(0u, palette.GetBgra(4));
	}

	/// <summary>
	/// Bad magic, truncated tables and unsupported color formats are rejected.
	/// </summary>
	[Fact]
	public void InvalidPalettesAreRejected()
	{
		Assert.Throws<TextureFormatException>(() => PvpPalette.Parse(new byte[8]));
		byte[] badMagic = TextureTestData.Pvp(PvrPixelFormat.Rgb565, [0]);
		badMagic[0] = 0;
		Assert.Throws<TextureFormatException>(() => PvpPalette.Parse(badMagic));
		byte[] empty = TextureTestData.Pvp(PvrPixelFormat.Rgb565, []);
		Assert.Throws<TextureFormatException>(() => PvpPalette.Parse(empty));
		byte[] unsupported = TextureTestData.Pvp(PvrPixelFormat.Yuv422, [0]);
		Assert.Throws<TextureFormatException>(() => PvpPalette.Parse(unsupported));
		byte[] truncated = TextureTestData.Pvp(PvrPixelFormat.Rgb565, [1, 2]);
		Assert.Throws<TextureFormatException>(() => PvpPalette.Parse(truncated.AsSpan(0, truncated.Length - 2)));
	}
}
