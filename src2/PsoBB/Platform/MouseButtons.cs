namespace PsoBB.Platform;

/// <summary>
/// Mouse buttons held at the last poll.
/// </summary>
/// <remarks>
/// The flags follow the DirectInput mouse button order and fit the eight buttons the device reports.
/// </remarks>
[Flags]
public enum MouseButtons
{
	/// <summary>
	/// No button.
	/// </summary>
	None = 0,

	/// <summary>
	/// The primary button.
	/// </summary>
	Left = 1,

	/// <summary>
	/// The secondary button.
	/// </summary>
	Right = 2,

	/// <summary>
	/// The middle button.
	/// </summary>
	Middle = 4,

	/// <summary>
	/// The fourth button.
	/// </summary>
	Button4 = 8,

	/// <summary>
	/// The fifth button.
	/// </summary>
	Button5 = 16,

	/// <summary>
	/// The sixth button.
	/// </summary>
	Button6 = 32,

	/// <summary>
	/// The seventh button.
	/// </summary>
	Button7 = 64,

	/// <summary>
	/// The eighth button.
	/// </summary>
	Button8 = 128,

	/// <summary>
	/// Every defined button.
	/// </summary>
	All = Left | Right | Middle | Button4 | Button5 | Button6 | Button7 | Button8,
}
