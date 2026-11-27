using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the class-stat table at 0x009CC4BC and the 0x006AB1B4 record store.
/// </summary>
public sealed class CharacterClassStatsTests
{
	[Fact]
	public void ApplyStoresTheCountAndCopiesTheClassRecord()
	{
		byte[] record = new byte[144];
		Array.Fill(record, (byte)0xAA);

		CharacterClassStats.Apply(record, 0);

		Assert.Equal(CharacterClassStats.EntryCount, record[0]);
		Assert.True(CharacterClassStats.GetRecord(0).SequenceEqual(record.AsSpan(4)));
		Assert.All(record.AsSpan(1, 3).ToArray(), value => Assert.Equal(0xAA, value));
	}

	[Fact]
	public void EveryClassRecordIsAddressableAndTheyDiffer()
	{
		for (int classByte = 0; classByte < CharacterClassStats.ClassCount; classByte++)
			Assert.Equal(CharacterClassStats.RecordLength, CharacterClassStats.GetRecord(classByte).Length);

		Assert.False(CharacterClassStats.GetRecord(0).SequenceEqual(CharacterClassStats.GetRecord(11)));
	}

	[Fact]
	public void OutOfRangeClassesUseEntryZero()
	{
		Assert.Equal(0, CharacterClassStats.ClampClass(12));
		Assert.Equal(0, CharacterClassStats.ClampClass(255));
		Assert.Equal(0, CharacterClassStats.ClampClass(-1));
		Assert.Equal(11, CharacterClassStats.ClampClass(11));
		Assert.True(CharacterClassStats.GetRecord(12).SequenceEqual(CharacterClassStats.GetRecord(0)));
	}

	[Fact]
	public void AShortRecordIsRejected()
	{
		Assert.Throws<ArgumentException>(() => CharacterClassStats.Apply(new byte[143], 0));
	}
}
