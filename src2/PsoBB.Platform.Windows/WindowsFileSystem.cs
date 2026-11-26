namespace PsoBB.Platform.Windows;

/// <summary>
/// The client's data root on a Windows volume.
/// </summary>
/// <remarks>
/// Paths are resolved beneath one fixed root with the Win32 file semantics of the .NET file APIs, so names compare without regard to case, open handles share their bytes, and the process directory never changes.
/// </remarks>
public sealed class WindowsFileSystem : IGameFileSystem
{
	private const int BufferSize = 4096;
	private readonly string _root;

	/// <summary>
	/// Opens the data root at <paramref name="rootDirectory"/>.
	/// </summary>
	/// <param name="rootDirectory">The existing absolute directory that holds the client's data.</param>
	/// <exception cref="ArgumentNullException"><paramref name="rootDirectory"/> is null or empty.</exception>
	/// <exception cref="DirectoryNotFoundException">The directory does not exist.</exception>
	public WindowsFileSystem(string rootDirectory)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(rootDirectory);
		string fullPath = Path.GetFullPath(rootDirectory);
		if (!Directory.Exists(fullPath))
			throw new DirectoryNotFoundException($"The data root '{rootDirectory}' does not exist.");
		_root = AddExtendedPrefix(Path.TrimEndingDirectorySeparator(fullPath));
	}

	/// <inheritdoc/>
	public bool FileExists(GamePath path)
	{
		if (path.IsRoot)
			return false;
		return File.Exists(Resolve(path));
	}

	/// <inheritdoc/>
	public bool DirectoryExists(GamePath path) => Directory.Exists(Resolve(path));

	/// <inheritdoc/>
	public IGameFile? Open(GamePath path, GameFileAccess access, GameFileMode mode)
	{
		ValidateAccess(access);
		ValidateMode(access, mode);
		if (path.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", nameof(path));
		FileMode fileMode = mode switch
		{
			GameFileMode.Open => FileMode.Open,
			GameFileMode.CreateNew => FileMode.CreateNew,
			GameFileMode.Create => FileMode.Create,
			GameFileMode.Truncate => FileMode.Truncate,
			GameFileMode.OpenOrCreate => FileMode.OpenOrCreate,
			_ => throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown file mode."),
		};
		FileAccess fileAccess = access switch
		{
			GameFileAccess.Read => FileAccess.Read,
			GameFileAccess.Write => FileAccess.Write,
			GameFileAccess.ReadWrite => FileAccess.ReadWrite,
			_ => throw new ArgumentOutOfRangeException(nameof(access), access, "Unknown access flags."),
		};
		try
		{
			FileStream stream = new(Resolve(path), fileMode, fileAccess, FileShare.ReadWrite | FileShare.Delete, BufferSize, FileOptions.None);
			return new WindowsGameFile(path, access, stream);
		}
		catch (IOException)
		{
			return null;
		}
		catch (UnauthorizedAccessException)
		{
			return null;
		}
		catch (NotSupportedException)
		{
			return null;
		}
	}

	/// <inheritdoc/>
	public IReadOnlyList<GameFileInfo> Find(GamePath directory, string pattern)
	{
		ArgumentNullException.ThrowIfNull(pattern);
		if (pattern.Length == 0)
			throw new ArgumentException("A search pattern is required.", nameof(pattern));
		if (pattern.Contains('/') || pattern.Contains('\\'))
			throw new ArgumentException("A search pattern cannot contain a directory separator.", nameof(pattern));
		if (!DirectoryExists(directory))
			return Array.Empty<GameFileInfo>();
		List<GameFileInfo> entries = [];
		try
		{
			foreach (string entry in Directory.EnumerateFileSystemEntries(Resolve(directory)))
			{
				string name = Path.GetFileName(entry);
				if (!Matches(name, pattern))
					continue;
				string relative = directory.IsRoot ? name : $"{directory}/{name}";
				if (!GamePath.TryParse(relative, out GamePath entryPath))
					continue;
				FileAttributes attributes;
				try
				{
					attributes = File.GetAttributes(entry);
				}
				catch (IOException)
				{
					continue;
				}
				catch (UnauthorizedAccessException)
				{
					continue;
				}
				bool isDirectory = (attributes & FileAttributes.Directory) != 0;
				long length = 0;
				if (!isDirectory)
				{
					try
					{
						length = new FileInfo(entry).Length;
					}
					catch (IOException)
					{
						continue;
					}
					catch (UnauthorizedAccessException)
					{
						continue;
					}
				}
				entries.Add(new GameFileInfo(entryPath, length, isDirectory));
			}
		}
		catch (DirectoryNotFoundException)
		{
			return Array.Empty<GameFileInfo>();
		}
		catch (UnauthorizedAccessException)
		{
			return Array.Empty<GameFileInfo>();
		}
		catch (IOException)
		{
			return Array.Empty<GameFileInfo>();
		}
		entries.Sort(static (left, right) => StringComparer.OrdinalIgnoreCase.Compare(left.Path.ToString(), right.Path.ToString()));
		return entries;
	}

	/// <inheritdoc/>
	public bool CreateDirectory(GamePath path)
	{
		if (path.IsRoot)
			return false;
		string fullPath = Resolve(path);
		if (Directory.Exists(fullPath) || File.Exists(fullPath) || !Directory.Exists(Resolve(path.Parent)))
			return false;
		try
		{
			Directory.CreateDirectory(fullPath);
			return true;
		}
		catch (IOException)
		{
			return false;
		}
		catch (UnauthorizedAccessException)
		{
			return false;
		}
	}

	/// <inheritdoc/>
	public bool DeleteFile(GamePath path)
	{
		if (path.IsRoot)
			return false;
		string fullPath = Resolve(path);
		try
		{
			if (!File.Exists(fullPath))
				return false;
			File.Delete(fullPath);
			return true;
		}
		catch (IOException)
		{
			return false;
		}
		catch (UnauthorizedAccessException)
		{
			return false;
		}
	}

	/// <inheritdoc/>
	public bool CopyFile(GamePath source, GamePath destination, bool overwrite)
	{
		if (source == destination || source.IsRoot || destination.IsRoot)
			return false;
		string sourcePath = Resolve(source);
		string destinationPath = Resolve(destination);
		if (!File.Exists(sourcePath) || Directory.Exists(destinationPath) || !Directory.Exists(Resolve(destination.Parent)))
			return false;
		if (!overwrite && File.Exists(destinationPath))
			return false;
		try
		{
			File.Copy(sourcePath, destinationPath, overwrite);
			return true;
		}
		catch (IOException)
		{
			return false;
		}
		catch (UnauthorizedAccessException)
		{
			return false;
		}
	}

	/// <inheritdoc/>
	public bool MoveFile(GamePath source, GamePath destination, bool overwrite)
	{
		if (source == destination || source.IsRoot || destination.IsRoot)
			return false;
		string sourcePath = Resolve(source);
		string destinationPath = Resolve(destination);
		if (!File.Exists(sourcePath) || Directory.Exists(destinationPath) || !Directory.Exists(Resolve(destination.Parent)))
			return false;
		if (!overwrite && File.Exists(destinationPath))
			return false;
		try
		{
			File.Move(sourcePath, destinationPath, overwrite);
			return true;
		}
		catch (IOException)
		{
			return false;
		}
		catch (UnauthorizedAccessException)
		{
			return false;
		}
	}

	private string Resolve(GamePath path)
	{
		if (path.IsRoot)
			return _root;
		return Path.Combine(_root, path.ToString().Replace('/', Path.DirectorySeparatorChar));
	}

	private static void ValidateAccess(GameFileAccess access)
	{
		if (access is GameFileAccess.None || (access & ~GameFileAccess.ReadWrite) != 0)
			throw new ArgumentOutOfRangeException(nameof(access), access, "At least one known access flag is required.");
	}

	private static void ValidateMode(GameFileAccess access, GameFileMode mode)
	{
		if (mode is not (GameFileMode.Open or GameFileMode.CreateNew or GameFileMode.Create or GameFileMode.Truncate or GameFileMode.OpenOrCreate))
			throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown file mode.");
		if ((mode is GameFileMode.Create or GameFileMode.CreateNew or GameFileMode.Truncate) && (access & GameFileAccess.Write) == 0)
			throw new InvalidOperationException($"Mode {mode} requires write access.");
	}

	private static string AddExtendedPrefix(string fullPath)
	{
		if (fullPath.StartsWith(@"\\?\", StringComparison.Ordinal))
			return fullPath;
		if (fullPath.StartsWith(@"\\", StringComparison.Ordinal))
			return @"\\?\UNC\" + fullPath[2..];
		return @"\\?\" + fullPath;
	}

	private static bool Matches(string name, string pattern)
	{
		if (pattern == "*.*")
			return true;
		int nameIndex = 0;
		int patternIndex = 0;
		int starIndex = -1;
		int starNameIndex = 0;
		while (nameIndex < name.Length)
		{
			if (patternIndex < pattern.Length && (pattern[patternIndex] == '?' || char.ToUpperInvariant(pattern[patternIndex]) == char.ToUpperInvariant(name[nameIndex])))
			{
				patternIndex++;
				nameIndex++;
			}
			else if (patternIndex < pattern.Length && pattern[patternIndex] == '*')
			{
				starIndex = patternIndex++;
				starNameIndex = nameIndex;
			}
			else if (starIndex >= 0)
			{
				patternIndex = starIndex + 1;
				nameIndex = ++starNameIndex;
			}
			else
				return false;
		}
		while (patternIndex < pattern.Length && pattern[patternIndex] == '*')
			patternIndex++;
		return patternIndex == pattern.Length;
	}
}
