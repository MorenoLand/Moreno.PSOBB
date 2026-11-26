using PsoBB.Chat;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks log capacity, line kinds, timestamps, colours, archive formatting, wrapping and scrolling.
/// </summary>
public sealed class ChatLogTests
{
	private static readonly DateTimeOffset Timestamp = new(2026, 11, 26, 13, 5, 7, TimeSpan.Zero);

	[Fact]
	public void CapacityIsThirtyAndDropsTheOldestLine()
	{
		ChatLog log = new();
		for (int index = 0; index < 31; index++)
			log.AppendSystem(Timestamp, index.ToString());

		Assert.Equal(ChatLog.Capacity, log.Entries.Count);
		Assert.Equal("1", log.Entries[0].Text);
		Assert.Equal("30", log.Entries[^1].Text);
		Assert.Equal(1, log.DroppedCount);
	}

	[Fact]
	public void PlayerLineUsesTheOriginalSenderPrefix()
	{
		ChatLog log = new();
		log.AppendPlayer(Timestamp, "Ash", 0x12345678, "Hi");

		ChatLogEntry entry = Assert.Single(log.Entries);
		Assert.Equal(ChatLogLineKind.Player, entry.Kind);
		Assert.Equal("Ash > Hi", entry.DisplayText);
		Assert.Equal(0x12345678u, entry.SenderId);
	}

	[Fact]
	public void GuildLineUsesTheSenderWhenPresent()
	{
		ChatLog log = new();
		log.AppendGuild(Timestamp, "Ash", "Hello");
		log.AppendGuild(Timestamp, string.Empty, "Team notice");

		Assert.Equal("Ash: Hello", log.Entries[0].DisplayText);
		Assert.Equal("Team notice", log.Entries[1].DisplayText);
		Assert.All(log.Entries, entry => Assert.Equal(ChatLogLineKind.Guild, entry.Kind));
	}

	[Fact]
	public void SystemLineKeepsItsTextAndGoldColour()
	{
		ChatLog log = new();
		log.AppendSystem(Timestamp, "Enter: Ash");

		ChatLogEntry entry = Assert.Single(log.Entries);
		Assert.Equal(ChatLogLineKind.System, entry.Kind);
		Assert.Equal("Enter: Ash", entry.DisplayText);
		Assert.Equal(ChatText.SystemColor, entry.Color);
	}

	[Fact]
	public void IncomingTextReplacesLineBreaksAndStartsAtTheSecondTab()
	{
		Assert.Equal("\tJHello ", ChatText.NormalizeIncoming("\t\tJHello\n"));
		Assert.Equal("plain", ChatText.NormalizeIncoming("plain"));
		Assert.Equal(string.Empty, ChatText.NormalizeIncoming(null));
	}

	[Fact]
	public void Utf16EncodingRoundTripsAndStopsAtTheTerminator()
	{
		byte[] bytes = ChatText.Encode("A\u3042");
		Assert.Equal([0x41, 0x00, 0x42, 0x30, 0x00, 0x00], bytes);
		Assert.Equal("A\u3042", ChatText.Decode(bytes));
		Assert.Equal([0x41, 0x00], ChatText.Encode("A", terminate: false));
	}

	[Fact]
	public void ArchiveLineCarriesTheTimestampAndGuildCard()
	{
		ChatLogEntry entry = new(Timestamp, ChatLogLineKind.Player, "Ash", 0x12345678, "Hi");
		ChatLogEntry system = new(Timestamp, ChatLogLineKind.System, string.Empty, 0, "Enter: Ash");

		Assert.Equal("13:05:07\t12345678\tAsh\tHi\n", ChatLogArchive.FormatEntry(entry));
		Assert.Equal("13:05:07 Enter: Ash\n", ChatLogArchive.FormatEntry(system));
		Assert.Equal("chat20261126.txt", ChatLogArchive.GetFileName(Timestamp));
	}

	[Fact]
	public void DisplayLineIsLimitedToTheOriginalLogBuffer()
	{
		ChatLog log = new();
		log.AppendPlayer(Timestamp, new string('S', 300), 0, "Hi");

		Assert.Equal(ChatText.MaximumLogLength, log.Entries[0].DisplayText.Length);
	}

	[Fact]
	public void ClearRemovesEntriesAndTheLastLocalMessage()
	{
		ChatLog log = new();
		log.AppendPlayer(Timestamp, "Ash", 0, "Hi", localEcho: true);
		Assert.NotNull(log.LastMessage);

		log.Clear();

		Assert.Empty(log.Entries);
		Assert.Null(log.LastMessage);
		Assert.Equal(0, log.DroppedCount);
	}

	[Fact]
	public void ViewWrapsAtWordsAndScrollsByTheOriginalSteps()
	{
		using ChatTestFont font = new();
		ChatLog log = new();
		for (int index = 0; index < 10; index++)
			log.AppendSystem(Timestamp, "AB CD");
		using ChatLogView view = new(log, font.TextRenderer, width: 25f, height: 40f);

		Assert.Equal(400f, view.ContentHeight);
		Assert.Equal(360f, view.MaximumScrollOffset);
		Assert.Equal(360f, view.ScrollOffset);
		Assert.Equal(2, view.GetVisibleLines()[^1].Layout.Lines.Count);

		view.ScrollUp();
		Assert.Equal(354f, view.ScrollOffset);
		view.PageUp();
		Assert.Equal(0f, view.ScrollOffset);
		view.ScrollDown();
		Assert.Equal(6f, view.ScrollOffset);
		view.PageDown();
		Assert.Equal(360f, view.ScrollOffset);
		view.PageDown();
		Assert.Equal(360f, view.ScrollOffset);
	}

	[Fact]
	public void ViewKeepsItsPositionWhenReadingOlderLines()
	{
		using ChatTestFont font = new();
		ChatLog log = new();
		for (int index = 0; index < 10; index++)
			log.AppendSystem(Timestamp, "A");
		using ChatLogView view = new(log, font.TextRenderer, width: 100f, height: 40f);
		Assert.Equal(160f, view.ScrollOffset);

		log.AppendSystem(Timestamp, "A");
		Assert.Equal(180f, view.ScrollOffset);

		view.PageUp();
		log.AppendSystem(Timestamp, "A");
		Assert.Equal(0f, view.ScrollOffset);
	}

	[Fact]
	public void ViewUsesWordWrapAndTabColourCommands()
	{
		uint[] colors = new uint[58];
		colors['1'] = 0xFFFF0000;
		using ChatTestFont font = new();
		ChatLog log = new();
		log.AppendSystem(Timestamp, "AB CD");
		log.AppendSystem(Timestamp, "\tC1AB");
		using ChatLogView view = new(log, font.TextRenderer, width: 25f, height: 100f) { Colors = new TextColorTable(colors) };

		IReadOnlyList<ChatLogLine> lines = view.GetVisibleLines();

		Assert.Equal(2, lines[0].Layout.Lines.Count);
		Assert.Equal(0xFFFF0000u, lines[1].Layout.Glyphs[0].Color);
	}

	[Fact]
	public void DisposeStopsListeningToTheLog()
	{
		using ChatTestFont font = new();
		ChatLog log = new();
		ChatLogView view = new(log, font.TextRenderer, width: 100f, height: 40f);
		view.Dispose();

		log.AppendSystem(Timestamp, "A");

		Assert.True(view.IsDisposed);
		Assert.Throws<ObjectDisposedException>(() => view.Render(new PsoBB.Gui.UiDrawList(), default));
	}
}
