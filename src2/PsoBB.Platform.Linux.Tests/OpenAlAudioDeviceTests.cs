using PsoBB.Platform;

namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Checks the OpenAL streaming output when an output device is present.
/// </summary>
public sealed class OpenAlAudioDeviceTests
{
	private static AudioFormat Format => AudioFormat.Pcm16Stereo(44100);

	[OpenAlFact]
	public void OutputExposesTheContractFormatAndCapacity()
	{
		using OpenAlAudioDevice device = new();
		using IAudioOutput output = device.OpenOutput(Format, 44100 * 4);
		Assert.Equal(Format, output.Format);
		Assert.Equal(44100 * 4, output.Capacity);
		Assert.Equal(output.Capacity, output.FreeBytes);
		Assert.False(output.IsPlaying);
	}

	[OpenAlFact]
	public void WritePlayStopAndVolumeFollowTheContract()
	{
		using OpenAlAudioDevice device = new();
		using OpenAlAudioOutput output = Assert.IsType<OpenAlAudioOutput>(device.OpenOutput(Format, 44100 * 4));
		byte[] silence = new byte[output.Capacity];
		output.Write(silence);
		Assert.Equal(0, output.FreeBytes);
		output.Play();
		Assert.True(output.IsPlaying);
		output.SetVolume(0.5f);
		Assert.Equal(0.5f, output.Volume);
		output.Stop();
		Assert.False(output.IsPlaying);
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(-0.1f));
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(1.1f));
	}

	[OpenAlFact]
	public void WritesRejectBadFramesAndOverflow()
	{
		using OpenAlAudioDevice device = new();
		using IAudioOutput output = device.OpenOutput(Format, 44100 * 4);
		output.Write(new byte[4096]);
		Assert.Equal(output.Capacity - 4096, output.FreeBytes);
		Assert.Throws<ArgumentException>(() => output.Write(new byte[3]));
		Assert.Throws<InvalidOperationException>(() => output.Write(new byte[output.Capacity]));
		output.Write(ReadOnlySpan<byte>.Empty);
		Assert.Equal(output.Capacity - 4096, output.FreeBytes);
	}

	[OpenAlFact]
	public void UnsupportedFormatsAreRejected()
	{
		using OpenAlAudioDevice device = new();
		Assert.Throws<NotSupportedException>(() => device.OpenOutput(new AudioFormat(44100, 2, 24), 600));
		Assert.Throws<NotSupportedException>(() => device.OpenOutput(new AudioFormat(44100, 6, 16), 600));
		Assert.Throws<ArgumentNullException>(() => device.OpenOutput(null!, 600));
		Assert.Throws<ArgumentOutOfRangeException>(() => device.OpenOutput(Format, 3));
	}

	[OpenAlFact]
	public void DisposingRejectsOutputOperations()
	{
		using OpenAlAudioDevice device = new();
		OpenAlAudioOutput output = Assert.IsType<OpenAlAudioOutput>(device.OpenOutput(Format, 44100));
		output.Dispose();
		Assert.Throws<ObjectDisposedException>(() => _ = output.FreeBytes);
		Assert.Throws<ObjectDisposedException>(() => _ = output.IsPlaying);
		Assert.Throws<ObjectDisposedException>(() => output.Write(new byte[4]));
		Assert.Throws<ObjectDisposedException>(() => output.Play());
		Assert.Throws<ObjectDisposedException>(() => output.Stop());
		Assert.Throws<ObjectDisposedException>(() => output.SetVolume(0.5f));
		output.Dispose();
	}

	[OpenAlFact]
	public void TryCreateReportsAvailability()
	{
		Assert.True(OpenAlAudioDevice.TryCreate(out OpenAlAudioDevice? device, out string? reason), reason);
		Assert.NotNull(device);
		device.Dispose();
	}
}
