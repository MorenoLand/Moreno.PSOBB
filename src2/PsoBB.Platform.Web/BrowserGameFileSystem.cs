namespace PsoBB.Platform.Web;

/// <summary>
/// The in-memory data root of a browser client, filled before the game starts.
/// </summary>
public sealed class BrowserGameFileSystem : IGameFileSystem
{
	private readonly MemoryFileSystem _files = new();

	/// <summary>
	/// Adds a directory and every missing parent below the data root.
	/// </summary>
	/// <param name="path">The directory path.</param>
	public void AddDirectory(GamePath path) => EnsureDirectory(path);

	/// <summary>
	/// Adds or replaces a file, creating its parent directories.
	/// </summary>
	/// <param name="path">The file path.</param>
	/// <param name="content">The file bytes.</param>
	public void AddFile(GamePath path, ReadOnlySpan<byte> content)
	{
		if (path.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", nameof(path));
		EnsureDirectory(path.Parent);
		using IGameFile file = _files.Open(path, GameFileAccess.ReadWrite, GameFileMode.Create) ?? throw new InvalidOperationException($"The path '{path}' collides with a directory.");
		file.Write(content);
	}

	/// <summary>
	/// Fills the file system from a host manifest and its file contents.
	/// </summary>
	/// <param name="host">The host that supplies the manifest and bytes.</param>
	public void LoadFrom(IBrowserDataHost host)
	{
		ArgumentNullException.ThrowIfNull(host);
		foreach (string line in host.GetManifest().Split('\n'))
		{
			string entry = line.TrimEnd('\r');
			if (entry.Length == 0)
				continue;
			if (entry.Length < 3 || entry[1] != ' ')
				throw new FormatException($"The data manifest line '{entry}' is not a directory or file entry.");
			GamePath path = GamePath.Parse(entry[2..]);
			if (entry[0] == 'D')
				AddDirectory(path);
			else if (entry[0] == 'F')
				AddFile(path, host.Read(path.ToString()) ?? throw new InvalidOperationException($"The data host did not supply '{path}'."));
			else
				throw new FormatException($"The data manifest line '{entry}' has an unknown kind.");
		}
	}

	/// <inheritdoc/>
	public bool FileExists(GamePath path) => _files.FileExists(path);

	/// <inheritdoc/>
	public bool DirectoryExists(GamePath path) => _files.DirectoryExists(path);

	/// <inheritdoc/>
	public IGameFile? Open(GamePath path, GameFileAccess access, GameFileMode mode) => _files.Open(path, access, mode);

	/// <inheritdoc/>
	public IReadOnlyList<GameFileInfo> Find(GamePath directory, string pattern) => _files.Find(directory, pattern);

	/// <inheritdoc/>
	public bool CreateDirectory(GamePath path) => _files.CreateDirectory(path);

	/// <inheritdoc/>
	public bool DeleteFile(GamePath path) => _files.DeleteFile(path);

	/// <inheritdoc/>
	public bool CopyFile(GamePath source, GamePath destination, bool overwrite) => _files.CopyFile(source, destination, overwrite);

	/// <inheritdoc/>
	public bool MoveFile(GamePath source, GamePath destination, bool overwrite) => _files.MoveFile(source, destination, overwrite);

	private void EnsureDirectory(GamePath path)
	{
		if (path.IsRoot || _files.DirectoryExists(path))
			return;
		EnsureDirectory(path.Parent);
		if (!_files.CreateDirectory(path))
			throw new InvalidOperationException($"The path '{path}' collides with a file.");
	}
}
