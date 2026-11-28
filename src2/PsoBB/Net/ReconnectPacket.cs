using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The server redirect to another address and port (command 0x19).
/// </summary>
/// <remarks>
/// The IPv4 address is big-endian on the wire, unlike every other field in the Blue Burst protocol. Encryption is disabled on the new connection.
/// </remarks>
public sealed class ReconnectPacket
{
	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 8;

	/// <summary>The IPv4 address in host order, for example 0x7F000001 for 127.0.0.1.</summary>
	public uint Address { get; init; }

	/// <summary>The TCP port in host order.</summary>
	public ushort Port { get; init; }

	/// <summary>The reserved trailing value, normally zero.</summary>
	public ushort Unused { get; init; }

	/// <summary>Gets the IPv4 address as four decimal octets, the form the host connection accepts.</summary>
	public string Host => $"{Address >> 24}.{(Address >> 16) & 0xFF}.{(Address >> 8) & 0xFF}.{Address & 0xFF}";

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The eight payload bytes after the header.</param>
	/// <returns>The decoded reconnect request.</returns>
	/// <exception cref="InvalidDataException">The payload length is not eight.</exception>
	public static ReconnectPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "reconnect", PayloadLength);
		return new ReconnectPacket
		{
			Address = BinaryPrimitives.ReadUInt32BigEndian(payload),
			Port = BinaryPrimitives.ReadUInt16LittleEndian(payload[4..]),
			Unused = BinaryPrimitives.ReadUInt16LittleEndian(payload[6..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The eight payload bytes.</returns>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteUInt32BigEndian(payload, Address);
		BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan(4), Port);
		BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan(6), Unused);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0x19 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.Reconnect, 0, WritePayload());
}
