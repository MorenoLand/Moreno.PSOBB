namespace PsoBB.Input;

/// <summary>
/// A client action produced by one or more keyboard, pointer or gamepad controls.
/// </summary>
/// <remarks>
/// Movement actions are also produced by the left stick through <see cref="InputManager.MoveVector"/>; the palette actions match the numbered action slots.
/// </remarks>
public enum InputAction
{
	/// <summary>
	/// No action.
	/// </summary>
	None = 0,

	/// <summary>
	/// Moves the character forward.
	/// </summary>
	MoveForward,

	/// <summary>
	/// Moves the character backward.
	/// </summary>
	MoveBackward,

	/// <summary>
	/// Moves the character left.
	/// </summary>
	MoveLeft,

	/// <summary>
	/// Moves the character right.
	/// </summary>
	MoveRight,

	/// <summary>
	/// Confirms the current prompt or selection.
	/// </summary>
	Confirm,

	/// <summary>
	/// Cancels the current prompt or selection.
	/// </summary>
	Cancel,

	/// <summary>
	/// Opens or closes the client menu.
	/// </summary>
	Menu,

	/// <summary>
	/// Opens the chat entry.
	/// </summary>
	Chat,

	/// <summary>
	/// Uses the first action-palette slot.
	/// </summary>
	Action1,

	/// <summary>
	/// Uses the second action-palette slot.
	/// </summary>
	Action2,

	/// <summary>
	/// Uses the third action-palette slot.
	/// </summary>
	Action3,

	/// <summary>
	/// Uses the fourth action-palette slot.
	/// </summary>
	Action4,

	/// <summary>
	/// Uses the fifth action-palette slot.
	/// </summary>
	Action5,

	/// <summary>
	/// Uses the sixth action-palette slot.
	/// </summary>
	Action6,

	/// <summary>
	/// Uses the seventh action-palette slot.
	/// </summary>
	Action7,

	/// <summary>
	/// Uses the eighth action-palette slot.
	/// </summary>
	Action8,

	/// <summary>
	/// Uses the ninth action-palette slot.
	/// </summary>
	Action9,

	/// <summary>
	/// Uses the tenth action-palette slot.
	/// </summary>
	Action10,
}
