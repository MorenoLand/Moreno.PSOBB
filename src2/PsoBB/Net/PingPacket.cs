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

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header; it must be empty.</param>
	/// <returns>The ping value.</returns>
	/// <exception cref="InvalidDataException">The payload is not empty.</exception>
	public static PingPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "ping", PayloadLength);
		return Instance;
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
