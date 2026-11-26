using PsoBB.Archives;
using PsoBB.Platform;

namespace PsoBB.Data;

/// <summary>
/// Owns the client's data archives and resolves logical names against loose files and archive entries.
/// </summary>
/// <remarks>
/// All archives are read from the platform file system at construction, so no archive handle outlives start-up. A named read checks the data root first and then each archive in registration order; the original stream loader does the same, and its file opener rejects a zero-length loose file so the archive entry wins. Decoded entries are cached until the registry is disposed. The registry is not thread-safe, matching the single-threaded client.
/// </remarks>
public sealed class DataFileRegistry : IDataFiles, IDisposable
{
	private readonly IGameFileSystem _fileSystem;
	private readonly DataArchiveFile[] _archives;
	private readonly Dictionary<string, ReadOnlyMemory<byte>> _cache = new(StringComparer.OrdinalIgnoreCase);
	private bool _disposed;

	/// <summary>
	/// Opens the archives named by <paramref name="archives"/> from the data root.
	/// </summary>
	/// <param name="fileSystem">The platform storage that supplies loose files and archive bytes.</param>
	/// <param name="archives">The archives to own, in lookup order.</param>
	/// <exception cref="ArgumentException">An archive is registered more than once.</exception>
	/// <exception cref="FileNotFoundException">An archive is absent.</exception>
	/// <exception cref="IOException">An archive ended before its declared length.</exception>
	/// <exception cref="ArchiveFormatException">An archive header or directory is invalid.</exception>
	public DataFileRegistry(IGameFileSystem fileSystem, params DataArchiveSource[] archives)
	{
		ArgumentNullException.ThrowIfNull(fileSystem);
		ArgumentNullException.ThrowIfNull(archives);
		_fileSystem = fileSystem;
		List<DataArchiveFile> opened = [];
		HashSet<string> paths = new(StringComparer.OrdinalIgnoreCase);
		foreach (DataArchiveSource source in archives)
		{
			if (!paths.Add(source.Path.ToString()))
				throw new ArgumentException($"The archive '{source.Path}' is registered more than once.", nameof(archives));
			opened.Add(OpenArchive(source));
		}
		_archives = [.. opened];
	}

	/// <summary>
	/// Gets the opened archives in lookup order.
	/// </summary>
	public IReadOnlyList<DataArchiveFile> Archives
	{
		get
		{
			ThrowIfDisposed();
			return _archives;
		}
	}

	/// <inheritdoc/>
	public bool Exists(string name)
	{
		ArgumentNullException.ThrowIfNull(name);
		ThrowIfDisposed();
		return TryGetLength(name, out _);
	}

	/// <summary>
	/// Returns the length of a loose file or archive entry in bytes.
	/// </summary>
	/// <param name="name">The logical file name.</param>
	/// <returns>The loose file length, or the decoded archive entry length.</returns>
	/// <exception cref="FileNotFoundException">No loose file or archive entry has this name.</exception>
	[Original(0x005BBE24)]
	public int GetLength(string name)
	{
		ArgumentNullException.ThrowIfNull(name);
		ThrowIfDisposed();
		return TryGetLength(name, out int length) ? length : throw Missing(name);
	}

	/// <inheritdoc/>
	public ReadOnlyMemory<byte> Read(string name)
	{
		ArgumentNullException.ThrowIfNull(name);
		ThrowIfDisposed();
		return TryResolve(name, out ReadOnlyMemory<byte> data) ? data : throw Missing(name);
	}

	/// <inheritdoc/>
	public bool TryRead(string name, out ReadOnlyMemory<byte> data)
	{
		ArgumentNullException.ThrowIfNull(name);
		ThrowIfDisposed();
		return TryResolve(name, out data);
	}

