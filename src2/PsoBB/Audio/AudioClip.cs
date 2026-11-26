using PsoBB.Platform;

namespace PsoBB.Audio;

/// <summary>
/// A fixed block of interleaved normalised audio that a sound-effect voice can play.
/// </summary>
/// <remarks>
/// Clips keep the sample rate and channel count of the data they were created from; the player rejects a clip whose rate does not match the output.
/// </remarks>
public sealed class AudioClip
{
	private readonly float[] _samples;

	/// <summary>
	/// Copies normalised samples into a clip.
	/// </summary>
	/// <param name="sampleRate">The samples per second.</param>
	/// <param name="channels">The interleaved channel count.</param>
	/// <param name="samples">The samples, a whole number of frames.</param>
	/// <exception cref="ArgumentOutOfRangeException">The rate or channel count is invalid.</exception>
	/// <exception cref="ArgumentException">The clip is empty or not frame-aligned.</exception>
	public AudioClip(int sampleRate, int channels, ReadOnlySpan<float> samples)
	{
		if (sampleRate <= 0)
			throw new ArgumentOutOfRangeException(nameof(sampleRate), sampleRate, "The sample rate must be positive.");
		if (channels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(channels), channels, "The channel count is between 1 and 8.");
		if (samples.Length == 0 || samples.Length % channels != 0)
			throw new ArgumentException("The clip must contain complete frames.", nameof(samples));
		SampleRate = sampleRate;
		Channels = channels;
		_samples = samples.ToArray();
	}

	/// <summary>
	/// Gets the samples per second.
	/// </summary>
	public int SampleRate { get; }

	/// <summary>
	/// Gets the interleaved channel count.
	/// </summary>
	public int Channels { get; }

	/// <summary>
	/// Gets the number of frames.
	/// </summary>
	public int FrameCount => _samples.Length / Channels;

	/// <summary>
	/// Gets the interleaved normalised samples.
	/// </summary>
	public ReadOnlyMemory<float> Samples => _samples;

	/// <summary>
	/// Decodes signed little-endian PCM into a clip.
	/// </summary>
	/// <param name="pcm">The PCM bytes, a whole number of frames.</param>
	/// <param name="format">The PCM layout.</param>
	/// <returns>The decoded clip.</returns>
	/// <exception cref="ArgumentException">The byte count is not a whole number of frames.</exception>
	public static AudioClip FromPcm(ReadOnlySpan<byte> pcm, AudioFormat format)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (pcm.Length == 0 || pcm.Length % format.BlockAlign != 0)
			throw new ArgumentException("The PCM byte count must contain complete frames.", nameof(pcm));
		float[] samples = new float[pcm.Length / format.BytesPerSample];
		PcmConverter.ToSamples(pcm, format, samples);
		return new AudioClip(format.SampleRate, format.Channels, samples);
	}
}
