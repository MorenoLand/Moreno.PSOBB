namespace PsoBB.Audio;

/// <summary>
/// Applies the music, sound-effect and master gains and sums the two buses into one interleaved stream.
/// </summary>
/// <remarks>
/// Gains are linear from silence at zero to full volume at one. The mixer clips the sum to the normalised range so a loud effect cannot overflow the PCM conversion.
/// </remarks>
public sealed class AudioMixer
{
	private readonly object _gate = new();
	private float _musicVolume = 1f;
	private float _soundVolume = 1f;
	private float _masterVolume = 1f;

	/// <summary>
	/// Gets or sets the music bus gain from zero through one.
	/// </summary>
	public float MusicVolume
	{
		get
		{
			lock (_gate)
				return _musicVolume;
		}
		set
		{
			ValidateVolume(value);
			lock (_gate)
				_musicVolume = value;
		}
	}

	/// <summary>
	/// Gets or sets the sound-effect bus gain from zero through one.
	/// </summary>
	public float SoundVolume
	{
		get
		{
			lock (_gate)
				return _soundVolume;
		}
		set
		{
			ValidateVolume(value);
			lock (_gate)
				_soundVolume = value;
		}
	}

	/// <summary>
	/// Gets or sets the gain applied to the mixed result from zero through one.
	/// </summary>
	public float MasterVolume
	{
		get
		{
			lock (_gate)
				return _masterVolume;
		}
		set
		{
			ValidateVolume(value);
			lock (_gate)
				_masterVolume = value;
		}
	}

	/// <summary>
	/// Mixes the music and sound-effect buses into the destination.
	/// </summary>
	/// <param name="destination">The destination to overwrite.</param>
	/// <param name="music">The interleaved music samples; missing samples are silence.</param>
	/// <param name="soundEffects">The interleaved sound-effect samples; missing samples are silence.</param>
	public void Mix(Span<float> destination, ReadOnlySpan<float> music, ReadOnlySpan<float> soundEffects)
	{
		lock (_gate)
		{
			float musicVolume = _musicVolume;
			float soundVolume = _soundVolume;
			float masterVolume = _masterVolume;
			for (int index = 0; index < destination.Length; index++)
			{
				float musicSample = index < music.Length ? music[index] * musicVolume : 0f;
				float soundSample = index < soundEffects.Length ? soundEffects[index] * soundVolume : 0f;
				destination[index] = Math.Clamp((musicSample + soundSample) * masterVolume, -1f, 1f);
			}
		}
	}

	private static void ValidateVolume(float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
	}
}
