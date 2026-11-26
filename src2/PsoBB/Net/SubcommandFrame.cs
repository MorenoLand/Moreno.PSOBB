namespace PsoBB.Net;

/// <summary>
/// The inner frame carried by the broadcast command 0x60.
/// </summary>
/// <remarks>
/// The first byte selects the subcommand and the second byte gives the frame length in 32-bit words, including both header bytes. The remaining bytes are the subcommand body.
/// </remarks>
public sealed class SubcommandFrame
{
	/// <summary>The size of the subcommand header, in bytes.</summary>
	public const int HeaderLength = 2;

	/// <summary>
	/// Creates a subcommand frame from its selector and body.
	/// </summary>
	/// <param name="subcommand">The subcommand selector.</param>
	/// <param name="body">The body bytes after the two-byte header.</param>
	/// <exception cref="ArgumentException">The framed length is not a whole number of words or does not fit the length byte.</exception>
	public SubcommandFrame(byte subcommand, ReadOnlySpan<byte> body)
	{
		int totalLength = HeaderLength + body.Length;
		if (totalLength % 4 != 0)
			throw new ArgumentException($"The subcommand frame length {totalLength} is not a multiple of four.", nameof(body));
		int sizeDwords = totalLength / 4;
		if (sizeDwords > byte.MaxValue)
			throw new ArgumentException($"The subcommand frame needs {sizeDwords} words but the length byte holds at most {byte.MaxValue}.", nameof(body));
		Subcommand = subcommand;
		Body = body.ToArray();
	}

	/// <summary>Gets the subcommand selector.</summary>
	public byte Subcommand { get; }

	/// <summary>Gets the body bytes after the two-byte subcommand header.</summary>
	public ReadOnlyMemory<byte> Body { get; }

	/// <summary>Gets the frame length in 32-bit words, including the two-byte header.</summary>
	public int SizeDwords => (HeaderLength + Body.Length) / 4;

	/// <summary>
	/// Reads a subcommand frame from its payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the outer 0x60 header.</param>
	/// <returns>The decoded frame.</returns>
	/// <exception cref="InvalidDataException">The payload length disagrees with the length byte.</exception>
	public static SubcommandFrame Read(ReadOnlySpan<byte> payload)
	{
		if (payload.Length < HeaderLength + 2)
			throw new InvalidDataException($"A subcommand frame requires at least {HeaderLength + 2} bytes but only {payload.Length} are available.");
		int sizeDwords = payload[1];
		int totalLength = sizeDwords * 4;
		if (totalLength != payload.Length)
			throw new InvalidDataException($"The subcommand frame declares {sizeDwords} words (0x{totalLength:X} bytes) but has 0x{payload.Length:X} bytes.");
		return new SubcommandFrame(payload[0], payload[HeaderLength..]);
	}

	/// <summary>
	/// Reads a subcommand frame from a complete broadcast packet.
	/// </summary>
	/// <param name="packet">The packet whose command must be 0x60.</param>
	/// <returns>The decoded frame.</returns>
	/// <exception cref="InvalidDataException">The packet command is not 0x60 or its payload is malformed.</exception>
	public static SubcommandFrame Read(Packet packet)
	{
		if (!packet.IsCommand(PacketCommand.Broadcast))
			throw new InvalidDataException($"Expected broadcast command 0x{(byte)PacketCommand.Broadcast:X2} but received 0x{packet.Header.Opcode:X2}.");
		return Read(packet.Payload.Span);
	}

	/// <summary>
	/// Writes the subcommand payload.
	/// </summary>
	/// <returns>The subcommand header and body.</returns>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[HeaderLength + Body.Length];
		payload[0] = Subcommand;
		payload[1] = (byte)SizeDwords;
		Body.Span.CopyTo(payload.AsSpan(HeaderLength));
		return payload;
	}

	/// <summary>
	/// Creates the framed outer 0x60 packet.
	/// </summary>
	/// <param name="flags">The outer packet flag word.</param>
	/// <returns>The complete broadcast packet.</returns>
	public Packet ToPacket(uint flags = 0) => Packet.Create(PacketCommand.Broadcast, flags, WritePayload());
}
