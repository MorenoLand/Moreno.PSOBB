using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The server answer to a character preview request (command 0xE4).
/// </summary>
public sealed class PlayerChoicePacket
{
	/// <summary>The result that approves the chosen character.</summary>
	public const uint ApprovedResult = 1;

	/// <summary>The error that reports an empty character slot.</summary>
	public const uint NoPlayerError = 2;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 8;

	/// <summary>The character slot the answer applies to.</summary>
	public int CharacterIndex { get; init; }

	/// <summary>The approval result or empty-slot error.</summary>
	public uint Result { get; init; }

	/// <summary>Gets whether <see cref="Result"/> approves the character choice.</summary>
	public bool IsApproved => Result == ApprovedResult;

	/// <summary>
	/// Creates an approval for <paramref name="characterIndex"/>.
	/// </summary>
	/// <param name="characterIndex">The character slot.</param>
	/// <returns>The approval packet.</returns>
	public static PlayerChoicePacket Approved(int characterIndex) => new() { CharacterIndex = characterIndex, Result = ApprovedResult };

	/// <summary>
	/// Creates the empty-slot answer for <paramref name="characterIndex"/>.
	/// </summary>
	/// <param name="characterIndex">The character slot.</param>
	/// <returns>The empty-slot packet.</returns>
	public static PlayerChoicePacket NoPlayer(int characterIndex) => new() { CharacterIndex = characterIndex, Result = NoPlayerError };

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The eight payload bytes after the header.</param>
	/// <returns>The decoded answer.</returns>
	/// <exception cref="InvalidDataException">The payload length is not eight.</exception>
	public static PlayerChoicePacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "player choice", PayloadLength);
		return new PlayerChoicePacket
		{
			CharacterIndex = BinaryPrimitives.ReadInt32LittleEndian(payload),
			Result = BinaryPrimitives.ReadUInt32LittleEndian(payload[4..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The eight payload bytes.</returns>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteInt32LittleEndian(payload, CharacterIndex);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(4), Result);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE4 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.PlayerChoice, 0, WritePayload());
}
