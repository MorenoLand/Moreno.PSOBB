using System.Buffers.Binary;
using System.Text;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0xBAA4-byte PSO_CHARACTER container, its four records, checksum, flags and slot fields.
/// </summary>
public sealed class CharacterSaveTests
{
	[Fact]
	public void ParsesTheFixedContainerAndAllFourRecords()
	{
		byte[] data = CreateValid();
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(CharacterSave.SaveCountOffset), 0x10203040);
		CharacterSaveCodec.Seal(data);
		CharacterSave save = CharacterSaveCodec.Parse(data);
		Assert.Equal(CharacterSave.Length, save.Bytes.Length);
		Assert.Equal(CharacterSave.SlotCount, save.Slots.Count);
		Assert.Equal(0x10203040u, save.SaveCount);
		Assert.True(save.ChecksumValid);
		Assert.Equal(CharacterSaveStatus.Valid, save.Validate());
		Assert.True(data.AsSpan().SequenceEqual(save.ToArray()));
	}

	[Fact]
	public void RoundTripsOpaqueCharacterBytes()
	{
		byte[] data = CreateValid();
		int slot = 2;
		int record = SlotOffset(slot);
		data[record + 0x0380] = 0x12;
		data[record + 0x0387] = 0x34;
		data[record + 0x2E38] = 0x56;
		data[record + 0x2E47] = 0x78;
		CharacterSaveCodec.Seal(data);
		CharacterSave save = CharacterSaveCodec.Parse(data);
		Assert.True(data.AsSpan().SequenceEqual(save.ToArray()));
		Assert.Equal(0x12, save[slot].Bytes[0x0380]);
		Assert.Equal(0x78, save[slot].Bytes[0x2E47]);
	}

	[Fact]
	public void RejectsATruncatedImage()
	{
		byte[] data = CreateValid()[..(CharacterSave.Length - 1)];
		Assert.Throws<CharacterSaveFormatException>(() => CharacterSaveCodec.Parse(data));
		Assert.False(CharacterSaveCodec.TryParse(data, out CharacterSave? save));
		Assert.Null(save);
	}

	[Fact]
	public void AcceptsTrailingBytesAfterTheFixedImage()
	{
		byte[] data = [.. CreateValid(), 1, 2, 3];
		CharacterSave save = CharacterSaveCodec.Parse(data);
		Assert.Equal(CharacterSave.Length, save.Bytes.Length);
		Assert.True(data.AsSpan(0, CharacterSave.Length).SequenceEqual(save.ToArray()));
	}

	[Fact]
	public void ReadsTheProvenSlotTeamAndSectionFields()
	{
		byte[] data = CreateValid();
		int record = SlotOffset(1);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(record + CharacterSaveSlot.LevelOffset), 42);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.MesetaOffset), 123456);
		data[record + CharacterSaveSlot.SectionIdOffset] = 7;
		data[record + CharacterSaveSlot.ClassOffset] = 3;
		WriteText(data, record + CharacterSaveSlot.NameOffset, CharacterSaveSlot.NameLength, "HUnewearl");
		WriteText(data, record + CharacterSaveSlot.TeamNameOffset, CharacterSaveSlot.TeamNameLength, "TEAM");
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.SignatureOffset), CharacterSaveCodec.CharacterSignature);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.TimestampOffset), 0x11223344);
		CharacterSaveCodec.Seal(data);
		CharacterSave save = CharacterSaveCodec.Parse(data);
		CharacterSaveSlot slot = save[1];
		Assert.Equal(1, slot.Slot);
		Assert.Equal(42, slot.Level);
		Assert.Equal(123456u, slot.Meseta);
		Assert.Equal(7, slot.SectionId);
		Assert.Equal(3, slot.Class);
		Assert.Equal("HUnewearl", slot.Name);
		Assert.Equal("TEAM", slot.TeamName);
		Assert.Equal(CharacterSaveCodec.CharacterSignature, slot.Signature);
		Assert.Equal(0x11223344u, slot.Timestamp);
	}

	[Fact]
	public void ReadsUtf16NamesAndDropsTheByteOrderMark()
	{
		byte[] data = CreateValid();
		int record = SlotOffset(0);
		WriteText(data, record + CharacterSaveSlot.NameOffset, CharacterSaveSlot.NameLength, "\uFEFFNAME");
		CharacterSaveCodec.Seal(data);
		Assert.Equal("NAME", CharacterSaveCodec.Parse(data)[0].Name);
	}

	[Fact]
	public void FlagsCoverTheFortyNineBitsTheOriginalAccepts()
	{
		CharacterSave save = CharacterSaveCodec.Parse(CreateValid());
		save.SetFlag(0, true);
		save.SetFlag(31, true);
		save.SetFlag(32, true);
		save.SetFlag(48, true);
		Assert.True(save.IsFlagSet(0));
		Assert.True(save.IsFlagSet(31));
		Assert.True(save.IsFlagSet(32));
		Assert.True(save.IsFlagSet(48));
		Assert.False(save.IsFlagSet(1));
		Assert.Equal(0x0001000180000001ul, save.Flags);
		Assert.Throws<ArgumentOutOfRangeException>(() => save.IsFlagSet(49));
		Assert.Throws<ArgumentOutOfRangeException>(() => save.SetFlag(49, true));
	}

	[Fact]
	public void DetectsAChecksumMismatch()
	{
		byte[] data = CreateValid();
		data[SlotOffset(2) + 0x0100] ^= 0xFF;
		CharacterSave save = CharacterSaveCodec.Parse(data);
		Assert.False(save.ChecksumValid);
		Assert.Equal(CharacterSaveStatus.ChecksumMismatch, save.Validate());
	}

	[Fact]
	public void DetectsASignatureMismatchAfterSealing()
	{
		byte[] data = CreateValid();
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(SlotOffset(3) + CharacterSaveSlot.SignatureOffset), 0xDEADBEEF);
		CharacterSaveCodec.Seal(data);
		CharacterSave save = CharacterSaveCodec.Parse(data);
		Assert.True(save.ChecksumValid);
		Assert.Equal(CharacterSaveStatus.SignatureMismatch, save.Validate());
	}

	[Fact]
	public void ValidateDistinguishesAbsentFromTruncated()
	{
		Assert.Equal(CharacterSaveStatus.Absent, CharacterSaveCodec.Validate([]));
		Assert.Throws<CharacterSaveFormatException>(() => CharacterSaveCodec.Validate(new byte[1]));
	}

	[Fact]
	public void AcceptsZeroAndRetailSignatures()
	{
		byte[] data = CreateValid();
		Assert.Equal(CharacterSaveStatus.Valid, CharacterSaveCodec.Validate(data));
		for (int slot = 0; slot < CharacterSave.SlotCount; slot++)
			BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(SlotOffset(slot) + CharacterSaveSlot.SignatureOffset), CharacterSaveCodec.CharacterSignature);
		CharacterSaveCodec.Seal(data);
		Assert.Equal(CharacterSaveStatus.Valid, CharacterSaveCodec.Validate(data));
	}

	[Fact]
	public void TheLoaderChecksumIncludesTheReservedWord()
	{
		byte[] data = CreateValid();
		data[CharacterSave.ReservedOffset] = 0xAA;
		Assert.Equal(CharacterSaveStatus.ChecksumMismatch, CharacterSaveCodec.Validate(data));
		BinaryPrimitives.WriteUInt32LittleEndian(data, CharacterSaveCodec.ComputeChecksum(data));
		Assert.Equal(CharacterSaveStatus.Valid, CharacterSaveCodec.Validate(data));
	}

	[Fact]
	public void SealMatchesTheGoldenCrcAndClearsTheReservedWord()
	{
		byte[] data = new byte[CharacterSave.Length];
		for (int index = 0; index < data.Length; index++)
			data[index] = (byte)((index * 7 + 3) & 0xFF);
		Assert.Equal(0x6517C856u, CharacterSaveCodec.ComputeChecksum(data));
		uint checksum = CharacterSaveCodec.Seal(data);
		Assert.Equal(0x613E6FF4u, checksum);
		Assert.Equal(checksum, BinaryPrimitives.ReadUInt32LittleEndian(data));
		Assert.Equal(0u, BinaryPrimitives.ReadUInt32LittleEndian(data.AsSpan(CharacterSave.ReservedOffset)));
	}

	[Fact]
	public void ComparesTheSystemRecordWithTheOriginalStatuses()
	{
		byte[] data = CreateValid();
		int system = SlotOffset(0) + CharacterSaveSlot.SystemRecordOffset;
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(system + 0x14), 5);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(system + 0x04), 0x1234);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(system + 0x08), CharacterSaveCodec.CharacterSignature);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(CharacterSave.SaveCountOffset), 10);
		CharacterSaveCodec.Seal(data);
		CharacterSave existing = CharacterSaveCodec.Parse(data);
		byte[] systemRecord = new byte[CharacterSaveSlot.SystemRecordLength];
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x14), 6);
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x04), 0x1234);
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x08), CharacterSaveCodec.CharacterSignature);
		Assert.Equal(CharacterSaveComparison.Newer, CharacterSaveCodec.CompareSystemRecord(systemRecord, existing, 0, 10));
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x14), 5);
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x04), 0x9999);
		Assert.Equal(CharacterSaveComparison.TimestampMismatch, CharacterSaveCodec.CompareSystemRecord(systemRecord, existing, 0, 10));
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x04), 0x1234);
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x08), 0);
		Assert.Equal(CharacterSaveComparison.SignatureMismatch, CharacterSaveCodec.CompareSystemRecord(systemRecord, existing, 0, 10));
		BinaryPrimitives.WriteUInt32LittleEndian(systemRecord.AsSpan(0x08), CharacterSaveCodec.CharacterSignature);
		Assert.Equal(CharacterSaveComparison.SaveCountMismatch, CharacterSaveCodec.CompareSystemRecord(systemRecord, existing, 0, 11));
		Assert.Equal(CharacterSaveComparison.Match, CharacterSaveCodec.CompareSystemRecord(systemRecord, existing, 0, 10));
		Assert.Equal(CharacterSaveComparison.Absent, CharacterSaveCodec.CompareSystemRecord([], existing, 0, 10));
		Assert.Equal(CharacterSaveComparison.Absent, CharacterSaveCodec.CompareSystemRecord(systemRecord, null, 0, 10));
	}

	[Fact]
	public void RejectsANonZeroShortSystemRecord()
	{
		CharacterSave existing = CharacterSaveCodec.Parse(CreateValid());
		Assert.Throws<ArgumentException>(() => CharacterSaveCodec.CompareSystemRecord(new byte[0x17], existing, 0, 0));
	}

	private static byte[] CreateValid()
	{
		byte[] data = new byte[CharacterSave.Length];
		CharacterSaveCodec.Seal(data);
		return data;
	}

	private static int SlotOffset(int slot) => CharacterSave.SlotOffset + slot * CharacterSave.SlotLength;

	private static void WriteText(byte[] data, int offset, int length, string value)
	{
		byte[] encoded = Encoding.Unicode.GetBytes(value);
		encoded.AsSpan(0, Math.Min(encoded.Length, length)).CopyTo(data.AsSpan(offset));
	}
}
