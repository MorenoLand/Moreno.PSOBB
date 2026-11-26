namespace PsoBB.Platform;

/// <summary>
/// The gamepad state reported by the last poll.
/// </summary>
/// <remarks>
/// Stick axes are normalised from -1 through 1 with zero at rest and positive Y downward. Trigger values run from 0 through 1. A disconnected gamepad reports <see cref="Empty"/>.
/// </remarks>
/// <param name="Connected">Whether a gamepad is present.</param>
/// <param name="Buttons">The physical buttons and directional-pad directions held at the poll.</param>
/// <param name="LeftStickX">The horizontal left-stick axis.</param>
/// <param name="LeftStickY">The vertical left-stick axis, positive downward.</param>
/// <param name="RightStickX">The horizontal right-stick axis.</param>
/// <param name="RightStickY">The vertical right-stick axis, positive downward.</param>
/// <param name="LeftTrigger">The left analog trigger.</param>
/// <param name="RightTrigger">The right analog trigger.</param>
public readonly record struct GamepadState(bool Connected, GamepadButtons Buttons, float LeftStickX, float LeftStickY, float RightStickX, float RightStickY, float LeftTrigger, float RightTrigger)
{
	/// <summary>
	/// Gets a disconnected gamepad with every control at rest.
	/// </summary>
	public static GamepadState Empty => new(false, GamepadButtons.None, 0, 0, 0, 0, 0, 0);

	/// <summary>
	/// Returns whether every physical button in <paramref name="buttons"/> is held.
	/// </summary>
	/// <param name="buttons">The button or button combination to test.</param>
	/// <returns><see langword="true"/> when a gamepad is connected and all requested buttons are down.</returns>
	public bool IsButtonDown(GamepadButtons buttons) => Connected && buttons != GamepadButtons.None && (buttons & ~GamepadButtons.AllButtons) == 0 && (Buttons & buttons) == buttons;
}
