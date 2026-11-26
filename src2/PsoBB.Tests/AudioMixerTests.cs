using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks music and sound-effect gains, summing and clipping.
/// </summary>
public sealed class AudioMixerTests
{
	[Fact]
	public void DefaultsAreFullVolume()
	{
		AudioMixer mixer = new();
		Assert.Equal(1f, mixer.MusicVolume);
		Assert.Equal(1f, mixer.SoundVolume);
		Assert.Equal(1f, mixer.MasterVolume);
	}

	[Fact]
	public void AppliesMusicVolume()
	{
		AudioMixer mixer = new() { MusicVolume = 0.5f };
		float[] destination = new float[2];
		mixer.Mix(destination, [0.5f, -0.5f], []);
		Assert.Equal([0.25f, -0.25f], destination);
	}

	[Fact]
	public void AppliesSoundVolume()
	{
		AudioMixer mixer = new() { SoundVolume = 0.25f };
		float[] destination = new float[2];
		mixer.Mix(destination, [], [0.8f, -0.8f]);
		Assert.Equal([0.2f, -0.2f], destination);
	}

	[Fact]
	public void AppliesMasterVolumeToTheSum()
	{
		AudioMixer mixer = new() { MusicVolume = 0.5f, SoundVolume = 0.5f, MasterVolume = 0.5f };
		float[] destination = new float[1];
		mixer.Mix(destination, [0.5f], [0.5f]);
		Assert.Equal(0.25f, destination[0]);
	}

	[Fact]
	public void SumsAndClipsBothDirections()
	{
		AudioMixer mixer = new();
		float[] destination = new float[2];
		mixer.Mix(destination, [0.8f, -0.8f], [0.8f, -0.8f]);
		Assert.Equal([1f, -1f], destination);
	}

	[Fact]
	public void MissingSamplesAreSilence()
	{
		AudioMixer mixer = new();
		float[] destination = new float[4];
		mixer.Mix(destination, [0.5f], [0.25f, 0.25f]);
		Assert.Equal([0.75f, 0.25f, 0f, 0f], destination);
	}

	[Fact]
	public void MixingOverwritesTheDestination()
	{
		AudioMixer mixer = new();
		float[] destination = [1f, 1f];
		mixer.Mix(destination, [], []);
		Assert.Equal([0f, 0f], destination);
	}

	[Fact]
	public void VolumesRejectInvalidValues()
	{
		AudioMixer mixer = new();
		Assert.Throws<ArgumentOutOfRangeException>(() => mixer.MusicVolume = -0.1f);
		Assert.Throws<ArgumentOutOfRangeException>(() => mixer.SoundVolume = 1.1f);
		Assert.Throws<ArgumentOutOfRangeException>(() => mixer.MasterVolume = float.NaN);
	}
}
