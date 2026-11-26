namespace PsoBB.Platform;

/// <summary>
/// How an open request treats an existing file or creates a missing one.
/// </summary>
/// <remarks>
/// The values correspond to the Win32 creation dispositions used with <c>CreateFileA</c>.
/// </remarks>
public enum GameFileMode
{
	/// <summary>
	/// Opens an existing file and fails when it is missing.
	/// </summary>
	Open,

	/// <summary>
	/// Creates a new file and fails when the path already exists.
	/// </summary>
	CreateNew,

	/// <summary>
	/// Creates a file or truncates an existing one.
	/// </summary>
	Create,

	/// <summary>
	/// Opens an existing file and truncates it to zero bytes.
	/// </summary>
	Truncate,

	/// <summary>
	/// Opens an existing file or creates an empty one.
	/// </summary>
	OpenOrCreate,
}
