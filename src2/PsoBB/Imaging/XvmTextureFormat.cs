namespace PsoBB.Imaging;

/// <summary>
/// The FourCC compression codes used by the client's XVRT texture chunks.
/// </summary>
public enum XvmTextureFormat : uint
{
	/// <summary>BC1 with optional one-bit transparency.</summary>
	Dxt1 = 0x31545844,

	/// <summary>BC2 with premultiplied alpha, decoded as BC2.</summary>
	Dxt2 = 0x32545844,

	/// <summary>BC2 with explicit four-bit alpha.</summary>
	Dxt3 = 0x33545844,

	/// <summary>BC3 with premultiplied alpha, decoded as BC3.</summary>
	Dxt4 = 0x34545844,

	/// <summary>BC3 with interpolated alpha.</summary>
	Dxt5 = 0x35545844,
}
