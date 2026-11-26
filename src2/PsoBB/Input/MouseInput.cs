using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Tracks pointer position, movement, wheel and button edges across polls.
/// </summary>
/// <remarks>
/// Movement and wheel values are the one-poll changes supplied by the host. Focus loss clears the held buttons and movement but keeps the last position.
/// </remarks>
public sealed class MouseInput
{
	private const int ButtonCount = 8;
	private readonly bool[] _previous = new bool[ButtonCount];
	private readonly bool[] _pressed = new bool[ButtonCount];
	private readonly bool[] _released = new bool[ButtonCount];
	private MouseState _state = MouseState.Empty;

	/// <summary>
	/// Gets the state from the last poll.
	/// </summary>
	public MouseState State => _state;

	/// <summary>
	/// Gets the horizontal client-area position.
	/// </summary>
	public int X => _state.X;

	/// <summary>
	/// Gets the vertical client-area position.
	/// </summary>
	public int Y => _state.Y;

	/// <summary>
	/// Gets the horizontal movement since the previous poll.
	/// </summary>
	public int DeltaX => _state.DeltaX;

	/// <summary>
	/// Gets the vertical movement since the previous poll.
	/// </summary>
	public int DeltaY => _state.DeltaY;

	/// <summary>
	/// Gets the wheel movement since the previous poll in 120-unit notches.
	/// </summary>
	public int WheelDelta => _state.WheelDelta;

	/// <summary>
	/// Gets the buttons held at the last poll.
	/// </summary>
	public MouseButtons Buttons => _state.Buttons;

	/// <summary>
	/// Returns whether every button in <paramref name="buttons"/> is held.
	/// </summary>
	/// <param name="buttons">The button or button combination to test.</param>
	/// <returns><see langword="true"/> when all requested buttons are down.</returns>
	public bool IsButtonDown(MouseButtons buttons) => _state.IsButtonDown(buttons);

	/// <summary>
	/// Returns whether at least one pointer button is held.
	/// </summary>
	public bool AnyButtonDown => _state.Buttons != MouseButtons.None;

	/// <summary>
	/// Returns whether every button in <paramref name="buttons"/> went down since the previous poll.
	/// </summary>
	/// <param name="buttons">The button or button combination to test.</param>
	/// <returns><see langword="true"/> when all requested buttons were pressed.</returns>
	public bool WasButtonPressed(MouseButtons buttons) => AllButtonsSet(_pressed, buttons);

	/// <summary>
	/// Returns whether every button in <paramref name="buttons"/> went up since the previous poll.
	/// </summary>
	/// <param name="buttons">The button or button combination to test.</param>
	/// <returns><see langword="true"/> when all requested buttons were released.</returns>
	public bool WasButtonReleased(MouseButtons buttons) => AllButtonsSet(_released, buttons);

	internal void Update(MouseState state)
	{
		_state = state;
		for (int bit = 0; bit < ButtonCount; bit++)
		{
			bool down = (state.Buttons & (MouseButtons)(1 << bit)) != 0;
			_pressed[bit] = down && !_previous[bit];
			_released[bit] = !down && _previous[bit];
			_previous[bit] = down;
		}
	}

	internal void ReleaseAll()
	{
		for (int bit = 0; bit < ButtonCount; bit++)
		{
			_released[bit] = _previous[bit];
			_pressed[bit] = false;
			_previous[bit] = false;
		}
		_state = new MouseState(_state.X, _state.Y, 0, 0, 0, MouseButtons.None);
	}

	internal void Resync(MouseState state)
	{
		_state = state;
		for (int bit = 0; bit < ButtonCount; bit++)
		{
			bool down = (state.Buttons & (MouseButtons)(1 << bit)) != 0;
			_previous[bit] = down;
			_pressed[bit] = false;
			_released[bit] = false;
		}
	}

	private static bool AllButtonsSet(bool[] states, MouseButtons buttons)
	{
		if (buttons == MouseButtons.None || (buttons & ~MouseButtons.All) != 0)
			return false;
		for (int bit = 0; bit < ButtonCount; bit++)
			if ((buttons & (MouseButtons)(1 << bit)) != 0 && !states[bit])
				return false;
		return true;
	}
}
