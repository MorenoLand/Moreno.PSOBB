using PsoBB.Core;

namespace PsoBB.Net;

/// <summary>
/// The server welcome (command 0x03) that starts the Blue Burst encryption handshake.
/// </summary>
/// <remarks>
/// The copyright is fixed-width ASCII text. The two key blocks are opaque 0x30-byte vectors that the client unmasks with the alternating key bytes 0x19, 0x16, 0x18 before initializing the receive and send ciphers.
/// </remarks>
public sealed class ServerInitPacket
{
	/// <summary>The fixed width of the copyright field.</summary>
	public const int CopyrightLength = 0x60;

	/// <summary>The width of each encryption key block.</summary>
	public const int KeyLength = 0x30;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = CopyrightLength + KeyLength + KeyLength;

	/// <summary>The server copyright text, padded with zero bytes to 0x60 bytes on the wire.</summary>
	public required ByteString Copyright { get; init; }

	/// <summary>The masked key used for data sent by the server.</summary>
	public required ReadOnlyMemory<byte> ServerKey { get; init; }

	/// <summary>The masked key used for data sent by the client.</summary>
	public required ReadOnlyMemory<byte> ClientKey { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The 0xC0 payload bytes after the header.</param>
	/// <returns>The decoded welcome packet.</returns>
	/// <exception cref="InvalidDataException">The payload length is not 0xC0.</exception>
	public static ServerInitPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "server init", PayloadLength);
		return new ServerInitPacket
		{
			Copyright = PacketField.ReadText(payload[..CopyrightLength]),
			ServerKey = PacketField.ReadExact(payload, CopyrightLength, KeyLength, "server key"),
			ClientKey = PacketField.ReadExact(payload, CopyrightLength + KeyLength, KeyLength, "client key"),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The 0xC0 payload bytes.</returns>
	/// <exception cref="ArgumentException">A key block is not exactly 0x30 bytes, or the copyright is too long.</exception>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		PacketField.WriteText(payload.AsSpan(0, CopyrightLength), Copyright, "copyright");
		PacketField.WriteExact(payload.AsSpan(CopyrightLength, KeyLength), ServerKey.Span, "server key");
		PacketField.WriteExact(payload.AsSpan(CopyrightLength + KeyLength, KeyLength), ClientKey.Span, "client key");
		return payload;
	}

	/// <summary>
	/// Creates the framed 0x03 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.ServerInit, 0, WritePayload());
}
