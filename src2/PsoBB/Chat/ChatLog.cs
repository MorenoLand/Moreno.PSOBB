namespace PsoBB.Chat;

/// <summary>
/// The bounded message log: thirty entries, the local player's last submitted line and the daily archive line.
/// </summary>
/// <remarks>
/// The original keeps thirty message pointers in a ring and drops the oldest entry when the ring is full. Player lines are stored without the sender prefix; the display line adds it when the text is rendered.
/// </remarks>
public sealed class ChatLog
{
	/// <summary>The number of retained entries.</summary>
	public const int Capacity = 0x1E;

	private readonly List<ChatLogEntry> _entries = new(Capacity);

	/// <summary>Raised after an entry is added or the log is cleared.</summary>
	public event Action? Changed;

	/// <summary>Gets the retained entries from oldest to newest.</summary>
	public IReadOnlyList<ChatLogEntry> Entries => _entries;

	/// <summary>Gets the local player's last submitted line, or <see langword="null"/>.</summary>
	[OriginalGlobal(0x009B1048)]
	public ChatLogEntry? LastMessage { get; private set; }

	/// <summary>Gets the number of entries discarded because the log was full.</summary>
	public int DroppedCount { get; private set; }

	/// <summary>
	/// Adds a prepared entry and drops the oldest entry when the log is full.
	/// </summary>
	/// <param name="entry">The entry to add.</param>
	/// <exception cref="ArgumentNullException"><paramref name="entry"/> is null.</exception>
	public void Append(ChatLogEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		if (_entries.Count == Capacity)
		{
			_entries.RemoveAt(0);
			DroppedCount++;
		}
		_entries.Add(entry);
		Changed?.Invoke();
	}

	/// <summary>
	/// Appends one player line.
	/// </summary>
	/// <param name="timestamp">The local timestamp.</param>
	/// <param name="sender">The sender name.</param>
	/// <param name="senderId">The sender guild card number.</param>
	/// <param name="text">The message body.</param>
	/// <param name="localEcho">Whether this is the local player's own message.</param>
	/// <param name="color">The initial display colour.</param>
	[Original(0x0073B858, "append_to_chat_log")]
	public void AppendPlayer(
		DateTimeOffset timestamp,
		string sender,
		uint senderId,
		string text,
		bool localEcho = false,
		uint color = ChatText.DefaultColor)
	{
		ArgumentNullException.ThrowIfNull(sender);
		ChatLogEntry entry = new(timestamp, ChatLogLineKind.Player, sender, senderId, ChatText.NormalizeIncoming(text), color, localEcho);
		if (localEcho)
			LastMessage = entry;
		Append(entry);
	}

	/// <summary>
	/// Appends one system or session line.
	/// </summary>
	/// <param name="timestamp">The local timestamp.</param>
	/// <param name="text">The line text.</param>
	/// <param name="color">The initial display colour.</param>
	public void AppendSystem(DateTimeOffset timestamp, string text, uint color = ChatText.SystemColor)
	{
		ArgumentNullException.ThrowIfNull(text);
		Append(new ChatLogEntry(timestamp, ChatLogLineKind.System, string.Empty, 0, ChatText.NormalizeIncoming(text), color));
	}

	/// <summary>
	/// Appends one guild or team line.
	/// </summary>
	/// <param name="timestamp">The local timestamp.</param>
	/// <param name="sender">The sender name, or an empty string for a system-sent guild line.</param>
	/// <param name="text">The message body.</param>
	/// <param name="color">The initial display colour.</param>
	[Original(0x00718F18, "GuildChatHandler_LogMessage_00718f18")]
	public void AppendGuild(DateTimeOffset timestamp, string sender, string text, uint color = ChatText.DefaultColor)
	{
		ArgumentNullException.ThrowIfNull(sender);
		ArgumentNullException.ThrowIfNull(text);
		Append(new ChatLogEntry(timestamp, ChatLogLineKind.Guild, sender, 0, ChatText.NormalizeIncoming(text), color));
	}

	/// <summary>
	/// Removes every entry and the local last-message record.
	/// </summary>
	[Original(0x0073B62C, "ChatLog_Cleanup_0073b62c")]
	public void Clear()
	{
		_entries.Clear();
		LastMessage = null;
		DroppedCount = 0;
		Changed?.Invoke();
	}
}
