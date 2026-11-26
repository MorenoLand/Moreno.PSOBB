using System.Buffers.Binary;
using System.Text;

namespace PsoBB.Net;

/// <summary>
/// The command 0x81 simple-mail reply.
/// </summary>
/// <remarks>
/// The packet pointer reaches the handler at 0x007C8DC4, which normalizes the UTF-16 text at packet+0x5C (payload+0x54) and calls the callback at this+0x1E0D0 (0x0081384C). The callback rejects list insertion through 0x00813A3C when that text is longer than 155 UTF-16 code units, and otherwise 0x00813930 copies the sender guild card from packet+0x0C, the sender name from packet+0x10, the received date from packet+0x34 and the text from packet+0x5C into one 0x1BC-byte list entry. The full payload is 0x454 bytes, but the handler reads the text only up to its terminator, so a payload trimmed after the 0x54-byte prefix is accepted.
/// </remarks>
public sealed class SimpleMailPacket
{
	/// <summary>The full payload size, excluding the packet header.</summary>
	public const int PayloadLength = 0x454;

	/// <summary>The shortest payload that carries every field before the text.</summary>
	public const int PrefixLength = 0x54;

	/// <summary>The offset of the sender name.</summary>
	public const int SenderNameOffset = 0x08;

	/// <summary>The number of name bytes, including the UTF-16 terminator.</summary>
	public const int SenderNameLength = 0x20;

	/// <summary>The offset of the recipient guild card number.</summary>
	public const int RecipientGuildCardNumberOffset = 0x28;

	/// <summary>The offset of the received-date text.</summary>
	public const int ReceivedDateOffset = 0x2C;

	/// <summary>The number of date bytes, including the UTF-16 terminator.</summary>
	public const int ReceivedDateLength = 0x28;

	/// <summary>The offset of the message text.</summary>
	public const int TextOffset = 0x54;

	/// <summary>The number of text bytes, including the UTF-16 terminator.</summary>
	public const int TextLength = 0x400;

	/// <summary>The longest text the 0x00813A3C list callback accepts.</summary>
	public const int ListTextLengthLimit = 0x9B;

	/// <summary>The client-presence tag; the original does not read it in this handler.</summary>
	public uint PlayerTag { get; init; }

	/// <summary>The sender's guild card number, stored as the list entry's menu identifier.</summary>
	public uint SenderGuildCardNumber { get; init; }

	/// <summary>The sender name decoded from its UTF-16 field.</summary>
	public required string SenderName { get; init; }

	/// <summary>The recipient's guild card number; the original does not read it in this handler.</summary>
	public uint RecipientGuildCardNumber { get; init; }

	/// <summary>The received date decoded from its UTF-16 field.</summary>
	public required string ReceivedDate { get; init; }

	/// <summary>The message text decoded from its UTF-16 field; the original normalizes this text before adding the list entry.</summary>
	public required string Text { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header; the first 0x54 bytes are required.</param>
	/// <returns>The decoded mail.</returns>
	/// <exception cref="InvalidDataException">The payload is shorter than the 0x54-byte field prefix.</exception>
	public static SimpleMailPacket Read(ReadOnlySpan<byte> payload)
	{
		if (payload.Length < PrefixLength)
			throw new InvalidDataException($"A simple-mail payload requires at least 0x{PrefixLength:X} bytes but only 0x{payload.Length:X} are available.");
		ReadOnlySpan<byte> text = payload[TextOffset..];
		if (text.Length > TextLength)
			text = text[..TextLength];
		return new SimpleMailPacket
		{
			PlayerTag = BinaryPrimitives.ReadUInt32LittleEndian(payload),
			SenderGuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x04..]),
			SenderName = ReadUtf16(payload.Slice(SenderNameOffset, SenderNameLength)),
			RecipientGuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(payload[RecipientGuildCardNumberOffset..]),
			ReceivedDate = ReadUtf16(payload.Slice(ReceivedDateOffset, ReceivedDateLength)),
			Text = ReadUtf16(text),
		};
	}

	private static string ReadUtf16(ReadOnlySpan<byte> field)
	{
		int length = 0;
		while (length + 1 < field.Length && (field[length] | field[length + 1]) != 0)
			length += 2;
		return length == 0 ? string.Empty : Encoding.Unicode.GetString(field[..length]);
	}
}
