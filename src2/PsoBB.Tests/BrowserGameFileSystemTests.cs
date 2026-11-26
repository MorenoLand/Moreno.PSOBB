using PsoBB.Platform;
using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the preloaded in-memory data root of the browser host.
/// </summary>
public sealed class BrowserGameFileSystemTests
{
	[Fact]
	public void AddedFilesCreateTheirParentDirectories()
	{
		BrowserGameFileSystem files = new();
		GamePath path = GamePath.Parse("textures/level/a.bin");
		files.AddFile(path, [1, 2, 3]);
		Assert.True(files.FileExists(path));
		Assert.True(files.DirectoryExists(GamePath.Parse("textures")));
		Assert.True(files.DirectoryExists(GamePath.Parse("textures/level")));
		using IGameFile file = files.Open(path, GameFileAccess.Read, GameFileMode.Open) ?? throw new InvalidOperationException("The file did not open.");
		Span<byte> buffer = stackalloc byte[3];
		Assert.Equal(3, file.Read(buffer));
		Assert.Equal(1, buffer[0]);
		Assert.Equal(3, buffer[2]);
	}

	[Fact]
	public void AddingAFileReplacesItsContent()
	{
		BrowserGameFileSystem files = new();
		GamePath path = GamePath.Parse("a.bin");
		files.AddFile(path, [1, 2, 3]);
		files.AddFile(path, [9]);
		using IGameFile file = files.Open(path, GameFileAccess.Read, GameFileMode.Open) ?? throw new InvalidOperationException("The file did not open.");
		Assert.Equal(1, file.Length);
		Span<byte> buffer = stackalloc byte[1];
		Assert.Equal(1, file.Read(buffer));
		Assert.Equal(9, buffer[0]);
	}

	[Fact]
	public void LoadingFromAHostAddsDirectoriesAndFiles()
	{
		FakeDataHost host = new("D empty\nD data\nF data/a.bin\n", new Dictionary<string, byte[]> { ["data/a.bin"] = [4, 5, 6] });
		BrowserGameFileSystem files = new();
		files.LoadFrom(host);
		Assert.True(files.DirectoryExists(GamePath.Parse("empty")));
		Assert.True(files.FileExists(GamePath.Parse("data/a.bin")));
		IReadOnlyList<GameFileInfo> entries = files.Find(GamePath.Parse("data"), "*.*");
		GameFileInfo entry = Assert.Single(entries);
		Assert.Equal(3, entry.Length);
	}

	[Fact]
	public void MalformedManifestsAndMissingFilesAreRejected()
	{
		BrowserGameFileSystem files = new();
		Assert.Throws<FormatException>(() => files.LoadFrom(new FakeDataHost("X entry\n", new Dictionary<string, byte[]>())));
		Assert.Throws<FormatException>(() => files.LoadFrom(new FakeDataHost("broken\n", new Dictionary<string, byte[]>())));
		Assert.Throws<InvalidOperationException>(() => files.LoadFrom(new FakeDataHost("F data/missing.bin\n", new Dictionary<string, byte[]>())));
		Assert.Throws<ArgumentException>(() => files.AddFile(GamePath.Root, [1]));
	}

	private sealed class FakeDataHost : IBrowserDataHost
	{
		private readonly string _manifest;
		private readonly IReadOnlyDictionary<string, byte[]> _files;

		public FakeDataHost(string manifest, IReadOnlyDictionary<string, byte[]> files)
		{
			_manifest = manifest;
			_files = files;
		}

		public string GetManifest() => _manifest;

		public byte[]? Read(string path) => _files.TryGetValue(path, out byte[]? content) ? content : null;
	}
}
