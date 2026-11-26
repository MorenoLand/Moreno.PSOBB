using PsoBB.Platform;

namespace PsoBB.Audio;

/// <summary>
/// Streams music and sound effects into a platform output through a decoded-PCM ring.
/// </summary>
/// <remarks>
/// The client's streaming thread calls <see cref="Fill"/> to decode and mix, then <see cref="Drain"/> to move the ring into the host buffer. <see cref="Fill"/> never overwrites unread audio and <see cref="Drain"/> never writes past the host's free space, so a slow decoder or a paused device degrades to silence instead of a buffer overrun.
/// </remarks>
public sealed class AudioPipeline : IDisposable
{
	/// <summary>
	/// The byte chunk the original streamer locked and filled at a time.
	/// </summary>
	public const int StreamChunkBytes = 0xAC44;

	/// <summary>
	/// The original DirectSound streaming buffer size, sixteen chunks.
	/// </summary>
	public const int StreamCapacityBytes = StreamChunkBytes * 16;

	private const int MaximumSourceChannels = 8;
	private readonly object _gate = new();
	private readonly IAudioOutput _output;
	private readonly AudioRingBuffer _buffer;
	private readonly AudioMixer _mixer = new();
	private readonly SoundEffectPlayer _sounds;
	private readonly int _renderFrames;
	private readonly float[] _nativeMusic;
	private readonly float[] _music;
	private readonly float[] _soundEffects;
	private readonly float[] _mixed;
	private readonly byte[] _pcm;
	private readonly byte[] _drain;
	private MusicStream? _musicStream;
	private bool _disposed;

	/// <summary>
	/// Wraps an opened output with a decoded-PCM ring and the built-in mixer.
	/// </summary>
	/// <param name="output">The host output to fill.</param>
	/// <param name="capacityBytes">The decoded-PCM ring size, a whole number of frames.</param>
	/// <param name="renderFrames">The largest number of frames prepared in one mix, 2048 by default.</param>
	/// <exception cref="ArgumentNullException">The output is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">A size is invalid or the ring is not frame-aligned.</exception>
	public AudioPipeline(IAudioOutput output, int capacityBytes, int renderFrames = 2048)
	{
		ArgumentNullException.ThrowIfNull(output);
		AudioFormat format = output.Format ?? throw new ArgumentException("The output must report a format.", nameof(output));
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The ring must hold a positive whole number of frames.");
		if (renderFrames <= 0)
			throw new ArgumentOutOfRangeException(nameof(renderFrames), renderFrames, "The render size must be positive.");
		_output = output;
		_renderFrames = renderFrames;
		_buffer = new AudioRingBuffer(capacityBytes);
		_sounds = new SoundEffectPlayer(format.SampleRate);
		_nativeMusic = new float[renderFrames * MaximumSourceChannels];
		_music = new float[renderFrames * format.Channels];
		_soundEffects = new float[renderFrames * format.Channels];
		_mixed = new float[renderFrames * format.Channels];
		_pcm = new byte[renderFrames * format.BlockAlign];
		_drain = new byte[renderFrames * format.BlockAlign];
	}

	/// <summary>
	/// Gets the output layout.
	/// </summary>
	public AudioFormat Format => _output.Format;

	/// <summary>
	/// Gets the host output.
	/// </summary>
	public IAudioOutput Output => _output;

	/// <summary>
	/// Gets the decoded-PCM ring between the streaming thread and the output.
	/// </summary>
	public AudioRingBuffer Buffer => _buffer;

	/// <summary>
	/// Gets the music, effect and master gains.
	/// </summary>
	public AudioMixer Mixer => _mixer;

	/// <summary>
	/// Gets the sound-effect voices.
	/// </summary>
	public SoundEffectPlayer Sounds => _sounds;

