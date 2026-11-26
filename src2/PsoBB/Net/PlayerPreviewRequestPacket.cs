using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The client request for one character's preview (command 0xE3).
/// </summary>
public sealed class PlayerPreviewRequestPacket
{
	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 8;

	/// <summary>The character slot to preview, or -1 for a slot that does not exist.</summary>
	public int CharacterIndex { get; init; }

	/// <summary>A reserved value that the retail client leaves at zero.</summary>
	public uint Unknown { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The eight payload bytes after the header.</param>
	/// <returns>The decoded preview request.</returns>
	/// <exception cref="InvalidDataException">The payload length is not eight.</exception>
	public static PlayerPreviewRequestPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "player preview request", PayloadLength);
		return new PlayerPreviewRequestPacket
		{
			CharacterIndex = BinaryPrimitives.ReadInt32LittleEndian(payload),
			Unknown = BinaryPrimitives.ReadUInt32LittleEndian(payload[4..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The eight payload bytes.</returns>
	[Original(0x0046EB20)]
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteInt32LittleEndian(payload, CharacterIndex);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(4), Unknown);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE3 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.PlayerPreviewRequest, 0, WritePayload());
}
