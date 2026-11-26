using System.Buffers.Binary;
using System.Runtime.InteropServices;
using PsoBB.Archives;
using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the data-file registry's lookup order, archive support, caching, validation and disposal.
/// </summary>
public sealed class DataFileRegistryTests
{
	/// <summary>
	/// A GSL entry resolves by name and reports its decoded length.
	/// </summary>
	[Fact]
	public void ReadsANamedArchiveEntry()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("unitxt_j.prs", [1, 2, 3], 0)));
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.True(registry.Exists("unitxt_j.prs"));
		Assert.Equal(3, registry.GetLength("unitxt_j.prs"));
		Assert.Equal([1, 2, 3], registry.Read("unitxt_j.prs").ToArray());
		Assert.True(registry.TryRead("unitxt_j.prs", out ReadOnlyMemory<byte> data));
		Assert.Equal([1, 2, 3], data.ToArray());
	}

	/// <summary>
	/// A loose file shadows an archive entry with the same name.
	/// </summary>
	[Fact]
	public void PrefersALooseFileOverAnArchiveEntry()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("shared.bin", [1, 2], 0)));
		AddFile(files, "shared.bin", [9, 9, 9]);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal([9, 9, 9], registry.Read("shared.bin").ToArray());
		Assert.Equal(3, registry.GetLength("shared.bin"));
	}

	/// <summary>
	/// The first directory entry wins when a GSL archive repeats a name.
	/// </summary>
	[Fact]
	public void UsesTheFirstDuplicateEntry()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("dup.bin", [1], 0), ("dup.bin", [2], 0)));
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal([1], registry.Read("dup.bin").ToArray());
	}

	/// <summary>
	/// Archive names fold case in either direction.
	/// </summary>
	[Fact]
	public void MatchesArchiveNamesIgnoringCase()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("unitxt_j.prs", [7], 0)));
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal([7], registry.Read("UNITXT_J.PRS").ToArray());
		Assert.True(registry.Exists("UnItXt_J.PrS"));
		Assert.Equal(1, registry.GetLength("UNITXT_J.PRS"));
	}

	/// <summary>
	/// Loose names fold case through the platform file system.
	/// </summary>
	[Fact]
	public void MatchesLooseNamesIgnoringCase()
	{
		MemoryFileSystem files = new();
		AddFile(files, "Player.dat", [4, 5]);
		using DataFileRegistry registry = new(files);
		Assert.Equal([4, 5], registry.Read("player.dat").ToArray());
	}

	/// <summary>
	/// A decoded compressed entry is cached and a second spelling reuses the same bytes.
	/// </summary>
	[Fact]
	public void CachesADecodedArchiveEntry()
	{
		byte[] payload = "cached payload"u8.ToArray();
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("cached.bin", ArchiveSamples.Compress(payload), payload.Length)));
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		ReadOnlyMemory<byte> first = registry.Read("cached.bin");
		ReadOnlyMemory<byte> second = registry.Read("CACHED.BIN");
		Assert.Equal(payload, first.ToArray());
		Assert.Equal(payload, second.ToArray());
		Assert.True(MemoryMarshal.TryGetArray(first, out ArraySegment<byte> firstSegment));
		Assert.True(MemoryMarshal.TryGetArray(second, out ArraySegment<byte> secondSegment));
		Assert.Same(firstSegment.Array, secondSegment.Array);
	}

	/// <summary>
	/// A loose file is read once and stays available after the file is removed.
	/// </summary>
	[Fact]
	public void CachesALooseFileAfterTheFileIsRemoved()
	{
		MemoryFileSystem files = new();
		AddFile(files, "loose.bin", [5, 6]);
		using DataFileRegistry registry = new(files);
		Assert.Equal([5, 6], registry.Read("loose.bin").ToArray());
		Assert.True(files.DeleteFile(GamePath.Parse("loose.bin")));
		Assert.Equal([5, 6], registry.Read("loose.bin").ToArray());
		Assert.True(registry.Exists("loose.bin"));
		Assert.Equal(2, registry.GetLength("loose.bin"));
	}

	/// <summary>
	/// A missing name is reported without inventing data.
	/// </summary>
	[Fact]
	public void ReportsAMissingName()
	{
		MemoryFileSystem files = new();
		using DataFileRegistry registry = new(files);
		Assert.False(registry.Exists("missing.bin"));
		Assert.False(registry.TryRead("missing.bin", out ReadOnlyMemory<byte> data));
		Assert.True(data.IsEmpty);
		FileNotFoundException exception = Assert.Throws<FileNotFoundException>(() => registry.Read("missing.bin"));
		Assert.Equal("missing.bin", exception.FileName);
		Assert.Throws<FileNotFoundException>(() => registry.GetLength("missing.bin"));
	}

	/// <summary>
	/// An empty archive entry is present and zero bytes long.
	/// </summary>
	[Fact]
	public void ReadsAnEmptyArchiveEntry()
	{
		byte[] archive = ArchiveSamples.Gsl(("empty.bin", [], 0));
		Array.Resize(ref archive, GslArchive.SectorSize);
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", archive);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.True(registry.TryRead("empty.bin", out ReadOnlyMemory<byte> data));
		Assert.True(data.IsEmpty);
		Assert.True(registry.Exists("empty.bin"));
		Assert.Equal(0, registry.GetLength("empty.bin"));
	}

	/// <summary>
	/// The original file opener rejects an empty loose file, so the archive entry with the same name wins.
	/// </summary>
	[Fact]
	public void TreatsAnEmptyLooseFileAsMissing()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("empty.dat", [4, 5], 0)));
		AddFile(files, "empty.dat", []);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal([4, 5], registry.Read("empty.dat").ToArray());
		Assert.Equal(2, registry.GetLength("empty.dat"));
		Assert.True(registry.Exists("empty.dat"));
	}

	/// <summary>
	/// Lengths come from the loose file or the decoded archive entry.
	/// </summary>
	[Fact]
	public void ReportsLengthsFromFilesAndArchives()
	{
		byte[] payload = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("plain.bin", [1, 2, 3], 0), ("packed.bin", ArchiveSamples.Compress(payload), payload.Length)));
		AddFile(files, "loose.bin", [1, 2, 3, 4, 5]);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal(3, registry.GetLength("plain.bin"));
		Assert.Equal(payload.Length, registry.GetLength("packed.bin"));
		Assert.Equal(payload, registry.Read("packed.bin").ToArray());
		Assert.Equal(5, registry.GetLength("loose.bin"));
	}

	/// <summary>
	/// AFS sections resolve by index and carry no names.
	/// </summary>
	[Fact]
	public void ReadsAfsSections()
	{
		MemoryFileSystem files = new();
		AddFile(files, "plJtex.afs", ArchiveSamples.Afs((0x100, [1, 2]), (0x200, [3, 4, 5])));
		using DataFileRegistry registry = new(files, DataArchiveSource.Afs("plJtex.afs"));
		DataArchiveFile archive = registry.GetArchive("PLJTEX.AFS");
		Assert.Equal(DataArchiveFormat.Afs, archive.Format);
		Assert.Equal(2, archive.Count);
		Assert.Equal([1, 2], archive.ReadEntry(0).ToArray());
		Assert.Equal([3, 4, 5], archive.ReadEntry(1).ToArray());
		Assert.Throws<ArgumentOutOfRangeException>(() => archive.ReadEntry(2));
		Assert.False(registry.Exists("0"));
	}

	/// <summary>
	/// Archives are searched in registration order.
	/// </summary>
	[Fact]
	public void SearchesArchivesInRegistrationOrder()
	{
		MemoryFileSystem files = new();
		AddFile(files, "first.gsl", ArchiveSamples.Gsl(("same.bin", [1], 0)));
		AddFile(files, "second.gsl", ArchiveSamples.Gsl(("same.bin", [2], 0)));
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("first.gsl"), DataArchiveSource.Gsl("second.gsl"));
		Assert.Equal([1], registry.Read("same.bin").ToArray());
	}

	/// <summary>
	/// An absent archive fails construction and an unknown path fails lookup.
	/// </summary>
	[Fact]
	public void ReportsUnknownArchives()
	{
		MemoryFileSystem files = new();
		FileNotFoundException exception = Assert.Throws<FileNotFoundException>(() => new DataFileRegistry(files, DataArchiveSource.Gsl("missing.gsl")));
		Assert.Equal("missing.gsl", exception.FileName);
		using DataFileRegistry registry = new(files);
		Assert.Throws<KeyNotFoundException>(() => registry.GetArchive("missing.afs"));
	}

	/// <summary>
	/// A repeated archive path is rejected before it can shadow an earlier archive.
	/// </summary>
	[Fact]
	public void RejectsDuplicateArchives()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("one.bin", [1], 0)));
		ArgumentException exception = Assert.Throws<ArgumentException>(() => new DataFileRegistry(files, DataArchiveSource.Gsl("data.gsl"), DataArchiveSource.Gsl("DATA.GSL")));
		Assert.Contains("registered more than once", exception.Message);
	}

	/// <summary>
	/// A malformed archive and an out-of-range entry surface as archive format failures.
	/// </summary>
	[Fact]
	public void RejectsInvalidArchiveData()
	{
		MemoryFileSystem files = new();
		AddFile(files, "broken.gsl", [1, 2, 3]);
		Assert.Throws<ArchiveFormatException>(() => new DataFileRegistry(files, DataArchiveSource.Gsl("broken.gsl")));
		byte[] bytes = ArchiveSamples.Gsl(("outside.bin", [1, 2], 0));
		BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(0x20), 0x1000);
		AddFile(files, "outside.gsl", bytes);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("outside.gsl"));
		Assert.Throws<ArchiveFormatException>(() => registry.Read("outside.bin"));
		Assert.Throws<ArchiveFormatException>(() => registry.TryRead("outside.bin", out _));
	}

	/// <summary>
	/// A file that ends before its declared length is rejected instead of returning a short buffer.
	/// </summary>
	[Fact]
	public void RejectsATruncatedLooseFile()
	{
		TruncatedFileSystem files = new(new MemoryFileSystem(), GamePath.Parse("short.bin"), 8, [1, 2, 3]);
		using DataFileRegistry registry = new(files);
		IOException exception = Assert.Throws<IOException>(() => registry.Read("short.bin"));
		Assert.Contains("ended after", exception.Message);
	}

	/// <summary>
	/// A truncated archive fails while the registry is opening it.
	/// </summary>
	[Fact]
	public void RejectsATruncatedArchive()
	{
		TruncatedFileSystem files = new(new MemoryFileSystem(), GamePath.Parse("data.gsl"), 0x100, [1, 2, 3]);
		Assert.Throws<IOException>(() => new DataFileRegistry(files, DataArchiveSource.Gsl("data.gsl")));
	}

	/// <summary>
	/// Disposal invalidates every read and lookup, and a second disposal is harmless.
	/// </summary>
	[Fact]
	public void DisposesTheRegistry()
	{
		MemoryFileSystem files = new();
		AddFile(files, "data.gsl", ArchiveSamples.Gsl(("one.bin", [1], 0)));
		DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data.gsl"));
		Assert.Equal([1], registry.Read("one.bin").ToArray());
		registry.Dispose();
		registry.Dispose();
		Assert.Throws<ObjectDisposedException>(() => registry.Read("one.bin"));
		Assert.Throws<ObjectDisposedException>(() => registry.TryRead("one.bin", out _));
		Assert.Throws<ObjectDisposedException>(() => registry.Exists("one.bin"));
		Assert.Throws<ObjectDisposedException>(() => registry.GetLength("one.bin"));
		Assert.Throws<ObjectDisposedException>(() => registry.GetArchive("data.gsl"));
		Assert.Throws<ObjectDisposedException>(() => _ = registry.Archives);
	}

	/// <summary>
	/// Every public lookup rejects a null name.
	/// </summary>
	[Fact]
	public void RejectsNullNames()
	{
		MemoryFileSystem files = new();
		using DataFileRegistry registry = new(files);
		Assert.Throws<ArgumentNullException>(() => registry.Read(null!));
		Assert.Throws<ArgumentNullException>(() => registry.TryRead(null!, out _));
		Assert.Throws<ArgumentNullException>(() => registry.Exists(null!));
		Assert.Throws<ArgumentNullException>(() => registry.GetLength(null!));
		Assert.Throws<ArgumentNullException>(() => registry.GetArchive(null!));
	}

	private static void AddFile(MemoryFileSystem files, string path, byte[] bytes)
	{
		using IGameFile file = files.Open(GamePath.Parse(path), GameFileAccess.ReadWrite, GameFileMode.Create) ?? throw new InvalidOperationException($"Could not create '{path}'.");
		file.Write(bytes);
	}

	private sealed class TruncatedFileSystem(MemoryFileSystem inner, GamePath path, int length, byte[] visible) : IGameFileSystem
	{
		public bool FileExists(GamePath candidate) => candidate == path || inner.FileExists(candidate);

		public bool DirectoryExists(GamePath candidate) => inner.DirectoryExists(candidate);

		public IGameFile? Open(GamePath candidate, GameFileAccess access, GameFileMode mode)
			=> candidate == path && access == GameFileAccess.Read && mode == GameFileMode.Open ? new TruncatedFile(path, length, visible) : inner.Open(candidate, access, mode);

		public IReadOnlyList<GameFileInfo> Find(GamePath directory, string pattern) => inner.Find(directory, pattern);

		public bool CreateDirectory(GamePath directory) => inner.CreateDirectory(directory);

		public bool DeleteFile(GamePath file) => inner.DeleteFile(file);

		public bool CopyFile(GamePath source, GamePath destination, bool overwrite) => inner.CopyFile(source, destination, overwrite);

		public bool MoveFile(GamePath source, GamePath destination, bool overwrite) => inner.MoveFile(source, destination, overwrite);
	}

	private sealed class TruncatedFile(GamePath path, int length, byte[] visible) : IGameFile
	{
		private int _position;

		public GamePath Path => path;
		public long Length => length;
		public long Position => _position;

		public int Read(Span<byte> buffer)
		{
			int count = Math.Min(buffer.Length, visible.Length - _position);
			if (count <= 0)
				return 0;
			visible.AsSpan(_position, count).CopyTo(buffer);
			_position += count;
			return count;
		}

		public void Write(ReadOnlySpan<byte> buffer) => throw new NotSupportedException();

		public long Seek(long offset, GameSeekOrigin origin) => throw new NotSupportedException();

		public void SetLength(long length) => throw new NotSupportedException();

		public void Flush()
		{
		}

		public void Dispose()
		{
		}
	}
}
