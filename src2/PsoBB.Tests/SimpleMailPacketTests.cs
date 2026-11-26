using System.Buffers.Binary;
using System.Text;
using PsoBB.Net;

namespace PsoBB.Tests;

/// <summary>
/// Checks the command 0x81 simple-mail field codec against synthetic payloads.
/// </summary>
public sealed class SimpleMailPacketTests
{
	[Fact]
	public void ReadsEveryFieldAndStopsAtTheUtf16Terminators()
	{
		byte[] payload = new byte[SimpleMailPacket.PayloadLength];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, 0x11223344);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x04), 0x01020304);
		WriteUtf16(payload.AsSpan(SimpleMailPacket.SenderNameOffset, SimpleMailPacket.SenderNameLength), "MAILER");
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(SimpleMailPacket.RecipientGuildCardNumberOffset), 0x05060708);
		WriteUtf16(payload.AsSpan(SimpleMailPacket.ReceivedDateOffset, SimpleMailPacket.ReceivedDateLength), "2026-11-26");
		WriteUtf16(payload.AsSpan(SimpleMailPacket.TextOffset, SimpleMailPacket.TextLength), "HELLO");
		SimpleMailPacket mail = SimpleMailPacket.Read(payload);
		Assert.Equal(0x11223344u, mail.PlayerTag);
		Assert.Equal(0x01020304u, mail.SenderGuildCardNumber);
		Assert.Equal("MAILER", mail.SenderName);
		Assert.Equal(0x05060708u, mail.RecipientGuildCardNumber);
		Assert.Equal("2026-11-26", mail.ReceivedDate);
		Assert.Equal("HELLO", mail.Text);
	}

	[Fact]
	public void EmptyFieldsDecodeAsEmptyStrings()
	{
		SimpleMailPacket mail = SimpleMailPacket.Read(new byte[SimpleMailPacket.PayloadLength]);
		Assert.Equal(string.Empty, mail.SenderName);
		Assert.Equal(string.Empty, mail.ReceivedDate);
		Assert.Equal(string.Empty, mail.Text);
	}

	[Fact]
	public void AcceptsTextPastTheListCallbackLimit()
	{
		byte[] payload = new byte[SimpleMailPacket.PayloadLength];
		string text = new('A', SimpleMailPacket.ListTextLengthLimit + 1);
		WriteUtf16(payload.AsSpan(SimpleMailPacket.TextOffset, SimpleMailPacket.TextLength), text);
		SimpleMailPacket mail = SimpleMailPacket.Read(payload);
		Assert.Equal(text, mail.Text);
	}

	[Fact]
	public void AcceptsAPayloadTrimmedAfterTheText()
	{
		byte[] payload = new byte[SimpleMailPacket.TextOffset + 4];
		WriteUtf16(payload.AsSpan(SimpleMailPacket.TextOffset), "HI");
		SimpleMailPacket mail = SimpleMailPacket.Read(payload);
		Assert.Equal("HI", mail.Text);
		Assert.Equal(string.Empty, mail.SenderName);
	}

	[Fact]
	public void RejectsAPayloadShorterThanTheFieldPrefix()
	{
		InvalidDataException exception = Assert.Throws<InvalidDataException>(() => SimpleMailPacket.Read(new byte[SimpleMailPacket.PrefixLength - 1]));
		Assert.Contains("0x54", exception.Message);
	}

	[Fact]
	public void AMalformedMailDoesNotEvictTheStoredList()
	{
		LobbyWorld world = new();
		for (int index = 0; index < LobbyWorld.SimpleMailCapacity; index++)
			Assert.True(world.HandlePacket(Packet.Create(PacketCommand.SimpleMail, 0, new byte[SimpleMailPacket.PayloadLength])));
		Assert.Throws<InvalidDataException>(() => world.HandlePacket(Packet.Create(PacketCommand.SimpleMail, 0, new byte[SimpleMailPacket.PrefixLength - 1])));
		Assert.Equal(LobbyWorld.SimpleMailCapacity, world.SimpleMails.Count);
	}

	private static void WriteUtf16(Span<byte> field, string value)
	{
		byte[] encoded = Encoding.Unicode.GetBytes(value);
		encoded.CopyTo(field);
	}
}
