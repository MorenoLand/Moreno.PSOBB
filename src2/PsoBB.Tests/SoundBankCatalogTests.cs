using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks the fixed bank tables and the catalog's range validation.
/// </summary>
public sealed class SoundBankCatalogTests
{
	[Fact]
	public void DefaultCatalogMatchesTheClientTables()
	{
		SoundBankCatalog catalog = SoundBankCatalog.Default;
		Assert.Equal(26, catalog.FileNames.Count);
		Assert.Equal(50, catalog.MapFileIndex.Count);
		Assert.Equal(26, catalog.Banks.Count);
		Assert.Equal(7, catalog.CommonBank);
		Assert.Equal("common.pac", catalog.GetBank(7).FileName);
		Assert.Equal(6, catalog.GetBankIndexForMap(0));
		Assert.Equal(0, catalog.GetBankIndexForMap(49));
		Assert.Equal(25, catalog.GetBankIndexForMap(44));
		Assert.Equal(44, catalog.GetBank(25).SampleIds.Count);
		Assert.Equal("city.pac", catalog.GetBank(catalog.GetBankIndexForMap(0)).FileName);
		Assert.Equal(214, catalog.GetBank(7).SampleIds.Count);
		Assert.Equal(1811, catalog.Banks.Sum(bank => bank.SampleIds.Count));
		Assert.All(catalog.Banks, bank => Assert.Equal(bank.SampleIds.Count, bank.Metadata.Count));
		Assert.All(Enumerable.Range(0, catalog.Banks.Count), index => Assert.Equal(catalog.FileNames[index], catalog.Banks[index].FileName));
		Assert.Throws<ArgumentOutOfRangeException>(() => catalog.GetBankIndexForMap(50));
		Assert.Throws<ArgumentOutOfRangeException>(() => catalog.GetBankIndexForMap(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => catalog.GetBank(26));
	}

	[Fact]
	public void EmptyBankIsValid()
	{
		SoundBankDefinition bank = new("empty.pac", [], []);
		Assert.Empty(bank.SampleIds);
		Assert.Empty(bank.Metadata);
	}

	[Fact]
	public void RejectsMismatchedAndOutOfRangeBanks()
	{
		PacSoundMetadata entry = new(0, 0, 0, 0, 0, 0, 0);
		Assert.Throws<ArgumentException>(() => new SoundBankDefinition("", [], []));
		Assert.Throws<ArgumentException>(() => new SoundBankDefinition("dir/bank.pac", [], []));
		Assert.Throws<ArgumentException>(() => new SoundBankDefinition("bank.pac", [1], []));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankDefinition("bank.pac", [-1], [entry]));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankDefinition("bank.pac", [SoundEffectLibrary.SoundEffectSlots], [entry]));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankDefinition("bank.pac", [1], [entry with { FileOffset = -1 }]));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankDefinition("bank.pac", [1], [entry with { EndLoop = 1, StartLoop = 2 }]));
	}

	[Fact]
	public void RejectsCatalogRowsThatNameMissingBanks()
	{
		SoundBankDefinition bank = new("bank.pac", [], []);
		Assert.Throws<ArgumentException>(() => new SoundBankCatalog([], [], []));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankCatalog(["bank.pac"], [1], [bank], 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => new SoundBankCatalog(["bank.pac"], [0], [bank], 1));
		Assert.Throws<ArgumentException>(() => new SoundBankCatalog([""], [0], [bank], 0));
		Assert.Throws<ArgumentNullException>(() => new SoundBankCatalog(null!, [0], [bank], 0));
	}

	[Fact]
	public void MapLookupSelectsTheDeclaredBank()
	{
		SoundBankDefinition first = new("first.pac", [], []);
		SoundBankDefinition second = new("second.pac", [], []);
		SoundBankCatalog catalog = new(["first.pac", "second.pac"], [1, 0, 1], [first, second], 0);
		Assert.Equal(1, catalog.GetBankIndexForMap(0));
		Assert.Equal(0, catalog.GetBankIndexForMap(1));
		Assert.Same(second, catalog.GetBank(catalog.GetBankIndexForMap(2)));
	}
}
