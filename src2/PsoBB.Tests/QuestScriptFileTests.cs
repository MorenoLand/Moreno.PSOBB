using System.Buffers.Binary;
using System.Text;
using PsoBB.Quests;

namespace PsoBB.Tests;

/// <summary>
/// Checks the quest script container against synthetic files.
/// </summary>
public sealed class QuestScriptFileTests
{
	private static byte[] BuildScript(byte[] text, uint[] entryPoints, bool labelTableFirst = false, ushort questNumber = 0x1234, byte episode = 1, byte maxPlayers = 4, bool joinable = true, string? name = null, string? shortDescription = null, string? longDescription = null, int trailingBytes = 0)
	{
		int labelBytes = entryPoints.Length * 4;
		int totalSize = QuestScriptFile.HeaderLength + text.Length + labelBytes;
		uint textOffset = labelTableFirst ? (uint)(QuestScriptFile.HeaderLength + labelBytes) : QuestScriptFile.HeaderLength;
		uint labelTableOffset = labelTableFirst ? QuestScriptFile.HeaderLength : (uint)(QuestScriptFile.HeaderLength + text.Length);
		byte[] file = new byte[totalSize + trailingBytes];
		BinaryPrimitives.WriteUInt32LittleEndian(file, textOffset);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(4), labelTableOffset);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(8), (uint)totalSize);
		BinaryPrimitives.WriteUInt16LittleEndian(file.AsSpan(0x10), questNumber);
		file[0x14] = episode;
		file[0x15] = maxPlayers;
		file[0x16] = joinable ? (byte)1 : (byte)0;
		WriteField(file, 0x18, 0x20, name);
		WriteField(file, 0x58, 0x80, shortDescription);
		WriteField(file, 0x158, 0x120, longDescription);
		text.CopyTo(file, (int)textOffset);
		for (int index = 0; index < entryPoints.Length; index++)
			BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan((int)labelTableOffset + index * 4), entryPoints[index]);
		file.AsSpan(totalSize).Fill(0xAA);
		return file;
	}

	private static void WriteField(byte[] file, int offset, int length, string? value)
	{
		if (value is null)
			return;
		byte[] encoded = Encoding.Unicode.GetBytes(value);
		if (encoded.Length > length)
			throw new ArgumentException("The synthetic field value is too long.", nameof(value));
		encoded.CopyTo(file, offset);
	}

	/// <summary>
	/// The header offsets select the text and label-table sections and the labels become entry points.
	/// </summary>
	[Fact]
	public void ParsesHeaderSectionsAndEntryPoints()
	{
		byte[] text = [0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07];
		byte[] source = BuildScript(text, [0, 4]);
		QuestScriptFile file = QuestScriptFile.Parse(source);
		Assert.Equal((uint)QuestScriptFile.HeaderLength, file.TextOffset);
		Assert.Equal((uint)(QuestScriptFile.HeaderLength + text.Length), file.LabelTableOffset);
		Assert.Equal((uint)source.Length, file.TotalSize);
		Assert.Equal(text, file.Text.ToArray());
		Assert.Equal(2, file.EntryPoints.Length);
		Assert.Equal(0u, file.GetEntryPointOffset(0));
		Assert.Equal(4u, file.GetEntryPointOffset(1));
		Assert.Equal(8, file.LabelTable.Length);
	}

	/// <summary>
	/// The readable header fields identify the quest and its limits.
	/// </summary>
	[Fact]
	public void ReadsHeaderMetadata()
	{
		byte[] source = BuildScript([0x11, 0x22], [0], questNumber: 0x4321, episode: 2, maxPlayers: 0, joinable: false, name: "Synthetic", shortDescription: "Short", longDescription: "Long");
		QuestScriptFile file = QuestScriptFile.Parse(source);
		Assert.Equal(0x4321, file.QuestNumber);
		Assert.Equal(2, file.Episode);
		Assert.Equal(0, file.MaxPlayers);
		Assert.False(file.Joinable);
		byte[] name = Encoding.Unicode.GetBytes("Synthetic");
		Assert.True(file.Name.Span[..name.Length].SequenceEqual(name));
		byte[] shortDescription = Encoding.Unicode.GetBytes("Short");
		Assert.True(file.ShortDescription.Span[..shortDescription.Length].SequenceEqual(shortDescription));
		byte[] longDescription = Encoding.Unicode.GetBytes("Long");
		Assert.True(file.LongDescription.Span[..longDescription.Length].SequenceEqual(longDescription));
	}

	/// <summary>
	/// The label table may precede the text section when the header offsets say so.
	/// </summary>
	[Fact]
	public void SupportsLabelTableBeforeText()
	{
		byte[] text = [0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF];
		byte[] source = BuildScript(text, [0, 2], labelTableFirst: true);
		QuestScriptFile file = QuestScriptFile.Parse(source);
		Assert.Equal((uint)(QuestScriptFile.HeaderLength + 8), file.TextOffset);
		Assert.Equal((uint)QuestScriptFile.HeaderLength, file.LabelTableOffset);
		Assert.Equal(text, file.Text.ToArray());
		Assert.Equal(8, file.LabelTable.Length);
		Assert.Equal(2u, file.GetEntryPointOffset(1));
	}

	/// <summary>
	/// Bytes after the declared size are alignment padding and survive a round trip without entering either section.
	/// </summary>
	[Fact]
	public void RoundTripPreservesBytesAndSections()
	{
		byte[] source = BuildScript([1, 2, 3, 4], [0], trailingBytes: 3);
		QuestScriptFile file = QuestScriptFile.Parse(source);
		Assert.Equal(4, file.Text.Length);
		Assert.Equal((uint)(source.Length - 3), file.TotalSize);
		Assert.Equal(source, file.ToArray());
	}

	/// <summary>
	/// An empty file cannot contain the script header.
	/// </summary>
	[Fact]
	public void EmptyFileIsRejected() => Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse([]));

	/// <summary>
	/// A file shorter than the readable header is rejected.
	/// </summary>
	[Fact]
	public void ShortHeaderIsRejected() => Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(new byte[QuestScriptFile.HeaderLength - 1]));

	/// <summary>
	/// A declared size beyond the file is rejected.
	/// </summary>
	[Fact]
	public void TotalSizeBeyondFileIsRejected()
	{
		byte[] source = BuildScript([1], [0]);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(8), (uint)source.Length + 1);
		QuestFormatException error = Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
		Assert.Equal(8, error.Offset);
	}

	/// <summary>
	/// A declared size smaller than the header is rejected.
	/// </summary>
	[Fact]
	public void TotalSizeSmallerThanHeaderIsRejected()
	{
		byte[] source = BuildScript([1], [0]);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(8), 0x100);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// The text section may not start inside the readable header.
	/// </summary>
	[Fact]
	public void TextSectionInsideHeaderIsRejected()
	{
		byte[] source = BuildScript([1], [0]);
		BinaryPrimitives.WriteUInt32LittleEndian(source, 0x100);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// The label table may not start inside the readable header.
	/// </summary>
	[Fact]
	public void LabelTableInsideHeaderIsRejected()
	{
		byte[] source = BuildScript([1], [0]);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(4), 0x100);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// The text and label-table sections may not share a start offset.
	/// </summary>
	[Fact]
	public void OverlappingSectionsAreRejected()
	{
		byte[] source = BuildScript([1], [0]);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(4), QuestScriptFile.HeaderLength);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// A label table whose byte length is not divisible by four is rejected.
	/// </summary>
	[Fact]
	public void UnalignedLabelTableIsRejected()
	{
		byte[] source = new byte[QuestScriptFile.HeaderLength + 1 + 6];
		BinaryPrimitives.WriteUInt32LittleEndian(source, QuestScriptFile.HeaderLength);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(4), QuestScriptFile.HeaderLength + 1);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(8), (uint)source.Length);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// An entry point that points past the text section is rejected.
	/// </summary>
	[Fact]
	public void EntryPointBeyondTextIsRejected()
	{
		byte[] source = BuildScript([1, 2, 3, 4], [0, 4]);
		Assert.Throws<QuestFormatException>(() => QuestScriptFile.Parse(source));
	}

	/// <summary>
	/// Entry-point access is limited to the label table.
	/// </summary>
	[Fact]
	public void GetEntryPointOffsetRejectsOutOfRange()
	{
		QuestScriptFile file = QuestScriptFile.Parse(BuildScript([1], [0]));
		Assert.Throws<ArgumentOutOfRangeException>(() => file.GetEntryPointOffset(1));
	}
}
