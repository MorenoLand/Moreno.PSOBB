using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The server notification that a default system file was created (command 0xE1).
/// </summary>
public sealed class SystemFileCreatedPacket
{
	/// <summary>The success value that makes the client continue as if it had received a full system file.</summary>
	public const uint Success = 1;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 4;

	/// <summary>The creation result; any value other than 1 makes the client report error 907 and disconnect.</summary>
	public uint Result { get; init; } = Success;

	/// <summary>Gets whether <see cref="Result"/> is the success value.</summary>
	public bool IsSuccess => Result == Success;

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The four payload bytes after the header.</param>
	/// <returns>The decoded notification.</returns>
	/// <exception cref="InvalidDataException">The payload length is not four.</exception>
	public static SystemFileCreatedPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "system file created", PayloadLength);
		return new SystemFileCreatedPacket { Result = BinaryPrimitives.ReadUInt32LittleEndian(payload) };
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The four payload bytes.</returns>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, Result);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE1 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.SystemFileCreated, 0, WritePayload());
}
