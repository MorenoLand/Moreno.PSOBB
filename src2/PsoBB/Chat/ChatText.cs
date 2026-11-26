using System.Buffers.Binary;
using System.Text;
using PsoBB.Text;

namespace PsoBB.Chat;

/// <summary>
/// The chat text limits, the UTF-16 transfer encoding and the line formatting shared by the entry and the log.
/// </summary>
public static class ChatText
{
	/// <summary>The maximum number of UTF-16 code units accepted by the chat entry.</summary>
	public const int MaximumInputLength = 0x4F;

	/// <summary>The maximum number of UTF-16 code units accepted by the outgoing packet builder.</summary>
	public const int MaximumPacketLength = 0x1FF;

	/// <summary>The maximum number of UTF-16 code units stored in one displayed log line.</summary>
	public const int MaximumLogLength = 0xFF;

	/// <summary>The default log colour.</summary>
	public const uint DefaultColor = 0xFFFFFFFF;

	/// <summary>The gold colour used by system lines.</summary>
	public const uint SystemColor = TextColorTable.DefaultGold;

	/// <summary>The Japanese locale command.</summary>
	public const char JapaneseLocale = 'J';

	/// <summary>The English locale command.</summary>
	public const char EnglishLocale = 'E';

	/// <summary>
	/// Replaces the line breaks in an incoming message and starts at the second tab of a double-tab prefix.
	/// </summary>
	/// <param name="text">The incoming message, or <see langword="null"/>.</param>
	/// <returns>The normalized message.</returns>
	[Original(0x00718948, "unknown_write_chat_message_to_logs")]
	public static string NormalizeIncoming(string? text)
	{
		if (string.IsNullOrEmpty(text))
			return string.Empty;
		int start = 0;
		int prefix = text.IndexOf("\t\t", StringComparison.Ordinal);
		if (prefix >= 0)
			start = prefix + 1;
		StringBuilder builder = new(text.Length - start);
		for (int index = start; index < text.Length; index++)
		{
			char value = text[index];
			builder.Append(value == '\n' ? ' ' : value);
		}
		return builder.ToString();
	}

	/// <summary>
	/// Formats one player log line with the original sender prefix.
	/// </summary>
	/// <param name="sender">The player name.</param>
	/// <param name="text">The message body.</param>
	/// <returns>The display line.</returns>
	public static string FormatPlayerLine(string sender, string text) => $"{sender} > {text}";

	/// <summary>
	/// Formats one guild log line.
	/// </summary>
	/// <param name="sender">The sender name, or an empty string.</param>
	/// <param name="text">The message body.</param>
	/// <returns>The display line.</returns>
	public static string FormatGuildLine(string sender, string text) => string.IsNullOrEmpty(sender) ? text : $"{sender}: {text}";

	/// <summary>
	/// Truncates text to a number of UTF-16 code units.
	/// </summary>
	/// <param name="text">The text, or <see langword="null"/>.</param>
	/// <param name="maximum">The maximum number of code units.</param>
	/// <returns>The truncated text.</returns>
	public static string Truncate(string? text, int maximum)
	{
		if (string.IsNullOrEmpty(text) || maximum <= 0)
			return string.Empty;
		return text.Length <= maximum ? text : text[..maximum];
	}

	/// <summary>
	/// Encodes a string as little-endian UTF-16 with an optional terminator.
	/// </summary>
	/// <param name="text">The text.</param>
	/// <param name="terminate">Whether to append one zero code unit.</param>
	/// <returns>The encoded bytes.</returns>
	public static byte[] Encode(string text, bool terminate = true)
	{
		ArgumentNullException.ThrowIfNull(text);
		int units = text.Length + (terminate ? 1 : 0);
		byte[] bytes = new byte[units * 2];
		for (int index = 0; index < text.Length; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(bytes.AsSpan(index * 2), text[index]);
		return bytes;
	}

	/// <summary>
	/// Decodes little-endian UTF-16 up to a null terminator.
	/// </summary>
	/// <param name="bytes">The encoded bytes.</param>
	/// <returns>The decoded text.</returns>
	public static string Decode(ReadOnlySpan<byte> bytes)
	{
		int units = bytes.Length / 2;
		StringBuilder builder = new(units);
		for (int index = 0; index < units; index++)
		{
			char value = (char)BinaryPrimitives.ReadUInt16LittleEndian(bytes[(index * 2)..]);
			if (value == '\0')
				break;
			builder.Append(value);
		}
		return builder.ToString();
	}
}
