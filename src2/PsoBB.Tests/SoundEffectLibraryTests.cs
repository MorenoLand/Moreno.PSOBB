using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks common-bank loading, map-bank replacement and sound-effect lookup.
/// </summary>
public sealed class SoundEffectLibraryTests
{
	[Fact]
	public void LoadsTheCommonBank()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [1]));
		using DataFileRegistry files = Files(("data/sound/common.pac", data));
		SoundEffectLibrary library = new(files, Catalog(definition, Empty("map.pac")));
		Assert.True(library.LoadCommonBank());
		Assert.NotNull(library.CommonBank);
		Assert.Null(library.MapBank);
		Assert.Equal(-1, library.CurrentMap);
		Assert.NotNull(library.Find(3));
		Assert.Equal(1, library.LoadedSampleCount);
	}

	[Fact]
	public void LoadsAMapBankAndRestoresTheCommonBank()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [1]));
		(byte[] mapData, SoundBankDefinition map) = SyntheticPacBank.Build("map.pac", new PacSoundSpec(10, 8000, 1, 16, [2]));
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData), ("data/sound/map.pac", mapData));
		SoundEffectLibrary library = new(files, Catalog(common, map));
		Assert.True(library.LoadCommonBank());
		Assert.True(library.LoadMapBank(0));
		Assert.Equal(0, library.CurrentMap);
		Assert.NotNull(library.MapBank);
		Assert.NotNull(library.Find(10));
		Assert.NotNull(library.Find(3));
		library.UnloadMapBank();
		Assert.Equal(-1, library.CurrentMap);
		Assert.Null(library.MapBank);
		Assert.Null(library.Find(10));
		Assert.NotNull(library.Find(3));
	}

	[Fact]
	public void MissingCommonBankIsReported()
	{
		using DataFileRegistry files = Files();
		SoundEffectLibrary library = new(files, Catalog(Empty("common.pac"), Empty("map.pac")));
		Assert.False(library.LoadCommonBank());
		Assert.Null(library.CommonBank);
		Assert.Null(library.Find(1));
	}

	[Fact]
	public void MissingMapBankSelectsTheMapWithoutSamples()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [1]));
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData));
		SoundEffectLibrary library = new(files, Catalog(common, Empty("map.pac")));
		Assert.True(library.LoadCommonBank());
		Assert.True(library.LoadMapBank(0));
		Assert.Equal(0, library.CurrentMap);
		Assert.Null(library.MapBank);
		Assert.Null(library.Find(10));
		Assert.True(library.LoadMapBank(0));
		Assert.Null(library.MapBank);
	}

	[Fact]
	public void EmptyMapBankLoadsWithNoSamples()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [1]));
		SoundBankDefinition map = new("map.pac", [], []);
		byte[] mapData = [0];
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData), ("data/sound/map.pac", mapData));
		SoundEffectLibrary library = new(files, Catalog(common, map));
		Assert.True(library.LoadCommonBank());
		Assert.True(library.LoadMapBank(0));
		Assert.NotNull(library.MapBank);
		Assert.Empty(library.MapBank.Samples);
		Assert.Equal(1, library.LoadedSampleCount);
	}

	[Fact]
	public void RejectsATruncatedMapBank()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [1]));
		(byte[] mapData, SoundBankDefinition map) = SyntheticPacBank.Build("map.pac", new PacSoundSpec(10, 8000, 1, 16, [2]));
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData), ("data/sound/map.pac", mapData[..^1]));
		SoundEffectLibrary library = new(files, Catalog(common, map));
		Assert.True(library.LoadCommonBank());
		Assert.Throws<AudioFormatException>(() => library.LoadMapBank(0));
	}

	[Fact]
	public void UnknownMapAndMissingSamplesAreSafe()
	{
		using DataFileRegistry files = Files();
		SoundEffectLibrary library = new(files, Catalog(Empty("common.pac"), Empty("map.pac")));
		Assert.Null(library.Find(-1));
		Assert.Null(library.Find(SoundEffectLibrary.SoundEffectSlots));
		Assert.Throws<ArgumentOutOfRangeException>(() => library.LoadMapBank(1));
	}

	private static SoundBankCatalog Catalog(SoundBankDefinition common, SoundBankDefinition map) => new(["common.pac", "map.pac"], [1], [common, map], 0);

	private static SoundBankDefinition Empty(string fileName) => new(fileName, [], []);

	private static DataFileRegistry Files(params (string Path, byte[] Data)[] entries)
	{
		MemoryFileSystem fileSystem = new();
		foreach ((string path, byte[] data) in entries)
			AddFile(fileSystem, path, data);
		return new DataFileRegistry(fileSystem);
	}

	private static void AddFile(MemoryFileSystem files, string path, byte[] data)
	{
		GamePath filePath = GamePath.Parse(path);
		List<GamePath> directories = [];
		for (GamePath directory = filePath.Parent; !directory.IsRoot; directory = directory.Parent)
			directories.Add(directory);
		directories.Reverse();
		foreach (GamePath directory in directories)
			files.CreateDirectory(directory);
		using IGameFile file = files.Open(filePath, GameFileAccess.ReadWrite, GameFileMode.Create) ?? throw new InvalidOperationException($"Could not create '{path}'.");
		file.Write(data);
	}
}
