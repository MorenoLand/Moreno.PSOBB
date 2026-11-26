using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Maps keyboard scan codes, pointer buttons and gamepad controls to client actions.
/// </summary>
/// <remarks>
/// One control can feed several actions and one action can have several controls. The default map follows the client's desktop layout: arrows or WASD move, Escape opens the menu, Return confirms and opens chat, Space confirms, the number row selects the action palette, and a gamepad uses its left stick, d-pad and face buttons.
/// </remarks>
public sealed class InputBindings
{
	private const int ActionCount = (int)InputAction.Action10 + 1;
	private static readonly IReadOnlyList<InputAction> NoActions = [];
	private static readonly IReadOnlyList<GameKey> NoKeys = [];
	private static readonly IReadOnlyList<MouseButtons> NoMouseButtons = [];
	private static readonly IReadOnlyList<GamepadButtons> NoGamepadControls = [];
	private readonly Dictionary<int, List<InputAction>> _actionsByKey = [];
	private readonly Dictionary<MouseButtons, List<InputAction>> _actionsByMouseButton = [];
	private readonly Dictionary<GamepadButtons, List<InputAction>> _actionsByGamepadControl = [];
	private readonly List<GameKey>[] _keysByAction = new List<GameKey>[ActionCount];
	private readonly List<MouseButtons>[] _mouseButtonsByAction = new List<MouseButtons>[ActionCount];
	private readonly List<GamepadButtons>[] _gamepadControlsByAction = new List<GamepadButtons>[ActionCount];

	/// <summary>
	/// Creates an empty map.
	/// </summary>
	public InputBindings()
	{
		for (int action = 0; action < ActionCount; action++)
		{
			_keysByAction[action] = [];
			_mouseButtonsByAction[action] = [];
			_gamepadControlsByAction[action] = [];
		}
	}

	/// <summary>
	/// Creates the desktop and standard-gamepad map.
	/// </summary>
	/// <returns>A map with the default controls bound.</returns>
	public static InputBindings CreateDefault()
	{
		InputBindings bindings = new();
		bindings.Bind(InputAction.MoveForward, GameKey.W);
		bindings.Bind(InputAction.MoveForward, GameKey.Up);
		bindings.Bind(InputAction.MoveBackward, GameKey.S);
		bindings.Bind(InputAction.MoveBackward, GameKey.Down);
		bindings.Bind(InputAction.MoveLeft, GameKey.A);
		bindings.Bind(InputAction.MoveLeft, GameKey.Left);
		bindings.Bind(InputAction.MoveRight, GameKey.D);
		bindings.Bind(InputAction.MoveRight, GameKey.Right);
		bindings.Bind(InputAction.Confirm, GameKey.Space);
		bindings.Bind(InputAction.Confirm, GameKey.Return);
		bindings.Bind(InputAction.Confirm, MouseButtons.Left);
		bindings.Bind(InputAction.Confirm, GamepadButtons.A);
		bindings.Bind(InputAction.Cancel, GameKey.Backspace);
		bindings.Bind(InputAction.Cancel, GameKey.Escape);
		bindings.Bind(InputAction.Cancel, MouseButtons.Right);
		bindings.Bind(InputAction.Cancel, GamepadButtons.B);
		bindings.Bind(InputAction.Menu, GameKey.Escape);
		bindings.Bind(InputAction.Menu, GamepadButtons.Start);
		bindings.Bind(InputAction.Chat, GameKey.Return);
		for (int slot = 0; slot < 10; slot++)
			bindings.Bind((InputAction)((int)InputAction.Action1 + slot), (GameKey)((int)GameKey.Digit1 + slot));
		bindings.Bind(InputAction.Action1, GamepadButtons.X);
		bindings.Bind(InputAction.Action2, GamepadButtons.Y);
		bindings.Bind(InputAction.Action3, GamepadButtons.LeftShoulder);
		bindings.Bind(InputAction.Action4, GamepadButtons.RightShoulder);
		bindings.Bind(InputAction.MoveForward, GamepadButtons.DPadUp);
		bindings.Bind(InputAction.MoveBackward, GamepadButtons.DPadDown);
		bindings.Bind(InputAction.MoveLeft, GamepadButtons.DPadLeft);
		bindings.Bind(InputAction.MoveRight, GamepadButtons.DPadRight);
		return bindings;
	}

