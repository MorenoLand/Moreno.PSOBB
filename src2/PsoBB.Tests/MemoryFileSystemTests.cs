using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the in-memory file system that stands in for the host folder in tests.
/// </summary>
public sealed class MemoryFileSystemTests
{
	[Fact]
	public void DirectoriesAreCreatedOneLevelAtATime()
	{
		MemoryFileSystem fileSystem = new();
		Assert.True(fileSystem.DirectoryExists(GamePath.Root));
		Assert.False(fileSystem.DirectoryExists(Path("data")));
		Assert.True(fileSystem.CreateDirectory(Path("data")));
		Assert.False(fileSystem.CreateDirectory(Path("data")));
		Assert.True(fileSystem.CreateDirectory(Path("data/sub")));
		Assert.False(fileSystem.CreateDirectory(Path("missing/sub")));
		Assert.False(fileSystem.CreateDirectory(GamePath.Root));
		Assert.False(fileSystem.FileExists(Path("data")));
	}

	[Fact]
	public void FilesAndDirectoriesCannotShareAName()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using IGameFile file = Open(fileSystem, "data/file", GameFileAccess.Write, GameFileMode.CreateNew);
		Assert.False(fileSystem.CreateDirectory(Path("data/file")));
		Assert.Null(fileSystem.Open(Path("data"), GameFileAccess.Read, GameFileMode.Open));
		Assert.True(fileSystem.DirectoryExists(Path("data")));
	}

	[Fact]
	public void MissingFilesAndRootsCannotBeOpened()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Assert.Null(fileSystem.Open(Path("data/missing"), GameFileAccess.Read, GameFileMode.Open));
		Assert.Throws<ArgumentException>(() => fileSystem.Open(GamePath.Root, GameFileAccess.Read, GameFileMode.Open));
	}

	[Fact]
	public void CreateNewRefusesAnExistingFile()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([1, 2, 3]);
		Assert.Null(fileSystem.Open(Path("data/a.bin"), GameFileAccess.Write, GameFileMode.CreateNew));
		Assert.Null(fileSystem.Open(Path("missing/a.bin"), GameFileAccess.Write, GameFileMode.CreateNew));
		using IGameFile existing = Open(fileSystem, "data/a.bin", GameFileAccess.Read, GameFileMode.Open);
		Assert.Equal(3, existing.Length);
	}

	[Fact]
	public void CreateAndTruncateReplaceContents()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([1, 2, 3, 4]);
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.Equal(0, file.Length);
			file.Write([9]);
		}
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.Truncate))
			Assert.Equal(0, file.Length);
		using IGameFile read = Open(fileSystem, "data/a.bin", GameFileAccess.Read, GameFileMode.Open);
		Assert.Equal(0, read.Length);
	}

	[Fact]
	public void OpenOrCreateKeepsExistingContents()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using (IGameFile file = Open(fileSystem, "data/new.bin", GameFileAccess.ReadWrite, GameFileMode.OpenOrCreate))
		{
			Assert.Equal(0, file.Length);
			file.Write([7, 8]);
		}
		using IGameFile again = Open(fileSystem, "data/new.bin", GameFileAccess.Read, GameFileMode.OpenOrCreate);
		Assert.Equal(2, again.Length);
		Assert.Null(fileSystem.Open(Path("missing/new.bin"), GameFileAccess.Read, GameFileMode.OpenOrCreate));
	}

	[Fact]
	public void CreatingModesRequireWriteAccess()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Assert.Throws<InvalidOperationException>(() => fileSystem.Open(Path("data/a.bin"), GameFileAccess.Read, GameFileMode.CreateNew));
		Assert.Throws<InvalidOperationException>(() => fileSystem.Open(Path("data/a.bin"), GameFileAccess.Read, GameFileMode.Create));
		Assert.Throws<InvalidOperationException>(() => fileSystem.Open(Path("data/a.bin"), GameFileAccess.Read, GameFileMode.Truncate));
		using IGameFile created = Open(fileSystem, "data/read-only.bin", GameFileAccess.Read, GameFileMode.OpenOrCreate);
		Assert.Equal(0, created.Length);
	}

	[Fact]
	public void WritesReadsAndSeeksMoveThePosition()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		file.Write([1, 2, 3, 4]);
		Assert.Equal(4, file.Length);
		Assert.Equal(4, file.Position);
		Assert.Equal(0, file.Seek(0, GameSeekOrigin.Begin));
		byte[] buffer = new byte[8];
		Assert.Equal(4, file.Read(buffer));
		Assert.Equal([1, 2, 3, 4, 0, 0, 0, 0], buffer);
		Assert.Equal(2, file.Seek(-2, GameSeekOrigin.End));
		Assert.Equal(2, file.Read(buffer.AsSpan(0, 2)));
		Assert.Equal([3, 4], buffer[..2]);
		Assert.Equal(3, file.Seek(-1, GameSeekOrigin.Current));
		Assert.Equal(1, file.Read(buffer.AsSpan(0, 1)));
		Assert.Equal(4, buffer[0]);
		Assert.Equal(0, file.Read(buffer));
	}

	[Fact]
	public void WritesPastTheEndZeroFillTheGap()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		file.Write([1, 2]);
		file.Seek(5, GameSeekOrigin.Begin);
		file.Write([0xAA]);
		Assert.Equal(6, file.Length);
		file.Seek(0, GameSeekOrigin.Begin);
		byte[] buffer = new byte[6];
		Assert.Equal(6, file.Read(buffer));
		Assert.Equal([1, 2, 0, 0, 0, 0xAA], buffer);
	}

	[Fact]
	public void SetLengthExtendsWithZerosAndShrinksWithoutMoving()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		file.Write([1, 2, 3]);
		file.Seek(1, GameSeekOrigin.Begin);
		file.SetLength(5);
		Assert.Equal(5, file.Length);
		Assert.Equal(1, file.Position);
		byte[] buffer = new byte[4];
		Assert.Equal(4, file.Read(buffer));
		Assert.Equal([2, 3, 0, 0], buffer);
		file.SetLength(1);
		Assert.Equal(1, file.Length);
		Assert.Equal(5, file.Position);
		file.Seek(0, GameSeekOrigin.Begin);
		Assert.Equal(1, file.Read(buffer));
		Assert.Equal(1, buffer[0]);
		Assert.Equal(0, file.Read(buffer));
		Assert.Throws<ArgumentOutOfRangeException>(() => file.SetLength(-1));
	}

	[Fact]
	public void AccessIsEnforced()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using (IGameFile writer = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			writer.Write([1]);
		using IGameFile reader = Open(fileSystem, "data/a.bin", GameFileAccess.Read, GameFileMode.Open);
		byte[] buffer = new byte[1];
		Assert.Throws<InvalidOperationException>(() => reader.Write(buffer));
		Assert.Throws<InvalidOperationException>(() => reader.SetLength(2));
		using IGameFile writerOnly = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.Open);
		Assert.Throws<InvalidOperationException>(() => writerOnly.Read(buffer));
	}

	[Fact]
	public void OpenHandlesShareTheSameFile()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		using IGameFile writer = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		writer.Write([1, 2, 3]);
		using IGameFile reader = Open(fileSystem, "data/a.bin", GameFileAccess.Read, GameFileMode.Open);
		Assert.Equal(3, reader.Length);
		writer.Seek(0, GameSeekOrigin.End);
		writer.Write([4]);
		Assert.Equal(4, reader.Length);
		reader.Seek(0, GameSeekOrigin.Begin);
		byte[] buffer = new byte[4];
		Assert.Equal(4, reader.Read(buffer));
		Assert.Equal([1, 2, 3, 4], buffer);
	}

	[Fact]
	public void DisposedHandlesRejectIo()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		file.Write([1]);
		file.Dispose();
		byte[] buffer = new byte[1];
		Assert.Throws<ObjectDisposedException>(() => file.Read(buffer));
		Assert.Throws<ObjectDisposedException>(() => file.Write(buffer));
		Assert.Throws<ObjectDisposedException>(() => _ = file.Length);
		Assert.Throws<ObjectDisposedException>(() => _ = file.Position);
		Assert.Throws<ObjectDisposedException>(() => file.Seek(0, GameSeekOrigin.Begin));
		Assert.Throws<ObjectDisposedException>(() => file.Flush());
		file.Dispose();
	}

	[Fact]
	public void FindMatchesWildcardsAndSortsEntries()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Write(fileSystem, "data/a.txt", [1]);
		Write(fileSystem, "data/B.TXT", [2, 3]);
		Write(fileSystem, "data/c.bin", [4]);
		Assert.True(fileSystem.CreateDirectory(Path("data/sub")));
		IReadOnlyList<GameFileInfo> text = fileSystem.Find(Path("data"), "*.txt");
		Assert.Equal(["a.txt", "B.TXT"], text.Select(entry => entry.Name));
		IReadOnlyList<GameFileInfo> all = fileSystem.Find(Path("data"), "*");
		Assert.Equal(["a.txt", "B.TXT", "c.bin", "sub"], all.Select(entry => entry.Name));
		Assert.Equal(2, all.Single(entry => entry.Name == "B.TXT").Length);
		Assert.True(all.Single(entry => entry.Name == "sub").IsDirectory);
		Assert.Equal(4, fileSystem.Find(Path("data"), "*.*").Count);
		Assert.Empty(fileSystem.Find(Path("data"), "?"));
		Assert.Empty(fileSystem.Find(Path("missing"), "*"));
	}

	[Fact]
	public void FindRejectsInvalidPatterns()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Assert.Throws<ArgumentNullException>(() => fileSystem.Find(Path("data"), null!));
		Assert.Throws<ArgumentException>(() => fileSystem.Find(Path("data"), ""));
		Assert.Throws<ArgumentException>(() => fileSystem.Find(Path("data"), "a/b"));
		Assert.Throws<ArgumentException>(() => fileSystem.Find(Path("data"), "a\\b"));
	}

	[Fact]
	public void CopyMoveAndDeleteFollowOverwriteRules()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Write(fileSystem, "data/source.bin", [1, 2, 3]);
		Assert.False(fileSystem.CopyFile(Path("data/missing.bin"), Path("data/copy.bin"), false));
		Assert.True(fileSystem.CopyFile(Path("data/source.bin"), Path("data/copy.bin"), false));
		Assert.True(fileSystem.CopyFile(Path("data/source.bin"), Path("data/copy.bin"), true));
		Assert.True(fileSystem.MoveFile(Path("data/copy.bin"), Path("data/moved.bin"), false));
		Assert.False(fileSystem.FileExists(Path("data/copy.bin")));
		Assert.True(fileSystem.FileExists(Path("data/moved.bin")));
		Assert.False(fileSystem.MoveFile(Path("data/source.bin"), Path("data/moved.bin"), false));
		Assert.False(fileSystem.CopyFile(Path("data/source.bin"), Path("data/moved.bin"), false));
		Assert.True(fileSystem.CopyFile(Path("data/source.bin"), Path("data/moved.bin"), true));
		Assert.True(fileSystem.MoveFile(Path("data/source.bin"), Path("data/moved.bin"), true));
		Assert.True(fileSystem.DeleteFile(Path("data/moved.bin")));
		Assert.False(fileSystem.DeleteFile(Path("data/moved.bin")));
		Assert.False(fileSystem.MoveFile(Path("data/source.bin"), Path("data/source.bin"), true));
		Assert.False(fileSystem.CopyFile(Path("data/source.bin"), Path("data/source.bin"), true));
	}

	[Fact]
	public void LookupsIgnoreCaseAndKeepTheFirstCasing()
	{
		MemoryFileSystem fileSystem = new();
		Assert.True(fileSystem.CreateDirectory(Path("Data")));
		Write(fileSystem, "DATA/File.TXT", [9]);
		Assert.True(fileSystem.FileExists(Path("data/file.txt")));
		using IGameFile file = Open(fileSystem, "data/FILE.txt", GameFileAccess.Read, GameFileMode.Open);
		Assert.Equal(1, file.Length);
		GameFileInfo entry = Assert.Single(fileSystem.Find(Path("DATA"), "*.txt"));
		Assert.Equal("DATA/File.TXT", entry.Path.ToString());
		GameFileInfo directory = Assert.Single(fileSystem.Find(GamePath.Root, "data"));
		Assert.Equal("Data", directory.Path.ToString());
	}

	[Fact]
	public void InvalidOpenRequestsAreRejected()
	{
		MemoryFileSystem fileSystem = WithDataDirectory();
		Assert.Throws<ArgumentOutOfRangeException>(() => fileSystem.Open(Path("data/a.bin"), GameFileAccess.None, GameFileMode.Open));
		Assert.Throws<ArgumentOutOfRangeException>(() => fileSystem.Open(Path("data/a.bin"), (GameFileAccess)4, GameFileMode.Open));
		Assert.Throws<ArgumentOutOfRangeException>(() => fileSystem.Open(Path("data/a.bin"), GameFileAccess.Read, (GameFileMode)99));
		Write(fileSystem, "data/a.bin", [1]);
		Assert.Throws<ArgumentException>(() => fileSystem.CopyFile(Path("data/a.bin"), GamePath.Root, false));
		Assert.Throws<ArgumentException>(() => fileSystem.MoveFile(Path("data/a.bin"), GamePath.Root, false));
	}

	private static MemoryFileSystem WithDataDirectory()
	{
		MemoryFileSystem fileSystem = new();
		Assert.True(fileSystem.CreateDirectory(Path("data")));
		return fileSystem;
	}

	private static GamePath Path(string value) => GamePath.Parse(value);

	private static IGameFile Open(MemoryFileSystem fileSystem, string path, GameFileAccess access, GameFileMode mode)
		=> Assert.IsAssignableFrom<IGameFile>(fileSystem.Open(Path(path), access, mode));

	private static void Write(MemoryFileSystem fileSystem, string path, byte[] bytes)
	{
		using IGameFile file = Open(fileSystem, path, GameFileAccess.Write, GameFileMode.CreateNew);
		file.Write(bytes);
	}
}
