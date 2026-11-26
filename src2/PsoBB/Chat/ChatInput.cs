namespace PsoBB.Chat;

/// <summary>
/// The chat entry buffer: open and close, cursor movement, insertion, deletion, submission and cancel.
/// </summary>
/// <remarks>
/// The original keyboard window keeps a 128-code-unit buffer, a cursor index and a length, and the chat panel lowers the accepted length to 79. Tabs and line breaks become spaces before insertion because the log and the rendered panel replace them.
/// </remarks>
public sealed class ChatInput
{
	private readonly char[] _buffer = new char[ChatText.MaximumInputLength];
	private int _length;
	private ulong _frame;

	/// <summary>Gets a value indicating whether the entry is open.</summary>
	public bool IsOpen { get; private set; }

	/// <summary>Gets the maximum number of UTF-16 code units accepted by the entry.</summary>
	[Original(0x00713540, "ChallengePlayerInfoWindow_Constructor_00713540")]
	public int MaximumLength => ChatText.MaximumInputLength;

	/// <summary>Gets the number of code units currently stored.</summary>
	public int Length => _length;

	/// <summary>Gets the cursor index from zero through <see cref="Length"/>.</summary>
	public int Cursor { get; private set; }

	/// <summary>Gets the entered text.</summary>
	public string Text => new(_buffer, 0, _length);

	/// <summary>Gets a value indicating whether the entry contains no text.</summary>
	[Original(0x0072FD94, "is_there_input_text")]
	public bool IsEmpty => _length == 0;

	/// <summary>Gets a value indicating whether the cursor is drawn on this frame.</summary>
	[Original(0x007307A8, "TextInputCursor_Render_007307a8")]
	public bool IsCursorVisible => IsOpen && (_frame & 0x10) != 0;

	/// <summary>
	/// Opens the entry when the chat key was pressed.
	/// </summary>
	/// <param name="beginChatPressed">Whether the client's begin-chat input became active.</param>
	/// <returns><see langword="true"/> when the entry is open.</returns>
	[Original(0x0072FDAC, "handle_begin_chat_input_0072fdac")]
	public bool OpenIfRequested(bool beginChatPressed)
	{
		if (!beginChatPressed)
			return false;
		Open();
		return true;
	}

	/// <summary>
	/// Opens the entry, clears the previous text and resets the cursor.
	/// </summary>
	[Original(0x0072F37C, "ChallengePlayerInfoWindow_ProcessInput_0072f37c")]
	public void Open()
	{
		IsOpen = true;
		ResetText();
		_frame = 0;
	}

	/// <summary>
	/// Closes the entry and discards its text.
	/// </summary>
	public void Close()
	{
		IsOpen = false;
		ResetText();
	}

	/// <summary>
	/// Applies one editing action.
	/// </summary>
	/// <param name="key">The action.</param>
	/// <param name="value">The character for <see cref="ChatEditKey.Character"/>; ignored otherwise.</param>
	/// <returns><see langword="true"/> when the buffer or cursor changed.</returns>
	[Original(0x0072F4A8, "handle_text_input_0072f976")]
	public bool Edit(ChatEditKey key, char value = '\0')
	{
		if (!IsOpen)
			return false;
		switch (key)
		{
			case ChatEditKey.Character:
				return Insert(value);
			case ChatEditKey.Left:
				if (Cursor == 0)
					return false;
				Cursor--;
				return true;
			case ChatEditKey.Right:
				if (Cursor == _length)
					return false;
				Cursor++;
				return true;
			case ChatEditKey.Backspace:
				return RemoveBeforeCursor();
			case ChatEditKey.Delete:
				return RemoveAtCursor();
			default:
				return false;
		}
	}

	/// <summary>
	/// Returns the submitted text and closes the entry; an empty entry returns <see langword="null"/>.
	/// </summary>
	/// <returns>The text to send, or <see langword="null"/>.</returns>
	[Original(0x0072F2D8, "handle_text_input_end")]
	public string? Submit()
	{
		if (!IsOpen)
			return null;
		string? text = _length == 0 ? null : Text;
		Close();
		return text;
	}

	/// <summary>
	/// Cancels the entry without submitting.
	/// </summary>
	/// <returns><see langword="true"/> when the entry was open.</returns>
	[Original(0x0072F280, "handle_text_input_end_0072f280")]
	public bool Cancel()
	{
		if (!IsOpen)
			return false;
		Close();
		return true;
	}

	/// <summary>
	/// Advances the cursor blink by one frame.
	/// </summary>
	public void AdvanceFrame() => _frame++;

	[Original(0x0072EE28, "ResetUIComponentFields_0072ee28")]
	private void ResetText()
	{
		Array.Clear(_buffer);
		_length = 0;
		Cursor = 0;
	}

	private bool Insert(char value)
	{
		if (value == '\0' || _length >= ChatText.MaximumInputLength)
			return false;
		if (value is '\r' or '\n' or '\t')
			value = ' ';
		if (Cursor < _length)
			Array.Copy(_buffer, Cursor, _buffer, Cursor + 1, _length - Cursor);
		_buffer[Cursor] = value;
		_length++;
		Cursor++;
		return true;
	}

	private bool RemoveBeforeCursor()
	{
		if (Cursor == 0)
			return false;
		Cursor--;
		return RemoveAtCursor();
	}

	private bool RemoveAtCursor()
	{
		if (Cursor >= _length)
			return false;
		if (Cursor < _length - 1)
			Array.Copy(_buffer, Cursor + 1, _buffer, Cursor, _length - Cursor - 1);
		_length--;
		_buffer[_length] = '\0';
		return true;
	}
}
