namespace PsoBB.Platform;

/// <summary>
/// The controls reported by a gamepad in the standard layout.
/// </summary>
/// <remarks>
/// Hosts translate their device's button indices to this layout. Triggers are analog values on <see cref="GamepadState"/>; the two trigger flags exist so a binding can name them like a button.
/// </remarks>
[Flags]
public enum GamepadButtons
{
	/// <summary>
	/// No control.
	/// </summary>
	None = 0,

	/// <summary>
	/// The primary face button.
	/// </summary>
	A = 1 << 0,

	/// <summary>
	/// The secondary face button.
	/// </summary>
	B = 1 << 1,

	/// <summary>
	/// The left face button.
	/// </summary>
	X = 1 << 2,

	/// <summary>
	/// The top face button.
	/// </summary>
	Y = 1 << 3,

	/// <summary>
	/// The left shoulder button.
	/// </summary>
	LeftShoulder = 1 << 4,

	/// <summary>
	/// The right shoulder button.
	/// </summary>
	RightShoulder = 1 << 5,

	/// <summary>
	/// The back or select button.
	/// </summary>
	Back = 1 << 6,

	/// <summary>
	/// The start button.
	/// </summary>
	Start = 1 << 7,

	/// <summary>
	/// The left stick click.
	/// </summary>
	LeftStick = 1 << 8,

	/// <summary>
	/// The right stick click.
	/// </summary>
	RightStick = 1 << 9,

	/// <summary>
	/// The guide or home button.
	/// </summary>
	Guide = 1 << 10,

	/// <summary>
	/// The up direction of the directional pad.
	/// </summary>
	DPadUp = 1 << 11,

	/// <summary>
	/// The down direction of the directional pad.
	/// </summary>
	DPadDown = 1 << 12,

	/// <summary>
	/// The left direction of the directional pad.
	/// </summary>
	DPadLeft = 1 << 13,

	/// <summary>
	/// The right direction of the directional pad.
	/// </summary>
	DPadRight = 1 << 14,

	/// <summary>
	/// The left analog trigger treated as a button.
	/// </summary>
	LeftTrigger = 1 << 15,

	/// <summary>
	/// The right analog trigger treated as a button.
	/// </summary>
	RightTrigger = 1 << 16,

	/// <summary>
	/// Every physical button and directional-pad direction.
	/// </summary>
	AllButtons = A | B | X | Y | LeftShoulder | RightShoulder | Back | Start | LeftStick | RightStick | Guide | DPadUp | DPadDown | DPadLeft | DPadRight,

	/// <summary>
	/// Every binding target, including the two analog triggers.
	/// </summary>
	All = AllButtons | LeftTrigger | RightTrigger,
}
