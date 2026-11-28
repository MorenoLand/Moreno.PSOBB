using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks the sound id selection, exemptions, listener, distance and signed square root.
/// </summary>
[Collection("Game state")]
public sealed class SoundSelectionTests : IDisposable
{
	public SoundSelectionTests()
	{
		SoundSelection.OperationMode = 0;
		SoundSelection.Volume = 0;
		SoundSelection.LastSound = 0;
	}

	public void Dispose()
	{
		SoundSelection.OperationMode = 0;
		SoundSelection.Volume = 0;
		SoundSelection.LastSound = 0;
	}

	[Fact]
	public void TheModeTwentyOneAndTwentyTwoReplaceTheFourSelectionIds()
	{
		SoundSelection.OperationMode = 21;
		Assert.Equal(1201, SoundSelection.Select(1369));
		Assert.Equal(1202, SoundSelection.Select(1370));
		Assert.Equal(1203, SoundSelection.Select(1371));
		Assert.Equal(1204, SoundSelection.Select(1372));

		SoundSelection.OperationMode = 22;
		Assert.Equal(1201, SoundSelection.Select(1369));

		SoundSelection.OperationMode = 20;
		Assert.Equal(1369, SoundSelection.Select(1369));
	}

	[Fact]
	public void OtherIdsUseTheShippedRemap()
	{
		SoundSelection.OperationMode = 21;

		Assert.Equal(SoundEffectIds.SlotFor(342), SoundSelection.Select(342));
		Assert.Equal(SoundEffectIds.SlotFor(1391), SoundSelection.Select(1391));
	}

	[Fact]
	public void OnlyThreeIdsAreExempt()
	{
		Assert.True(SoundSelection.IsExempt(14));
		Assert.True(SoundSelection.IsExempt(31));
		Assert.True(SoundSelection.IsExempt(44));
		Assert.False(SoundSelection.IsExempt(15));
		Assert.False(SoundSelection.IsExempt(0));
	}

	[Fact]
	public void TheListenerIsAThreeFloatVector()
	{
		Assert.Equal(3, SoundSelection.Listener().Length);
	}

	[Fact]
	public void TheDistanceUsesTheFloorAndTheSignedRoot()
	{
		Assert.Equal(0f, SoundSelection.Distance([0f, 0f, 0f], [0.1f, 0f, 0f]));
		Assert.Equal(1f, SoundSelection.Distance([0f, 0f, 0f], [1f, 0f, 0f]));
		Assert.Equal(5f, SoundSelection.Distance([1f, 2f, 3f], [4f, 6f, 3f]));
		Assert.Equal(2f, SoundSelection.SignedSqrt(4f));
		Assert.Equal(-2f, SoundSelection.SignedSqrt(-4f));
	}

	[Fact]
	public void ThePlaybackAppliesTheAttenuationWeight()
	{
		int id = 1391;
		int slot = SoundSelection.Select(id);
		int attenuation = SoundEffectIds.VolumeIndex(slot);
		int centibels = -attenuation;
		double weight = (SoundSelection.Volume / 127.0 + 1.0) * (centibels / 127.0 + 1.0) - 1.0;
		int scaled = (int)(weight * weight * weight * 6400.0);
		float expected = MathF.Pow(10f, scaled / 2000f);
		int played = 0;
		float gain = 0f;

		int result = SoundSelection.Play(id, [], 0, 0, (playedId, playedGain) =>
		{
			played = playedId;
			gain = playedGain;
			return 7;
		});

		Assert.Equal(7, result);
		Assert.Equal(id, played);
		Assert.Equal(expected, gain, 6);
		Assert.Equal(7, SoundSelection.LastSound);
	}

	[Fact]
	public void AZeroIdAndADistantSoundAreDropped()
	{
		int calls = 0;
		Assert.Equal(-1, SoundSelection.Play(0, [], 0, 0, (_, _) => ++calls));
		Assert.Equal(-1, SoundSelection.Play(1391, [400f, 0f, 0f], 0, 0, (_, _) => ++calls));
		Assert.Equal(0, calls);
		Assert.Equal(-1, SoundSelection.LastSound);
	}

	[Fact]
	public void AnExemptModePlaysTheDistantSound()
	{
		SoundSelection.OperationMode = 44;
		int calls = 0;

		int result = SoundSelection.Play(1391, [400f, 0f, 0f], 0, 0, (_, _) => ++calls);

		Assert.Equal(1, result);
		Assert.Equal(1, calls);
	}

	[Fact]
	public void TheOffsetAppliesOnlyWithTheFlagBit()
	{
		SoundSelection.Volume = 10;
		float withFlag = 0f;
		float withoutFlag = 0f;

		SoundSelection.Play(1391, [], 20, 2, (_, gain) => { withFlag = gain; return 0; });
		SoundSelection.Play(1391, [], 20, 0, (_, gain) => { withoutFlag = gain; return 0; });

		Assert.True(withFlag > withoutFlag);
	}

	[Fact]
	public void ShortPointsAreRejected()
	{
		Assert.Throws<ArgumentException>(() => SoundSelection.Distance([0f, 0f], [0f, 0f, 0f]));
	}
}
