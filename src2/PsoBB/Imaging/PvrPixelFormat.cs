namespace PsoBB.Imaging;

/// <summary>
/// The pixel layout stored in a PowerVR texture.
/// </summary>
public enum PvrPixelFormat : byte
{
	/// <summary>One alpha bit with five bits each for red, green and blue.</summary>
	Argb1555 = 0,

	/// <summary>Five red bits, six green bits and five blue bits.</summary>
	Rgb565 = 1,

	/// <summary>Four bits each for alpha, red, green and blue.</summary>
	Argb4444 = 2,

	/// <summary>Packed luminance and chrominance, not used by the client.</summary>
	Yuv422 = 3,

	/// <summary>Two eight-bit bump-map channels, not used by the client.</summary>
	Bump88 = 4,

	/// <summary>Five bits each for red, green and blue with an opaque alpha.</summary>
	Rgb555 = 5,

	/// <summary>Packed luminance and chrominance, not used by the client.</summary>
	Yuv420 = 6,
}
