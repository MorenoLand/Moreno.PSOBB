namespace PsoBB.Chat;

/// <summary>
/// Joins the chat entry, its bounded log and the host's outgoing packet sink.
/// </summary>
/// <remarks>
/// Submission closes the entry, optionally echoes the line into the log for an offline scene, and then calls the sink. The session never builds a packet; the host adapter owns the command, encryption and login flow.
/// </remarks>
public sealed class ChatSession : IDisposable
{
	private readonly string _localPlayerName;
	private readonly Func<DateTimeOffset> _clock;
	private bool _disposed;

	/// <summary>
	/// Creates a chat session around an entry and a log.
	/// </summary>
	/// <param name="log">The message log.</param>
	/// <param name="input">The chat entry.</param>
	/// <param name="localPlayerName">The name shown on a local echo line.</param>
	/// <param name="clock">The local clock, or the system clock when omitted.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public ChatSession(ChatLog log, ChatInput input, string localPlayerName, Func<DateTimeOffset>? clock = null)
	{
		ArgumentNullException.ThrowIfNull(log);
		ArgumentNullException.ThrowIfNull(input);
		ArgumentNullException.ThrowIfNull(localPlayerName);
		Log = log;
		Input = input;
		_localPlayerName = localPlayerName;
		_clock = clock ?? (() => DateTimeOffset.Now);
	}

	/// <summary>Gets the message log.</summary>
	public ChatLog Log { get; }

	/// <summary>Gets the chat entry.</summary>
	public ChatInput Input { get; }

	/// <summary>Gets or sets the host sink that receives submitted text.</summary>
	public IChatMessageSink? Sink { get; set; }

	/// <summary>Gets or sets whether a submitted line is also written to the local log.</summary>
	public bool EchoLocally { get; set; }

	/// <summary>Gets a value indicating whether the session has been disposed.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Opens the chat entry.
	/// </summary>
	public void Begin() => Input.Open();

	/// <summary>
	/// Applies one editing action to the open entry.
	/// </summary>
	/// <param name="key">The action.</param>
	/// <param name="value">The character for <see cref="ChatEditKey.Character"/>.</param>
	/// <returns><see langword="true"/> when the entry changed.</returns>
	public bool Edit(ChatEditKey key, char value = '\0') => Input.Edit(key, value);

	/// <summary>
	/// Submits the entry text to the sink and returns it.
	/// </summary>
	/// <returns>The submitted message, or <see langword="null"/> when the entry was empty or closed.</returns>
	[Original(0x0077D7D0, "send_chat_message_text")]
	public ChatOutgoingMessage? Submit()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		string? text = Input.Submit();
		if (text is null)
			return null;
		ChatOutgoingMessage message = new(text);
		if (EchoLocally)
			Log.AppendPlayer(_clock(), _localPlayerName, 0, text, localEcho: true);
		Sink?.Send(message);
		return message;
	}

	/// <summary>
	/// Cancels the open entry without sending.
	/// </summary>
	/// <returns><see langword="true"/> when the entry was open.</returns>
	public bool Cancel()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		return Input.Cancel();
	}

	/// <summary>
	/// Gets the clock used for local echo lines.
	/// </summary>
	/// <returns>The current local time.</returns>
	public DateTimeOffset GetTimestamp() => _clock();

	/// <summary>
	/// Closes the entry, clears the log and releases the sink.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		Input.Close();
		Log.Clear();
		Sink = null;
	}
}
