using PsoBB.Archives;

namespace PsoBB.Tests;

/// <summary>
/// Checks the AFS section table, section lookup and extraction.
/// </summary>
public sealed class AfsArchiveTests
{
	/// <summary>
	/// The header count and each offset/size pair become directory entries in table order.
	/// </summary>
	[Fact]
	public void ReadsTheSectionTable()
	{
		byte[] bytes = ArchiveSamples.Afs((0x800, [1, 2, 3]), (0x1000, [4, 5, 6, 7, 8]));
		AfsArchive archive = AfsArchive.Open(bytes);
		Assert.Equal(2, archive.Entries.Count);
		Assert.Equal(0, archive.Entries[0].Index);
		Assert.Equal(string.Empty, archive.Entries[0].Name);
		Assert.Equal(0x800, archive.Entries[0].Offset);
		Assert.Equal(3, archive.Entries[0].Size);
		Assert.False(archive.Entries[0].IsCompressed);
		Assert.Equal(0, archive.Entries[0].UncompressedSize);
		Assert.Equal(1, archive.Entries[1].Index);
		Assert.Equal(0x1000, archive.Entries[1].Offset);
		Assert.Equal(5, archive.Entries[1].Size);
	}

	/// <summary>
	/// Extracting a section returns exactly the bytes its table record covers.
	/// </summary>
	[Fact]
	public void ReadsSectionData()
	{
		byte[] bytes = ArchiveSamples.Afs((0x800, [1, 2, 3]), (0x1000, [4, 5, 6, 7, 8]));
		AfsArchive archive = AfsArchive.Open(bytes);
		Assert.Equal([1, 2, 3], archive.Read(archive.GetEntry(0)).ToArray());
		Assert.Equal([4, 5, 6, 7, 8], archive.Read(archive.GetEntry(1)).ToArray());
	}

	/// <summary>
	/// A section that ends exactly at the end of the archive is readable.
	/// </summary>
	[Fact]
	public void ReadsASectionAtTheEndOfTheArchive()
	{
		byte[] bytes = ArchiveSamples.Afs((16, [9, 8, 7]));
		AfsArchive archive = AfsArchive.Open(bytes);
		Assert.Equal([9, 8, 7], archive.Read(archive.GetEntry(0)).ToArray());
	}

	/// <summary>
	/// The header's reserved word does not affect parsing.
	/// </summary>
	[Fact]
	public void IgnoresTheReservedHeaderWord()
	{
		byte[] bytes = ArchiveSamples.AfsTable(0, 0xFFFFFFFF);
		AfsArchive archive = AfsArchive.Open(bytes);
		Assert.Empty(archive.Entries);
	}

	/// <summary>
	/// An AFS archive carries no names, so name lookup never matches.
	/// </summary>
	[Fact]
	public void NameLookupIsUnavailable()
	{
		AfsArchive archive = AfsArchive.Open(ArchiveSamples.Afs((8, [1])));
		Assert.Null(archive.Find("anything"));
		Assert.Null(archive.Find(string.Empty));
	}

	/// <summary>
	/// A header shorter than the count and reserved word is rejected.
	/// </summary>
	[Theory]
	[InlineData(0)]
	[InlineData(7)]
	public void RejectsATruncatedHeader(int length)
	{
		Assert.Throws<ArchiveFormatException>(() => AfsArchive.Open(new byte[length]));
	}

	/// <summary>
	/// A declared section count that does not fit the table is rejected.
	/// </summary>
	[Fact]
	public void RejectsATruncatedSectionTable()
	{
		byte[] bytes = ArchiveSamples.AfsTable(2, 0, (8, 4));
		Assert.Throws<ArchiveFormatException>(() => AfsArchive.Open(bytes));
	}

	/// <summary>
	/// A record whose offset or size cannot be represented as a readable range is rejected.
	/// </summary>
	[Fact]
	public void RejectsAFieldOutsideTheReadableRange()
	{
		byte[] bytes = ArchiveSamples.AfsTable(1, 0, (0xFFFFFFFF, 1));
		Assert.Throws<ArchiveFormatException>(() => AfsArchive.Open(bytes));
	}

	/// <summary>
	/// A section that claims more bytes than the archive holds is rejected on extraction.
	/// </summary>
	[Fact]
	public void RejectsASectionBeyondTheArchive()
	{
		byte[] bytes = ArchiveSamples.AfsTable(1, 0, (0x100, 0x20));
		AfsArchive archive = AfsArchive.Open(bytes);
		Assert.Throws<ArchiveFormatException>(() => archive.Read(archive.GetEntry(0)));
	}

	/// <summary>
	/// Entry indexes outside the table are rejected.
	/// </summary>
	[Fact]
	public void RejectsAnEntryIndexOutsideTheTable()
	{
		AfsArchive archive = AfsArchive.Open(ArchiveSamples.Afs((8, [1])));
		Assert.Throws<ArgumentOutOfRangeException>(() => archive.GetEntry(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => archive.GetEntry(1));
	}

	/// <summary>
	/// An entry from another archive cannot be read through this one.
	/// </summary>
	[Fact]
	public void RejectsAnEntryFromAnotherArchive()
	{
		AfsArchive first = AfsArchive.Open(ArchiveSamples.Afs((8, [1])));
		AfsArchive second = AfsArchive.Open(ArchiveSamples.Afs((8, [2])));
		Assert.Throws<ArgumentException>(() => first.Read(second.GetEntry(0)));
	}
}
