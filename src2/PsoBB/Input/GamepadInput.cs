using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Applies dead zones and trigger thresholds to a gamepad and tracks its control edges.
/// </summary>
/// <remarks>
/// Each stick axis is dead-zoned and rescaled independently, as DirectInput does for a joystick axis. A disconnected gamepad releases every held control on the next poll.
/// </remarks>
public sealed class GamepadInput
{
	private const int ControlCount = 17;
	private readonly bool[] _current = new bool[ControlCount];
	private readonly bool[] _previous = new bool[ControlCount];
	private readonly bool[] _pressed = new bool[ControlCount];
	private readonly bool[] _released = new bool[ControlCount];
	private readonly GamepadSettings _settings;
	private bool _connected;

	/// <summary>
	/// Creates gamepad tracking with the supplied thresholds.
	/// </summary>
	/// <param name="settings">The dead zone and trigger threshold; the defaults are used when omitted.</param>
	public GamepadInput(GamepadSettings? settings = null) => _settings = settings ?? GamepadSettings.Default;

	/// <summary>
	/// Gets a value indicating whether a gamepad was connected at the last poll.
	/// </summary>
	public bool Connected => _connected;

	/// <summary>
	/// Gets the left-stick axis after the dead zone, positive right and positive down.
	/// </summary>
	public Vector2 LeftStick { get; private set; }

	/// <summary>
	/// Gets the right-stick axis after the dead zone, positive right and positive down.
	/// </summary>
	public Vector2 RightStick { get; private set; }

	/// <summary>
	/// Gets the left trigger after the press threshold, from zero through one.
	/// </summary>
	public float LeftTrigger { get; private set; }

	/// <summary>
	/// Gets the right trigger after the press threshold, from zero through one.
	/// </summary>
	public float RightTrigger { get; private set; }

	/// <summary>
	/// Gets the thresholds in use.
	/// </summary>
	public GamepadSettings Settings => _settings;

	/// <summary>
	/// Returns whether every physical button in <paramref name="buttons"/> is held.
	/// </summary>
	/// <param name="buttons">The physical button or button combination to test; trigger flags are not physical buttons.</param>
	/// <returns><see langword="true"/> when all requested buttons are down.</returns>
	public bool IsButtonDown(GamepadButtons buttons) => buttons != GamepadButtons.None && (buttons & ~GamepadButtons.AllButtons) == 0 && IsPressed(buttons);

	/// <summary>
	/// Returns whether every control in <paramref name="controls"/> is active.
	/// </summary>
	/// <param name="controls">The buttons, d-pad directions or trigger flags to test.</param>
	/// <returns><see langword="true"/> when all requested controls are active.</returns>
	public bool IsPressed(GamepadButtons controls) => AllSet(_current, controls);

	/// <summary>
	/// Returns whether every control in <paramref name="controls"/> became active since the previous poll.
	/// </summary>
	/// <param name="controls">The buttons, d-pad directions or trigger flags to test.</param>
	/// <returns><see langword="true"/> when all requested controls were pressed.</returns>
	public bool WasPressed(GamepadButtons controls) => AllSet(_pressed, controls);

	/// <summary>
	/// Returns whether every control in <paramref name="controls"/> became inactive since the previous poll.
	/// </summary>
	/// <param name="controls">The buttons, d-pad directions or trigger flags to test.</param>
	/// <returns><see langword="true"/> when all requested controls were released.</returns>
	public bool WasReleased(GamepadButtons controls) => AllSet(_released, controls);

	internal void Update(GamepadState state)
	{
		ApplyAxes(state);
		SetControls(state, true);
	}

	internal void ReleaseAll()
	{
		for (int bit = 0; bit < ControlCount; bit++)
		{
			_released[bit] = _previous[bit];
			_pressed[bit] = false;
			_current[bit] = false;
			_previous[bit] = false;
		}
		LeftStick = Vector2.Zero;
		RightStick = Vector2.Zero;
		LeftTrigger = 0;
		RightTrigger = 0;
		_connected = false;
	}

	internal void Resync(GamepadState state)
	{
		ApplyAxes(state);
		SetControls(state, false);
	}

	private void ApplyAxes(GamepadState state)
	{
		if (!state.Connected)
		{
			LeftStick = Vector2.Zero;
			RightStick = Vector2.Zero;
			LeftTrigger = 0;
			RightTrigger = 0;
			return;
		}
		LeftStick = new Vector2(ApplyDeadZone(state.LeftStickX), ApplyDeadZone(state.LeftStickY));
		RightStick = new Vector2(ApplyDeadZone(state.RightStickX), ApplyDeadZone(state.RightStickY));
		LeftTrigger = ApplyTriggerThreshold(state.LeftTrigger);
		RightTrigger = ApplyTriggerThreshold(state.RightTrigger);
	}

	private void SetControls(GamepadState state, bool trackEdges)
	{
		_connected = state.Connected;
		for (int bit = 0; bit < ControlCount; bit++)
		{
			GamepadButtons control = (GamepadButtons)(1 << bit);
			bool down = state.Connected && (control == GamepadButtons.LeftTrigger ? state.LeftTrigger >= _settings.TriggerThreshold : control == GamepadButtons.RightTrigger ? state.RightTrigger >= _settings.TriggerThreshold : (state.Buttons & control) != 0);
			if (trackEdges)
			{
				_pressed[bit] = down && !_previous[bit];
				_released[bit] = !down && _previous[bit];
			}
			else
			{
				_pressed[bit] = false;
				_released[bit] = false;
			}
			_current[bit] = down;
			_previous[bit] = down;
		}
	}

	private float ApplyDeadZone(float value)
	{
		if (!float.IsFinite(value))
			return 0;
		double magnitude = Math.Abs((double)value);
		if (magnitude <= _settings.StickDeadZone)
			return 0;
		double scaled = (magnitude - _settings.StickDeadZone) / (1.0 - _settings.StickDeadZone);
		return (float)Math.CopySign(Math.Min(scaled, 1.0), value);
	}

	private float ApplyTriggerThreshold(float value)
	{
		if (!float.IsFinite(value))
			return 0;
		double trigger = Math.Clamp((double)value, 0, 1);
		if (trigger < _settings.TriggerThreshold)
			return 0;
		return (float)Math.Min((trigger - _settings.TriggerThreshold) / (1.0 - _settings.TriggerThreshold), 1.0);
	}

	private static bool AllSet(bool[] states, GamepadButtons controls)
	{
		if (controls == GamepadButtons.None || (controls & ~GamepadButtons.All) != 0)
			return false;
		for (int bit = 0; bit < ControlCount; bit++)
			if ((controls & (GamepadButtons)(1 << bit)) != 0 && !states[bit])
				return false;
		return true;
	}
}
