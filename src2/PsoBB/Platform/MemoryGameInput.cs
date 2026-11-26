namespace PsoBB.Platform;

/// <summary>
/// An input device for tests and headless hosts, driven by explicit key, mouse and cursor calls.
/// </summary>
/// <remarks>
/// Changes become visible on the next <see cref="Poll"/>; movement and wheel values accumulate until that poll and then clear.
/// </remarks>
public sealed class MemoryGameInput : IGameInput
{
	private readonly KeyboardState _keyboard = new();
	private readonly Dictionary<int, bool> _pendingKeys = [];
	private MouseState _mouse = MouseState.Empty;
	private MouseButtons _buttons;
	private int _positionX;
	private int _positionY;
	private int _deltaX;
	private int _deltaY;
	private int _wheelDelta;
	private bool _hasPosition;

	/// <inheritdoc/>
	public KeyboardState Keyboard => _keyboard;

	/// <inheritdoc/>
	public MouseState Mouse => _mouse;

	/// <summary>
	/// Gets a value indicating whether the host currently shows the pointer.
	/// </summary>
	public bool CursorVisible { get; private set; } = true;

	/// <inheritdoc/>
	public void Poll()
	{
		foreach ((int scanCode, bool down) in _pendingKeys)
			_keyboard.SetKey(scanCode, down);
		_pendingKeys.Clear();
		int x = _hasPosition ? _positionX : _mouse.X;
		int y = _hasPosition ? _positionY : _mouse.Y;
		_mouse = new MouseState(x, y, _deltaX, _deltaY, _wheelDelta, _buttons);
		_hasPosition = false;
		_deltaX = 0;
		_deltaY = 0;
		_wheelDelta = 0;
	}

	/// <inheritdoc/>
	public void SetCursorPosition(int x, int y)
	{
		_positionX = x;
		_positionY = y;
		_hasPosition = true;
	}

	/// <inheritdoc/>
	public void SetCursorVisible(bool visible) => CursorVisible = visible;

	/// <summary>
	/// Sets a named key for the next poll.
	/// </summary>
	/// <param name="key">The key to change.</param>
	/// <param name="down">Whether the key is held.</param>
	public void SetKey(GameKey key, bool down) => SetKey((int)key, down);

	/// <summary>
	/// Sets a DirectInput scan code for the next poll.
	/// </summary>
	/// <param name="scanCode">The scan code from 0 through 255.</param>
	/// <param name="down">Whether the key is held.</param>
	public void SetKey(int scanCode, bool down)
	{
		if ((uint)scanCode >= KeyboardState.KeyCount)
			throw new ArgumentOutOfRangeException(nameof(scanCode), scanCode, "A scan code is between 0 and 255.");
		_pendingKeys[scanCode] = down;
	}

	/// <summary>
	/// Sets the buttons held at the next poll.
	/// </summary>
	/// <param name="buttons">The buttons to report.</param>
	public void SetButtons(MouseButtons buttons)
	{
		if ((buttons & ~MouseButtons.All) != 0)
			throw new ArgumentOutOfRangeException(nameof(buttons), buttons, "Unknown mouse button flags.");
		_buttons = buttons;
	}

	/// <summary>
	/// Adds relative pointer movement that the next poll reports.
	/// </summary>
	/// <param name="deltaX">The horizontal movement.</param>
	/// <param name="deltaY">The vertical movement.</param>
	public void AddMouseMovement(int deltaX, int deltaY)
	{
		_deltaX = unchecked(_deltaX + deltaX);
		_deltaY = unchecked(_deltaY + deltaY);
	}

	/// <summary>
	/// Adds wheel movement that the next poll reports.
	/// </summary>
	/// <param name="delta">The wheel movement in 120-unit notches.</param>
	public void AddWheelMovement(int delta) => _wheelDelta = unchecked(_wheelDelta + delta);
}
