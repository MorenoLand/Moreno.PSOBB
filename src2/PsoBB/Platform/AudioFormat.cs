namespace PsoBB.Platform;

/// <summary>
/// The signed little-endian PCM layout of an audio stream.
/// </summary>
/// <remarks>
/// The original opens a 48 kHz stereo 16-bit primary buffer and a 44.1 kHz stereo 16-bit streaming buffer; this type covers the PCM sample widths DirectSound accepts.
/// </remarks>
public sealed class AudioFormat : IEquatable<AudioFormat>
{
	/// <summary>
	/// Creates a PCM format.
	/// </summary>
	/// <param name="sampleRate">The samples per second.</param>
	/// <param name="channels">The interleaved channel count.</param>
	/// <param name="bitsPerSample">The bits per sample: 8, 16, 24 or 32.</param>
	public AudioFormat(int sampleRate, int channels, int bitsPerSample)
	{
		if (sampleRate <= 0)
			throw new ArgumentOutOfRangeException(nameof(sampleRate), sampleRate, "The sample rate must be positive.");
		if (channels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(channels), channels, "The channel count is between 1 and 8.");
		if (bitsPerSample is not (8 or 16 or 24 or 32))
			throw new ArgumentOutOfRangeException(nameof(bitsPerSample), bitsPerSample, "A PCM sample is 8, 16, 24 or 32 bits.");
		long bytesPerSecond = (long)sampleRate * channels * (bitsPerSample / 8);
		if (bytesPerSecond > int.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(sampleRate), sampleRate, "The byte rate exceeds the supported audio range.");
		SampleRate = sampleRate;
		Channels = channels;
		BitsPerSample = bitsPerSample;
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
	/// Gets the bits per sample.
	/// </summary>
	public int BitsPerSample { get; }

	/// <summary>
	/// Gets the bytes per sample.
	/// </summary>
	public int BytesPerSample => BitsPerSample / 8;

	/// <summary>
	/// Gets the bytes in one interleaved frame.
	/// </summary>
	public int BlockAlign => Channels * BytesPerSample;

	/// <summary>
	/// Gets the bytes in one second of audio.
	/// </summary>
	public int AverageBytesPerSecond => SampleRate * BlockAlign;

	/// <summary>
	/// Creates a 16-bit stereo PCM format.
	/// </summary>
	/// <param name="sampleRate">The samples per second.</param>
	/// <returns>The stereo format.</returns>
	public static AudioFormat Pcm16Stereo(int sampleRate) => new(sampleRate, 2, 16);

	/// <inheritdoc/>
	public bool Equals(AudioFormat? other) => other is not null && SampleRate == other.SampleRate && Channels == other.Channels && BitsPerSample == other.BitsPerSample;

	/// <inheritdoc/>
	public override bool Equals(object? obj) => obj is AudioFormat other && Equals(other);

	/// <inheritdoc/>
	public override int GetHashCode() => HashCode.Combine(SampleRate, Channels, BitsPerSample);

	/// <inheritdoc/>
	public override string ToString() => $"{SampleRate} Hz, {Channels} channel{(Channels == 1 ? string.Empty : "s")}, {BitsPerSample} bit";
}