	/// <summary>
	/// Gets or sets the music source; assigning a source discards queued decoded audio.
	/// </summary>
	/// <remarks>
	/// The caller owns the stream and its decoder; the pipeline never disposes them.
	/// </remarks>
	/// <exception cref="ArgumentException">The source rate differs from the output rate.</exception>
	public MusicStream? Music
	{
		get
		{
			lock (_gate)
				return _musicStream;
		}
		set
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				if (value is not null && value.SampleRate != Format.SampleRate)
					throw new ArgumentException($"The music is {value.SampleRate} Hz but the output is {Format.SampleRate} Hz.", nameof(value));
				_musicStream = value;
				_buffer.Clear();
			}
		}
	}

	/// <summary>
	/// Gets the frame position of the music decoder.
	/// </summary>
	public long MusicPosition
	{
		get
		{
			lock (_gate)
				return _musicStream?.Position ?? 0;
		}
	}

	/// <summary>
	/// Gets a value indicating whether the music decoder and every effect voice have finished.
	/// </summary>
	public bool IsFinished
	{
		get
		{
			lock (_gate)
				return (_musicStream is null || _musicStream.IsFinished) && _sounds.VoiceCount == 0;
		}
	}

	/// <summary>
	/// Starts or resumes host playback.
	/// </summary>
	public void Play()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_output.Play();
		}
	}

	/// <summary>
	/// Pauses host playback without discarding queued audio.
	/// </summary>
	public void Pause()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_output.Stop();
		}
	}

	/// <summary>
	/// Stops host playback, discards queued audio and stops every effect voice.
	/// </summary>
	public void Stop()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_output.Stop();
			_buffer.Clear();
			_sounds.StopAll();
		}
	}

	/// <summary>
	/// Starts a sound effect and returns its voice identifier.
	/// </summary>
	/// <param name="clip">The clip to play.</param>
	/// <param name="volume">The voice gain from zero through one.</param>
	/// <param name="loop">Whether the clip repeats.</param>
	/// <returns>The voice identifier.</returns>
	public int PlaySound(AudioClip clip, float volume = 1f, bool loop = false)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			return _sounds.Play(clip, volume, loop);
		}
	}

	/// <summary>
	/// Opens a music track through the library and makes it the current music source.
	/// </summary>
	/// <param name="library">The music library that resolves and decodes the track.</param>
	/// <param name="trackName">The track name passed to the client.</param>
	/// <returns>The stream assigned to <see cref="Music"/>; the caller owns it.</returns>
	/// <exception cref="ArgumentNullException">The library is null.</exception>
	/// <exception cref="FileNotFoundException">The track is absent.</exception>
	/// <exception cref="ArgumentException">The track is not readable OGG Vorbis or its rate differs from the output rate.</exception>
	public MusicStream PlayMusic(MusicLibrary library, string trackName)
	{
		ArgumentNullException.ThrowIfNull(library);
		MusicStream stream = library.Open(trackName);
		try
		{
			Music = stream;
		}
		catch
		{
			stream.Source.Dispose();
			throw;
		}
		return stream;
	}

	/// <summary>
	/// Starts a sound effect from a loaded bank using the client's slot and attenuation tables.
	/// </summary>
	/// <param name="library">The library that resolves the sound-effect identifier.</param>
	/// <param name="soundEffectId">The global sound-effect identifier.</param>
	/// <param name="volume">The voice gain from zero through one, or null to use the bank table's gain.</param>
	/// <param name="loop">Whether the clip repeats over its loop region.</param>
	/// <returns>The voice identifier.</returns>
	/// <exception cref="ArgumentNullException">The library is null.</exception>
	/// <exception cref="KeyNotFoundException">No loaded bank supplies the identifier.</exception>
	public int PlaySound(SoundEffectLibrary library, int soundEffectId, float? volume = null, bool loop = false)
	{
		ArgumentNullException.ThrowIfNull(library);
		SoundEffectMapping mapping = library.Resolve(soundEffectId) ?? throw new KeyNotFoundException($"No loaded sound bank supplies sound effect {soundEffectId}.");
		return PlaySound(mapping.Sample.ToClip(), volume ?? mapping.Gain, loop);
	}

	/// <summary>
	/// Stops every effect voice and loads the bank for a map.
	/// </summary>
	/// <param name="library">The library that owns the bank tables and sample slots.</param>
	/// <param name="map">The map identifier.</param>
	/// <returns>The library result; a missing bank is not an error.</returns>
	/// <exception cref="ArgumentNullException">The library is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The map has no table row.</exception>
	/// <exception cref="AudioFormatException">The bank header or a sample range is invalid.</exception>
	public bool LoadMapSounds(SoundEffectLibrary library, int map)
	{
		ArgumentNullException.ThrowIfNull(library);
		lock (_gate)
		{
			ThrowIfDisposed();
			_sounds.StopAll();
			return library.LoadMapBank(map);
		}
	}

	/// <summary>
	/// Stops every effect voice and loads the common bank.
	/// </summary>
	/// <param name="library">The library that owns the bank tables and sample slots.</param>
	/// <returns><see langword="true"/> when the common bank file was present and parsed.</returns>
	/// <exception cref="ArgumentNullException">The library is null.</exception>
	/// <exception cref="AudioFormatException">The bank header or a sample range is invalid.</exception>
	public bool LoadCommonSounds(SoundEffectLibrary library)
	{
		ArgumentNullException.ThrowIfNull(library);
		lock (_gate)
		{
			ThrowIfDisposed();
			_sounds.StopAll();
			return library.LoadCommonBank();
		}
	}

	/// <summary>
	/// Moves the music decoder and discards queued decoded audio.
	/// </summary>
	/// <param name="frame">The absolute frame.</param>
	public void Seek(long frame)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_musicStream?.Seek(frame);
			_buffer.Clear();
		}
	}

	/// <summary>
	/// Sets the music loop points.
	/// </summary>
	/// <param name="startFrame">The first frame to replay.</param>
	/// <param name="endFrame">The exclusive frame where the wrap occurs.</param>
	public void SetLoop(long startFrame, long endFrame)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_musicStream?.SetLoop(startFrame, endFrame);
		}
	}

	/// <summary>
	/// Stops music looping.
	/// </summary>
	public void ClearLoop()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_musicStream?.ClearLoop();
		}
	}

	/// <summary>
	/// Decodes and mixes up to the requested frames, limited by ring free space.
	/// </summary>
	/// <param name="frames">The requested frames.</param>
	/// <returns>The number of frames written to the ring.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The frame count is not positive.</exception>
	public int Fill(int frames)
	{
		if (frames <= 0)
			throw new ArgumentOutOfRangeException(nameof(frames), frames, "The frame count must be positive.");
		lock (_gate)
		{
			ThrowIfDisposed();
			int blockAlign = Format.BlockAlign;
			int wanted = Math.Min(frames, _buffer.FreeBytes / blockAlign);
			int rendered = 0;
			while (rendered < wanted)
			{
				int count = Math.Min(wanted - rendered, _renderFrames);
				Render(count);
				int byteCount = count * blockAlign;
				int written = _buffer.Write(_pcm.AsSpan(0, byteCount));
				if (written != byteCount)
					throw new InvalidOperationException("The decoded-PCM ring accepted fewer bytes than its reported free space.");
				rendered += count;
			}
			return rendered;
		}
	}

	/// <summary>
	/// Decodes and mixes until the ring is full.
	/// </summary>
	/// <returns>The number of frames written to the ring.</returns>
	public int FillAvailable() => Fill(int.MaxValue);

	/// <summary>
	/// Moves buffered PCM into the host output up to its free space.
	/// </summary>
	/// <returns>The number of bytes written to the output.</returns>
	public int Drain()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			int blockAlign = Format.BlockAlign;
			int count = Math.Min(_buffer.AvailableBytes, _output.FreeBytes);
			count -= count % blockAlign;
			int written = 0;
			while (written < count)
			{
				int chunk = Math.Min(count - written, _drain.Length);
				chunk -= chunk % blockAlign;
				if (chunk == 0)
					break;
				int read = _buffer.Read(_drain.AsSpan(0, chunk));
				if (read == 0)
					break;
				_output.Write(_drain.AsSpan(0, read));
				written += read;
			}
			return written;
		}
	}

	/// <summary>
	/// Fills and drains once.
	/// </summary>
	/// <param name="frames">The requested frames.</param>
	/// <returns>The number of frames written to the ring.</returns>
	public int Pump(int frames)
	{
		int filled = Fill(frames);
		Drain();
		return filled;
	}

	/// <summary>
	/// Disposes the host output and clears every queued sample; the caller owns the music source.
	/// </summary>
	public void Dispose()
	{
		lock (_gate)
		{
			if (_disposed)
				return;
			_disposed = true;
			_musicStream = null;
			_sounds.StopAll();
			_buffer.Clear();
			_output.Dispose();
		}
	}

	private void Render(int frames)
	{
		int channels = Format.Channels;
		int samples = frames * channels;
		Span<float> music = _music.AsSpan(0, samples);
		Span<float> soundEffects = _soundEffects.AsSpan(0, samples);
		Span<float> mixed = _mixed.AsSpan(0, samples);
		music.Clear();
		MusicStream? musicStream = _musicStream;
		if (musicStream is not null)
		{
			int nativeSamples = frames * musicStream.Channels;
			Span<float> native = _nativeMusic.AsSpan(0, nativeSamples);
			native.Clear();
			musicStream.Read(native);
			if (musicStream.Channels == channels)
				native.CopyTo(music);
			else
				PcmConverter.MapChannels(native, musicStream.Channels, music, channels);
		}
		_sounds.Render(soundEffects, channels);
		_mixer.Mix(mixed, music, soundEffects);
		PcmConverter.FromSamples(mixed, Format, _pcm.AsSpan(0, frames * Format.BlockAlign));
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
