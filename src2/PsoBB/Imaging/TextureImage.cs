namespace PsoBB.Imaging;

/// <summary>
/// A decoded texture with tightly packed 32-bit BGRA pixels ready for renderer upload.
/// </summary>
public sealed class TextureImage
{
	private readonly byte[] _pixels;

	/// <summary>
	/// Creates an image from tightly packed BGRA bytes.
	/// </summary>
	/// <param name="width">Texture width in pixels.</param>
	/// <param name="height">Texture height in pixels.</param>
	/// <param name="pixels">Exactly <paramref name="width"/> times <paramref name="height"/> BGRA pixels.</param>
	/// <exception cref="ArgumentOutOfRangeException">A dimension is not positive.</exception>
	/// <exception cref="ArgumentException">The pixel length does not match the dimensions.</exception>
	public TextureImage(int width, int height, ReadOnlySpan<byte> pixels)
	{
		if (width <= 0)
			throw new ArgumentOutOfRangeException(nameof(width));
		if (height <= 0)
			throw new ArgumentOutOfRangeException(nameof(height));
		long expected = (long)width * height * 4;
		if (pixels.Length != expected)
			throw new ArgumentException("The pixel length does not match the dimensions.", nameof(pixels));
		Width = width;
		Height = height;
		_pixels = pixels.ToArray();
	}

	/// <summary>Gets the texture width in pixels.</summary>
	public int Width { get; }

	/// <summary>Gets the texture height in pixels.</summary>
	public int Height { get; }

	/// <summary>Gets the number of bytes per row.</summary>
	public int Stride => Width * 4;

	/// <summary>Gets the tightly packed BGRA pixels.</summary>
	public ReadOnlyMemory<byte> Pixels => _pixels;
}
