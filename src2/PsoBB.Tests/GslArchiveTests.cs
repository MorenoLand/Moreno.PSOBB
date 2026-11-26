using System.Buffers.Binary;
using PsoBB.Archives;

namespace PsoBB.Tests;

/// <summary>
/// Checks the GSL directory, name lookup, compression flag and PRS extraction.
/// </summary>
public sealed class GslArchiveTests
{
	/// <summary>
	/// Each directory slot becomes a named entry whose data offset is its sector times 2048.
	/// </summary>
	[Fact]
	public void ReadsNamesSectorsAndSizes()
	{
		byte[] bytes = ArchiveSamples.Gsl(("first.bin", [1, 2, 3], 0), ("second.bin", [4, 5], 0));
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Equal(2, archive.Entries.Count);
		Assert.Equal(0, archive.Entries[0].Index);
		Assert.Equal("first.bin", archive.Entries[0].Name);
		Assert.Equal(GslArchive.SectorSize, archive.Entries[0].Offset);
		Assert.Equal(3, archive.Entries[0].Size);
		Assert.Equal(0, archive.Entries[0].UncompressedSize);
		Assert.False(archive.Entries[0].IsCompressed);
		Assert.Equal(1, archive.Entries[1].Index);
		Assert.Equal("second.bin", archive.Entries[1].Name);
		Assert.Equal(2 * GslArchive.SectorSize, archive.Entries[1].Offset);
		Assert.Equal(2, archive.Entries[1].Size);
	}

	/// <summary>
	/// An entry without a decompressed size is returned byte for byte.
	/// </summary>
	[Fact]
	public void ReadsAnUncompressedEntry()
	{
		byte[] bytes = ArchiveSamples.Gsl(("plain.bin", [9, 8, 7, 6], 0));
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Equal([9, 8, 7, 6], archive.Read(archive.GetEntry(0)).ToArray());
	}

	/// <summary>
	/// A nonzero decompressed size marks a PRS stream and extraction returns the decoded bytes.
	/// </summary>
	/// <param name="length">Number of payload bytes, covering every literal-group tail.</param>
	[Theory]
	[InlineData(1)]
	[InlineData(2)]
	[InlineData(3)]
	[InlineData(6)]
	[InlineData(7)]
	[InlineData(8)]
	[InlineData(9)]
	[InlineData(15)]
	[InlineData(16)]
	[InlineData(17)]
	public void DecompressesAPrsEntry(int length)
	{
		byte[] payload = new byte[length];
		for (int index = 0; index < length; index++)
			payload[index] = (byte)('a' + index % 26);
		byte[] bytes = ArchiveSamples.Gsl(("compressed.bin", ArchiveSamples.Compress(payload), payload.Length));
		GslArchive archive = GslArchive.Open(bytes);
		ArchiveEntry entry = archive.GetEntry(0);
		Assert.True(entry.IsCompressed);
		Assert.Equal(payload.Length, entry.UncompressedSize);
		Assert.Equal(payload, archive.Read(entry).ToArray());
	}

	/// <summary>
	/// Name lookup lowercases the requested name and matches a lowercase directory name.
	/// </summary>
	[Fact]
	public void FindsAnEntryByUppercaseName()
	{
		byte[] bytes = ArchiveSamples.Gsl(("foo.nj", [1], 0));
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Same(archive.GetEntry(0), archive.Find("FOO.NJ"));
		Assert.Same(archive.GetEntry(0), archive.Find("foo.nj"));
		Assert.Null(archive.Find("bar.nj"));
	}

	/// <summary>
	/// The client lowers only the requested name, so an uppercase directory name is not matched.
	/// </summary>
	[Fact]
	public void DoesNotLowercaseTheDirectoryName()
	{
		byte[] bytes = ArchiveSamples.Gsl(("UPPER.NJ", [1], 0));
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Null(archive.Find("upper.nj"));
		Assert.Null(archive.Find("UPPER.NJ"));
	}

	/// <summary>
	/// A directory whose first slot is empty has no entries.
	/// </summary>
	[Fact]
	public void ReadsAnEmptyDirectory()
	{
		GslArchive archive = GslArchive.Open(ArchiveSamples.Gsl());
		Assert.Empty(archive.Entries);
	}

	/// <summary>
	/// An archive without even one directory slot is rejected.
	/// </summary>
	[Theory]
	[InlineData(0)]
	[InlineData(0x2F)]
	public void RejectsAnArchiveShorterThanOneEntry(int length)
	{
		Assert.Throws<ArchiveFormatException>(() => GslArchive.Open(new byte[length]));
	}

	/// <summary>
	/// The client scans only 0x7FF slots; a terminator in the next slot leaves the directory empty.
	/// </summary>
	[Fact]
	public void ReadsNoEntriesWhenTheTerminatorIsPastTheScanLimit()
	{
		(string, byte[], int)[] entries = new (string, byte[], int)[GslArchive.MaximumEntries];
		for (int index = 0; index < entries.Length; index++)
			entries[index] = ($"e{index}.bin", [], 0);
		GslArchive archive = GslArchive.Open(ArchiveSamples.Gsl(entries));
		Assert.Empty(archive.Entries);
	}

