namespace PsoBB.Platform;

/// <summary>
/// Storage for the client's data root, addressed by relative <see cref="GamePath"/> values.
/// </summary>
/// <remarks>
/// These calls replace <c>CreateFileA</c>, <c>ReadFile</c>, <c>WriteFile</c>, <c>SetFilePointer</c>, <c>GetFileSize</c>, <c>FindFirstFileA</c>, <c>FindNextFileA</c>, <c>DeleteFileA</c>, <c>CopyFileA</c>, <c>MoveFileA</c>, <c>CreateDirectoryA</c> and <c>GetFileAttributesA</c>; paths are relative to a root the host chooses, so the client never changes the process directory. Calls are synchronous, so a browser host preloads the data root and serves reads from memory.
/// </remarks>
public interface IGameFileSystem
{
	/// <summary>
	/// Returns whether a file exists at <paramref name="path"/>.
	/// </summary>
	/// <param name="path">The file path.</param>
	/// <returns><see langword="true"/> when the path names a file.</returns>
	bool FileExists(GamePath path);

	/// <summary>
	/// Returns whether a directory exists at <paramref name="path"/>.
	/// </summary>
	/// <param name="path">The directory path; the root always exists.</param>
	/// <returns><see langword="true"/> when the path names a directory.</returns>
	bool DirectoryExists(GamePath path);

	/// <summary>
	/// Opens a file with the requested access and creation mode.
	/// </summary>
	/// <param name="path">The file path.</param>
	/// <param name="access">The permitted operations.</param>
	/// <param name="mode">The existing-file and creation behaviour.</param>
	/// <returns>The open file, or <see langword="null"/> when the host refused the request.</returns>
	/// <remarks>The Create, CreateNew and Truncate modes require write access, and a refusal returns <see langword="null"/> rather than throwing.</remarks>
	IGameFile? Open(GamePath path, GameFileAccess access, GameFileMode mode);

	/// <summary>
	/// Lists the direct files and directories of <paramref name="directory"/> that match a wildcard.
	/// </summary>
	/// <param name="directory">The directory to search; the root is the loaded data folder.</param>
	/// <param name="pattern">A name pattern with <c>*</c> and <c>?</c>, without a directory separator; the legacy <c>*.*</c> matches every name.</param>
	/// <returns>The matching entries sorted by path; empty when the directory is missing.</returns>
	IReadOnlyList<GameFileInfo> Find(GamePath directory, string pattern);

	/// <summary>
	/// Creates one directory whose parent must already exist.
	/// </summary>
	/// <param name="path">The directory path.</param>
	/// <returns><see langword="true"/> when the directory was created.</returns>
	bool CreateDirectory(GamePath path);

	/// <summary>
	/// Deletes a file.
	/// </summary>
	/// <param name="path">The file path.</param>
	/// <returns><see langword="true"/> when the file was removed.</returns>
	bool DeleteFile(GamePath path);

	/// <summary>
	/// Copies a file to a path whose parent directory exists.
	/// </summary>
	/// <param name="source">The file to copy.</param>
	/// <param name="destination">The destination path.</param>
	/// <param name="overwrite">Whether an existing destination is replaced.</param>
	/// <returns><see langword="true"/> when the copy succeeded.</returns>
	bool CopyFile(GamePath source, GamePath destination, bool overwrite);

	/// <summary>
	/// Moves or renames a file to a path whose parent directory exists.
	/// </summary>
	/// <param name="source">The file to move.</param>
	/// <param name="destination">The destination path.</param>
	/// <param name="overwrite">Whether an existing destination is replaced.</param>
	/// <returns><see langword="true"/> when the move succeeded.</returns>
	bool MoveFile(GamePath source, GamePath destination, bool overwrite);
}
