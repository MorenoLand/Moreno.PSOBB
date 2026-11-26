namespace PsoBB.Platform;

/// <summary>
/// An in-memory file system for tests and headless hosts.
/// </summary>
/// <remarks>
/// Paths ignore case, directories must be created one level at a time, and open handles share the same bytes as the original file system; this implementation is not thread-safe.
/// </remarks>
public sealed class MemoryFileSystem : IGameFileSystem
{
	private readonly Dictionary<string, StoredFile> _files = new(StringComparer.OrdinalIgnoreCase);
	private readonly Dictionary<string, GamePath> _directories = new(StringComparer.OrdinalIgnoreCase) { [string.Empty] = GamePath.Root };

	/// <inheritdoc/>
	public bool FileExists(GamePath path) => _files.ContainsKey(path.ToString());

	/// <inheritdoc/>
	public bool DirectoryExists(GamePath path) => _directories.ContainsKey(path.ToString());

	/// <inheritdoc/>
	public IGameFile? Open(GamePath path, GameFileAccess access, GameFileMode mode)
	{
		if (access is GameFileAccess.None || (access & ~GameFileAccess.ReadWrite) != 0)
			throw new ArgumentOutOfRangeException(nameof(access), access, "At least one known access flag is required.");
		if ((mode is GameFileMode.Create or GameFileMode.CreateNew or GameFileMode.Truncate) && (access & GameFileAccess.Write) == 0)
			throw new InvalidOperationException($"Mode {mode} requires write access.");
		ThrowIfRoot(path, nameof(path));
		string key = path.ToString();
		_files.TryGetValue(key, out StoredFile? file);
		bool parentExists = _directories.ContainsKey(path.Parent.ToString());
		bool directoryCollision = _directories.ContainsKey(key);
		switch (mode)
		{
			case GameFileMode.Open:
				if (file is null)
					return null;
				break;
			case GameFileMode.CreateNew:
				if (file is not null || directoryCollision || !parentExists)
					return null;
				file = new StoredFile(path);
				_files.Add(key, file);
				break;
			case GameFileMode.Create:
				if (directoryCollision || !parentExists)
					return null;
				if (file is null)
				{
					file = new StoredFile(path);
					_files.Add(key, file);
				}
				else
					file.Length = 0;
				break;
			case GameFileMode.Truncate:
				if (file is null)
					return null;
				file.Length = 0;
				break;
			case GameFileMode.OpenOrCreate:
				if (file is null)
				{
					if (directoryCollision || !parentExists)
						return null;
					file = new StoredFile(path);
					_files.Add(key, file);
				}
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown file mode.");
		}
		return new MemoryFile(file, access);
	}

	/// <inheritdoc/>
	public IReadOnlyList<GameFileInfo> Find(GamePath directory, string pattern)
	{
		ArgumentNullException.ThrowIfNull(pattern);
		if (pattern.Length == 0)
			throw new ArgumentException("A search pattern is required.", nameof(pattern));
		if (pattern.Contains('/') || pattern.Contains('\\'))
			throw new ArgumentException("A search pattern cannot contain a directory separator.", nameof(pattern));
		if (!_directories.ContainsKey(directory.ToString()))
			return Array.Empty<GameFileInfo>();
		List<GameFileInfo> entries = [];
		foreach (StoredFile file in _files.Values)
			if (file.Path.Parent == directory && Matches(file.Path.Name, pattern))
				entries.Add(new GameFileInfo(file.Path, file.Length, false));
		foreach (GamePath child in _directories.Values)
			if (!child.IsRoot && child.Parent == directory && Matches(child.Name, pattern))
				entries.Add(new GameFileInfo(child, 0, true));
		entries.Sort(static (left, right) => StringComparer.OrdinalIgnoreCase.Compare(left.Path.ToString(), right.Path.ToString()));
		return entries;
	}

	/// <inheritdoc/>
	public bool CreateDirectory(GamePath path)
	{
		if (path.IsRoot)
			return false;
		string key = path.ToString();
		if (_files.ContainsKey(key) || _directories.ContainsKey(key) || !_directories.ContainsKey(path.Parent.ToString()))
			return false;
		_directories.Add(key, path);
		return true;
	}

	/// <inheritdoc/>
	public bool DeleteFile(GamePath path) => _files.Remove(path.ToString());

	/// <inheritdoc/>
	public bool CopyFile(GamePath source, GamePath destination, bool overwrite)
	{
		if (source == destination || !_files.TryGetValue(source.ToString(), out StoredFile? sourceFile))
			return false;
		ThrowIfRoot(destination, nameof(destination));
		string destinationKey = destination.ToString();
		if (!_directories.ContainsKey(destination.Parent.ToString()) || _directories.ContainsKey(destinationKey))
			return false;
		if (_files.TryGetValue(destinationKey, out StoredFile? destinationFile))
		{
			if (!overwrite)
				return false;
			destinationFile.Bytes = new byte[sourceFile.Length];
			Array.Copy(sourceFile.Bytes, destinationFile.Bytes, sourceFile.Length);
			destinationFile.Length = sourceFile.Length;
			return true;
		}
		StoredFile copy = new(destination)
		{
			Bytes = new byte[sourceFile.Length],
			Length = sourceFile.Length,
		};
		Array.Copy(sourceFile.Bytes, copy.Bytes, sourceFile.Length);
		_files.Add(destinationKey, copy);
		return true;
	}

