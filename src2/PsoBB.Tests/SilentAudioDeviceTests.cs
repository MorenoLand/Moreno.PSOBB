using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the silent audio output that stands in for DirectSound in tests.
/// </summary>
public sealed class SilentAudioDeviceTests
{
	[Fact]
	public void FormatReportsPcmLayout()
	{
		AudioFormat stereo = AudioFormat.Pcm16Stereo(44100);
		Assert.Equal(44100, stereo.SampleRate);
		Assert.Equal(2, stereo.Channels);
		Assert.Equal(16, stereo.BitsPerSample);
		Assert.Equal(2, stereo.BytesPerSample);
		Assert.Equal(4, stereo.BlockAlign);
		Assert.Equal(176400, stereo.AverageBytesPerSecond);
		AudioFormat mono = new(8000, 1, 8);
		Assert.Equal(1, mono.BlockAlign);
		Assert.Equal(8000, mono.AverageBytesPerSecond);
	}

	[Theory]
	[InlineData(0, 2, 16)]
	[InlineData(-1, 2, 16)]
	[InlineData(44100, 0, 16)]
	[InlineData(44100, 9, 16)]
	[InlineData(44100, 2, 12)]
	[InlineData(2_000_000_000, 8, 32)]
	public void InvalidFormatsAreRejected(int sampleRate, int channels, int bitsPerSample)
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioFormat(sampleRate, channels, bitsPerSample));
	}

	[Fact]
	public void FormatsCompareByTheirFields()
	{
		AudioFormat format = AudioFormat.Pcm16Stereo(48000);
		Assert.Equal(format, new AudioFormat(48000, 2, 16));
		Assert.Equal(format.GetHashCode(), new AudioFormat(48000, 2, 16).GetHashCode());
		Assert.NotEqual(format, AudioFormat.Pcm16Stereo(44100));
		Assert.Equal("48000 Hz, 2 channels, 16 bit", format.ToString());
	}

	[Fact]
	public void OutputKeepsTheRequestedFormatAndCapacity()
	{
		SilentAudioDevice device = new();
		AudioFormat format = AudioFormat.Pcm16Stereo(44100);
		using IAudioOutput output = device.OpenOutput(format, 64);
		Assert.Same(format, output.Format);
		Assert.Equal(64, output.Capacity);
		Assert.Equal(64, output.FreeBytes);
		Assert.False(output.IsPlaying);
	}

	[Fact]
	public void OpenOutputValidatesCapacity()
	{
		SilentAudioDevice device = new();
		AudioFormat format = AudioFormat.Pcm16Stereo(44100);
		Assert.Throws<ArgumentOutOfRangeException>(() => device.OpenOutput(format, 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => device.OpenOutput(format, 6));
		Assert.Throws<ArgumentNullException>(() => device.OpenOutput(null!, 8));
	}

	[Fact]
	public void WritesAreAcceptedUpToTheBufferSize()
	{
		SilentAudioOutput output = Assert.IsType<SilentAudioOutput>(new SilentAudioDevice().OpenOutput(AudioFormat.Pcm16Stereo(44100), 8));
		output.Write([1, 2, 3, 4]);
		Assert.Equal(4, output.BytesWritten);
		output.Write([5, 6, 7, 8]);
		Assert.Equal(8, output.BytesWritten);
		Assert.Equal(8, output.FreeBytes);
		Assert.Throws<InvalidOperationException>(() => output.Write(new byte[9]));
		Assert.Equal(8, output.BytesWritten);
		output.Dispose();
	}

	[Fact]
	public void PlayStopAndVolumeTrackState()
	{
		SilentAudioOutput output = Assert.IsType<SilentAudioOutput>(new SilentAudioDevice().OpenOutput(AudioFormat.Pcm16Stereo(48000), 16));
		output.Play();
		Assert.True(output.IsPlaying);
		output.Stop();
		Assert.False(output.IsPlaying);
		output.SetVolume(0.25f);
		Assert.Equal(0.25f, output.Volume);
		output.SetVolume(0f);
		Assert.Equal(0f, output.Volume);
		output.SetVolume(1f);
		Assert.Equal(1f, output.Volume);
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(-0.01f));
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(1.01f));
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(float.NaN));
		output.Dispose();
	}

	[Fact]
	public void DisposedOutputsRejectOperations()
	{
		SilentAudioOutput output = Assert.IsType<SilentAudioOutput>(new SilentAudioDevice().OpenOutput(AudioFormat.Pcm16Stereo(44100), 8));
		output.Dispose();
		output.Dispose();
		Assert.Throws<ObjectDisposedException>(() => _ = output.FreeBytes);
		Assert.Throws<ObjectDisposedException>(() => _ = output.IsPlaying);
		Assert.Throws<ObjectDisposedException>(() => output.Write([1]));
		Assert.Throws<ObjectDisposedException>(() => output.Play());
		Assert.Throws<ObjectDisposedException>(() => output.Stop());
		Assert.Throws<ObjectDisposedException>(() => output.SetVolume(0.5f));
	}

	[Fact]
	public void OutputsAreIndependent()
	{
		SilentAudioDevice device = new();
		SilentAudioOutput first = Assert.IsType<SilentAudioOutput>(device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 8));
		SilentAudioOutput second = Assert.IsType<SilentAudioOutput>(device.OpenOutput(AudioFormat.Pcm16Stereo(48000), 8));
		first.Play();
		Assert.True(first.IsPlaying);
		Assert.False(second.IsPlaying);
		first.Dispose();
		second.Dispose();
	}
}
