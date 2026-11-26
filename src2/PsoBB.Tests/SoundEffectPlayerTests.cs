using PsoBB.Audio;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks sound-effect voice playback, volume, looping and channel mapping.
/// </summary>
public sealed class SoundEffectPlayerTests
{
	[Fact]
	public void PlaysClipAndAdvances()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.1f, 0.2f, 0.3f, 0.4f]);
		Assert.Equal(1, player.Play(clip));
		float[] first = new float[2];
		Assert.Equal(1, player.Render(first, 1));
		Assert.Equal([0.1f, 0.2f], first);
		float[] second = new float[3];
		Assert.Equal(0, player.Render(second, 1));
		Assert.Equal([0.3f, 0.4f, 0f], second);
	}

	[Fact]
	public void AppliesVoiceVolume()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.1f, -0.2f]);
		player.Play(clip, 0.5f);
		float[] samples = new float[2];
		player.Render(samples, 1);
		Assert.Equal([0.05f, -0.1f], samples);
	}

	[Fact]
	public void LoopsWholeClip()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.1f, 0.2f]);
		player.Play(clip, 1f, true);
		float[] samples = new float[4];
		Assert.Equal(1, player.Render(samples, 1));
		Assert.Equal([0.1f, 0.2f, 0.1f, 0.2f], samples);
	}

	[Fact]
	public void StopRemovesVoice()
	{
		SoundEffectPlayer player = new(44100);
		int voice = player.Play(new AudioClip(44100, 1, [0.5f]));
		Assert.True(player.Stop(voice));
		Assert.False(player.Stop(voice));
		float[] samples = [1f];
		Assert.Equal(0, player.Render(samples, 1));
		Assert.Equal(0f, samples[0]);
	}

	[Fact]
	public void StopAllRemovesEveryVoice()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.5f]);
		player.Play(clip);
		player.Play(clip);
		Assert.Equal(2, player.VoiceCount);
		player.StopAll();
		Assert.Equal(0, player.VoiceCount);
	}

	[Fact]
	public void SetVolumeChangesAnActiveVoice()
	{
		SoundEffectPlayer player = new(44100);
		int voice = player.Play(new AudioClip(44100, 1, [0.5f]));
		Assert.True(player.SetVolume(voice, 0.25f));
		float[] samples = new float[1];
		player.Render(samples, 1);
		Assert.Equal(0.125f, samples[0]);
		Assert.False(player.SetVolume(voice + 1, 0.5f));
	}

	[Fact]
	public void MapsMonoClipToStereo()
	{
		SoundEffectPlayer player = new(44100);
		player.Play(new AudioClip(44100, 1, [0.5f, -0.5f]));
		float[] samples = new float[4];
		player.Render(samples, 2);
		Assert.Equal([0.5f, 0.5f, -0.5f, -0.5f], samples);
	}

	[Fact]
	public void MapsStereoClipToMono()
	{
		SoundEffectPlayer player = new(44100);
		player.Play(new AudioClip(44100, 2, [1f, 0f, 0f, 1f]));
		float[] samples = new float[2];
		player.Render(samples, 1);
		Assert.Equal([0.5f, 0.5f], samples);
	}

	[Fact]
	public void RenderClearsTheDestination()
	{
		SoundEffectPlayer player = new(44100);
		float[] samples = [1f, 1f];
		Assert.Equal(0, player.Render(samples, 1));
		Assert.Equal([0f, 0f], samples);
	}

	[Fact]
	public void RejectsWrongSampleRate()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(48000, 1, [0.5f]);
		Assert.Throws<ArgumentException>(() => player.Play(clip));
	}

	[Fact]
	public void RejectsInvalidArguments()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.5f]);
		Assert.Throws<ArgumentNullException>(() => player.Play(null!));
		Assert.Throws<ArgumentOutOfRangeException>(() => player.Play(clip, -0.1f));
		Assert.Throws<ArgumentOutOfRangeException>(() => player.Play(clip, 1.1f));
		Assert.Throws<ArgumentOutOfRangeException>(() => player.SetVolume(1, float.NaN));
		Assert.Throws<ArgumentOutOfRangeException>(() => player.Render(new float[1], 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundEffectPlayer(0));
	}

	[Fact]
	public void RejectsMoreThanTheVoiceLimit()
	{
		SoundEffectPlayer player = new(44100);
		AudioClip clip = new(44100, 1, [0.5f]);
		for (int index = 0; index < 64; index++)
			player.Play(clip, 1f, true);
		Assert.Throws<InvalidOperationException>(() => player.Play(clip));
	}

	[Fact]
	public void ClipDecodesPcm()
	{
		AudioClip clip = AudioClip.FromPcm([0x00, 0x40, 0x00, 0xC0], new AudioFormat(44100, 1, 16));
		Assert.Equal(2, clip.FrameCount);
		Assert.Equal([0.5f, -0.5f], clip.Samples.ToArray());
		Assert.Throws<ArgumentException>(() => AudioClip.FromPcm([], new AudioFormat(44100, 1, 16)));
		Assert.Throws<ArgumentException>(() => AudioClip.FromPcm([0x00], new AudioFormat(44100, 1, 16)));
	}

	[Fact]
	public void ClipRejectsInvalidData()
	{
		Assert.Throws<ArgumentException>(() => new AudioClip(44100, 1, []));
		Assert.Throws<ArgumentException>(() => new AudioClip(44100, 2, [0.5f]));
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioClip(0, 1, [0.5f]));
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioClip(44100, 0, [0.5f]));
	}
}
