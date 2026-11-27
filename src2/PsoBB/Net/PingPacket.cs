namespace PsoBB.Net;

/// <summary>
/// The empty keepalive packet (command 0x1D).
/// </summary>
public sealed class PingPacket
{
	/// <summary>The single ping value. Its payload is always empty.</summary>
	public static PingPacket Instance { get; } = new();

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 0;

	/// <summary>The optional server timestamp width the Blue Burst server sends.</summary>
	public const int TimestampLength = 8;

	/// <summary>Gets the optional server timestamp, or zero when the ping carried no payload.</summary>
	public ulong Timestamp { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header; empty or the eight-byte timestamp.</param>
	/// <returns>The ping value.</returns>
	/// <exception cref="InvalidDataException">The payload is neither empty nor eight bytes.</exception>
	public static PingPacket Read(ReadOnlySpan<byte> payload)
	{
		if (payload.Length == PayloadLength)
			return Instance;
		if (payload.Length != TimestampLength)
			throw new InvalidDataException($"The ping payload has length 0x{payload.Length:X} but this packet accepts 0x0 or 0x{TimestampLength:X}.");
		return new PingPacket { Timestamp = System.Buffers.Binary.BinaryPrimitives.ReadUInt64BigEndian(payload) };
	}

	/// <summary>
	/// Writes the empty command payload.
	/// </summary>
	/// <returns>An empty array.</returns>
	public byte[] WritePayload() => [];

	/// <summary>
	/// Creates the framed 0x1D packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.Ping, 0, []);
}
