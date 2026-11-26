using System.Numerics;
using PsoBB.Chat;
using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the merged font renderer output for the chat entry, cursor and message-log viewport.
/// </summary>
public sealed class ChatRenderingTests
{
	private static readonly DateTimeOffset Timestamp = new(2026, 11, 26, 13, 5, 7, TimeSpan.Zero);

	[Fact]
	public void InputDrawsTextAndTheBlinkingCursorAtTheCursorPosition()
	{
		using ChatTestFont font = new();
		ChatInput input = new();
		ChatInputView view = new(input, font.TextRenderer);
		UiDrawList drawList = new();
		input.Open();
		for (int frame = 0; frame < 16; frame++)
			input.AdvanceFrame();
		input.Edit(ChatEditKey.Character, 'A');
		input.Edit(ChatEditKey.Character, 'B');

		view.Render(drawList, new Vector2(10f, 20f), 100f);

		Assert.Equal(3, drawList.Quads.Count);
		Assert.Equal(new Vector2(10f, 20f), drawList.Quads[0].Position);
		Assert.Equal(new Vector2(18f, 20f), drawList.Quads[1].Position);
		Assert.Equal(new Vector2(26f, 20f), drawList.Quads[2].Position);
		Assert.Equal(new Vector2(1f, 14f), drawList.Quads[2].Size);
		Assert.Null(drawList.Quads[2].Texture);
		Assert.Equal(0xFFFFFFFFu, drawList.Quads[2].Color);
	}

	[Fact]
	public void InputWrapsAtTheCharacterBoundaryAndTheCursorFollowsTheWrap()
	{
		using ChatTestFont font = new();
		ChatInput input = new();
		ChatInputView view = new(input, font.TextRenderer);
		UiDrawList drawList = new();
		input.Open();
		for (int frame = 0; frame < 16; frame++)
			input.AdvanceFrame();
		input.Edit(ChatEditKey.Character, 'A');
		input.Edit(ChatEditKey.Character, 'B');
		input.Edit(ChatEditKey.Character, 'C');

		view.Render(drawList, Vector2.Zero, 20f);

		Assert.Equal(4, drawList.Quads.Count);
		Assert.Equal(new Vector2(0f, 20f), drawList.Quads[2].Position);
		Assert.Equal(new Vector2(8f, 20f), drawList.Quads[3].Position);
	}

	[Fact]
	public void InputDrawsNothingWhenClosed()
	{
		using ChatTestFont font = new();
		ChatInput input = new();
		ChatInputView view = new(input, font.TextRenderer);
		UiDrawList drawList = new();
		input.Open();
		input.Edit(ChatEditKey.Character, 'A');
		input.Close();

		view.Render(drawList, Vector2.Zero, 100f);

		Assert.Empty(drawList.Quads);
	}

	[Fact]
	public void LogViewDrawsOnlyTheVisibleLinesAndClipsThem()
	{
		using ChatTestFont font = new();
		ChatLog log = new();
		for (int index = 0; index < 5; index++)
			log.AppendSystem(Timestamp, "A");
		using ChatLogView view = new(log, font.TextRenderer, width: 100f, height: 40f);
		UiDrawList drawList = new();
		view.ScrollToTop();

		view.Render(drawList, new Vector2(5f, 5f));

		Assert.Equal(2, drawList.Quads.Count);
		Assert.Equal(new Vector2(5f, 5f), drawList.Quads[0].Position);
		Assert.Equal(new Vector2(5f, 25f), drawList.Quads[1].Position);
		Assert.NotNull(drawList.Quads[0].Texture);
	}

	[Fact]
	public void LogViewDrawsTabColoursThroughTheMergedRenderer()
	{
		uint[] colors = new uint[58];
		colors['1'] = 0xFFFF0000;
		using ChatTestFont font = new();
		ChatLog log = new();
		log.AppendSystem(Timestamp, "\tC1AB");
		using ChatLogView view = new(log, font.TextRenderer, width: 100f, height: 40f) { Colors = new PsoBB.Text.TextColorTable(colors) };
		UiDrawList drawList = new();

		view.Render(drawList, Vector2.Zero);

		Assert.Equal(2, drawList.Quads.Count);
		Assert.Equal(0xFFFF0000u, drawList.Quads[0].Color);
		Assert.Equal(0xFFFF0000u, drawList.Quads[1].Color);
	}
}
