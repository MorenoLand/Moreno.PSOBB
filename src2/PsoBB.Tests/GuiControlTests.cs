using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the button, label, check box, scroll bar, list window and edit box with synthetic input
/// and a recording text surface.
/// </summary>
public sealed class GuiControlTests
{
	[Fact]
	public void LabelDrawsBackgroundThenText()
	{
		RecordingTextSurface text = new();
		UiLabel label = new()
		{
			Position = new Vector2(10f, 20f),
			Size = new Vector2(100f, 20f),
			Color = 0xFF112233,
			TextSurface = text,
		};
		label.SetTextColor(0xFF445566);
		label.SetText("Label");
		UiDrawList drawList = new();

		label.Draw(drawList);

		UiQuad quad = Assert.Single(drawList.Quads);
		Assert.Equal(0xFF112233u, quad.Color);
		TextDraw draw = Assert.Single(text.Draws);
		Assert.Equal("Label", draw.Text);
		Assert.Equal(new Vector2(10f, 20f), draw.Position);
		Assert.Equal(0xFF445566u, draw.Color);
	}

	[Fact]
	public void LabelAutoSizeUsesMeasuredWidth()
	{
		UiLabel label = new()
		{
			Size = new Vector2(10f, 20f),
			AutoSize = true,
			TextSurface = new RecordingTextSurface(),
		};
		label.SetText("abcd");

		label.Update(0.016f);

		Assert.Equal(32f, label.Size.X);
		Assert.Equal(20f, label.Size.Y);
	}

	[Fact]
	public void ButtonActivatesOnReleaseInside()
	{
		int activations = 0;
		UiButton button = CreateButton();
		button.SetCallback(_ => activations++);
		button.SetText("OK");

		Assert.True(button.OnEvent(UiEvent.MouseDown(new Vector2(10f, 10f), MouseButtons.Left)));
		Assert.True(button.IsPressed);
		Assert.True(button.IsHighlighted);
		Assert.True(button.OnEvent(UiEvent.MouseUp(new Vector2(20f, 20f), MouseButtons.Left)));

		Assert.False(button.IsPressed);
		Assert.False(button.IsHighlighted);
		Assert.Equal(1, activations);
	}

	[Fact]
	public void ButtonCancelsReleaseOutside()
	{
		int activations = 0;
		UiButton button = CreateButton();
		button.SetCallback(_ => activations++);

		Assert.True(button.OnEvent(UiEvent.MouseDown(new Vector2(10f, 10f), MouseButtons.Left)));
		Assert.False(button.OnEvent(UiEvent.MouseUp(new Vector2(110f, 10f), MouseButtons.Left)));

		Assert.False(button.IsPressed);
		Assert.Equal(0, activations);
	}

	[Fact]
	public void ButtonActivatesWithKeyboardOnlyWhenFocused()
	{
		UiPanel root = CreateRoot();
		UiButton button = CreateButton();
		int activations = 0;
		button.SetCallback(_ => activations++);
		root.Attach(button);
		using UiManager manager = new(root);

		Assert.False(button.OnEvent(UiEvent.KeyDown(GameKey.Return)));
		Assert.True(manager.SetFocus(button));
		Assert.True(manager.Dispatch(UiEvent.KeyDown(GameKey.Return)));
		Assert.Equal(1, activations);
	}

	[Fact]
	public void ButtonHighlightTracksThePointerAndKeepsAHeldPress()
	{
		UiButton button = CreateButton();

		button.OnEvent(UiEvent.MouseMove(new Vector2(5f, 5f)));
		Assert.True(button.IsHighlighted);
		button.OnEvent(UiEvent.MouseMove(new Vector2(200f, 200f)));
		Assert.False(button.IsHighlighted);
		button.OnEvent(UiEvent.MouseDown(new Vector2(5f, 5f), MouseButtons.Left));
		button.OnEvent(UiEvent.MouseMove(new Vector2(200f, 200f)));
		Assert.True(button.IsHighlighted);
	}

