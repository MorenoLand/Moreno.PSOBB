using PsoBB.Audio;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the streaming pipeline from a synthetic decoder through the ring to the platform output.
/// </summary>
public sealed class AudioPipelineTests
{
	private static readonly AudioFormat Format = AudioFormat.Pcm16Stereo(44100);

	[Fact]
	public void ReportsTheOriginalStreamGeometry()
	{
		Assert.Equal(44100, AudioPipeline.StreamChunkBytes);
		Assert.Equal(705600, AudioPipeline.StreamCapacityBytes);
	}

	[Fact]
	public void FillsAndDrainsMusic()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.5f, -0.5f, 0.25f, -0.25f]));
		Assert.Equal(2, pipeline.Fill(2));
		Assert.Equal(8, pipeline.Buffer.AvailableBytes);
		Assert.Equal(8, pipeline.Drain());
		Assert.Equal([0.5f, 0.5f, -0.5f, -0.5f], Decode(output.Bytes));
	}

	[Fact]
	public void FillStopsAtRingCapacity()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 8, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, -0.25f, 0.5f, -0.5f]));
		Assert.Equal(2, pipeline.Fill(10));
		Assert.Equal(8, pipeline.Buffer.AvailableBytes);
		Assert.Equal(0, pipeline.Fill(1));
		Assert.Equal(8, pipeline.Drain());
		Assert.Equal(1, pipeline.Fill(1));
	}

	[Fact]
	public void DrainStopsAtOutputFreeSpace()
	{
		CapturingAudioOutput output = new(Format, 8);
		using AudioPipeline pipeline = new(output, 32, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, -0.25f, 0.5f, -0.5f]));
		pipeline.Fill(4);
		Assert.Equal(8, pipeline.Drain());
		Assert.Equal(0, pipeline.Drain());
		output.Consume(8);
		Assert.Equal(8, pipeline.Drain());
	}

	[Fact]
	public void FillAvailableFillsTheRing()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f, 0.75f, -0.25f, 0.1f, 0.2f]));
		Assert.Equal(4, pipeline.FillAvailable());
		Assert.Equal(0, pipeline.FillAvailable());
		Assert.Equal(16, pipeline.Buffer.AvailableBytes);
	}

	[Fact]
	public void MusicVolumeScalesOutput()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16, 2);
		pipeline.Mixer.MusicVolume = 0.5f;
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.5f]));
		pipeline.Fill(1);
		pipeline.Drain();
		Assert.Equal([0.25f, 0.25f], Decode(output.Bytes));
	}

	[Fact]
	public void MixesSoundEffectWithMusic()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f]));
		pipeline.PlaySound(new AudioClip(44100, 1, [0.25f]));
		pipeline.Fill(1);
		pipeline.Drain();
		Assert.Equal([0.5f, 0.5f], Decode(output.Bytes));
	}

	[Fact]
	public void LoopsMusicAcrossFills()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 64, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f, 0.75f, -0.25f]));
		pipeline.SetLoop(1, 3);
		Assert.Equal(6, pipeline.Fill(6));
		pipeline.Drain();
		Assert.Equal([0.25f, 0.25f, 0.5f, 0.5f, 0.75f, 0.75f, 0.5f, 0.5f, 0.75f, 0.75f, 0.5f, 0.5f], Decode(output.Bytes));
	}

	[Fact]
	public void SeekDiscardsQueuedAudio()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 32, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f, 0.75f, -0.25f]));
		pipeline.Fill(2);
		Assert.NotEqual(0, pipeline.Buffer.AvailableBytes);
		pipeline.Seek(2);
		Assert.Equal(0, pipeline.Buffer.AvailableBytes);
		Assert.Equal(2, pipeline.MusicPosition);
		pipeline.Fill(1);
		pipeline.Drain();
		Assert.Equal([0.75f, 0.75f], Decode(output.Bytes));
	}

	[Fact]
	public void StopClearsRingAndEffects()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 32, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f]));
		pipeline.Play();
		pipeline.PlaySound(new AudioClip(44100, 1, [0.25f]));
		pipeline.Fill(2);
		pipeline.Stop();
		Assert.Equal(0, pipeline.Buffer.AvailableBytes);
		Assert.Equal(0, pipeline.Sounds.VoiceCount);
		Assert.False(output.IsPlaying);
	}

	[Fact]
	public void PauseKeepsQueuedAudio()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 32, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f]));
		pipeline.Play();
		pipeline.Fill(2);
		pipeline.Pause();
		Assert.False(output.IsPlaying);
		Assert.Equal(8, pipeline.Buffer.AvailableBytes);
		pipeline.Play();
		Assert.True(output.IsPlaying);
	}

	[Fact]
	public void SourceEndFillsSilence()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 64, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.5f]));
		Assert.Equal(4, pipeline.Fill(4));
		pipeline.Drain();
		Assert.True(pipeline.IsFinished);
		Assert.Equal([0.5f, 0.5f, 0f, 0f, 0f, 0f, 0f, 0f], Decode(output.Bytes));
	}

	[Fact]
	public void RejectsMismatchedMusicRate()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16);
		Assert.Throws<ArgumentException>(() => pipeline.Music = new MusicStream(new SyntheticAudioSource(48000, 1, [0.25f])));
	}

	[Fact]
	public void RejectsInvalidConstructionAndFill()
	{
		CapturingAudioOutput output = new(Format, 64);
		Assert.Throws<ArgumentNullException>(() => new AudioPipeline(null!, 16));
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioPipeline(output, 6));
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioPipeline(output, 16, 0));
		using AudioPipeline pipeline = new(output, 16);
		Assert.Throws<ArgumentOutOfRangeException>(() => pipeline.Fill(0));
	}

	[Fact]
	public void DisposeDisposesTheOutput()
	{
		CapturingAudioOutput output = new(Format, 64);
		AudioPipeline pipeline = new(output, 16);
		pipeline.Dispose();
		pipeline.Dispose();
		Assert.True(output.IsDisposed);
		Assert.Throws<ObjectDisposedException>(() => pipeline.Fill(1));
		Assert.Throws<ObjectDisposedException>(() => pipeline.Play());
	}

	[Fact]
	public void PumpFillsAndDrainsInOneCall()
	{
		CapturingAudioOutput output = new(Format, 64);
		using AudioPipeline pipeline = new(output, 16, 2);
		pipeline.Music = new MusicStream(new SyntheticAudioSource(44100, 1, [0.25f, 0.5f]));
		Assert.Equal(2, pipeline.Pump(2));
		Assert.Equal(8, output.ByteCount);
		Assert.Equal(0, pipeline.Buffer.AvailableBytes);
	}

	private static float[] Decode(byte[] pcm)
	{
		float[] samples = new float[pcm.Length / Format.BytesPerSample];
		PcmConverter.ToSamples(pcm, Format, samples);
		return samples;
	}
}
