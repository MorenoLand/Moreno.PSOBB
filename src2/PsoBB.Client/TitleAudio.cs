using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Client;

/// <summary>
/// Owns the title music stream and the common and city sound-effect banks for the title preview.
/// </summary>
internal sealed class TitleAudio : IDisposable
{
	/// <summary>The title theme name the controller loads.</summary>
	public const string MusicTrackName = "title.adx";

	/// <summary>The menu selection sound identifier.</summary>
	public const int SelectionSound = 1391;

	/// <summary>The menu confirm sound identifier.</summary>
	public const int ConfirmSound = 1056;

	/// <summary>The menu cancel sound identifier.</summary>
	public const int CancelSound = 1392;

	private readonly AudioPipeline _pipeline;
	private readonly SoundEffectLibrary _effects;
	private readonly MusicStream _music;
	private bool _disposed;

	private TitleAudio(AudioPipeline pipeline, SoundEffectLibrary effects, MusicStream music)
	{
		_pipeline = pipeline;
		_effects = effects;
		_music = music;
	}

	/// <summary>
	/// Opens the title theme, the common bank and the title map's bank, or returns null when the host has no usable output.
	/// </summary>
	/// <param name="host">The host that supplies the audio device.</param>
	/// <param name="files">The data files that resolve the theme and the banks.</param>
	/// <returns>The audio surface, or null when the device or theme is unavailable.</returns>
	public static TitleAudio? TryCreate(ClientHost host, IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(files);
		MusicStream? music = null;
		AudioPipeline? pipeline = null;
		try
		{
			music = new MusicLibrary(files).Open(MusicTrackName);
			AudioFormat format = new(music.SampleRate, music.Channels, 16);
			IAudioOutput output = host.AudioDevice.OpenOutput(format, AudioPipeline.StreamCapacityBytes);
			pipeline = new AudioPipeline(output, AudioPipeline.StreamCapacityBytes);
			SoundEffectLibrary effects = new(files);
			try
			{
				pipeline.LoadCommonSounds(effects);
			}
			catch (Exception exception) when (exception is AudioFormatException or FileNotFoundException or InvalidOperationException)
			{
			}
			try
			{
				pipeline.LoadMapSounds(effects, 0);
			}
			catch (Exception exception) when (exception is AudioFormatException or FileNotFoundException or InvalidOperationException or ArgumentException)
			{
			}
			ReportResolvedSounds(effects);
			music.IsLooping = true;
			pipeline.Music = music;
			pipeline.Play();
			return new TitleAudio(pipeline, effects, music);
		}
		catch (Exception exception) when (exception is FileNotFoundException or InvalidOperationException or NotSupportedException or AudioFormatException or ArgumentException)
		{
			ReportDiagnostic($"title audio unavailable: {exception.Message}");
			pipeline?.Dispose();
			music?.Source.Dispose();
			return null;
		}
	}

	/// <summary>
	/// Decodes the next music frames and moves them to the host output.
	/// </summary>
	public void Pump()
	{
		if (_disposed)
			return;
		try
		{
			_pipeline.FillAvailable();
			_pipeline.Drain();
		}
		catch (InvalidOperationException)
		{
		}
	}

	/// <summary>
	/// Starts one common-bank sound effect when the bank supplies it.
	/// </summary>
	/// <param name="soundEffectId">The sound-effect identifier.</param>
	public void Play(int soundEffectId)
	{
		if (_disposed)
			return;
		try
		{
			_pipeline.PlaySound(_effects, soundEffectId);
		}
		catch (Exception exception) when (exception is KeyNotFoundException or ArgumentException or InvalidOperationException)
		{
		}
	}

	/// <summary>Stops playback and releases the output and the theme decoder.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_pipeline.Dispose();
		_music.Source.Dispose();
	}

	private static void ReportResolvedSounds(SoundEffectLibrary effects)
	{
		if (Environment.GetEnvironmentVariable("PSOBB_AUDIODBG") is null)
			return;
		foreach (int soundEffectId in (ReadOnlySpan<int>)[SelectionSound, ConfirmSound, CancelSound])
		{
			SoundEffectMapping? mapping = effects.Resolve(soundEffectId);
			ReportDiagnostic(mapping is { } value
				? $"sound {soundEffectId}: slot {value.Slot}, gain {value.Gain:0.###}"
				: $"sound {soundEffectId}: missing");
		}
	}

	private static void ReportDiagnostic(string line)
	{
		if (Environment.GetEnvironmentVariable("PSOBB_AUDIODBG") is null)
			return;
		Console.Error.WriteLine(line);
	}
}
