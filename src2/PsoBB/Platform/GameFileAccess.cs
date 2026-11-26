namespace PsoBB.Platform;

/// <summary>
/// The operations an open game file permits.
/// </summary>
/// <remarks>
/// The values mirror the Win32 generic access bits passed to <c>CreateFileA</c>.
/// </remarks>
[Flags]
public enum GameFileAccess
{
	/// <summary>
	/// No access; not a valid open request.
	/// </summary>
	None = 0,

	/// <summary>
	/// The file can be read.
	/// </summary>
	Read = 1,

	/// <summary>
	/// The file can be written, resized and flushed.
	/// </summary>
	Write = 2,

	/// <summary>
	/// The file can be read and written.
	/// </summary>
	ReadWrite = Read | Write,
}