	/// <summary>
	/// The largest directory that still has a terminator inside the scan limit is read completely.
	/// </summary>
	[Fact]
	public void ReadsTheLargestTerminatedDirectory()
	{
		(string, byte[], int)[] entries = new (string, byte[], int)[GslArchive.MaximumEntries - 1];
		for (int index = 0; index < entries.Length; index++)
			entries[index] = ($"e{index}.bin", [], 0);
		GslArchive archive = GslArchive.Open(ArchiveSamples.Gsl(entries));
		Assert.Equal(GslArchive.MaximumEntries - 1, archive.Entries.Count);
		Assert.Equal("e0.bin", archive.Entries[0].Name);
		Assert.Equal("e2045.bin", archive.Entries[^1].Name);
	}

	/// <summary>
	/// An empty slot ends the directory even when later slots contain names.
	/// </summary>
	[Fact]
	public void StopsAtTheFirstEmptyEntry()
	{
		byte[] bytes = ArchiveSamples.Gsl(("first.bin", [1], 0), ("second.bin", [2], 0), ("ignored.bin", [3], 0));
		bytes.AsSpan(2 * GslArchive.EntrySize, GslArchive.EntrySize).CopyTo(bytes.AsSpan(3 * GslArchive.EntrySize));
		bytes.AsSpan(2 * GslArchive.EntrySize, GslArchive.EntrySize).Clear();
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Equal(2, archive.Entries.Count);
		Assert.Equal("first.bin", archive.Entries[0].Name);
		Assert.Equal("second.bin", archive.Entries[1].Name);
	}

	/// <summary>
	/// A directory that ends inside a named slot is rejected.
	/// </summary>
	[Fact]
	public void RejectsADirectoryThatEndsInsideANamedEntry()
	{
		byte[] bytes = new byte[GslArchive.EntrySize + 8];
		bytes[0] = (byte)'a';
		bytes[GslArchive.EntrySize] = (byte)'b';
		Assert.Throws<ArchiveFormatException>(() => GslArchive.Open(bytes));
	}

	/// <summary>
	/// Entry indexes outside the directory are rejected.
	/// </summary>
	[Fact]
	public void RejectsAnEntryIndexOutsideTheDirectory()
	{
		GslArchive archive = GslArchive.Open(ArchiveSamples.Gsl(("only.bin", [1], 0)));
		Assert.Throws<ArgumentOutOfRangeException>(() => archive.GetEntry(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => archive.GetEntry(1));
	}

	/// <summary>
	/// A record whose sector or sizes cannot be represented is rejected while reading the directory.
	/// </summary>
	[Fact]
	public void RejectsAnEntryOutsideTheReadableRange()
	{
		byte[] bytes = ArchiveSamples.Gsl(("large.bin", [1], 0));
		BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(0x20), (uint)(int.MaxValue / GslArchive.SectorSize + 1));
		Assert.Throws<ArchiveFormatException>(() => GslArchive.Open(bytes));
	}

	/// <summary>
	/// A record that points outside the archive is rejected on extraction.
	/// </summary>
	[Fact]
	public void RejectsAnEntryBeyondTheArchive()
	{
		byte[] bytes = ArchiveSamples.Gsl(("outside.bin", [1, 2], 0));
		BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(0x20), 0x1000);
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Throws<ArchiveFormatException>(() => archive.Read(archive.GetEntry(0)));
	}

	/// <summary>
	/// A declared decompressed size larger than the stream's output is rejected.
	/// </summary>
	[Fact]
	public void RejectsADecompressedSizeAboveTheStreamOutput()
	{
		byte[] stored = ArchiveSamples.Compress("abc"u8);
		byte[] bytes = ArchiveSamples.Gsl(("short.bin", stored, 4));
		GslArchive archive = GslArchive.Open(bytes);
		Assert.Throws<ArchiveFormatException>(() => archive.Read(archive.GetEntry(0)));
	}

	/// <summary>
	/// A malformed PRS stream is reported as an archive failure with the decompressor as its cause.
	/// </summary>
	[Fact]
	public void RejectsAMalformedPrsStream()
	{
		byte[] bytes = ArchiveSamples.Gsl(("broken.bin", [0x00], 4));
		GslArchive archive = GslArchive.Open(bytes);
		ArchiveFormatException exception = Assert.Throws<ArchiveFormatException>(() => archive.Read(archive.GetEntry(0)));
		Assert.IsType<PsoBB.Compression.PrsFormatException>(exception.InnerException);
	}

	/// <summary>
	/// An entry from another archive cannot be read through this one.
	/// </summary>
	[Fact]
	public void RejectsAnEntryFromAnotherArchive()
	{
		GslArchive first = GslArchive.Open(ArchiveSamples.Gsl(("first.bin", [1], 0)));
		GslArchive second = GslArchive.Open(ArchiveSamples.Gsl(("second.bin", [2], 0)));
		Assert.Throws<ArgumentException>(() => first.Read(second.GetEntry(0)));
	}
}
