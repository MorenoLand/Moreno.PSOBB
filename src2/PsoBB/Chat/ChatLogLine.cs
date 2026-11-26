using PsoBB.Text;

namespace PsoBB.Chat;

/// <summary>
/// One measured log entry and its offset from the top of the scrollable content.
/// </summary>
/// <param name="Entry">The message-log record.</param>
/// <param name="Top">The top offset in pixels before scrolling.</param>
/// <param name="Layout">The measured display layout.</param>
public readonly record struct ChatLogLine(ChatLogEntry Entry, float Top, TextLayout Layout);
