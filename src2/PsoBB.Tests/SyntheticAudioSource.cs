using PsoBB.Audio;

namespace PsoBB.Tests;

internal sealed class SyntheticAudioSource : IAudioSampleSource
{
	private readonly float[] _samples;
	private readonly int _maximumReadSamples;
	private int _samplePosition;

	internal SyntheticAudioSource(int sampleRate, int channels, float[] samples, int maximumReadSamples = int.MaxValue)
	{
		SampleRate = sampleRate;
		Channels = channels;
		_samples = samples;
		_maximumReadSamples = maximumReadSamples;
	}

	public int SampleRate { get; }

	public int Channels { get; }

	public long TotalFrames => _samples.Length / Channels;

	public long Position => _samplePosition / Channels;

	public int Read(Span<float> samples)
	{
		int remaining = _samples.Length - _samplePosition;
		int count = Math.Min(Math.Min(samples.Length, remaining), _maximumReadSamples);
		count -= count % Channels;
		_samples.AsSpan(_samplePosition, count).CopyTo(samples);
		_samplePosition += count;
		return count;
	}

	public void Seek(long frame)
	{
		if (frame < 0 || frame > TotalFrames)
			throw new ArgumentOutOfRangeException(nameof(frame), frame, "The frame is outside the source.");
		_samplePosition = (int)(frame * Channels);
	}

	public void Dispose()
	{
	}
}
