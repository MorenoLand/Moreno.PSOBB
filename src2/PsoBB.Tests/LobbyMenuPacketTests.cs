using System.Buffers.Binary;
using PsoBB.Net;

namespace PsoBB.Tests;

/// <summary>
/// Checks the command 0x83 lobby-menu record codec against synthetic payloads.
/// </summary>
public sealed class LobbyMenuPacketTests
{
	[Fact]
	public void ReadsTheHeaderCountAndEveryRecordField()
	{
		byte[] payload = new byte[3 * LobbyMenuPacket.RecordLength];
		WriteRecord(payload, 0, 0x11, 0x22, 0x33);
		WriteRecord(payload, 1, 0x44, 0x55, 0x66);
		WriteRecord(payload, 2, 0x77, 0x88, 0x99);
		LobbyMenuPacket menu = LobbyMenuPacket.Read(payload, 3);
		Assert.Equal(3, menu.Count);
		Assert.Equal(new LobbyMenuRecord(0x11, 0x22, 0x33), menu.Records[0]);
		Assert.Equal(new LobbyMenuRecord(0x44, 0x55, 0x66), menu.Records[1]);
		Assert.Equal(new LobbyMenuRecord(0x77, 0x88, 0x99), menu.Records[2]);
	}

	[Fact]
	public void ZeroEntriesYieldAnEmptyMenu()
	{
		LobbyMenuPacket menu = LobbyMenuPacket.Read([], 0);
		Assert.Equal(0, menu.Count);
		Assert.Empty(menu.Records);
	}

	[Fact]
	public void RejectsACountAboveTheRecordArea()
	{
		InvalidDataException exception = Assert.Throws<InvalidDataException>(() => LobbyMenuPacket.Read(new byte[LobbyMenuPacket.MaximumRecords * LobbyMenuPacket.RecordLength], LobbyMenuPacket.MaximumRecords + 1));
		Assert.Contains("0x10", exception.Message);
	}

	[Fact]
	public void RejectsATruncatedRecordArea()
	{
		byte[] payload = new byte[LobbyMenuPacket.RecordLength];
		InvalidDataException exception = Assert.Throws<InvalidDataException>(() => LobbyMenuPacket.Read(payload, 2));
		Assert.Contains("2 records", exception.Message);
	}

	[Fact]
	public void RejectsATruncatedRecord()
	{
		Assert.Throws<InvalidDataException>(() => LobbyMenuRecord.Read(new byte[LobbyMenuPacket.RecordLength - 1]));
	}

	[Fact]
	public void IgnoresPayloadBytesPastTheDeclaredRecords()
	{
		byte[] payload = new byte[(2 * LobbyMenuPacket.RecordLength) + 5];
		WriteRecord(payload, 0, 1, 2, 3);
		LobbyMenuPacket menu = LobbyMenuPacket.Read(payload, 1);
		Assert.Equal(1, menu.Count);
		Assert.Equal(new LobbyMenuRecord(1, 2, 3), menu.Records[0]);
	}

	private static void WriteRecord(Span<byte> payload, int index, uint menuId, uint itemId, uint playerCount)
	{
		Span<byte> record = payload.Slice(index * LobbyMenuPacket.RecordLength, LobbyMenuPacket.RecordLength);
		BinaryPrimitives.WriteUInt32LittleEndian(record, menuId);
		BinaryPrimitives.WriteUInt32LittleEndian(record[0x04..], itemId);
		BinaryPrimitives.WriteUInt32LittleEndian(record[0x08..], playerCount);
	}
}