	[Fact]
	public void DisabledButtonRejectsHitTestingAndActivation()
	{
		UiPanel root = CreateRoot();
		UiButton button = CreateButton();
		int activations = 0;
		button.SetCallback(_ => activations++);
		root.Attach(button);
		using UiManager manager = new(root);
		button.Disable();

		Assert.Null(manager.HitTest(new Vector2(5f, 5f)));
		Assert.False(manager.Dispatch(UiEvent.MouseDown(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.Null(manager.CapturedElement);
		button.Enable();

		Assert.Same(button, manager.HitTest(new Vector2(5f, 5f)));
		Assert.False(button.OnEvent(UiEvent.MouseUp(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.Equal(0, activations);
	}

	[Fact]
	public void CheckBoxTogglesOnClickAndKeyboard()
	{
		UiPanel root = CreateRoot();
		UiCheckBox checkBox = new() { Position = Vector2.Zero, Size = new Vector2(20f, 20f), Color = 0xFF202020 };
		root.Attach(checkBox);
		using UiManager manager = new(root);

		Assert.False(checkBox.IsChecked);
		Assert.True(checkBox.OnEvent(UiEvent.MouseDown(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.True(checkBox.OnEvent(UiEvent.MouseUp(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.True(checkBox.IsChecked);
		Assert.True(checkBox.OnEvent(UiEvent.MouseDown(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.True(checkBox.OnEvent(UiEvent.MouseUp(new Vector2(5f, 5f), MouseButtons.Left)));
		Assert.False(checkBox.IsChecked);

		Assert.True(manager.SetFocus(checkBox));
		Assert.True(manager.Dispatch(UiEvent.KeyDown(GameKey.Space)));
		Assert.True(checkBox.IsChecked);
	}

	[Fact]
	public void CheckBoxSupportsSeveralValuesAndRejectsDisabledToggle()
	{
		UiCheckBox checkBox = new() { Position = Vector2.Zero, Size = new Vector2(20f, 20f) };
		checkBox.SetValue(2, 3);

		Assert.Equal(2, checkBox.Value);
		Assert.True(checkBox.Toggle());
		Assert.Equal(0, checkBox.Value);
		checkBox.Disable();
		Assert.False(checkBox.Toggle());
		Assert.Equal(0, checkBox.Value);
		Assert.Throws<ArgumentOutOfRangeException>(() => checkBox.Value = 3);
	}

	[Fact]
	public void ListSelectionWrapsAndSkipsDisabledRows()
	{
		UiListWindow list = CreateList("A", "B", "C", "D");
		list.Items[1].Enabled = false;
		list.SetItems(list.Items);

		Assert.Equal(0, list.SelectedIndex);
		Assert.True(list.SelectNext());
		Assert.Equal(2, list.SelectedIndex);
		Assert.True(list.SelectNext());
		Assert.Equal(3, list.SelectedIndex);
		Assert.True(list.SelectNext());
		Assert.Equal(0, list.SelectedIndex);
		Assert.True(list.SelectPrevious());
		Assert.Equal(3, list.SelectedIndex);
	}

	[Fact]
	public void ListSelectionCanRefuseToWrap()
	{
		UiListWindow list = CreateList("A", "B", "C");
		list.WrapSelection = false;
		Assert.Equal(0, list.SelectedIndex);
		Assert.False(list.SelectPrevious());
		Assert.Equal(0, list.SelectedIndex);
		Assert.True(list.SelectNext());
		Assert.True(list.SelectNext());
		Assert.Equal(2, list.SelectedIndex);
		Assert.False(list.SelectNext());
		Assert.Equal(2, list.SelectedIndex);
	}

	[Fact]
	public void ListSelectionSkipsAnAllDisabledList()
	{
		UiListWindow list = CreateList("A", "B");
		foreach (UiListItem item in list.Items)
			item.Enabled = false;
		list.SetItems(list.Items);

		Assert.Equal(-1, list.SelectedIndex);
		Assert.False(list.SelectNext());
		Assert.False(list.SelectPrevious());
		Assert.False(list.ActivateSelected());
	}

	[Fact]
	public void ListMouseSelectionActivatesTheSameRow()
	{
		UiListWindow list = CreateList("One", "Two", "Three");
		UiListItem? activated = null;
		list.ItemActivated += (_, item) => activated = item;

		Assert.True(list.OnEvent(UiEvent.MouseDown(new Vector2(20f, 45f), MouseButtons.Left)));
		Assert.Equal(2, list.SelectedIndex);
		Assert.True(list.OnEvent(UiEvent.MouseUp(new Vector2(20f, 45f), MouseButtons.Left)));

		Assert.Same(list.Items[2], activated);
	}

	[Fact]
	public void ListMouseReleaseOnAnotherRowDoesNotActivate()
	{
		UiListWindow list = CreateList("One", "Two", "Three");
		int activations = 0;
		list.ItemActivated += (_, _) => activations++;

		Assert.True(list.OnEvent(UiEvent.MouseDown(new Vector2(20f, 5f), MouseButtons.Left)));
		Assert.False(list.OnEvent(UiEvent.MouseUp(new Vector2(20f, 45f), MouseButtons.Left)));
		Assert.Equal(0, activations);
	}

	[Fact]
	public void ListActivationRequiresAnEnabledSelection()
	{
		UiListWindow list = CreateList("One", "Two");
		int activations = 0;
		list.ItemActivated += (_, _) => activations++;
		list.Items[0].Enabled = false;
		list.SelectedIndex = 0;

		Assert.False(list.ActivateSelected());
		Assert.Equal(0, activations);
	}

	[Fact]
	public void ListScrollingEasesToClampedBounds()
	{
		UiListWindow list = CreateList("A", "B", "C", "D", "E", "F", "G", "H", "I", "J");
		list.Size = new Vector2(200f, 60f);
		list.Update(0f);

		list.ScrollBar.SetTarget(1000f);
		Assert.Equal(140f, list.ScrollBar.Target);
		for (int frame = 0; frame < 4; frame++)
			list.Update(0.016f);
		Assert.Equal(140f, list.ScrollBar.Value);

		list.ScrollBar.SetTarget(-100f);
		Assert.Equal(0f, list.ScrollBar.Target);
		for (int frame = 0; frame < 4; frame++)
			list.Update(0.016f);
		Assert.Equal(0f, list.ScrollBar.Value);
	}

	[Fact]
	public void ListScrollsTheSelectedRowIntoThePage()
	{
		UiListWindow list = CreateList("A", "B", "C", "D", "E", "F", "G", "H", "I", "J");
		list.Size = new Vector2(200f, 60f);
		list.SelectedIndex = 9;

		list.ScrollToSelected();

		Assert.Equal(140f, list.ScrollBar.Target);
	}

	[Fact]
	public void ListWheelScrollsWithinTheContentBounds()
	{
		UiListWindow list = CreateList("A", "B", "C", "D", "E", "F", "G", "H", "I", "J");
		list.Size = new Vector2(200f, 60f);

		Assert.True(list.OnEvent(UiEvent.MouseWheel(new Vector2(5f, 5f), -120)));
		Assert.Equal(20f, list.ScrollBar.Target);
		Assert.True(list.OnEvent(UiEvent.MouseWheel(new Vector2(5f, 5f), -1200)));
		Assert.Equal(140f, list.ScrollBar.Target);
	}

	[Fact]
	public void ScrollBarClampsValueAndComputesTheThumb()
	{
		UiScrollBar bar = new()
		{
			Position = Vector2.Zero,
			Size = new Vector2(12f, 100f),
			ContentSize = 300f,
			PageSize = 100f,
		};

		Assert.Equal(200f, bar.MaxValue);
		bar.SetTarget(500f);
		Assert.Equal(200f, bar.Target);
		for (int frame = 0; frame < 4; frame++)
			bar.Update(0.016f);
		Assert.Equal(200f, bar.Value);
		Assert.Equal(100f / 3f, bar.ThumbSize, 3);
		Assert.Equal(200f / 3f, bar.ThumbOffset, 3);

		bar.PageSize = 300f;
		Assert.Equal(0f, bar.MaxValue);
		Assert.Equal(100f, bar.ThumbSize);
		Assert.Equal(0f, bar.Value);
	}

	[Fact]
	public void ScrollBarDrawsTrackThenThumb()
	{
		UiScrollBar bar = new()
		{
			Position = Vector2.Zero,
			Size = new Vector2(12f, 100f),
			Color = 0xFF101010,
			ThumbColor = 0xFF202020,
			ContentSize = 300f,
			PageSize = 100f,
		};
		UiDrawList drawList = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);

		bar.Draw(drawList);
		drawList.Render(renderer);

		Assert.Equal(2, drawList.Quads.Count);
		Assert.Equal(0xFF101010u, drawList.Quads[0].Color);
		Assert.Equal(0xFF202020u, drawList.Quads[1].Color);
		Assert.Equal(new Vector2(0f, 0f), drawList.Quads[1].Position);
		Assert.Equal(4, renderer.Commands.Count);
	}

	[Fact]
	public void EditBoxAcceptsTextAndBackspace()
	{
		UiEditBox edit = CreateEditBox();
		Assert.True(edit.BeginEdit());
		edit.SetFocus();

		Assert.True(edit.OnEvent(UiEvent.Text('A')));
		Assert.True(edit.OnEvent(UiEvent.Text('B')));
		Assert.True(edit.OnEvent(UiEvent.Text('C')));
		Assert.Equal("ABC", edit.Text);
		Assert.Equal(3, edit.CaretIndex);

		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Backspace)));
		Assert.Equal("AB", edit.Text);
		Assert.Equal(2, edit.CaretIndex);
		Assert.True(edit.OnEvent(UiEvent.Text('D')));
		Assert.Equal("ABD", edit.Text);
	}

	[Fact]
	public void EditBoxEnforcesTheMaximumLength()
	{
		UiEditBox edit = CreateEditBox();
		edit.MaxLength = 2;
		edit.BeginEdit();
		edit.SetFocus();

		edit.OnEvent(UiEvent.Text('A'));
		edit.OnEvent(UiEvent.Text('B'));
		edit.OnEvent(UiEvent.Text('C'));

		Assert.Equal("AB", edit.Text);
	}

	[Fact]
	public void EditBoxDeletesAtTheCaretAndMovesWithinTheText()
	{
		UiEditBox edit = CreateEditBox();
		edit.SetText("ABC");
		edit.BeginEdit();
		edit.SetFocus();

		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Left)));
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Left)));
		Assert.Equal(1, edit.CaretIndex);
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Delete)));
		Assert.Equal("AC", edit.Text);
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Home)));
		Assert.Equal(0, edit.CaretIndex);
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Delete)));
		Assert.Equal("C", edit.Text);
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.End)));
		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Backspace)));
		Assert.Equal("", edit.Text);
	}

	[Fact]
	public void EditBoxCommitRemovesAsciiAndFullWidthSpaces()
	{
		UiEditBox edit = CreateEditBox();
		edit.SetText(" a b\u3000c ");
		edit.BeginEdit();

		edit.CommitInput();

		Assert.Equal("abc", edit.Text);
		Assert.False(edit.IsEditing);
	}

	[Fact]
	public void EditBoxCancelRestoresTheOriginalLine()
	{
		UiEditBox edit = CreateEditBox();
		edit.SetText("orig");
		edit.BeginEdit();
		edit.SetFocus();
		edit.OnEvent(UiEvent.Text('X'));
		Assert.Equal("origX", edit.Text);

		Assert.True(edit.OnEvent(UiEvent.KeyDown(GameKey.Escape)));

		Assert.Equal("orig", edit.Text);
		Assert.False(edit.IsEditing);
	}

	[Fact]
	public void EditBoxRejectsTypingWithoutFocusAndWhenDisabled()
	{
		UiPanel root = CreateRoot();
		UiEditBox edit = CreateEditBox();
		root.Attach(edit);
		using UiManager manager = new(root);
		edit.Focusable = false;

		Assert.False(manager.Dispatch(UiEvent.Text('A')));
		Assert.Equal("", edit.Text);
		edit.Focusable = true;
		edit.Disable();
		Assert.False(manager.SetFocus(edit));
		Assert.False(manager.Dispatch(UiEvent.Text('B')));
		Assert.Equal("", edit.Text);
	}

	[Fact]
	public void PanelHitTestsControlsInAttachOrder()
	{
		UiPanel root = CreateRoot();
		UiLabel label = new() { Position = new Vector2(0f, 0f), Size = new Vector2(100f, 20f) };
		UiButton button = CreateButton();
		button.Position = new Vector2(0f, 30f);
		UiListWindow list = CreateList("One", "Two");
		list.Position = new Vector2(0f, 60f);
		root.Attach(label);
		root.Attach(button);
		root.Attach(list);
		using UiManager manager = new(root);

		Assert.Same(label, manager.HitTest(new Vector2(5f, 5f)));
		Assert.Same(button, manager.HitTest(new Vector2(5f, 35f)));
		Assert.Same(list, manager.HitTest(new Vector2(5f, 65f)));
		Assert.Null(manager.HitTest(new Vector2(500f, 500f)));
	}

	[Fact]
	public void FocusOrderSkipsTheStaticLabel()
	{
		UiPanel root = CreateRoot();
		UiLabel label = new() { Position = Vector2.Zero, Size = new Vector2(100f, 20f) };
		UiButton button = CreateButton();
		button.Position = new Vector2(0f, 30f);
		root.Attach(label);
		root.Attach(button);
		using UiManager manager = new(root);

		Assert.Equal(new UiElement[] { button }, manager.FocusOrder);
	}

	[Fact]
	public void ControlTreeDrawsInAttachOrder()
	{
		UiPanel root = CreateRoot();
		RecordingTextSurface text = new();
		UiLabel label = new()
		{
			Position = new Vector2(0f, 0f),
			Size = new Vector2(100f, 20f),
			Color = 0xFFAAAAAA,
			TextSurface = text,
		};
		label.SetText("Label");
		UiButton button = CreateButton();
		button.Position = new Vector2(0f, 30f);
		button.Color = 0xFFBBBBBB;
		button.TextSurface = text;
		button.SetText("Button");
		UiListWindow list = CreateList("One", "Two", "Three");
		list.Position = new Vector2(0f, 60f);
		list.Color = 0xFF111111;
		list.SelectionColor = 0xFF222222;
		list.ScrollBar.ThumbColor = 0xFF333333;
		list.TextSurface = text;
		root.Attach(label);
		root.Attach(button);
		root.Attach(list);
		UiDrawList drawList = new();

		root.Draw(drawList);

		Assert.Equal(5, drawList.Quads.Count);
		Assert.Equal(0xFFAAAAAAu, drawList.Quads[0].Color);
		Assert.Equal(0xFFBBBBBBu, drawList.Quads[1].Color);
		Assert.Equal(0xFF111111u, drawList.Quads[2].Color);
		Assert.Equal(0xFF222222u, drawList.Quads[3].Color);
		Assert.Equal(0xFF333333u, drawList.Quads[4].Color);
		Assert.Equal(["Label", "Button", "One", "Two", "Three"], text.Draws.Select(draw => draw.Text).ToArray());
	}

	[Fact]
	public void HiddenControlsAreNotHitTestedOrDrawn()
	{
		UiPanel root = CreateRoot();
		UiButton button = CreateButton();
		root.Attach(button);
		using UiManager manager = new(root);
		button.Hide();
		UiDrawList drawList = new();

		Assert.Null(manager.HitTest(new Vector2(5f, 5f)));
		button.Draw(drawList);
		Assert.Empty(drawList.Quads);
		button.Show();
		button.SetText("Back");
		button.Draw(drawList);
		Assert.Single(drawList.Quads);
	}

	private static UiPanel CreateRoot() => new()
	{
		Position = Vector2.Zero,
		Size = new Vector2(300f, 200f),
	};

	private static UiButton CreateButton()
	{
		UiButton button = new()
		{
			Position = Vector2.Zero,
			Size = new Vector2(100f, 30f),
			Color = 0xFF808080,
		};
		button.SetText("OK");
		return button;
	}

	private static UiListWindow CreateList(params string[] rows)
	{
		UiListWindow list = new()
		{
			Position = Vector2.Zero,
			Size = new Vector2(200f, 100f),
			Color = 0xFF000001,
			ItemHeight = 20f,
		};
		list.SetItems(rows.Select(row => new UiListItem(row)));
		return list;
	}

	private static UiEditBox CreateEditBox()
	{
		UiEditBox edit = new()
		{
			Position = Vector2.Zero,
			Size = new Vector2(160f, 20f),
			Color = 0xFF000001,
		};
		return edit;
	}

	private sealed class RecordingTextSurface : IUiTextSurface
	{
		public List<TextDraw> Draws { get; } = [];

		public float Measure(string? text) => (text?.Length ?? 0) * 8f;

		public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
			=> Draws.Add(new TextDraw(text ?? string.Empty, position, color, maxWidth));
	}

	private readonly record struct TextDraw(string Text, Vector2 Position, uint Color, float MaxWidth);
}
