using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks keyboard, pointer and gamepad edges, repeat timing, dead zones, focus loss and combined input.
/// </summary>
public sealed class InputManagerTests
{
	[Fact]
	public void KeyboardEdgesFollowThePollBoundary()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		manager.Update(TimeSpan.Zero);
		input.SetKey(GameKey.W, true);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Keyboard.WasKeyPressed(GameKey.W));
		Assert.True(manager.WasActionPressed(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.Keyboard.WasKeyPressed(GameKey.W));
		Assert.False(manager.WasActionPressed(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		input.SetKey(GameKey.W, false);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Keyboard.WasKeyReleased(GameKey.W));
		Assert.True(manager.WasActionReleased(InputAction.MoveForward));
		Assert.False(manager.IsActionDown(InputAction.MoveForward));
	}

	[Fact]
	public void ReturnFeedsBothConfirmAndChat()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetKey(GameKey.Return, true);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionPressed(InputAction.Confirm));
		Assert.True(manager.WasActionPressed(InputAction.Chat));
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		Assert.True(manager.IsActionDown(InputAction.Chat));
		input.SetKey(GameKey.Return, false);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
		Assert.True(manager.WasActionReleased(InputAction.Chat));
	}

	[Fact]
	public void PointerButtonEdgesFollowThePollBoundary()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetButtons(MouseButtons.Left);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Mouse.WasButtonPressed(MouseButtons.Left));
		Assert.True(manager.WasActionPressed(InputAction.Confirm));
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.Mouse.WasButtonPressed(MouseButtons.Left));
		Assert.True(manager.Mouse.IsButtonDown(MouseButtons.Left));
		input.SetButtons(MouseButtons.None);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Mouse.WasButtonReleased(MouseButtons.Left));
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
	}

	[Fact]
	public void GamepadButtonEdgesFollowThePollBoundary()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.A));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Gamepad.WasPressed(GamepadButtons.A));
		Assert.True(manager.WasActionPressed(InputAction.Confirm));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Gamepad.WasReleased(GamepadButtons.A));
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
	}

	[Fact]
	public void HeldKeyRepeatsAfterTheDelayAndThenAtTheInterval()
	{
		InputManager manager = NewManager(out MemoryGameInput input, new KeyRepeatSettings(TimeSpan.FromMilliseconds(500), TimeSpan.FromMilliseconds(100)));
		input.SetKey(GameKey.Space, true);
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(499));
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(1));
		Assert.Equal(1, manager.GetActionRepeatCount(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(250));
		Assert.Equal(2, manager.GetActionRepeatCount(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(100));
		Assert.Equal(1, manager.GetActionRepeatCount(InputAction.Confirm));
		input.SetKey(GameKey.Space, false);
		manager.Update(TimeSpan.FromMilliseconds(100));
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		input.SetKey(GameKey.Space, true);
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(499));
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
	}

	[Fact]
	public void RepeatUsesTheLargestCountAcrossBoundKeys()
	{
		InputBindings bindings = new();
		bindings.Bind(InputAction.Confirm, GameKey.Space);
		bindings.Bind(InputAction.Confirm, GameKey.Return);
		InputManager manager = NewManager(out MemoryGameInput input, new KeyRepeatSettings(TimeSpan.FromMilliseconds(100), TimeSpan.FromMilliseconds(50)), bindings: bindings);
		input.SetKey(GameKey.Space, true);
		manager.Update(TimeSpan.Zero);
		manager.Update(TimeSpan.FromMilliseconds(100));
		manager.Update(TimeSpan.FromMilliseconds(50));
		input.SetKey(GameKey.Return, true);
		manager.Update(TimeSpan.Zero);
		manager.Update(TimeSpan.FromMilliseconds(100));
		Assert.Equal(2, manager.GetActionRepeatCount(InputAction.Confirm));
	}

	[Fact]
	public void FocusLossReleasesHeldControlsAndRefocusDoesNotRetrigger()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetKey(GameKey.W, true);
		input.SetKey(GameKey.Space, true);
		input.SetButtons(MouseButtons.Left);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.A));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		input.SetFocused(false);
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.HasFocus);
		Assert.False(manager.IsActionDown(InputAction.MoveForward));
		Assert.False(manager.IsActionDown(InputAction.Confirm));
		Assert.True(manager.WasActionReleased(InputAction.MoveForward));
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
		Assert.Equal(System.Numerics.Vector2.Zero, manager.MoveVector);
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		input.SetFocused(true);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.HasFocus);
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		Assert.False(manager.WasActionPressed(InputAction.MoveForward));
		Assert.False(manager.WasActionPressed(InputAction.Confirm));
		manager.Update(TimeSpan.FromMilliseconds(16));
		Assert.Equal(0, manager.GetActionRepeatCount(InputAction.Confirm));
		input.SetKey(GameKey.W, false);
		input.SetKey(GameKey.Space, false);
		input.SetButtons(MouseButtons.None);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionReleased(InputAction.MoveForward));
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
		input.SetKey(GameKey.W, true);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionPressed(InputAction.MoveForward));
	}

	[Fact]
	public void SimultaneousSourcesKeepAnActionDownUntilAllRelease()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetKey(GameKey.Space, true);
		input.SetButtons(MouseButtons.Left);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.A));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionPressed(InputAction.Confirm));
		input.SetKey(GameKey.Space, false);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		Assert.False(manager.WasActionReleased(InputAction.Confirm));
		input.SetButtons(MouseButtons.None);
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None));
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.IsActionDown(InputAction.Confirm));
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
	}

	[Fact]
	public void KeyboardAndStickMovementCombineAndOpposingInputsCancel()
	{
		InputManager manager = NewManager(out MemoryGameInput input, gamepadSettings: new GamepadSettings(0, 0.5f));
		input.SetKey(GameKey.W, true);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, leftX: 0.5f, leftY: -0.5f));
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0.5f, manager.MoveVector.X, 5);
		Assert.Equal(1f, manager.MoveVector.Y, 5);
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.MoveRight));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None));
		input.SetKey(GameKey.S, true);
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0f, manager.MoveVector.Y, 5);
		Assert.False(manager.IsActionDown(InputAction.MoveForward));
		Assert.False(manager.IsActionDown(InputAction.MoveBackward));
	}

	[Fact]
	public void DiagonalKeyboardMovementSetsBothDirections()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetKey(GameKey.W, true);
		input.SetKey(GameKey.D, true);
		manager.Update(TimeSpan.Zero);
		Assert.Equal(new System.Numerics.Vector2(1, 1), manager.MoveVector);
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.MoveRight));
		Assert.False(manager.IsActionDown(InputAction.MoveLeft));
	}

	[Fact]
	public void StickDeadZoneZerosAndRescalesEachAxis()
	{
		InputManager manager = NewManager(out MemoryGameInput input, gamepadSettings: new GamepadSettings(0.1f, 0.5f));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, leftX: 0.05f, leftY: -0.1f));
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0f, manager.Gamepad.LeftStick.X);
		Assert.Equal(0f, manager.Gamepad.LeftStick.Y);
		Assert.Equal(System.Numerics.Vector2.Zero, manager.MoveVector);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, leftX: 0.55f, leftY: -1f));
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0.5f, manager.Gamepad.LeftStick.X, 5);
		Assert.Equal(-1f, manager.Gamepad.LeftStick.Y, 5);
		Assert.Equal(0.5f, manager.MoveVector.X, 5);
		Assert.Equal(1f, manager.MoveVector.Y, 5);
		Assert.True(manager.IsActionDown(InputAction.MoveForward));
		Assert.True(manager.IsActionDown(InputAction.MoveRight));
		Assert.False(manager.IsActionDown(InputAction.MoveLeft));
	}

	[Fact]
	public void RightStickDrivesTheLookVectorWithUpwardPositiveY()
	{
		InputManager manager = NewManager(out MemoryGameInput input, gamepadSettings: new GamepadSettings(0.1f, 0.5f));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, rightX: 0.55f, rightY: -0.55f));
		manager.Update(TimeSpan.Zero);
		Assert.Equal(0.5f, manager.LookVector.X, 5);
		Assert.Equal(0.5f, manager.LookVector.Y, 5);
	}

	[Fact]
	public void TriggerThresholdPressesAndRescalesTheAnalogValue()
	{
		InputManager manager = NewManager(out MemoryGameInput input, gamepadSettings: new GamepadSettings(0.1f, 0.5f));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, leftTrigger: 0.49f, rightTrigger: 0.5f));
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.Gamepad.IsPressed(GamepadButtons.LeftTrigger));
		Assert.True(manager.Gamepad.IsPressed(GamepadButtons.RightTrigger));
		Assert.Equal(0f, manager.Gamepad.LeftTrigger);
		Assert.Equal(0f, manager.Gamepad.RightTrigger);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, leftTrigger: 0.75f, rightTrigger: 1f));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Gamepad.WasPressed(GamepadButtons.LeftTrigger));
		Assert.Equal(0.5f, manager.Gamepad.LeftTrigger, 5);
		Assert.Equal(1f, manager.Gamepad.RightTrigger, 5);
	}

	[Fact]
	public void TriggerFlagCanBeBoundLikeAButton()
	{
		InputBindings bindings = new();
		bindings.Bind(InputAction.Confirm, GamepadButtons.RightTrigger);
		InputManager manager = NewManager(out MemoryGameInput input, bindings: bindings);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, rightTrigger: 0.49f));
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.IsActionDown(InputAction.Confirm));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, rightTrigger: 0.5f));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionPressed(InputAction.Confirm));
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		input.SetGamepad(ConnectedGamepad(GamepadButtons.None, rightTrigger: 0.2f));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.WasActionReleased(InputAction.Confirm));
	}

	[Fact]
	public void DisconnectingAGamepadReleasesItsControls()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		input.SetGamepad(ConnectedGamepad(GamepadButtons.A));
		manager.Update(TimeSpan.Zero);
		Assert.True(manager.Gamepad.Connected);
		Assert.True(manager.IsActionDown(InputAction.Confirm));
		input.SetGamepad(GamepadState.Empty);
		manager.Update(TimeSpan.Zero);
		Assert.False(manager.Gamepad.Connected);
		Assert.True(manager.Gamepad.WasReleased(GamepadButtons.A));
		Assert.False(manager.IsActionDown(InputAction.Confirm));
	}

	[Fact]
	public void CursorPositionAndVisibilityAreForwarded()
	{
		InputManager manager = NewManager(out MemoryGameInput input);
		manager.SetCursorVisible(false);
		manager.SetCursorPosition(120, 80);
		Assert.False(input.CursorVisible);
		manager.Update(TimeSpan.Zero);
		Assert.Equal(120, manager.Cursor.X);
		Assert.Equal(80, manager.Cursor.Y);
		Assert.False(manager.Cursor.Visible);
		manager.SetCursorVisible(true);
		Assert.True(input.CursorVisible);
		Assert.True(manager.Cursor.Visible);
	}

	[Fact]
	public void InvalidInputsAreRejected()
	{
		Assert.Throws<ArgumentNullException>(() => new InputManager(null!));
		InputManager manager = NewManager(out _);
		Assert.Throws<ArgumentOutOfRangeException>(() => manager.Update(TimeSpan.FromTicks(-1)));
		Assert.False(manager.IsActionDown(InputAction.None));
		Assert.False(manager.WasActionPressed((InputAction)999));
		Assert.False(manager.WasActionReleased((InputAction)999));
		Assert.Equal(0, manager.GetActionRepeatCount((InputAction)999));
		Assert.False(manager.Keyboard.IsKeyDown(256));
		Assert.False(manager.Keyboard.WasKeyPressed(-1));
		Assert.False(manager.Keyboard.WasKeyReleased(256));
		Assert.Equal(0, manager.Keyboard.GetRepeatCount(-1));
		Assert.Throws<ArgumentOutOfRangeException>(() => new KeyRepeatSettings(TimeSpan.FromTicks(-1), TimeSpan.FromMilliseconds(30)));
		Assert.Throws<ArgumentOutOfRangeException>(() => new KeyRepeatSettings(TimeSpan.Zero, TimeSpan.Zero));
		Assert.Throws<ArgumentOutOfRangeException>(() => new GamepadSettings(1f, 0.5f));
		Assert.Throws<ArgumentOutOfRangeException>(() => new GamepadSettings(0.1f, 1f));
		InputBindings bindings = new();
		Assert.Throws<ArgumentOutOfRangeException>(() => bindings.Bind(InputAction.None, GameKey.W));
		Assert.Throws<ArgumentOutOfRangeException>(() => bindings.Bind(InputAction.Confirm, GameKey.None));
		Assert.Throws<ArgumentOutOfRangeException>(() => bindings.Bind(InputAction.Confirm, MouseButtons.Left | MouseButtons.Right));
		Assert.Throws<ArgumentOutOfRangeException>(() => bindings.Bind(InputAction.Confirm, GamepadButtons.A | GamepadButtons.B));
	}

	private static InputManager NewManager(out MemoryGameInput input, KeyRepeatSettings? keyRepeat = null, InputBindings? bindings = null, GamepadSettings? gamepadSettings = null)
	{
		input = new MemoryGameInput();
		return new InputManager(input, bindings ?? InputBindings.CreateDefault(), gamepadSettings, keyRepeat);
	}

	private static GamepadState ConnectedGamepad(GamepadButtons buttons, float leftX = 0, float leftY = 0, float rightX = 0, float rightY = 0, float leftTrigger = 0, float rightTrigger = 0) => new(true, buttons, leftX, leftY, rightX, rightY, leftTrigger, rightTrigger);
}
