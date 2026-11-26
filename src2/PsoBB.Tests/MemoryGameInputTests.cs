using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the poll boundary of the in-memory keyboard and mouse.
/// </summary>
public sealed class MemoryGameInputTests
{
	[Fact]
	public void KeysAppearOnlyAfterAPoll()
	{
		MemoryGameInput input = new();
		Assert.False(input.Keyboard.IsKeyDown(GameKey.Return));
		input.SetKey(GameKey.Return, true);
		Assert.False(input.Keyboard.IsKeyDown(GameKey.Return));
		input.Poll();
		Assert.True(input.Keyboard.IsKeyDown(GameKey.Return));
		Assert.True(input.Keyboard.AnyKeyDown);
		input.SetKey(GameKey.Return, false);
		Assert.True(input.Keyboard.IsKeyDown(GameKey.Return));
		input.Poll();
		Assert.False(input.Keyboard.IsKeyDown(GameKey.Return));
		Assert.False(input.Keyboard.AnyKeyDown);
	}

	[Fact]
	public void RawScanCodesRemainAddressable()
	{
		MemoryGameInput input = new();
		input.SetKey(0xF0, true);
		input.Poll();
		Assert.True(input.Keyboard.IsKeyDown(0xF0));
		Assert.False(input.Keyboard.IsKeyDown(0x100));
		Assert.False(input.Keyboard.IsKeyDown(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => input.SetKey(256, true));
		Assert.Throws<ArgumentOutOfRangeException>(() => input.SetKey(-1, true));
	}

	[Fact]
	public void MovementAccumulatesUntilThePollAndThenClears()
	{
		MemoryGameInput input = new();
		input.AddMouseMovement(3, 4);
		input.AddMouseMovement(2, -1);
		input.AddWheelMovement(120);
		input.Poll();
		Assert.Equal(new MouseState(0, 0, 5, 3, 120, MouseButtons.None), input.Mouse);
		input.Poll();
		Assert.Equal(new MouseState(0, 0, 0, 0, 0, MouseButtons.None), input.Mouse);
	}

	[Fact]
	public void PositionAndButtonsPersistBetweenPolls()
	{
		MemoryGameInput input = new();
		input.SetCursorPosition(100, 50);
		input.SetButtons(MouseButtons.Left | MouseButtons.Middle);
		input.Poll();
		Assert.Equal(100, input.Mouse.X);
		Assert.Equal(50, input.Mouse.Y);
		Assert.True(input.Mouse.IsButtonDown(MouseButtons.Left));
		Assert.True(input.Mouse.IsButtonDown(MouseButtons.Middle));
		Assert.False(input.Mouse.IsButtonDown(MouseButtons.Right));
		input.Poll();
		Assert.Equal(100, input.Mouse.X);
		Assert.Equal(50, input.Mouse.Y);
		Assert.Equal(MouseButtons.Left | MouseButtons.Middle, input.Mouse.Buttons);
		input.SetCursorPosition(10, 20);
		Assert.Equal(100, input.Mouse.X);
		input.Poll();
		Assert.Equal(10, input.Mouse.X);
		Assert.Equal(20, input.Mouse.Y);
	}

	[Fact]
	public void CursorVisibilityIsRecordedImmediately()
	{
		MemoryGameInput input = new();
		Assert.True(input.CursorVisible);
		input.SetCursorVisible(false);
		Assert.False(input.CursorVisible);
		input.SetCursorVisible(true);
		Assert.True(input.CursorVisible);
	}

	[Fact]
	public void UnknownMouseButtonsAreRejected()
	{
		MemoryGameInput input = new();
		Assert.Throws<ArgumentOutOfRangeException>(() => input.SetButtons((MouseButtons)256));
	}

	[Fact]
	public void EmptyMouseStateReportsNothing()
	{
		MouseState empty = MouseState.Empty;
		Assert.Equal(0, empty.X);
		Assert.Equal(MouseButtons.None, empty.Buttons);
		Assert.False(empty.IsButtonDown(MouseButtons.None));
	}
}