	/// <inheritdoc/>
	public bool MoveFile(GamePath source, GamePath destination, bool overwrite)
	{
		if (source == destination || !_files.TryGetValue(source.ToString(), out StoredFile? file))
			return false;
		ThrowIfRoot(destination, nameof(destination));
		string destinationKey = destination.ToString();
		if (!_directories.ContainsKey(destination.Parent.ToString()) || _directories.ContainsKey(destinationKey))
			return false;
		if (_files.ContainsKey(destinationKey) && !overwrite)
			return false;
		_files.Remove(source.ToString());
		_files.Remove(destinationKey);
		file.Path = destination;
		_files.Add(destinationKey, file);
		return true;
	}

	private static void ThrowIfRoot(GamePath path, string parameterName)
	{
		if (path.IsRoot)
			throw new ArgumentException("A file path cannot be the data root.", parameterName);
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

	private sealed class StoredFile(GamePath path)
	{
		public GamePath Path { get; set; } = path;
		public byte[] Bytes { get; set; } = [];
		public int Length { get; set; }
	}

	private sealed class MemoryFile(StoredFile file, GameFileAccess access) : IGameFile
	{
		private long _position;
		private bool _disposed;

		public GamePath Path => file.Path;
		public long Length => GetLength();
		public long Position => GetPosition();

		public int Read(Span<byte> buffer)
		{
			ThrowIfDisposed();
			if ((access & GameFileAccess.Read) == 0)
				throw new InvalidOperationException($"The file '{file.Path}' was opened without read access.");
			long available = file.Length - _position;
			if (available <= 0 || buffer.IsEmpty)
				return 0;
			int count = (int)Math.Min(buffer.Length, available);
			file.Bytes.AsSpan((int)_position, count).CopyTo(buffer);
			_position += count;
			return count;
		}

		public void Write(ReadOnlySpan<byte> buffer)
		{
			ThrowIfDisposed();
			if ((access & GameFileAccess.Write) == 0)
				throw new InvalidOperationException($"The file '{file.Path}' was opened without write access.");
			if (buffer.IsEmpty)
				return;
			if (_position > int.MaxValue - buffer.Length)
				throw new IOException($"The write at position {_position} would exceed the maximum file size.");
			int position = (int)_position;
			int required = position + buffer.Length;
			EnsureCapacity(file, required);
			if (position > file.Length)
				Array.Clear(file.Bytes, file.Length, position - file.Length);
			buffer.CopyTo(file.Bytes.AsSpan(position));
			file.Length = Math.Max(file.Length, required);
			_position = required;
		}

		public long Seek(long offset, GameSeekOrigin origin)
		{
			ThrowIfDisposed();
			long reference = origin switch
			{
				GameSeekOrigin.Begin => 0,
				GameSeekOrigin.Current => _position,
				GameSeekOrigin.End => file.Length,
				_ => throw new ArgumentOutOfRangeException(nameof(origin), origin, "Unknown seek origin."),
			};
			Int128 target = (Int128)reference + offset;
			if (target < 0 || target > long.MaxValue)
				throw new IOException($"The seek from {reference} by {offset} leaves the addressable file range.");
			_position = (long)target;
			return _position;
		}

		public void SetLength(long length)
		{
			ThrowIfDisposed();
			if ((access & GameFileAccess.Write) == 0)
				throw new InvalidOperationException($"The file '{file.Path}' was opened without write access.");
			if (length < 0 || length > int.MaxValue)
				throw new ArgumentOutOfRangeException(nameof(length), length, "The length is outside the supported file range.");
			EnsureCapacity(file, (int)length);
			int previous = file.Length;
			file.Length = (int)length;
			if (file.Length > previous)
				Array.Clear(file.Bytes, previous, file.Length - previous);
		}

		public void Flush() => ThrowIfDisposed();

		public void Dispose() => _disposed = true;

		private long GetLength()
		{
			ThrowIfDisposed();
			return file.Length;
		}

		private long GetPosition()
		{
			ThrowIfDisposed();
			return _position;
		}

		private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

		private static void EnsureCapacity(StoredFile file, int required)
		{
			if (required <= file.Bytes.Length)
				return;
			int capacity = file.Bytes.Length == 0 ? 16 : file.Bytes.Length;
			while (capacity < required)
				capacity = capacity > int.MaxValue / 2 ? int.MaxValue : capacity * 2;
			byte[] grown = new byte[capacity];
			Array.Copy(file.Bytes, grown, file.Length);
			file.Bytes = grown;
		}
	}
}
