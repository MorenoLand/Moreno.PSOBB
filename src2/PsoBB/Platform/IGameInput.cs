namespace PsoBB.Platform;

/// <summary>
/// Keyboard and mouse state read once per frame.
/// </summary>
/// <remarks>
/// The host replaces the DirectInput device creation, acquisition and state calls plus <c>GetCursorPos</c>, <c>SetCursorPos</c> and <c>ShowCursor</c>; a single-threaded browser host fills the same state from its event queue.
/// </remarks>
public interface IGameInput
{
	/// <summary>
	/// Gets the keyboard state from the last poll.
	/// </summary>
	KeyboardState Keyboard { get; }

	/// <summary>
	/// Gets the mouse state from the last poll.
	/// </summary>
	MouseState Mouse { get; }

	/// <summary>
	/// Reads the devices and applies input that arrived since the previous poll.
	/// </summary>
	void Poll();

	/// <summary>
	/// Requests a new client-area pointer position.
	/// </summary>
	/// <param name="x">The horizontal client-area coordinate.</param>
	/// <param name="y">The vertical client-area coordinate.</param>
	void SetCursorPosition(int x, int y);

	/// <summary>
	/// Requests that the host show or hide the pointer.
	/// </summary>
	/// <param name="visible">Whether the pointer should be visible.</param>
	void SetCursorVisible(bool visible);
}
