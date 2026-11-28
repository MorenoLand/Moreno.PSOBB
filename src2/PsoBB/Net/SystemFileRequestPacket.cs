namespace PsoBB.Net;

/// <summary>
/// The client request for the account system file (command 0xE0); the payload is empty.
/// </summary>
public sealed class SystemFileRequestPacket
{
	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 0;

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header; it must be empty.</param>
	/// <returns>The decoded request.</returns>
	/// <exception cref="InvalidDataException">The payload is not empty.</exception>
	public static SystemFileRequestPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "system file request", PayloadLength);
		return new SystemFileRequestPacket();
	}

	/// <summary>
	/// Writes the empty command payload.
	/// </summary>
	/// <returns>An empty array.</returns>
	[Original(0x004684F8)]
	public byte[] WritePayload() => [];

	/// <summary>
	/// Creates the framed 0xE0 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.SystemFileRequest, 0, []);
}
