using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Reads the platform input source once per frame and turns it into device edges and client actions.
/// </summary>
/// <remarks>
/// Movement is additive: keyboard or d-pad directions and the left stick are summed and clamped, so opposing inputs cancel. A focus loss releases every held control; regaining focus resynchronises the devices without producing press edges for controls that are still held.
/// </remarks>
public sealed class InputManager
{
	/// <summary>
	/// The component magnitude at which a movement direction becomes an action.
	/// </summary>
	public const float DirectionThreshold = 0.5f;
	private const int ActionCount = (int)InputAction.Action10 + 1;
	private readonly IGameInput _input;
	private readonly InputBindings _bindings;
	private readonly bool[] _actionDown = new bool[ActionCount];
	private readonly bool[] _previousActionDown = new bool[ActionCount];
	private bool _hasFocus;

	/// <summary>
	/// Creates the portable input layer over a platform source.
	/// </summary>
	/// <param name="input">The source polled once per update.</param>
	/// <param name="bindings">The control map; the default map is used when omitted.</param>
	/// <param name="gamepadSettings">The gamepad thresholds; the defaults are used when omitted.</param>
	/// <param name="keyRepeat">The keyboard repeat timings; the defaults are used when omitted.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	public InputManager(IGameInput input, InputBindings? bindings = null, GamepadSettings? gamepadSettings = null, KeyRepeatSettings? keyRepeat = null)
	{
		_input = input ?? throw new ArgumentNullException(nameof(input));
		_bindings = bindings ?? InputBindings.CreateDefault();
		Keyboard = new KeyboardInput(keyRepeat);
		Mouse = new MouseInput();
		Gamepad = new GamepadInput(gamepadSettings);
		Cursor = new CursorInput(input);
		_hasFocus = input.IsFocused;
	}

	/// <summary>
	/// Gets the keyboard hold, edge and repeat state.
	/// </summary>
	public KeyboardInput Keyboard { get; }

	/// <summary>
	/// Gets the pointer state and button edges.
	/// </summary>
	public MouseInput Mouse { get; }

	/// <summary>
	/// Gets the gamepad state after dead zones and trigger thresholds.
	/// </summary>
	public GamepadInput Gamepad { get; }

	/// <summary>
	/// Gets the polled pointer position and requested visibility.
	/// </summary>
	public CursorInput Cursor { get; }

	/// <summary>
	/// Gets the control map in use.
	/// </summary>
	public InputBindings Bindings => _bindings;

	/// <summary>
	/// Gets the movement vector after combining keyboard, d-pad and left-stick input.
	/// </summary>
	/// <remarks>
	/// X is positive to the right and Y is positive forward. Opposing inputs cancel and the result is clamped to the unit square.
	/// </remarks>
	public Vector2 MoveVector { get; private set; }

	/// <summary>
	/// Gets the right-stick look vector.
	/// </summary>
	/// <remarks>
	/// X is positive to the right and Y is positive upward, so pushing the stick up reports a positive Y.
	/// </remarks>
	public Vector2 LookVector { get; private set; }

	/// <summary>
	/// Gets a value indicating whether the source had focus at the last update.
	/// </summary>
	public bool HasFocus => _hasFocus;

	/// <summary>
	/// Polls the source, advances repeat timers and recomputes actions and device edges.
	/// </summary>
	/// <param name="elapsed">The time since the previous update; it cannot be negative.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="elapsed"/> is negative.</exception>
	public void Update(TimeSpan elapsed)
	{
		if (elapsed < TimeSpan.Zero)
			throw new ArgumentOutOfRangeException(nameof(elapsed), elapsed, "Input time cannot move backward.");
		_input.Poll();
		bool focused = _input.IsFocused;
		if (!focused)
		{
			if (_hasFocus)
			{
				Keyboard.ReleaseAll();
				Mouse.ReleaseAll();
				Gamepad.ReleaseAll();
			}
			_hasFocus = false;
			Cursor.Update(_input.Mouse);
			RecomputeActions();
			return;
		}
		if (!_hasFocus)
		{
			Keyboard.Resync(_input.Keyboard);
			Mouse.Resync(_input.Mouse);
			Gamepad.Resync(_input.Gamepad);
			Cursor.Update(_input.Mouse);
			_hasFocus = true;
			RecomputeActions();
			Array.Copy(_actionDown, _previousActionDown, ActionCount);
			return;
		}
		Keyboard.Update(_input.Keyboard, elapsed);
		Mouse.Update(_input.Mouse);
		Gamepad.Update(_input.Gamepad);
		Cursor.Update(_input.Mouse);
		RecomputeActions();
	}

