using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks looping, loop boundaries, seek state and end-of-stream handling.
/// </summary>
public sealed class MusicStreamTests
{
	[Fact]
	public void ReadsFramesUntilTheEnd()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f, 4f, 5f, 6f, 7f]));
		float[] first = new float[4];
		Assert.Equal(4, stream.Read(first));
		Assert.Equal([0f, 1f, 2f, 3f], first);
		float[] second = new float[8];
		Assert.Equal(4, stream.Read(second));
		Assert.Equal([4f, 5f, 6f, 7f, 0f, 0f, 0f, 0f], second);
		Assert.True(stream.IsFinished);
		Assert.Equal(0, stream.Read(second));
	}

	[Fact]
	public void ReadsAcrossLoopBoundary()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f, 4f, 5f, 6f, 7f]));
		stream.SetLoop(2, 5);
		float[] samples = new float[10];
		Assert.Equal(10, stream.Read(samples));
		Assert.Equal([0f, 1f, 2f, 3f, 4f, 2f, 3f, 4f, 2f, 3f], samples);
		Assert.Equal(4, stream.Position);
		Assert.False(stream.IsFinished);
	}

	[Fact]
	public void ShortReadsStillWrapAtTheLoopEnd()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f, 4f, 5f, 6f, 7f], 1));
		stream.SetLoop(1, 3);
		float[] samples = new float[7];
		Assert.Equal(7, stream.Read(samples));
		Assert.Equal([0f, 1f, 2f, 1f, 2f, 1f, 2f], samples);
	}

	[Fact]
	public void LoopEndIsExclusive()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f]));
		stream.SetLoop(1, 3);
		float[] samples = new float[4];
		Assert.Equal(4, stream.Read(samples));
		Assert.Equal([0f, 1f, 2f, 1f], samples);
	}

	[Fact]
	public void EnablingLoopingUsesTheWholeSource()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f]));
		stream.IsLooping = true;
		float[] samples = new float[6];
		Assert.Equal(6, stream.Read(samples));
		Assert.Equal([0f, 1f, 2f, 3f, 0f, 1f], samples);
	}

	[Fact]
	public void EnablingLoopingAfterTheEndRestartsTheLoop()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f]));
		float[] samples = new float[4];
		stream.Read(samples);
		Assert.True(stream.IsFinished);
		stream.SetLoop(1, 3);
		Assert.False(stream.IsFinished);
		float[] looped = new float[3];
		Assert.Equal(3, stream.Read(looped));
		Assert.Equal([1f, 2f, 1f], looped);
	}

	[Fact]
	public void ClearLoopStopsWrapping()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f]));
		stream.SetLoop(0, 2);
		stream.ClearLoop();
		float[] samples = new float[4];
		Assert.Equal(4, stream.Read(samples));
		Assert.Equal([0f, 1f, 2f, 3f], samples);
		Assert.True(stream.IsFinished);
	}

	[Fact]
	public void SeekMovesTheDecoderAndClearsTheEndState()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f, 4f, 5f]));
		float[] samples = new float[6];
		stream.Read(samples);
		Assert.True(stream.IsFinished);
		stream.Seek(3);
		Assert.Equal(3, stream.Position);
		Assert.False(stream.IsFinished);
		Array.Clear(samples);
		Assert.Equal(3, stream.Read(samples));
		Assert.Equal([3f, 4f, 5f, 0f, 0f, 0f], samples);
	}

	[Fact]
	public void SetLoopValidatesThePoints()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 1, [0f, 1f, 2f, 3f]));
		Assert.Throws<ArgumentOutOfRangeException>(() => stream.SetLoop(-1, 2));
		Assert.Throws<ArgumentOutOfRangeException>(() => stream.SetLoop(2, 2));
		Assert.Throws<ArgumentOutOfRangeException>(() => stream.SetLoop(1, 5));
		Assert.Throws<ArgumentOutOfRangeException>(() => stream.Seek(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => stream.Seek(5));
	}

	[Fact]
	public void SmallDestinationsReturnNoSamples()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 2, [0f, 1f, 2f, 3f]));
		Assert.Equal(0, stream.Read(new float[1]));
	}

	[Fact]
	public void PositionTracksTheDecoder()
	{
		MusicStream stream = new(new SyntheticAudioSource(44100, 2, [0f, 1f, 2f, 3f, 4f, 5f]));
		float[] samples = new float[4];
		stream.Read(samples);
		Assert.Equal(2, stream.Position);
		Assert.Equal(3, stream.TotalFrames);
		Assert.Equal(2, stream.Channels);
		Assert.Equal(44100, stream.SampleRate);
	}
}
