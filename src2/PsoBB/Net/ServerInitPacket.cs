using PsoBB.Core;

namespace PsoBB.Net;

/// <summary>
/// The server welcome (commands 0x03 and 0x9B) that starts the Blue Burst encryption handshake.
/// </summary>
/// <remarks>
/// The copyright is fixed-width ASCII text and identifies the server role. The two key blocks are opaque 0x30-byte vectors that the client unmasks with the alternating key bytes 0x19, 0x16, 0x18 before initializing the receive and send ciphers.
/// </remarks>
public sealed class ServerInitPacket
{
	/// <summary>The game, ship and block server copyright sent by the command 0x03 welcome.</summary>
	public const string GameServerCopyright = "Phantasy Star Online Blue Burst Game Server. Copyright 1999-2004 SONICTEAM.";

	/// <summary>The character server copyright sent by the command 0x9B welcome.</summary>
	public const string CharacterServerCopyright = "PSO NEW PM Server. Copyright 1999-2002 SONICTEAM.";

	/// <summary>The fixed width of the copyright field.</summary>
	public const int CopyrightLength = 0x60;

	/// <summary>The width of each encryption key block.</summary>
	public const int KeyLength = 0x30;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = CopyrightLength + KeyLength + KeyLength;

	/// <summary>The fixed welcome-message width a Blue Burst server appends at <c>0x00C0</c>.</summary>
	public const int MessageLength = 0xB4;

	/// <summary>The server copyright text, padded with zero bytes to 0x60 bytes on the wire.</summary>
	public required ByteString Copyright { get; init; }

	/// <summary>The masked key used for data sent by the server.</summary>
	public required ReadOnlyMemory<byte> ServerKey { get; init; }

	/// <summary>The masked key used for data sent by the client.</summary>
	public required ReadOnlyMemory<byte> ClientKey { get; init; }

	/// <summary>Gets the Blue Burst welcome message, or <see langword="null"/> for the 0xC0 form.</summary>
	public ByteString? Message { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The 0xC0 payload bytes after the header, with the optional 0xB4 message.</param>
	/// <returns>The decoded welcome packet.</returns>
	/// <exception cref="InvalidDataException">The payload length is not 0xC0 or 0x174.</exception>
	public static ServerInitPacket Read(ReadOnlySpan<byte> payload)
	{
		if (payload.Length != PayloadLength && payload.Length != PayloadLength + MessageLength)
			throw new InvalidDataException($"The server init payload is {payload.Length} bytes; expected {PayloadLength} or {PayloadLength + MessageLength}.");
		return new ServerInitPacket
		{
			Copyright = PacketField.ReadText(payload[..CopyrightLength]),
			ServerKey = PacketField.ReadExact(payload, CopyrightLength, KeyLength, "server key"),
			ClientKey = PacketField.ReadExact(payload, CopyrightLength + KeyLength, KeyLength, "client key"),
			Message = payload.Length == PayloadLength ? null : PacketField.ReadText(payload[(PayloadLength)..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The 0xC0 payload bytes, or 0x174 when a welcome message is present.</returns>
	/// <exception cref="ArgumentException">A key block is not exactly 0x30 bytes, or the copyright is too long.</exception>
	public byte[] WritePayload()
	{
		int extra = Message is null ? 0 : MessageLength;
		byte[] payload = new byte[PayloadLength + extra];
		PacketField.WriteText(payload.AsSpan(0, CopyrightLength), Copyright, "copyright");
		PacketField.WriteExact(payload.AsSpan(CopyrightLength, KeyLength), ServerKey.Span, "server key");
		PacketField.WriteExact(payload.AsSpan(CopyrightLength + KeyLength, KeyLength), ClientKey.Span, "client key");
		if (Message is not null)
			PacketField.WriteText(payload.AsSpan(PayloadLength, MessageLength), Message, "welcome message");
		return payload;
	}

	/// <summary>
	/// Creates the framed 0x03 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.ServerInit, 0, WritePayload());
}
