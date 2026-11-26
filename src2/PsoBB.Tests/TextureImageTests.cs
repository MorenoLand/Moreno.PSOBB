using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks the decoded image surface handed to the renderer.
/// </summary>
public sealed class TextureImageTests
{
	/// <summary>
	/// A valid image exposes a tight BGRA stride and owns its pixels.
	/// </summary>
	[Fact]
	public void ImageCopiesPixelsAndComputesStride()
	{
		byte[] source = [1, 2, 3, 4, 5, 6, 7, 8];
		TextureImage image = new(2, 1, source);
		source[0] = 0xFF;
		Assert.Equal(2, image.Width);
		Assert.Equal(1, image.Height);
		Assert.Equal(8, image.Stride);
		Assert.Equal(1, image.Pixels.Span[0]);
	}

	/// <summary>
	/// Invalid dimensions and pixel lengths are rejected at construction.
	/// </summary>
	[Fact]
	public void InvalidImagesAreRejected()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => new TextureImage(0, 1, []));
		Assert.Throws<ArgumentOutOfRangeException>(() => new TextureImage(1, 0, []));
		Assert.Throws<ArgumentException>(() => new TextureImage(2, 2, new byte[8]));
	}
}
