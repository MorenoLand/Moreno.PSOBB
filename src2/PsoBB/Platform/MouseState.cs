namespace PsoBB.Platform;

/// <summary>
/// The mouse position, movement and buttons reported by the last poll.
/// </summary>
/// <remarks>
/// <see cref="X"/> and <see cref="Y"/> are client-area coordinates; the deltas and wheel are one-poll changes and return to zero when the mouse is still, while the wheel uses 120 units per notch.
/// </remarks>
/// <param name="X">The horizontal client-area position.</param>
/// <param name="Y">The vertical client-area position.</param>
/// <param name="DeltaX">The horizontal movement since the previous poll.</param>
/// <param name="DeltaY">The vertical movement since the previous poll.</param>
/// <param name="WheelDelta">The wheel movement since the previous poll.</param>
/// <param name="Buttons">The buttons held at the poll.</param>
public readonly record struct MouseState(int X, int Y, int DeltaX, int DeltaY, int WheelDelta, MouseButtons Buttons)
{
	/// <summary>
	/// Gets a state with no position, movement or buttons.
	/// </summary>
	public static MouseState Empty => new(0, 0, 0, 0, 0, MouseButtons.None);

	/// <summary>
	/// Returns whether every button in <paramref name="buttons"/> is held.
	/// </summary>
	/// <param name="buttons">The button or button combination to test.</param>
	/// <returns><see langword="true"/> when all requested buttons are down.</returns>
	public bool IsButtonDown(MouseButtons buttons) => buttons != MouseButtons.None && (Buttons & buttons) == buttons;
}
