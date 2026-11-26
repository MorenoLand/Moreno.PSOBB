namespace PsoBB.Imaging;

/// <summary>
/// The storage layout of the pixels in a PowerVR texture.
/// </summary>
public enum PvrDataFormat : byte
{
	/// <summary>Square pixels in the PowerVR twiddled order.</summary>
	SquareTwiddled = 0x01,

	/// <summary>Square twiddled pixels preceded by a mipmap chain.</summary>
	SquareTwiddledMipmaps = 0x02,

	/// <summary>A two-by-two codebook followed by twiddled block indices.</summary>
	VectorQuantized = 0x03,

	/// <summary>Vector-quantized pixels preceded by a mipmap chain.</summary>
	VectorQuantizedMipmaps = 0x04,

	/// <summary>Four-bit palette indices in twiddled order.</summary>
	Palette4 = 0x05,

	/// <summary>Four-bit palette indices preceded by a mipmap chain.</summary>
	Palette4Mipmaps = 0x06,

	/// <summary>Eight-bit palette indices in twiddled order.</summary>
	Palette8 = 0x07,

	/// <summary>Eight-bit palette indices preceded by a mipmap chain.</summary>
	Palette8Mipmaps = 0x08,

	/// <summary>Rows stored from left to right.</summary>
	Rectangle = 0x09,

	/// <summary>Rows with a stride, not used by the client.</summary>
	Stride = 0x0B,

	/// <summary>Twiddled pixels for a rectangular texture.</summary>
	RectangleTwiddled = 0x0D,

	/// <summary>Thirty-two-bit ABGR pixels, not used by the client.</summary>
	Abgr = 0x0E,

	/// <summary>ABGR pixels preceded by a mipmap chain, not used by the client.</summary>
	AbgrMipmaps = 0x0F,

	/// <summary>Vector quantization with a size-dependent codebook.</summary>
	SmallVectorQuantized = 0x10,

	/// <summary>Small vector quantization preceded by a mipmap chain.</summary>
	SmallVectorQuantizedMipmaps = 0x11,

	/// <summary>An alias for the twiddled mipmap layout used by some tools.</summary>
	SquareTwiddledMipmapsAlias = 0x12,
}
