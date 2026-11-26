namespace PsoBB.Imaging;

/// <summary>
/// The pixel formats selected by an XVRT texture chunk's format index.
/// </summary>
/// <remarks>
/// The chunk stores an index into the client's format table, not a FourCC; the table maps the
/// DXT entries to the matching block compression and the low entries to uncompressed pixel formats.
/// </remarks>
public enum XvmTextureFormat : uint
{
	/// <summary>Four-channel 8-bit BGRA pixels.</summary>
	Bgra8888 = 1,

	/// <summary>Three-channel 8-bit BGR pixels with an unused fourth byte.</summary>
	Bgrx8888 = 2,

	/// <summary>16-bit pixels with one alpha bit and five bits each for red, green and blue.</summary>
	A1R5G5B5 = 3,

	/// <summary>16-bit pixels with four bits per channel.</summary>
	A4R4G4B4 = 4,

	/// <summary>BC1 with optional one-bit transparency.</summary>
	Dxt1 = 6,

	/// <summary>BC2 with premultiplied alpha, decoded as BC2.</summary>
	Dxt2 = 7,

	/// <summary>BC2 with explicit four-bit alpha.</summary>
	Dxt3 = 8,

	/// <summary>BC3 with premultiplied alpha, decoded as BC3.</summary>
	Dxt4 = 9,

	/// <summary>BC3 with interpolated alpha.</summary>
	Dxt5 = 10,
}
