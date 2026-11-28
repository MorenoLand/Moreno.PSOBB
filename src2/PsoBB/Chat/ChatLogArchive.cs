using System.Globalization;

namespace PsoBB.Chat;

/// <summary>
/// Formats the timestamped daily chat log lines written by the original client.
/// </summary>
/// <remarks>
/// The original writes one UTF-16 file per day and prefixes every recorded line with the local time. This type formats content only; a host owns the file and its encoding.
/// </remarks>
public static class ChatLogArchive
{
	/// <summary>The directory used by the original chat logs.</summary>
	public const string DirectoryName = "log";

	/// <summary>
	/// Returns the original daily file name for a timestamp.
	/// </summary>
	/// <param name="timestamp">The timestamp.</param>
	/// <returns>The file name in <c>chatYYYYMMDD.txt</c> form.</returns>
	public static string GetFileName(DateTimeOffset timestamp) => FormattableString.Invariant($"chat{timestamp:yyyyMMdd}.txt");

	/// <summary>
	/// Formats one timestamped log line.
	/// </summary>
	/// <param name="entry">The message-log record.</param>
	/// <returns>The line including its trailing newline.</returns>
	[Original(0x0079EA60, "LogChatSessionEntry_0079ea60")]
	public static string FormatEntry(ChatLogEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		string time = entry.Timestamp.ToString("HH:mm:ss", CultureInfo.InvariantCulture);
		return entry.Kind == ChatLogLineKind.System
			? $"{time} {entry.Text}\n"
			: FormattableString.Invariant($"{time}\t{entry.SenderId:X8}\t{entry.Sender}\t{entry.Text}\n");
	}
}
