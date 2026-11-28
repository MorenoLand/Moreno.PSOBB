using PsoBB.Chat;

namespace PsoBB.Tests;

/// <summary>
/// Checks the chat entry state, text editing, cursor, send, cancel and the narrow outgoing sink.
/// </summary>
public sealed class ChatInputTests
{
	[Fact]
	public void OpenClearsThePreviousTextAndCursor()
	{
		ChatInput input = new();
		input.Open();
		input.Edit(ChatEditKey.Character, 'A');
		Assert.Equal("A", input.Text);

		input.Submit();
		input.Open();

		Assert.True(input.IsOpen);
		Assert.Empty(input.Text);
		Assert.Equal(0, input.Cursor);
	}

	[Fact]
	public void BeginChatOpensOnlyWhenTheKeyWasPressed()
	{
		ChatInput input = new();

		Assert.False(input.OpenIfRequested(false));
		Assert.False(input.IsOpen);
		Assert.True(input.OpenIfRequested(true));
		Assert.True(input.IsOpen);
	}

	[Fact]
	public void EditingInsertsMovesAndDeletesAtTheCursor()
	{
		ChatInput input = new();
		input.Open();
		input.Edit(ChatEditKey.Character, 'A');
		input.Edit(ChatEditKey.Character, 'B');
		input.Edit(ChatEditKey.Character, 'C');
		Assert.True(input.Edit(ChatEditKey.Left));
		Assert.True(input.Edit(ChatEditKey.Character, 'X'));
		Assert.Equal("ABXC", input.Text);
		Assert.Equal(3, input.Cursor);

		Assert.True(input.Edit(ChatEditKey.Backspace));
		Assert.Equal("ABC", input.Text);
		Assert.Equal(2, input.Cursor);

		Assert.True(input.Edit(ChatEditKey.Delete));
		Assert.Equal("AB", input.Text);
		Assert.Equal(2, input.Cursor);
		Assert.False(input.Edit(ChatEditKey.Delete));
		Assert.False(input.Edit(ChatEditKey.Right));
		Assert.True(input.Edit(ChatEditKey.Backspace));
		Assert.Equal("A", input.Text);
		Assert.Equal(1, input.Cursor);
	}

	[Fact]
	public void BackspaceAtTheStartAndLeftAtTheStartDoNothing()
	{
		ChatInput input = new();
		input.Open();

		Assert.False(input.Edit(ChatEditKey.Backspace));
		Assert.False(input.Edit(ChatEditKey.Left));
		Assert.Equal(0, input.Cursor);
	}

	[Fact]
	public void MaximumLengthIsSeventyNineCodeUnits()
	{
		ChatInput input = new();
		input.Open();
		for (int index = 0; index < 100; index++)
			input.Edit(ChatEditKey.Character, 'A');

		Assert.Equal(79, input.Length);
		Assert.Equal(79, input.MaximumLength);
		Assert.Equal(79, input.Text.Length);
		Assert.False(input.Edit(ChatEditKey.Character, 'B'));
		Assert.Equal(79, input.Length);
	}

	[Fact]
	public void ControlCharactersBecomeSpaces()
	{
		ChatInput input = new();
		input.Open();
		input.Edit(ChatEditKey.Character, '\t');
		input.Edit(ChatEditKey.Character, '\n');
		input.Edit(ChatEditKey.Character, '\r');

		Assert.Equal("   ", input.Text);
	}

	[Fact]
	public void SubmitReturnsTheTextAndCloses()
	{
		ChatInput input = new();
		input.Open();
		input.Edit(ChatEditKey.Character, 'A');
		input.Edit(ChatEditKey.Character, 'B');

		Assert.Equal("AB", input.Submit());
		Assert.False(input.IsOpen);
		Assert.Null(input.Submit());
	}

	[Fact]
	public void EmptySubmitReturnsNullAndCloses()
	{
		ChatInput input = new();
		input.Open();

		Assert.Null(input.Submit());
		Assert.False(input.IsOpen);
	}

	[Fact]
	public void CancelDiscardsTheTextWithoutSubmitting()
	{
		ChatInput input = new();
		input.Open();
		input.Edit(ChatEditKey.Character, 'A');

		Assert.True(input.Cancel());
		Assert.False(input.IsOpen);
		Assert.Empty(input.Text);
		Assert.False(input.Cancel());
	}

	[Fact]
	public void CursorBlinkUsesTheSixteenthFrameBit()
	{
		ChatInput input = new();
		input.Open();
		Assert.False(input.IsCursorVisible);
		for (int frame = 0; frame < 15; frame++)
			input.AdvanceFrame();
		Assert.False(input.IsCursorVisible);
		input.AdvanceFrame();
		Assert.True(input.IsCursorVisible);
		for (int frame = 0; frame < 16; frame++)
			input.AdvanceFrame();
		Assert.False(input.IsCursorVisible);
	}

	[Fact]
	public void SessionSendsOnlyNonEmptySubmittedText()
	{
		RecordingChatSink sink = new();
		using ChatSession session = new(new ChatLog(), new ChatInput(), "Ash") { Sink = sink };
		session.Begin();
		session.Edit(ChatEditKey.Character, 'H');
		session.Edit(ChatEditKey.Character, 'i');

		ChatOutgoingMessage? message = session.Submit();

		Assert.NotNull(message);
		Assert.Equal("Hi", message.Value.Text);
		Assert.Single(sink.Messages);
		Assert.Equal("Hi", sink.Messages[0].Text);
		Assert.False(session.Input.IsOpen);
		Assert.Null(session.Submit());
		Assert.Single(sink.Messages);
	}

	[Fact]
	public void CancelDoesNotReachTheSink()
	{
		RecordingChatSink sink = new();
		using ChatSession session = new(new ChatLog(), new ChatInput(), "Ash") { Sink = sink };
		session.Begin();
		session.Edit(ChatEditKey.Character, 'H');

		Assert.True(session.Cancel());
		Assert.Empty(sink.Messages);
	}

	[Fact]
	public void LocalEchoWritesTheTimestampedLineAndLastMessage()
	{
		DateTimeOffset timestamp = new(2026, 11, 26, 13, 5, 7, TimeSpan.Zero);
		using ChatSession session = new(new ChatLog(), new ChatInput(), "Ash", () => timestamp) { EchoLocally = true };
		session.Begin();
		session.Edit(ChatEditKey.Character, 'H');
		session.Edit(ChatEditKey.Character, 'i');
		session.Submit();

		ChatLogEntry entry = Assert.Single(session.Log.Entries);
		Assert.Equal("Ash > Hi", entry.DisplayText);
		Assert.Equal(timestamp, entry.Timestamp);
		Assert.True(entry.LocalEcho);
		Assert.Same(entry, session.Log.LastMessage);
	}

	[Fact]
	public void DisposeClosesTheEntryAndClearsTheLog()
	{
		ChatLog log = new();
		ChatSession session = new(log, new ChatInput(), "Ash") { Sink = new RecordingChatSink() };
		session.Begin();
		log.AppendSystem(DateTimeOffset.UnixEpoch, "Enter: Ash");

		session.Dispose();

		Assert.True(session.IsDisposed);
		Assert.False(session.Input.IsOpen);
		Assert.Empty(log.Entries);
		Assert.Null(session.Sink);
	}

	private sealed class RecordingChatSink : IChatMessageSink
	{
		public List<ChatOutgoingMessage> Messages { get; } = [];

		public void Send(ChatOutgoingMessage message) => Messages.Add(message);
	}
}
