namespace PsoBB.Platform.Web;

/// <summary>
/// The kind of browser input change waiting for the next poll.
/// </summary>
public enum BrowserInputEventKind
{
	/// <summary>
	/// A keyboard scan code changed state.
	/// </summary>
	Key,

	/// <summary>
	/// The pointer moved to a client-area position.
	/// </summary>
	PointerMove,

	/// <summary>
	/// The set of held pointer buttons changed.
	/// </summary>
	PointerButtons,

	/// <summary>
	/// The wheel moved.
	/// </summary>
	Wheel,

	/// <summary>
	/// The window lost focus and every held key and button must be released.
	/// </summary>
	FocusLost,
}

/// <summary>
/// One input change queued by the browser event listeners.
/// </summary>
public readonly record struct BrowserInputEvent
{
	private BrowserInputEvent(BrowserInputEventKind kind)
	{
		Kind = kind;
	}

	/// <summary>
	/// Gets the kind of change.
	/// </summary>
	public BrowserInputEventKind Kind { get; }

	/// <summary>
	/// Gets the DirectInput scan code for a key event.
	/// </summary>
	public int ScanCode { get; private init; }

	/// <summary>
	/// Gets whether the key is held for a key event.
	/// </summary>
	public bool Down { get; private init; }

	/// <summary>
	/// Gets the horizontal client-area position for a pointer move.
	/// </summary>
	public int X { get; private init; }

	/// <summary>
	/// Gets the vertical client-area position for a pointer move.
	/// </summary>
	public int Y { get; private init; }

	/// <summary>
	/// Gets the horizontal movement for a pointer move.
	/// </summary>
	public int DeltaX { get; private init; }

	/// <summary>
	/// Gets the vertical movement for a pointer move.
	/// </summary>
	public int DeltaY { get; private init; }

	/// <summary>
	/// Gets the buttons held after a button change.
	/// </summary>
	public MouseButtons Buttons { get; private init; }

	/// <summary>
	/// Gets the wheel movement in 120-unit notches.
	/// </summary>
	public int WheelDelta { get; private init; }

	/// <summary>
	/// Creates a key change.
	/// </summary>
	/// <param name="scanCode">The DirectInput scan code.</param>
	/// <param name="down">Whether the key is held.</param>
	/// <returns>The queued event.</returns>
	public static BrowserInputEvent Key(int scanCode, bool down) => new(BrowserInputEventKind.Key) { ScanCode = scanCode, Down = down };

	/// <summary>
	/// Creates a pointer move.
	/// </summary>
	/// <param name="x">The horizontal client-area position.</param>
	/// <param name="y">The vertical client-area position.</param>
	/// <param name="deltaX">The horizontal movement since the previous move.</param>
	/// <param name="deltaY">The vertical movement since the previous move.</param>
	/// <returns>The queued event.</returns>
	public static BrowserInputEvent PointerMove(int x, int y, int deltaX, int deltaY) => new(BrowserInputEventKind.PointerMove) { X = x, Y = y, DeltaX = deltaX, DeltaY = deltaY };

	/// <summary>
	/// Creates a button-set change.
	/// </summary>
	/// <param name="buttons">The buttons held after the change.</param>
	/// <returns>The queued event.</returns>
	public static BrowserInputEvent PointerButtons(MouseButtons buttons) => new(BrowserInputEventKind.PointerButtons) { Buttons = buttons };

	/// <summary>
	/// Creates a wheel change.
	/// </summary>
	/// <param name="delta">The movement in 120-unit notches.</param>
	/// <returns>The queued event.</returns>
	public static BrowserInputEvent Wheel(int delta) => new(BrowserInputEventKind.Wheel) { WheelDelta = delta };

	/// <summary>
	/// Creates a focus-loss event.
	/// </summary>
	/// <returns>The queued event.</returns>
	public static BrowserInputEvent FocusLost() => new(BrowserInputEventKind.FocusLost);
}
