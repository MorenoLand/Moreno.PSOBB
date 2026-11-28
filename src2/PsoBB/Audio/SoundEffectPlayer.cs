namespace PsoBB.Audio;

/// <summary>
/// Mixes one-shot and looping sound-effect voices into an interleaved output buffer.
/// </summary>
/// <remarks>
/// All voices run at the player's sample rate and are mixed in their own thread-safe render call, so the streaming thread can prepare the effect bus without touching the game loop.
/// </remarks>
public sealed class SoundEffectPlayer
{
	private const int MaximumVoices = 64;
	private readonly object _gate = new();
	private readonly List<Voice> _voices = [];
	private readonly int _sampleRate;
	private int _nextVoiceId = 1;

	/// <summary>
	/// Creates a player for one sample rate.
	/// </summary>
	/// <param name="sampleRate">The output sample rate.</param>
	/// <exception cref="ArgumentOutOfRangeException">The sample rate is not positive.</exception>
	public SoundEffectPlayer(int sampleRate)
	{
		if (sampleRate <= 0)
			throw new ArgumentOutOfRangeException(nameof(sampleRate), sampleRate, "The sample rate must be positive.");
		_sampleRate = sampleRate;
	}

	/// <summary>
	/// Gets the output sample rate.
	/// </summary>
	public int SampleRate => _sampleRate;

	/// <summary>
	/// Gets the number of active voices.
	/// </summary>
	public int VoiceCount
	{
		get
		{
			lock (_gate)
				return _voices.Count;
		}
	}

	/// <summary>
	/// Starts a voice and returns its identifier.
	/// </summary>
	/// <param name="clip">The clip to play.</param>
	/// <param name="volume">The voice gain from zero through one.</param>
	/// <param name="loop">Whether the whole clip repeats.</param>
	/// <returns>The voice identifier.</returns>
	/// <exception cref="ArgumentNullException">The clip is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The volume is outside zero through one.</exception>
	/// <exception cref="ArgumentException">The clip uses a different sample rate.</exception>
	/// <exception cref="InvalidOperationException">The voice limit is reached.</exception>
	public int Play(AudioClip clip, float volume = 1f, bool loop = false)
	{
		ArgumentNullException.ThrowIfNull(clip);
		if (clip.SampleRate != _sampleRate)
			throw new ArgumentException($"The clip is {clip.SampleRate} Hz but the player is {_sampleRate} Hz.", nameof(clip));
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		lock (_gate)
		{
			if (_voices.Count >= MaximumVoices)
				throw new InvalidOperationException($"The sound-effect player already has {MaximumVoices} voices.");
			int voiceId = _nextVoiceId++;
			_voices.Add(new Voice(voiceId, clip, volume, loop));
			return voiceId;
		}
	}

	/// <summary>
	/// Stops one voice.
	/// </summary>
	/// <param name="voiceId">The identifier returned by <see cref="Play"/>.</param>
	/// <returns><see langword="true"/> when the voice was active.</returns>
	public bool Stop(int voiceId)
	{
		lock (_gate)
			return _voices.RemoveAll(voice => voice.Id == voiceId) != 0;
	}

	/// <summary>
	/// Stops every voice.
	/// </summary>
	public void StopAll()
	{
		lock (_gate)
			_voices.Clear();
	}

	/// <summary>
	/// Changes a voice gain.
	/// </summary>
	/// <param name="voiceId">The identifier returned by <see cref="Play"/>.</param>
	/// <param name="volume">The gain from zero through one.</param>
	/// <returns><see langword="true"/> when the voice was active.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The volume is outside zero through one.</exception>
	public bool SetVolume(int voiceId, float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		lock (_gate)
		{
			foreach (Voice voice in _voices)
			{
				if (voice.Id != voiceId)
					continue;
				voice.Volume = volume;
				return true;
			}
			return false;
		}
	}

	/// <summary>
	/// Clears the destination and mixes every active voice into it.
	/// </summary>
	/// <param name="destination">The interleaved destination.</param>
	/// <param name="channels">The destination channel count.</param>
	/// <returns>The number of voices that remain active.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The channel count is outside 1 through 8.</exception>
	public int Render(Span<float> destination, int channels)
	{
		if (channels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(channels), channels, "The channel count is between 1 and 8.");
		destination.Clear();
		lock (_gate)
		{
			int frames = destination.Length / channels;
			for (int voiceIndex = _voices.Count - 1; voiceIndex >= 0; voiceIndex--)
			{
				Voice voice = _voices[voiceIndex];
				RenderVoice(voice, destination, channels, frames);
				if (voice.IsFinished)
					_voices.RemoveAt(voiceIndex);
			}
			return _voices.Count;
		}
	}

	private static void RenderVoice(Voice voice, Span<float> destination, int channels, int frames)
	{
		ReadOnlySpan<float> samples = voice.Clip.Samples.Span;
		int clipChannels = voice.Clip.Channels;
		int written = 0;
		while (written < frames && !voice.IsFinished)
		{
			if (voice.Position >= voice.LoopEnd)
			{
				if (!voice.Loop)
				{
					voice.IsFinished = true;
					break;
				}
				voice.Position = voice.LoopStart;
			}
			int count = Math.Min(frames - written, voice.LoopEnd - voice.Position);
			for (int frame = 0; frame < count; frame++)
			{
				int sourceFrame = (voice.Position + frame) * clipChannels;
				int destinationFrame = (written + frame) * channels;
				if (clipChannels == 1)
				{
					float sample = samples[sourceFrame] * voice.Volume;
					for (int channel = 0; channel < channels; channel++)
						destination[destinationFrame + channel] += sample;
					continue;
				}
				if (channels == 1)
				{
					float sum = 0f;
					for (int channel = 0; channel < clipChannels; channel++)
						sum += samples[sourceFrame + channel];
					destination[destinationFrame] += sum / clipChannels * voice.Volume;
					continue;
				}
				for (int channel = 0; channel < channels; channel++)
					destination[destinationFrame + channel] += samples[sourceFrame + channel % clipChannels] * voice.Volume;
			}
			voice.Position += count;
			written += count;
			if (voice.Position >= voice.LoopEnd && !voice.Loop)
				voice.IsFinished = true;
		}
	}

	private sealed class Voice
	{
		internal Voice(int id, AudioClip clip, float volume, bool loop)
		{
			Id = id;
			Clip = clip;
			Volume = volume;
			Loop = loop;
		}

		internal int Id { get; }
		internal AudioClip Clip { get; }
		internal float Volume { get; set; }
		internal bool Loop { get; }
		internal int LoopStart => Clip.LoopStart;
		internal int LoopEnd => Clip.LoopEnd;
		internal int Position { get; set; }
		internal bool IsFinished { get; set; }
	}
}