	/// <summary>
	/// Gets an opened archive by its registered path, ignoring case.
	/// </summary>
	/// <param name="path">The archive path relative to the data root.</param>
	/// <returns>The opened archive.</returns>
	/// <exception cref="FormatException"><paramref name="path"/> is not a portable relative path.</exception>
	/// <exception cref="KeyNotFoundException">No archive is registered at this path.</exception>
	public DataArchiveFile GetArchive(string path)
	{
		ArgumentNullException.ThrowIfNull(path);
		ThrowIfDisposed();
		GamePath wanted = GamePath.Parse(path);
		foreach (DataArchiveFile archive in _archives)
			if (archive.Path == wanted)
				return archive;
		throw new KeyNotFoundException($"No archive is registered at '{path}'.");
	}

	/// <summary>
	/// Releases the decoded-entry cache. The registry can no longer be used.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_cache.Clear();
	}

	private bool TryResolve(string name, out ReadOnlyMemory<byte> data)
	{
		if (_cache.TryGetValue(name, out data))
			return true;
		if (TryReadLooseFile(name, out data))
		{
			_cache.Add(name, data);
			return true;
		}
		foreach (DataArchiveFile archive in _archives)
		{
			ArchiveEntry? entry = archive.Find(name);
			if (entry is null)
				continue;
			data = archive.Read(entry);
			_cache.Add(name, data);
			return true;
		}
		data = default;
		return false;
	}

	private bool TryGetLength(string name, out int length)
	{
		if (_cache.TryGetValue(name, out ReadOnlyMemory<byte> cached))
		{
			length = cached.Length;
			return true;
		}
		if (GamePath.TryParse(name, out GamePath path) && !path.IsRoot)
		{
			using IGameFile? file = _fileSystem.Open(path, GameFileAccess.Read, GameFileMode.Open);
			if (file is not null && file.Length > 0)
			{
				length = ReadableLength(file, path);
				return true;
			}
		}
		foreach (DataArchiveFile archive in _archives)
		{
			ArchiveEntry? entry = archive.Find(name);
			if (entry is null)
				continue;
			length = entry.IsCompressed ? entry.UncompressedSize : entry.Size;
			return true;
		}
		length = 0;
		return false;
	}

	private bool TryReadLooseFile(string name, out ReadOnlyMemory<byte> data)
	{
		if (!GamePath.TryParse(name, out GamePath path) || path.IsRoot)
		{
			data = default;
			return false;
		}
		using IGameFile? file = _fileSystem.Open(path, GameFileAccess.Read, GameFileMode.Open);
		if (file is null || file.Length <= 0)
		{
			data = default;
			return false;
		}
		data = ReadExactly(file, path);
		return true;
	}

	private DataArchiveFile OpenArchive(DataArchiveSource source)
	{
		using IGameFile file = _fileSystem.Open(source.Path, GameFileAccess.Read, GameFileMode.Open) ?? throw new FileNotFoundException($"The data archive '{source.Path}' is missing.", source.Path.ToString());
		ReadOnlyMemory<byte> bytes = ReadExactly(file, source.Path);
		IArchive archive = source.Format switch
		{
			DataArchiveFormat.Gsl => GslArchive.Open(bytes),
			DataArchiveFormat.Afs => AfsArchive.Open(bytes),
			_ => throw new ArgumentOutOfRangeException(nameof(source), source.Format, "Unknown archive format."),
		};
		return new DataArchiveFile(source.Path, source.Format, archive);
	}

	private static ReadOnlyMemory<byte> ReadExactly(IGameFile file, GamePath path)
	{
		int length = ReadableLength(file, path);
		byte[] bytes = new byte[length];
		int offset = 0;
		while (offset < length)
		{
			int read = file.Read(bytes.AsSpan(offset));
			if (read <= 0)
				throw new IOException($"The file '{path}' ended after {offset} of {length} bytes.");
			offset += read;
		}
		return bytes;
	}

	private static int ReadableLength(IGameFile file, GamePath path)
	{
		if (file.Length > int.MaxValue)
			throw new IOException($"The file '{path}' exceeds the supported {int.MaxValue}-byte range.");
		return (int)file.Length;
	}

	private static FileNotFoundException Missing(string name) => new($"No loose file or archive entry named '{name}' exists.", name);

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
