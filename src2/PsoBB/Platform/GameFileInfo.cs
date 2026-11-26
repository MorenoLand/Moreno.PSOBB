namespace PsoBB.Platform;

/// <summary>
/// One entry returned by a directory search.
/// </summary>
/// <remarks>
/// This carries the name, size and directory flag that <c>FindFirstFileA</c> and <c>FindNextFileA</c> report.
/// </remarks>
/// <param name="Path">The full path relative to the data root.</param>
/// <param name="Length">The file size in bytes, or zero for a directory.</param>
/// <param name="IsDirectory">Whether the entry is a directory.</param>
public readonly record struct GameFileInfo(GamePath Path, long Length, bool IsDirectory)
{
	/// <summary>
	/// Gets the last segment of the entry path.
	/// </summary>
	public string Name => Path.Name;
}
