namespace PsoBB.Platform;

/// <summary>
/// The reference point used when moving a game file position.
/// </summary>
/// <remarks>
/// The values correspond to the origins accepted by the Win32 <c>SetFilePointer</c> call.
/// </remarks>
public enum GameSeekOrigin
{
	/// <summary>
	/// The position is measured from the first byte.
	/// </summary>
	Begin,

	/// <summary>
	/// The position is measured from the current position.
	/// </summary>
	Current,

	/// <summary>
	/// The position is measured from the end of the file.
	/// </summary>
	End,
}
