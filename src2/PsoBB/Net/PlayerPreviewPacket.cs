using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The server preview of an existing character (command 0xE5).
/// </summary>
/// <remarks>
/// The payload is the character index followed by the 0x7C-byte <c>PlayerDispDataV4Preview</c> block. The port
/// keeps the preview opaque until the dressing-room data is ported.
/// </remarks>
public sealed class PlayerPreviewPacket
{
	/// <summary>The preview block length after the character index.</summary>
	public const int PreviewLength = 0x7C;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = sizeof(int) + PreviewLength;

	/// <summary>The character slot the preview applies to.</summary>
	public int CharacterIndex { get; init; }

	/// <summary>The opaque preview block.</summary>
	public ReadOnlyMemory<byte> Preview { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The 0x80 payload bytes after the header.</param>
	/// <returns>The decoded preview.</returns>
	/// <exception cref="InvalidDataException">The payload length is not 0x80.</exception>
	public static PlayerPreviewPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "player preview", PayloadLength);
		return new PlayerPreviewPacket
		{
			CharacterIndex = BinaryPrimitives.ReadInt32LittleEndian(payload),
			Preview = payload[sizeof(int)..].ToArray(),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The 0x80 payload bytes.</returns>
	/// <exception cref="ArgumentException">The preview is not 0x7C bytes.</exception>
	public byte[] WritePayload()
	{
		if (Preview.Length != PreviewLength)
			throw new ArgumentException($"The preview must contain exactly 0x{PreviewLength:X} bytes.", nameof(Preview));
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteInt32LittleEndian(payload, CharacterIndex);
		Preview.Span.CopyTo(payload.AsSpan(sizeof(int)));
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE5 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.PlayerPreview, 0, WritePayload());
}