	/// <summary>
	/// Returns whether an action is active after the last update.
	/// </summary>
	/// <param name="action">The action to test.</param>
	/// <returns><see langword="true"/> when the action is active.</returns>
	public bool IsActionDown(InputAction action) => IsAction(action) && _actionDown[(int)action];

	/// <summary>
	/// Returns whether an action became active since the previous update.
	/// </summary>
	/// <param name="action">The action to test.</param>
	/// <returns><see langword="true"/> on the update where the action was pressed.</returns>
	public bool WasActionPressed(InputAction action) => IsAction(action) && _actionDown[(int)action] && !_previousActionDown[(int)action];

	/// <summary>
	/// Returns whether an action became inactive since the previous update.
	/// </summary>
	/// <param name="action">The action to test.</param>
	/// <returns><see langword="true"/> on the update where the action was released.</returns>
	public bool WasActionReleased(InputAction action) => IsAction(action) && !_actionDown[(int)action] && _previousActionDown[(int)action];

	/// <summary>
	/// Gets the number of keyboard repeat events for an action in this update.
	/// </summary>
	/// <param name="action">The action to test.</param>
	/// <returns>The largest repeat count among the keys bound to the action, or zero.</returns>
	public int GetActionRepeatCount(InputAction action)
	{
		if (!IsAction(action))
			return 0;
		int repeats = 0;
		foreach (GameKey key in _bindings.GetKeys(action))
			repeats = Math.Max(repeats, Keyboard.GetRepeatCount((int)key));
		return repeats;
	}

	/// <summary>
	/// Requests a pointer position from the host.
	/// </summary>
	/// <param name="x">The horizontal client-area coordinate.</param>
	/// <param name="y">The vertical client-area coordinate.</param>
	public void SetCursorPosition(int x, int y) => Cursor.SetPosition(x, y);

	/// <summary>
	/// Requests pointer visibility from the host.
	/// </summary>
	/// <param name="visible">Whether the pointer should be visible.</param>
	public void SetCursorVisible(bool visible) => Cursor.SetVisible(visible);

	private void RecomputeActions()
	{
		Array.Copy(_actionDown, _previousActionDown, ActionCount);
		Span<bool> raw = stackalloc bool[ActionCount];
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
		{
			if (!Keyboard.IsKeyDown(scanCode))
				continue;
			foreach (InputAction action in _bindings.GetActions(scanCode))
				raw[(int)action] = true;
		}
		for (int bit = 0; bit < 8; bit++)
		{
			MouseButtons button = (MouseButtons)(1 << bit);
			if (!Mouse.IsButtonDown(button))
				continue;
			foreach (InputAction action in _bindings.GetActions(button))
				raw[(int)action] = true;
		}
		for (int bit = 0; bit < 17; bit++)
		{
			GamepadButtons control = (GamepadButtons)(1 << bit);
			if (!Gamepad.IsPressed(control))
				continue;
			foreach (InputAction action in _bindings.GetActions(control))
				raw[(int)action] = true;
		}
		float keyboardX = (raw[(int)InputAction.MoveRight] ? 1 : 0) - (raw[(int)InputAction.MoveLeft] ? 1 : 0);
		float keyboardY = (raw[(int)InputAction.MoveForward] ? 1 : 0) - (raw[(int)InputAction.MoveBackward] ? 1 : 0);
		Vector2 stick = Gamepad.LeftStick;
		MoveVector = new Vector2(Math.Clamp(keyboardX + stick.X, -1, 1), Math.Clamp(keyboardY - stick.Y, -1, 1));
		LookVector = new Vector2(Gamepad.RightStick.X, -Gamepad.RightStick.Y);
		for (int action = (int)InputAction.MoveForward; action <= (int)InputAction.MoveRight; action++)
			_actionDown[action] = false;
		_actionDown[(int)InputAction.MoveForward] = MoveVector.Y >= DirectionThreshold;
		_actionDown[(int)InputAction.MoveBackward] = MoveVector.Y <= -DirectionThreshold;
		_actionDown[(int)InputAction.MoveLeft] = MoveVector.X <= -DirectionThreshold;
		_actionDown[(int)InputAction.MoveRight] = MoveVector.X >= DirectionThreshold;
		for (int action = (int)InputAction.Confirm; action < ActionCount; action++)
			_actionDown[action] = raw[action];
	}

	private static bool IsAction(InputAction action) => (int)action > 0 && (int)action < ActionCount;
}