	/// <summary>
	/// Binds a keyboard scan code to an action.
	/// </summary>
	/// <param name="action">The action to add; it cannot be <see cref="InputAction.None"/>.</param>
	/// <param name="key">The key to bind; it cannot be <see cref="GameKey.None"/>.</param>
	public void Bind(InputAction action, GameKey key)
	{
		ValidateAction(action);
		if (key == GameKey.None)
			throw new ArgumentOutOfRangeException(nameof(key), key, "A key binding cannot use the unnamed key.");
		List<InputAction> actions = GetOrAdd(_actionsByKey, (int)key);
		if (!actions.Contains(action))
			actions.Add(action);
		List<GameKey> keys = _keysByAction[(int)action];
		if (!keys.Contains(key))
			keys.Add(key);
	}

	/// <summary>
	/// Binds a single pointer button to an action.
	/// </summary>
	/// <param name="action">The action to add; it cannot be <see cref="InputAction.None"/>.</param>
	/// <param name="button">One of the named pointer buttons.</param>
	public void Bind(InputAction action, MouseButtons button)
	{
		ValidateAction(action);
		ValidateSingleFlag(button, nameof(button));
		List<InputAction> actions = GetOrAdd(_actionsByMouseButton, button);
		if (!actions.Contains(action))
			actions.Add(action);
		List<MouseButtons> buttons = _mouseButtonsByAction[(int)action];
		if (!buttons.Contains(button))
			buttons.Add(button);
	}

	/// <summary>
	/// Binds a single gamepad control to an action.
	/// </summary>
	/// <param name="action">The action to add; it cannot be <see cref="InputAction.None"/>.</param>
	/// <param name="control">One physical button, d-pad direction or trigger.</param>
	public void Bind(InputAction action, GamepadButtons control)
	{
		ValidateAction(action);
		ValidateSingleFlag(control, nameof(control));
		List<InputAction> actions = GetOrAdd(_actionsByGamepadControl, control);
		if (!actions.Contains(action))
			actions.Add(action);
		List<GamepadButtons> controls = _gamepadControlsByAction[(int)action];
		if (!controls.Contains(control))
			controls.Add(control);
	}

	/// <summary>
	/// Returns the keys bound to an action.
	/// </summary>
	/// <param name="action">The action to look up.</param>
	/// <returns>The bound keys in binding order, or an empty list.</returns>
	public IReadOnlyList<GameKey> GetKeys(InputAction action) => IsAction(action) ? _keysByAction[(int)action] : NoKeys;

	internal IReadOnlyList<MouseButtons> GetMouseButtons(InputAction action) => IsAction(action) ? _mouseButtonsByAction[(int)action] : NoMouseButtons;

	internal IReadOnlyList<GamepadButtons> GetGamepadControls(InputAction action) => IsAction(action) ? _gamepadControlsByAction[(int)action] : NoGamepadControls;

	internal IReadOnlyList<InputAction> GetActions(int scanCode) => _actionsByKey.TryGetValue(scanCode, out List<InputAction>? actions) ? actions : NoActions;

	internal IReadOnlyList<InputAction> GetActions(MouseButtons button) => _actionsByMouseButton.TryGetValue(button, out List<InputAction>? actions) ? actions : NoActions;

	internal IReadOnlyList<InputAction> GetActions(GamepadButtons control) => _actionsByGamepadControl.TryGetValue(control, out List<InputAction>? actions) ? actions : NoActions;

	private static bool IsAction(InputAction action) => action > InputAction.None && (int)action < ActionCount;

	private static void ValidateAction(InputAction action)
	{
		if (!IsAction(action))
			throw new ArgumentOutOfRangeException(nameof(action), action, "An action binding needs a named client action.");
	}

	private static void ValidateSingleFlag(MouseButtons button, string parameterName)
	{
		int value = (int)button;
		if (value == 0 || (value & (value - 1)) != 0 || (button & ~MouseButtons.All) != 0)
			throw new ArgumentOutOfRangeException(parameterName, button, "A pointer binding uses exactly one named button.");
	}

	private static void ValidateSingleFlag(GamepadButtons control, string parameterName)
	{
		int value = (int)control;
		if (value == 0 || (value & (value - 1)) != 0 || (control & ~GamepadButtons.All) != 0)
			throw new ArgumentOutOfRangeException(parameterName, control, "A gamepad binding uses exactly one named control.");
	}

	private static List<InputAction> GetOrAdd<TKey>(Dictionary<TKey, List<InputAction>> map, TKey key) where TKey : notnull
	{
		if (!map.TryGetValue(key, out List<InputAction>? actions))
		{
			actions = [];
			map.Add(key, actions);
		}
		return actions;
	}
}
