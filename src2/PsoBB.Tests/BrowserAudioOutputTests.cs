using PsoBB.Platform;
using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the browser audio device and its output contract against a recording backend.
/// </summary>
public sealed class BrowserAudioOutputTests
{
	[Fact]
	public void DeviceRejectsUnalignedOrEmptyBuffers()
	{
		BrowserAudioDevice device = new(new FakeAudioBackend());
		Assert.Throws<ArgumentOutOfRangeException>(() => device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4095));
		Assert.Throws<ArgumentNullException>(() => device.OpenOutput(null!, 4096));
	}

	[Fact]
	public void OutputForwardsWritesPlaybackAndVolume()
	{
		FakeAudioBackend backend = new();
		BrowserAudioDevice device = new(backend);
		using IAudioOutput output = device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4096);
		Assert.Equal(4096, output.Capacity);
		Assert.Equal(4096, output.FreeBytes);
		output.SetVolume(0.25f);
		Assert.Equal(0.25f, backend.Volume);
		output.Write([1, 2, 3, 4]);
		Assert.Equal(4092, output.FreeBytes);
		Assert.Equal(new byte[] { 1, 2, 3, 4 }, backend.Written[0]);
		Assert.False(output.IsPlaying);
		output.Play();
		Assert.True(output.IsPlaying);
		Assert.True(backend.Playing);
		output.Stop();
		Assert.False(output.IsPlaying);
		Assert.False(backend.Playing);
	}

	[Fact]
	public void OutputRejectsWritesThatWouldOverwriteAudio()
	{
		FakeAudioBackend backend = new();
		BrowserAudioDevice device = new(backend);
		using IAudioOutput output = device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 16);
		backend.FreeBytes = 8;
		Assert.Throws<InvalidOperationException>(() => output.Write(new byte[12]));
		Assert.Empty(backend.Written);
		Assert.Throws<InvalidOperationException>(() => output.Write(new byte[20]));
		Assert.Empty(backend.Written);
	}

	[Fact]
	public void VolumeOutsideTheLinearRangeIsRejected()
	{
		BrowserAudioDevice device = new(new FakeAudioBackend());
		using IAudioOutput output = device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4096);
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(-0.1f));
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(1.1f));
		Assert.Throws<ArgumentOutOfRangeException>(() => output.SetVolume(float.NaN));
	}

	[Fact]
	public void DisposeReleasesTheBackendOnce()
	{
		FakeAudioBackend backend = new();
		BrowserAudioDevice device = new(backend);
		IAudioOutput output = device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4096);
		output.Dispose();
		output.Dispose();
		Assert.Equal(1, backend.DisposeCalls);
		Assert.Throws<ObjectDisposedException>(() => _ = output.FreeBytes);
		Assert.Throws<ObjectDisposedException>(() => output.Write([1]));
	}

	[Fact]
	public void BackendFailureToCreateIsRejected()
	{
		FakeAudioBackend backend = new() { CreateHandle = 0 };
		BrowserAudioDevice device = new(backend);
		Assert.Throws<InvalidOperationException>(() => device.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4096));
	}

	private sealed class FakeAudioBackend : IBrowserAudioBackend
	{
		public int CreateHandle { get; init; } = 7;
		public int FreeBytes { get; set; }
		public int DisposeCalls { get; private set; }
		public bool Playing { get; private set; }
		public float Volume { get; private set; } = 1f;
		public List<byte[]> Written { get; } = [];

		public int Create(AudioFormat format, int capacityBytes)
		{
			FreeBytes = capacityBytes;
			return CreateHandle;
		}

		public int GetFreeBytes(int handle) => FreeBytes;

		public void Write(int handle, ReadOnlySpan<byte> pcm)
		{
			Written.Add(pcm.ToArray());
			FreeBytes -= pcm.Length;
		}

		public void Play(int handle) => Playing = true;

		public void Stop(int handle) => Playing = false;

		public void SetVolume(int handle, float volume) => Volume = volume;

		public void Dispose(int handle) => DisposeCalls++;
	}
}
