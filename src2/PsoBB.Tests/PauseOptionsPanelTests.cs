using System.Numerics;
using PsoBB.Configuration;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Platform;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the pause option rows, navigation, value mapping, brightness persistence and drawing
/// against the original addresses.
/// </summary>
public sealed class PauseOptionsPanelTests
{
	[Fact]
	public void CreatesTheTenOriginalOptionRowsInOrder()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _);
		Assert.Equal(PauseOptionsPanel.RowCapacity, 11);
		Assert.Equal([0, 1, 2, 3, 4, 5, 6, 7, 9, 10], panel.OptionIds);
		Assert.Equal(
			[
				"Map Direction",
				"Function Key Setting",
				"Keyboard Controls",
				"Mouse Controls",
				"Pad Button Config",
				"Keyboard Config",
				"Cursor Position",
				"Message Speed",
				"Auto Disconnect",
				"Brightness",
			],
			panel.List.Items.Select(item => item.Text));
		Assert.False(panel.List.Items[4].Enabled);
		Assert.Equal(0, panel.SelectedOptionId);
	}

	[Fact]
	public void NavigationSkipsTheDisabledPadRowAndWraps()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _);
		List<int> visited = [panel.SelectedOptionId];
		for (int step = 0; step < 9; step++)
		{
			Assert.True(panel.List.SelectNext());
			visited.Add(panel.SelectedOptionId);
		}
		Assert.Equal([0, 1, 2, 3, 5, 6, 7, 9, 10, 0], visited);
		Assert.True(panel.List.SelectPrevious());
		Assert.Equal(10, panel.SelectedOptionId);
	}

	[Fact]
	public void PadRowIsSelectableWhenTheOriginalAvailabilityCheckPasses()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _, padButtonConfigAvailable: true);
		Assert.True(panel.List.Items[4].Enabled);
		panel.List.SelectNext();
		panel.List.SelectNext();
		panel.List.SelectNext();
		panel.List.SelectNext();
		Assert.Equal(4, panel.SelectedOptionId);
	}

	[Theory]
	[InlineData(0, 1, 0x40000001)]
	[InlineData(1, 1, 0x42000000)]
	[InlineData(2, 1, 0x41000000)]
	[InlineData(3, 2, 0x40200000)]
	[InlineData(6, 1, 0x40000004)]
	[InlineData(7, 3, 0x40000300)]
	[InlineData(9, 3, 0x40000C00)]
	public void ValueChangesWriteTheOriginalFlagsAndPreserveOtherBits(int optionId, int selectedValue, int expectedFlags)
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out PauseOptionState state, out _);
		state.Flags = 0x40000000;
		PauseOptionsTestData.OpenRow(panel, optionId);

		UiOptionRow row = Assert.IsType<UiOptionRow>(panel.ActiveRow);
		for (int index = 0; index < selectedValue; index++)
			Assert.True(row.SelectNext());
		panel.Update(0f);

		Assert.Equal(expectedFlags, state.Flags);
	}

	[Fact]
	public void BrightnessChangesLiveButPersistsOnlyOnConfirmation()
	{
		List<int> applied = [];
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out MemoryGameSettings settings, out GameOptions options, out _, out _, applyBrightness: applied.Add);
		PauseOptionsTestData.OpenRow(panel, 10);
		UiOptionRow row = Assert.IsType<UiOptionRow>(panel.ActiveRow);
		Assert.Equal(2, row.SelectedValue);

		Assert.True(row.SelectNext());
		panel.Update(0f);

		Assert.Equal(3, options.Brightness);
		Assert.False(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out _));
		Assert.Empty(applied);

		Assert.True(row.Activate());
		panel.Update(0f);

		Assert.Equal(3, options.Brightness);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out int stored));
		Assert.Equal(3, stored);
		Assert.Equal([3], applied);
		Assert.Null(panel.ActiveRow);

		PauseOptionsTestData.OpenRow(panel, 10);
		UiOptionRow reopened = Assert.IsType<UiOptionRow>(panel.ActiveRow);
		Assert.True(reopened.SelectPrevious());
		panel.Update(0f);
		reopened.Cancel();
		panel.Update(0f);

		Assert.Equal(2, options.Brightness);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out stored));
		Assert.Equal(3, stored);
		Assert.Same(reopened, panel.ActiveRow);
	}

	[Fact]
	public void BrightnessIsWrittenAsTheOriginalFourByteExt0Value()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out MemoryGameSettings settings, out GameOptions options, out _, out _);
		options.Brightness = 4;
		PauseOptionsTestData.OpenRow(panel, 10);
		UiOptionRow row = Assert.IsType<UiOptionRow>(panel.ActiveRow);
		Assert.Equal(4, row.SelectedValue);
		panel.Update(0f);
		Assert.True(row.Activate());
		panel.Update(0f);

		Assert.True(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out int value));
		Assert.Equal("EXT0", LegacyOptionNames.ExtraOption);
		Assert.Equal(4, value);
		Assert.Equal(4, LegacyOptions.GetValueLength(settings, LegacyOptionNames.ExtraOption));
		Assert.Single(settings.GetNames());
	}

	[Fact]
	public void EscapeClosesTheListAndRaisesTheCloseRequest()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _);
		bool closed = false;
		panel.CloseRequested += () => closed = true;
		panel.Update(0f);
		panel.Update(0f);

		Assert.True(panel.OnEvent(UiEvent.KeyDown(GameKey.Escape)));
		panel.Update(0f);

		Assert.True(closed);
		Assert.True(panel.IsClosed);
		Assert.False(panel.OnEvent(UiEvent.KeyDown(GameKey.Escape)));
	}

	[Fact]
	public void PadAndKeyboardRowsRaiseExternalRequestsAndWaitForTheHost()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _, padButtonConfigAvailable: true);
		bool padRequested = false;
		bool keyboardRequested = false;
		panel.PadButtonConfigRequested += () => padRequested = true;
		panel.KeyboardConfigurationRequested += () => keyboardRequested = true;
		panel.Update(0f);
		panel.List.SelectedIndex = 4;
		Assert.True(panel.List.ActivateSelected());
		panel.Update(0f);

		Assert.True(padRequested);
		Assert.False(panel.List.IsFocusable);
		panel.ResumeFromExternalScreen();
		panel.Update(0f);
		panel.Update(0f);
		Assert.True(panel.List.IsFocusable);

		panel.List.SelectedIndex = 5;
		Assert.True(panel.List.ActivateSelected());
		panel.Update(0f);

		Assert.True(keyboardRequested);
		Assert.False(panel.List.IsFocusable);
	}

	[Fact]
	public void RowsExposeTheExactOriginalValueTexts()
	{
		Dictionary<int, string[]> expected = new()
		{
			[0] = ["Fixed", "Non-fixed"],
			[1] = ["Menu Shortcuts", "Chat Shortcuts"],
			[2] = ["On", "Off"],
			[3] = ["Off", "Drag", "Hold"],
			[6] = ["Saved", "Non-Saved"],
			[7] = ["Slow", "Normal", "Fast", "Very Fast"],
			[9] = ["15 minutes", "30 minutes", "45 minutes", "60 minutes"],
			[10] = ["+2 level", "+1 level", "Normal", "-1 level", "-2 level"],
		};
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out _);
		foreach ((int optionId, string[] values) in expected)
		{
			PauseOptionsTestData.OpenRow(panel, optionId);
			UiOptionRow row = Assert.IsType<UiOptionRow>(panel.ActiveRow);
			Assert.Equal(values, row.Values);
			Assert.True(row.Activate());
			panel.Update(0f);
		}
	}

	[Fact]
	public void OptionRowWrapsValuesAndReportsConfirmationAndCancellation()
	{
		UiOptionRow row = new() { TextSurface = new RecordingTextSurface() };
		row.SetLabel("Message Speed");
		row.AddValue("Slow");
		row.AddValue("Normal");
		row.AddValue("Fast");
		row.SetSelectedValue(2);
		Assert.True(row.SelectNext());
		Assert.Equal(0, row.SelectedValue);
		Assert.True(row.SelectPrevious());
		Assert.Equal(2, row.SelectedValue);
		row.SetFocus();
		Assert.True(row.OnEvent(UiEvent.KeyDown(GameKey.Left)));
		Assert.Equal(1, row.SelectedValue);
		Assert.True(row.OnEvent(UiEvent.KeyDown(GameKey.Right)));
		Assert.Equal(2, row.SelectedValue);
		Assert.True(row.Activate());
		Assert.True(row.IsActivated);
		row.ClearResult();
		Assert.True(row.OnEvent(UiEvent.KeyDown(GameKey.Escape)));
		Assert.True(row.IsCanceled);
	}

	[Fact]
	public void DrawingUsesTheRecordingSurfaceAndRenderer()
	{
		PauseOptionsPanel panel = PauseOptionsTestData.CreatePanel(out _, out _, out _, out RecordingTextSurface text);
		UiDrawList drawList = new();
		panel.Update(0f);
		panel.Draw(drawList);

		Assert.Contains("Map Direction", text.Draws.Select(draw => draw.Text));
		Assert.Contains("Options", text.Draws.Select(draw => draw.Text));
		Assert.Contains("Brightness", text.Draws.Select(draw => draw.Text));

		PauseOptionsTestData.OpenRow(panel, 10);
		drawList.Clear();
		text.Draws.Clear();
		panel.Draw(drawList);

		Assert.Contains("Brightness", text.Draws.Select(draw => draw.Text));
		Assert.Contains("Normal", text.Draws.Select(draw => draw.Text));
		Assert.NotEmpty(drawList.Quads);
		RecordingRenderer renderer = new(RenderSettings.Default);
		drawList.Render(renderer);
		Assert.Contains(renderer.Commands, command => command.StartsWith("Draw TriangleList", StringComparison.Ordinal));
	}

	[Fact]
	public void TextTableResolvesTheOriginalTableAndEntryIndexes()
	{
		UiTextTable table = PauseOptionsTestData.CreateTextTable();
		Assert.Equal("Map Direction", table.GetMessage(121));
		Assert.Equal("Keyboard Config", table.GetOptionText(0));
		Assert.Equal("Brightness", table.GetTableText(11, 130));
		Assert.Throws<ArgumentOutOfRangeException>(() => table.GetMessage(9999));
		Assert.Throws<ArgumentOutOfRangeException>(() => table.GetTableText(99, 0));
	}
}
