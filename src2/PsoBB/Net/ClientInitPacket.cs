using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The server client initialization (command 0xE6) that assigns the guild card number and client configuration.
/// </summary>
/// <remarks>
/// A nonzero error code means the described fields carry no meaning and the client reports the corresponding login failure.
/// </remarks>
public sealed class ClientInitPacket
{
	/// <summary>The width of the client configuration field.</summary>
	public const int ClientConfigLength = 0x28;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 0x3C;

	/// <summary>The login result; zero means success.</summary>
	public uint ErrorCode { get; init; }

	/// <summary>The player tag value the server normally sends.</summary>
	public uint PlayerTag { get; init; } = ClientLoginPacket.DefaultPlayerTag;

	/// <summary>The guild card number assigned to the account.</summary>
	public uint GuildCardNumber { get; init; }

	/// <summary>The token that controls whether the client scrambles the configuration in later login packets.</summary>
	public uint SecurityToken { get; init; }

	/// <summary>The opaque 0x28-byte client configuration returned in later login packets.</summary>
	public required ReadOnlyMemory<byte> ClientConfig { get; init; }

	/// <summary>Whether the account may create a team.</summary>
	public byte CanCreateTeam { get; init; } = 1;

	/// <summary>Whether Episode 4 is unlocked.</summary>
	public byte Episode4Unlocked { get; init; } = 1;

	/// <summary>Reserved bytes, normally zero.</summary>
	public ushort Unused { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The 0x3C payload bytes after the header.</param>
	/// <returns>The decoded client initialization packet.</returns>
	/// <exception cref="InvalidDataException">The payload length is not 0x3C.</exception>
	public static ClientInitPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "client init", PayloadLength);
		return new ClientInitPacket
		{
			ErrorCode = BinaryPrimitives.ReadUInt32LittleEndian(payload),
			PlayerTag = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x04..]),
			GuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x08..]),
			SecurityToken = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x0C..]),
			ClientConfig = PacketField.ReadExact(payload, 0x10, ClientConfigLength, "client configuration"),
			CanCreateTeam = payload[0x38],
			Episode4Unlocked = payload[0x39],
			Unused = BinaryPrimitives.ReadUInt16LittleEndian(payload[0x3A..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The 0x3C payload bytes.</returns>
	/// <exception cref="ArgumentException">The client configuration is not exactly 0x28 bytes.</exception>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, ErrorCode);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x04), PlayerTag);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x08), GuildCardNumber);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x0C), SecurityToken);
		PacketField.WriteExact(payload.AsSpan(0x10, ClientConfigLength), ClientConfig.Span, "client configuration");
		payload[0x38] = CanCreateTeam;
		payload[0x39] = Episode4Unlocked;
		BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan(0x3A), Unused);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE6 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.ClientInit, 0, WritePayload());
}
