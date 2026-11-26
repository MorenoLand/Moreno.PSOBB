namespace PsoBB.Imaging;

/// <summary>
/// The optional fields present in a PVM texture entry.
/// </summary>
[Flags]
public enum PvmArchiveFlags : ushort
{
	/// <summary>No optional entry fields are present.</summary>
	None = 0,

	/// <summary>Each entry carries a global texture index.</summary>
	GlobalIndices = 0x01,

	/// <summary>Each entry carries a packed width and height exponent.</summary>
	Dimensions = 0x02,

	/// <summary>Each entry carries its storage format.</summary>
	Formats = 0x04,

	/// <summary>Each entry carries a twenty-eight byte name.</summary>
	Filenames = 0x08,
}
