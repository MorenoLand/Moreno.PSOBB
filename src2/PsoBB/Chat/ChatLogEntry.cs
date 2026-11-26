namespace PsoBB.Chat;

/// <summary>
/// One message-log record with its timestamp, sender, colour and display line.
/// </summary>
/// <param name="Timestamp">The local time at which the line was recorded.</param>
/// <param name="Kind">Whether the line is a system, player or guild line.</param>
/// <param name="Sender">The sender name, or an empty string.</param>
/// <param name="SenderId">The sender guild card number, or zero.</param>
/// <param name="Text">The message body before display formatting.</param>
/// <param name="Color">The initial colour in 0xAARRGGBB form; tab colour commands override it.</param>
/// <param name="LocalEcho">Whether the line is the local player's own submitted message.</param>
public sealed record ChatLogEntry(
	DateTimeOffset Timestamp,
	ChatLogLineKind Kind,
	string Sender,
	uint SenderId,
	string Text,
	uint Color = ChatText.DefaultColor,
	bool LocalEcho = false)
{
	/// <summary>Gets the display line, truncated to the original 256-code-unit log buffer.</summary>
	public string DisplayText => ChatText.Truncate(
		Kind switch
		{
			ChatLogLineKind.Player => ChatText.FormatPlayerLine(Sender, Text),
			ChatLogLineKind.Guild => ChatText.FormatGuildLine(Sender, Text),
			_ => Text,
		},
		ChatText.MaximumLogLength);
}
