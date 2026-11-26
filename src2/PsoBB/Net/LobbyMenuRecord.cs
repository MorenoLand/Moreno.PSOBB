using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// One 0x0C-byte entry of the command 0x83 lobby-menu reply.
/// </summary>
/// <remarks>
/// The command 0x007C89EC handler copies the entry unchanged. The only client reader, 0x007D4068, sends the first two values back in the command 0x84 selection and never reads the third.
/// </remarks>
/// <param name="MenuId">The menu identifier the client returns in command 0x84.</param>
/// <param name="ItemId">The item identifier the client returns in command 0x84.</param>
/// <param name="PlayerCount">The third value; no client reader was found. The protocol reference names it the lobby's player count.</param>
public readonly record struct LobbyMenuRecord(uint MenuId, uint ItemId, uint PlayerCount)
{
	/// <summary>The size of one menu record.</summary>
	public const int Size = 0x0C;

	/// <summary>
	/// Reads one record.
	/// </summary>
	/// <param name="data">The twelve record bytes.</param>
	/// <returns>The decoded record.</returns>
	/// <exception cref="InvalidDataException">The record is shorter than twelve bytes.</exception>
	public static LobbyMenuRecord Read(ReadOnlySpan<byte> data)
	{
		if (data.Length < Size)
			throw new InvalidDataException($"A lobby-menu record requires {Size} bytes but only {data.Length} are available.");
		return new LobbyMenuRecord(
			BinaryPrimitives.ReadUInt32LittleEndian(data),
			BinaryPrimitives.ReadUInt32LittleEndian(data[0x04..]),
			BinaryPrimitives.ReadUInt32LittleEndian(data[0x08..]));
	}
}
