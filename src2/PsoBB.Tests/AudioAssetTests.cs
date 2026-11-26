using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the loader-to-pipeline hand-off for streamed music and banked sound effects.
/// </summary>
public sealed class AudioAssetTests
{
	private static readonly AudioFormat Format = AudioFormat.Pcm16Stereo(8000);

	[Fact]
	public void PlaysMusicLoadedFromAnOggEntry()
	{
		using DataFileRegistry files = Files(("data/ogg/tone.ogg", Convert.FromBase64String(SyntheticOggTone.Samples)));
		MusicLibrary library = new(files);
		CapturingAudioOutput output = new(Format, 32768);
		using AudioPipeline pipeline = new(output, 4096, 512);
		MusicStream stream = pipeline.PlayMusic(library, "tone.adx");
		try
		{
			Assert.Same(stream, pipeline.Music);
			Assert.True(pipeline.Fill(256) > 0);
			Assert.True(pipeline.Drain() > 0);
			Assert.True(output.ByteCount > 0);
		}
		finally
		{
			stream.Source.Dispose();
		}
	}

	[Fact]
	public void PlaysABankedSoundEffect()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [100, -100, 200, -200]));
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData));
		SoundBankCatalog catalog = new(["common.pac", "map.pac"], [1], [common, new SoundBankDefinition("map.pac", [], [])], 0);
		SoundEffectLibrary library = new(files, catalog);
		Assert.True(library.LoadCommonBank());
		CapturingAudioOutput output = new(Format, 4096);
		using AudioPipeline pipeline = new(output, 1024, 256);
		Assert.True(pipeline.PlaySound(library, 3) > 0);
		Assert.Equal(1, pipeline.Sounds.VoiceCount);
		Assert.True(pipeline.Fill(4) > 0);
		pipeline.Drain();
		Assert.True(output.ByteCount > 0);
	}

	[Fact]
	public void LoadingAMapBankStopsVoices()
	{
		(byte[] commonData, SoundBankDefinition common) = SyntheticPacBank.Build("common.pac", new PacSoundSpec(3, 8000, 1, 16, [100, -100]));
		SoundBankDefinition map = new("map.pac", [], []);
		using DataFileRegistry files = Files(("data/sound/common.pac", commonData), ("data/sound/map.pac", [0]));
		SoundBankCatalog catalog = new(["common.pac", "map.pac"], [1], [common, map], 0);
		SoundEffectLibrary library = new(files, catalog);
		CapturingAudioOutput output = new(Format, 1024);
		using AudioPipeline pipeline = new(output, 256);
		Assert.True(pipeline.LoadCommonSounds(library));
		pipeline.PlaySound(library, 3);
		Assert.Equal(1, pipeline.Sounds.VoiceCount);
		Assert.True(pipeline.LoadMapSounds(library, 0));
		Assert.Equal(0, pipeline.Sounds.VoiceCount);
		Assert.Equal(0, library.CurrentMap);
	}

	[Fact]
	public void MissingSoundEffectThrows()
	{
		using DataFileRegistry files = Files();
		SoundEffectLibrary library = new(files, new SoundBankCatalog(["common.pac"], [0], [new SoundBankDefinition("common.pac", [], [])], 0));
		CapturingAudioOutput output = new(Format, 1024);
		using AudioPipeline pipeline = new(output, 256);
		Assert.Throws<KeyNotFoundException>(() => pipeline.PlaySound(library, 1));
	}

	[Fact]
	public void RejectsMismatchedMusicRate()
	{
		using DataFileRegistry files = Files(("data/ogg/tone.ogg", Convert.FromBase64String(SyntheticOggTone.Samples)));
		MusicLibrary library = new(files);
		CapturingAudioOutput output = new(AudioFormat.Pcm16Stereo(44100), 1024);
		using AudioPipeline pipeline = new(output, 256);
		Assert.Throws<ArgumentException>(() => pipeline.PlayMusic(library, "tone.adx"));
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
