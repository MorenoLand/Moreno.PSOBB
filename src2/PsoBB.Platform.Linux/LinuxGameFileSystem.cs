using Microsoft.Win32.SafeHandles;

namespace PsoBB.Platform.Linux;

/// <summary>
/// The client's data root on a Linux file system, addressed by relative portable paths.
/// </summary>
/// <remarks>
/// Path segments are resolved without regard to case so game data keeps working when it is copied from a case-insensitive file system. Missing or refused operations return <see langword="null"/> or <see langword="false"/> as the contract requires, and creation modes require write access.
/// </remarks>
public sealed class LinuxGameFileSystem : IGameFileSystem
{
	private readonly string _root;

	/// <summary>
	/// Creates a file system rooted at <paramref name="root"/>.
	/// </summary>
	/// <param name="root">The loaded data folder.</param>
	/// <exception cref="ArgumentException"><paramref name="root"/> is empty or whitespace.</exception>
	public LinuxGameFileSystem(string root)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(root);
		_root = Path.TrimEndingDirectorySeparator(Path.GetFullPath(root));
	}

	/// <summary>
	/// Gets the full host path of the data root.
	/// </summary>
	public string Root => _root;

	/// <inheritdoc/>
	public bool FileExists(GamePath path)
		=> TryResolve(path, out string fullPath, out _) && File.Exists(fullPath);

	/// <inheritdoc/>
	public bool DirectoryExists(GamePath path)
		=> path.IsRoot || (TryResolve(path, out string fullPath, out _) && Directory.Exists(fullPath));

	/// <inheritdoc/>
	public IGameFile? Open(GamePath path, GameFileAccess access, GameFileMode mode)
	{
		if (access is GameFileAccess.None || (access & ~GameFileAccess.ReadWrite) != 0)
			throw new ArgumentOutOfRangeException(nameof(access), access, "At least one known access flag is required.");
		if (mode is not (GameFileMode.Open or GameFileMode.CreateNew or GameFileMode.Create or GameFileMode.Truncate or GameFileMode.OpenOrCreate))
			throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown file mode.");
		if ((mode is GameFileMode.Create or GameFileMode.CreateNew or GameFileMode.Truncate) && (access & GameFileAccess.Write) == 0)
			throw new InvalidOperationException($"Mode {mode} requires write access.");
		if (path.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", nameof(path));
		if (!TryResolveParent(path, out string parentPath, out GamePath parent))
			return null;
		string? existing = FindEntry(parentPath, path.Name);
		bool isDirectory = existing is not null && Directory.Exists(Path.Combine(parentPath, existing));
		string? existingPath = existing is null ? null : Path.Combine(parentPath, existing);
		switch (mode)
		{
			case GameFileMode.Open:
				if (existing is null || isDirectory)
					return null;
				break;
			case GameFileMode.CreateNew:
				if (existing is not null)
					return null;
				break;
			case GameFileMode.Create:
			case GameFileMode.OpenOrCreate:
				if (isDirectory)
					return null;
				break;
			case GameFileMode.Truncate:
				if (existing is null || isDirectory)
					return null;
				break;
		}
		string target = existingPath ?? Path.Combine(parentPath, path.Name);
		GamePath resolvedPath = existing is null ? GamePath.Combine(parent, path.Name) : GamePath.Combine(parent, existing);
		try
		{
			SafeFileHandle handle = File.OpenHandle(target, TranslateMode(mode), TranslateAccess(access), FileShare.ReadWrite | FileShare.Delete);
			return new LinuxGameFile(handle, resolvedPath, access);
		}
		catch (IOException)
		{
			return null;
		}
		catch (UnauthorizedAccessException)
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
		if (!TryResolve(directory, out string fullPath, out GamePath actual) || !Directory.Exists(fullPath))
			return Array.Empty<GameFileInfo>();
		List<GameFileInfo> entries = [];
		try
		{
			foreach (string entry in Directory.EnumerateFileSystemEntries(fullPath))
			{
				string name = Path.GetFileName(entry);
				if (!Matches(name, pattern))
					continue;
				string relative = actual.IsRoot ? name : $"{actual}/{name}";
				if (!GamePath.TryParse(relative, out GamePath entryPath))
					continue;
				bool isDirectory = Directory.Exists(entry);
				long length = isDirectory ? 0 : new FileInfo(entry).Length;
				entries.Add(new GameFileInfo(entryPath, length, isDirectory));
			}
		}
		catch (IOException)
		{
			return Array.Empty<GameFileInfo>();
		}
		catch (UnauthorizedAccessException)
		{
			return Array.Empty<GameFileInfo>();
		}
		entries.Sort(static (left, right) =>
		{
			int order = StringComparer.OrdinalIgnoreCase.Compare(left.Path.ToString(), right.Path.ToString());
			return order != 0 ? order : StringComparer.Ordinal.Compare(left.Path.ToString(), right.Path.ToString());
		});
		return entries;
	}

	/// <inheritdoc/>
	public bool CreateDirectory(GamePath path)
	{
		if (path.IsRoot || !TryResolveParent(path, out string parentPath, out _))
			return false;
		if (!Directory.Exists(parentPath) || FindEntry(parentPath, path.Name) is not null)
			return false;
		try
		{
			Directory.CreateDirectory(Path.Combine(parentPath, path.Name));
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
		if (path.IsRoot || !TryResolve(path, out string fullPath, out _) || !File.Exists(fullPath))
			return false;
		try
		{
			File.Delete(fullPath);
			return !File.Exists(fullPath);
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
		if (source == destination || source.IsRoot)
			return false;
		if (!TryResolve(source, out string sourcePath, out _) || !File.Exists(sourcePath))
			return false;
		if (destination.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", nameof(destination));
		if (!TryResolveParent(destination, out string parentPath, out _) || !Directory.Exists(parentPath))
			return false;
		string? existing = FindEntry(parentPath, destination.Name);
		if (existing is not null && (Directory.Exists(Path.Combine(parentPath, existing)) || !overwrite))
			return false;
		try
		{
			File.Copy(sourcePath, Path.Combine(parentPath, existing ?? destination.Name), overwrite);
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
		if (source == destination || source.IsRoot)
			return false;
		if (!TryResolve(source, out string sourcePath, out _) || !File.Exists(sourcePath))
			return false;
		if (destination.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", nameof(destination));
		if (!TryResolveParent(destination, out string parentPath, out _) || !Directory.Exists(parentPath))
			return false;
		string? existing = FindEntry(parentPath, destination.Name);
		if (existing is not null && (Directory.Exists(Path.Combine(parentPath, existing)) || !overwrite))
			return false;
		try
		{
			File.Move(sourcePath, Path.Combine(parentPath, existing ?? destination.Name), overwrite);
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

	private bool TryResolve(GamePath path, out string fullPath, out GamePath actualPath)
	{
		fullPath = _root;
		actualPath = GamePath.Root;
		if (path.IsRoot)
			return true;
		foreach (string segment in path.ToString().Split('/'))
		{
			string? entry = FindEntry(fullPath, segment);
			if (entry is null)
				return false;
			fullPath = Path.Combine(fullPath, entry);
			actualPath = actualPath.IsRoot ? GamePath.Parse(entry) : GamePath.Combine(actualPath, entry);
		}
		return true;
	}

	private bool TryResolveParent(GamePath path, out string parentPath, out GamePath parent)
		=> TryResolve(path.Parent, out parentPath, out parent);

	private static string? FindEntry(string directory, string name)
	{
		string exact = Path.Combine(directory, name);
		if (File.Exists(exact) || Directory.Exists(exact))
			return name;
		if (!Directory.Exists(directory))
			return null;
		try
		{
			string? match = null;
			foreach (string entry in Directory.EnumerateFileSystemEntries(directory))
			{
				string candidate = Path.GetFileName(entry);
				if (!string.Equals(candidate, name, StringComparison.OrdinalIgnoreCase))
					continue;
				if (match is null)
				{
					match = candidate;
					continue;
				}
				int order = StringComparer.OrdinalIgnoreCase.Compare(candidate, match);
				if (order < 0 || (order == 0 && StringComparer.Ordinal.Compare(candidate, match) < 0))
					match = candidate;
			}
			return match;
		}
		catch (IOException)
		{
			return null;
		}
		catch (UnauthorizedAccessException)
		{
			return null;
		}
	}

	private static FileMode TranslateMode(GameFileMode mode) => mode switch
	{
		GameFileMode.Open => FileMode.Open,
		GameFileMode.CreateNew => FileMode.CreateNew,
		GameFileMode.Create => FileMode.Create,
		GameFileMode.Truncate => FileMode.Truncate,
		GameFileMode.OpenOrCreate => FileMode.OpenOrCreate,
		_ => throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown file mode."),
	};

	private static FileAccess TranslateAccess(GameFileAccess access) => access switch
	{
		GameFileAccess.Read => FileAccess.Read,
		GameFileAccess.Write => FileAccess.Write,
		GameFileAccess.ReadWrite => FileAccess.ReadWrite,
		_ => throw new ArgumentOutOfRangeException(nameof(access), access, "Unknown file access."),
	};

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
