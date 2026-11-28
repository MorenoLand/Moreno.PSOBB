using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the legacy track-name conversion and OGG source loading.
/// </summary>
public sealed class MusicLibraryTests
{
	[Fact]
	public void ConvertsTheLegacyAdxSuffixToOgg()
	{
		Assert.Equal("data/ogg/title.ogg", MusicLibrary.GetTrackPath("title.adx"));
		Assert.Equal("data/ogg/title.ogg", MusicLibrary.GetTrackPath("title.ogg"));
		Assert.Equal("data/ogg/ogg", MusicLibrary.GetTrackPath("abc"));
		Assert.Throws<ArgumentNullException>(() => MusicLibrary.GetTrackPath(null!));
		Assert.Throws<ArgumentException>(() => MusicLibrary.GetTrackPath("ab"));
	}

	[Fact]
	public void OpensAGeneratedOggSource()
	{
		using DataFileRegistry files = Files(("data/ogg/tone.ogg", Convert.FromBase64String(SyntheticOggTone.Samples)));
		MusicLibrary library = new(files);
		using IAudioSampleSource source = library.OpenSource("tone.adx");
		Assert.Equal(8000, source.SampleRate);
		Assert.Equal(1, source.Channels);
		Assert.True(source.TotalFrames > 0);
		float[] samples = new float[512];
		int read = source.Read(samples);
		Assert.True(read > 0);
		Assert.Contains(samples.AsSpan(0, read).ToArray(), sample => Math.Abs(sample) > 0.05f);
	}

	[Fact]
	public void OpensAMusicStream()
	{
		using DataFileRegistry files = Files(("data/ogg/tone.ogg", Convert.FromBase64String(SyntheticOggTone.Samples)));
		MusicLibrary library = new(files);
		MusicStream stream = library.Open("tone.adx");
		try
		{
			Assert.Equal(8000, stream.SampleRate);
			Assert.Equal(1, stream.Channels);
			float[] samples = new float[256];
			Assert.True(stream.Read(samples) > 0);
		}
		finally
		{
			stream.Source.Dispose();
		}
	}

	[Fact]
	public void MissingTrackThrows()
	{
		using DataFileRegistry files = Files();
		MusicLibrary library = new(files);
		Assert.Throws<FileNotFoundException>(() => library.OpenSource("missing.adx"));
	}

	[Fact]
	public void InvalidOggThrows()
	{
		using DataFileRegistry files = Files(("data/ogg/bad.ogg", [1, 2, 3, 4]));
		MusicLibrary library = new(files);
		Assert.Throws<ArgumentException>(() => library.OpenSource("bad.adx"));
	}

	[Fact]
	public void RejectsNullDataFiles()
	{
		Assert.Throws<ArgumentNullException>(() => new MusicLibrary(null!));
	}

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
