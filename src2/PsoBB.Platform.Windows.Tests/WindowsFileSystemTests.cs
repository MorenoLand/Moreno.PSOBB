using PsoBB.Platform;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks the Windows data root against the file-system contract.
/// </summary>
public sealed class WindowsFileSystemTests
{
	[Fact]
	public void FilesIgnoreCaseAndShareTheirBytes()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.DirectoryExists(GamePath.Root));
		Assert.False(fileSystem.DirectoryExists(At("data")));
		Assert.True(fileSystem.CreateDirectory(At("data")));
		Assert.False(fileSystem.CreateDirectory(At("data")));
		Assert.False(fileSystem.CreateDirectory(At("missing/child")));
		Assert.False(fileSystem.CreateDirectory(GamePath.Root));
		using (IGameFile file = Open(fileSystem, "data/save.bin", GameFileAccess.Write, GameFileMode.CreateNew))
		{
			file.Write([1, 2, 3, 4]);
			Assert.Equal(4, file.Length);
			Assert.Equal(4, file.Position);
		}
		Assert.True(fileSystem.FileExists(At("DATA/SAVE.BIN")));
		using IGameFile read = Open(fileSystem, "Data/Save.BIN", GameFileAccess.Read, GameFileMode.Open);
		byte[] buffer = new byte[8];
		Assert.Equal(4, read.Read(buffer));
		Assert.Equal(new byte[] { 1, 2, 3, 4 }, buffer[..4]);
		Assert.Equal(0, read.Read(buffer));
	}

	[Fact]
	public void CreateNewRefusesExistingAndMissingParents()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([7, 8, 9]);
		Assert.Null(fileSystem.Open(At("data/a.bin"), GameFileAccess.Write, GameFileMode.CreateNew));
		Assert.Null(fileSystem.Open(At("missing/a.bin"), GameFileAccess.Write, GameFileMode.CreateNew));
		Assert.Null(fileSystem.Open(At("data/missing.bin"), GameFileAccess.Read, GameFileMode.Open));
		using IGameFile existing = Open(fileSystem, "data/A.BIN", GameFileAccess.Read, GameFileMode.Open);
		Assert.Equal(3, existing.Length);
	}

	[Fact]
	public void CreateAndTruncateReplaceContentsAndOpenOrCreateKeepsThem()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([1, 2, 3, 4]);
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.Equal(0, file.Length);
			file.Write([9]);
		}
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.Truncate))
			Assert.Equal(0, file.Length);
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.ReadWrite, GameFileMode.OpenOrCreate))
		{
			Assert.Equal(0, file.Length);
			file.Write([5, 6]);
		}
		using IGameFile again = Open(fileSystem, "data/a.bin", GameFileAccess.Read, GameFileMode.OpenOrCreate);
		Assert.Equal(2, again.Length);
	}

	[Fact]
	public void ReadWriteSeekAndSetLengthFollowTheFilePosition()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		using IGameFile file = Open(fileSystem, "data/bytes.bin", GameFileAccess.ReadWrite, GameFileMode.CreateNew);
		file.Write([10, 20, 30, 40]);
		Assert.Equal(2, file.Seek(-2, GameSeekOrigin.Current));
		byte[] two = new byte[2];
		Assert.Equal(2, file.Read(two));
		Assert.Equal(new byte[] { 30, 40 }, two);
		Assert.Equal(2, file.Seek(-2, GameSeekOrigin.End));
		file.SetLength(4);
		file.Write([5, 6]);
		Assert.Equal(4, file.Length);
		Assert.Equal(0, file.Seek(0, GameSeekOrigin.Begin));
		byte[] all = new byte[4];
		Assert.Equal(4, file.Read(all));
		Assert.Equal(new byte[] { 10, 20, 5, 6 }, all);
	}

	[Fact]
	public void FindReturnsDirectMatchesInCaseInsensitivePathOrder()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		Assert.True(fileSystem.CreateDirectory(At("data/sub")));
		using (IGameFile file = Open(fileSystem, "data/a.txt", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([1, 2, 3, 4, 5]);
		using (IGameFile file = Open(fileSystem, "data/B.TXT", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([6, 7]);
		using (IGameFile file = Open(fileSystem, "data/c.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([8]);
		IReadOnlyList<GameFileInfo> all = fileSystem.Find(At("data"), "*.*");
		Assert.Equal(
			new[] { "data/a.txt", "data/B.TXT", "data/c.bin", "data/sub" },
			all.Select(entry => entry.Path.ToString()));
		Assert.Equal(5, all[0].Length);
		Assert.False(all[0].IsDirectory);
		Assert.True(all[3].IsDirectory);
		Assert.Equal(0, all[3].Length);
		Assert.Equal(
			new[] { "data/a.txt", "data/B.TXT" },
			fileSystem.Find(At("data"), "*.txt").Select(entry => entry.Path.ToString()));
		Assert.Equal(
			new[] { "data/c.bin" },
			fileSystem.Find(At("data"), "?.bin").Select(entry => entry.Path.ToString()));
		Assert.Empty(fileSystem.Find(At("missing"), "*.*"));
		Assert.Throws<ArgumentException>(() => fileSystem.Find(At("data"), string.Empty));
		Assert.Throws<ArgumentException>(() => fileSystem.Find(At("data"), "sub/*"));
	}

	[Fact]
	public void DirectoriesFilesCopiesAndMovesReportTheirResult()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		Assert.True(fileSystem.CreateDirectory(At("data/sub")));
		using (IGameFile file = Open(fileSystem, "data/a.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			file.Write([1, 2, 3]);
		Assert.True(fileSystem.CopyFile(At("data/a.bin"), At("data/b.bin"), overwrite: false));
		Assert.False(fileSystem.CopyFile(At("data/a.bin"), At("data/b.bin"), overwrite: false));
		Assert.True(fileSystem.CopyFile(At("data/a.bin"), At("data/b.bin"), overwrite: true));
		Assert.False(fileSystem.CopyFile(At("data/a.bin"), At("data/missing/b.bin"), overwrite: false));
		Assert.False(fileSystem.CopyFile(At("data/a.bin"), At("data/sub"), overwrite: true));
		Assert.True(fileSystem.MoveFile(At("data/a.bin"), At("data/c.bin"), overwrite: false));
		Assert.False(fileSystem.FileExists(At("data/a.bin")));
		Assert.True(fileSystem.FileExists(At("data/c.bin")));
		Assert.False(fileSystem.MoveFile(At("data/c.bin"), At("data/b.bin"), overwrite: false));
		Assert.True(fileSystem.MoveFile(At("data/c.bin"), At("data/b.bin"), overwrite: true));
		Assert.True(fileSystem.DeleteFile(At("data/b.bin")));
		Assert.False(fileSystem.DeleteFile(At("data/b.bin")));
		Assert.False(fileSystem.DeleteFile(At("data/sub")));
	}

	[Fact]
	public void AccessFlagsAndModesAreCheckedBeforeTheHostSeesTheRequest()
	{
		using TestDirectory directory = TestDirectory.Create();
		WindowsFileSystem fileSystem = new(directory.DirectoryPath);
		Assert.True(fileSystem.CreateDirectory(At("data")));
		Assert.Throws<ArgumentOutOfRangeException>(() => fileSystem.Open(At("data/x.bin"), GameFileAccess.None, GameFileMode.Open));
		Assert.Throws<InvalidOperationException>(() => fileSystem.Open(At("data/x.bin"), GameFileAccess.Read, GameFileMode.Create));
		Assert.Throws<ArgumentException>(() => fileSystem.Open(GamePath.Root, GameFileAccess.Read, GameFileMode.Open));
		using (IGameFile file = Open(fileSystem, "data/x.bin", GameFileAccess.Write, GameFileMode.CreateNew))
			Assert.Throws<InvalidOperationException>(() => file.Read(new byte[1]));
		using IGameFile readOnly = Open(fileSystem, "data/x.bin", GameFileAccess.Read, GameFileMode.Open);
		Assert.Throws<InvalidOperationException>(() => readOnly.Write([1]));
		Assert.Throws<InvalidOperationException>(() => readOnly.SetLength(1));
	}

	private static GamePath At(string path) => GamePath.Parse(path);

	private static IGameFile Open(WindowsFileSystem fileSystem, string path, GameFileAccess access, GameFileMode mode) =>
		fileSystem.Open(At(path), access, mode) ?? throw new InvalidOperationException($"'{path}' could not be opened.");
}
