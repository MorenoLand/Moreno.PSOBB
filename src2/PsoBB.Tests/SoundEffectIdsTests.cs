using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks the client's global sound identifier remap and attenuation tables.
/// </summary>
public sealed class SoundEffectIdsTests
{
	[Theory]
	[InlineData(1391, 1391)]
	[InlineData(1392, 1392)]
	[InlineData(1056, 1056)]
	public void MenuIdentifiersSelectTheirOwnSlots(int soundEffectId, int slot) => Assert.Equal(slot, SoundEffectIds.SlotFor(soundEffectId));

	[Theory]
	[InlineData(1, 1)]
	[InlineData(213, 213)]
	[InlineData(1393, 1393)]
	[InlineData(1791, 1791)]
	public void UnmappedIdentifiersKeepTheirSlot(int soundEffectId, int slot) => Assert.Equal(slot, SoundEffectIds.SlotFor(soundEffectId));

	[Theory]
	[InlineData(342, 309)]
	[InlineData(651, 532)]
	[InlineData(739, 645)]
	[InlineData(920, 997)]
	[InlineData(1177, 1368)]
	[InlineData(1281, 1245)]
	[InlineData(1390, 1373)]
	public void AliasedIdentifiersUseTheSharedSlot(int soundEffectId, int slot) => Assert.Equal(slot, SoundEffectIds.SlotFor(soundEffectId));

	[Theory]
	[InlineData(0)]
	[InlineData(-1)]
	[InlineData(SoundEffectIds.SlotCount)]
	[InlineData(0x1000)]
	public void IdentifiersOutsideTheTableHaveNoSlot(int soundEffectId) => Assert.Equal(-1, SoundEffectIds.SlotFor(soundEffectId));

	[Theory]
	[InlineData(0x15)]
	[InlineData(0x16)]
	public void WaterAndWildsRemapTheSelectionIdentifiers(int area)
	{
		Assert.Equal(0x4B1, SoundEffectIds.SlotFor(0x559, area));
		Assert.Equal(0x4B2, SoundEffectIds.SlotFor(0x55A, area));
		Assert.Equal(0x4B3, SoundEffectIds.SlotFor(0x55B, area));
		Assert.Equal(0x4B4, SoundEffectIds.SlotFor(0x55C, area));
		Assert.Equal(1391, SoundEffectIds.SlotFor(1391, area));
	}

	[Fact]
	public void OtherAreasKeepTheNormalSelectionMapping()
	{
		Assert.Equal(0x559, SoundEffectIds.SlotFor(0x559));
		Assert.Equal(0x559, SoundEffectIds.SlotFor(0x559, 0x14));
		Assert.Equal(0x559, SoundEffectIds.SlotFor(0x559, 0x17));
	}

	[Theory]
	[InlineData(1391, 65)]
	[InlineData(1056, 35)]
	[InlineData(1392, 45)]
	[InlineData(1395, 55)]
	public void VolumeIndexComesFromTheSlotTable(int slot, int volumeIndex) => Assert.Equal(volumeIndex, SoundEffectIds.VolumeIndex(slot));

	[Fact]
	public void VolumeIndexOutsideTheTableIsZero()
	{
		Assert.Equal(0, SoundEffectIds.VolumeIndex(-1));
		Assert.Equal(0, SoundEffectIds.VolumeIndex(SoundEffectIds.SlotCount));
	}

	[Theory]
	[InlineData(0, 0)]
	[InlineData(35, -133)]
	[InlineData(45, -284)]
	[InlineData(65, -858)]
	[InlineData(127, -6400)]
	public void VolumeIndexUsesTheClientCubicCurve(int volumeIndex, int centibels) => Assert.Equal(centibels, SoundEffectIds.VolumeCentibels(volumeIndex));

	[Theory]
	[InlineData(35, 0.858f)]
	[InlineData(45, 0.7211f)]
	[InlineData(65, 0.3724f)]
	public void VolumeGainConvertsCentibelsToLinearGain(int volumeIndex, float gain) => Assert.Equal(gain, SoundEffectIds.VolumeGain(volumeIndex), 3);
}
