using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Tracks keyboard hold, press, release and repeat state across polls.
/// </summary>
/// <remarks>
/// Repeat timing follows the desktop convention of one initial press, a delay and then one event per interval. Holding two keys bound to the same action reports the larger repeat count for that action.
/// </remarks>
public sealed class KeyboardInput
{
	private readonly bool[] _current = new bool[KeyboardState.KeyCount];
	private readonly bool[] _previous = new bool[KeyboardState.KeyCount];
	private readonly bool[] _pressed = new bool[KeyboardState.KeyCount];
	private readonly bool[] _released = new bool[KeyboardState.KeyCount];
	private readonly int[] _repeats = new int[KeyboardState.KeyCount];
	private readonly double[] _heldMilliseconds = new double[KeyboardState.KeyCount];
	private readonly double[] _nextRepeatMilliseconds = new double[KeyboardState.KeyCount];
	private readonly double _delayMilliseconds;
	private readonly double _intervalMilliseconds;

	/// <summary>
	/// Creates keyboard tracking with the supplied repeat timings.
	/// </summary>
	/// <param name="settings">The repeat delay and interval; the defaults are used when omitted.</param>
	public KeyboardInput(KeyRepeatSettings? settings = null)
	{
		KeyRepeatSettings repeat = settings ?? KeyRepeatSettings.Default;
		_delayMilliseconds = repeat.Delay.TotalMilliseconds;
		_intervalMilliseconds = repeat.Interval.TotalMilliseconds;
	}

	/// <summary>
	/// Returns whether a named key is down.
	/// </summary>
	/// <param name="key">The key to test.</param>
	/// <returns><see langword="true"/> when the key is down at this poll.</returns>
	public bool IsKeyDown(GameKey key) => IsKeyDown((int)key);

	/// <summary>
	/// Returns whether a scan code is down.
	/// </summary>
	/// <param name="scanCode">The scan code from 0 through 255.</param>
	/// <returns><see langword="true"/> when the key is down at this poll; false for an out-of-range code.</returns>
	public bool IsKeyDown(int scanCode) => (uint)scanCode < KeyboardState.KeyCount && _current[scanCode];

	/// <summary>
	/// Returns whether a named key went down since the previous poll.
	/// </summary>
	/// <param name="key">The key to test.</param>
	/// <returns><see langword="true"/> on the poll where the key was pressed.</returns>
	public bool WasKeyPressed(GameKey key) => WasKeyPressed((int)key);

	/// <summary>
	/// Returns whether a scan code went down since the previous poll.
	/// </summary>
	/// <param name="scanCode">The scan code from 0 through 255.</param>
	/// <returns><see langword="true"/> on the poll where the key was pressed.</returns>
	public bool WasKeyPressed(int scanCode) => (uint)scanCode < KeyboardState.KeyCount && _pressed[scanCode];

	/// <summary>
	/// Returns whether a named key went up since the previous poll.
	/// </summary>
	/// <param name="key">The key to test.</param>
	/// <returns><see langword="true"/> on the poll where the key was released.</returns>
	public bool WasKeyReleased(GameKey key) => WasKeyReleased((int)key);

	/// <summary>
	/// Returns whether a scan code went up since the previous poll.
	/// </summary>
	/// <param name="scanCode">The scan code from 0 through 255.</param>
	/// <returns><see langword="true"/> on the poll where the key was released.</returns>
	public bool WasKeyReleased(int scanCode) => (uint)scanCode < KeyboardState.KeyCount && _released[scanCode];

	/// <summary>
	/// Gets the number of repeat events for a scan code in this poll.
	/// </summary>
	/// <param name="scanCode">The scan code from 0 through 255.</param>
	/// <returns>The repeat count; the initial press is not counted and an out-of-range code returns zero.</returns>
	public int GetRepeatCount(int scanCode) => (uint)scanCode < KeyboardState.KeyCount ? _repeats[scanCode] : 0;

	/// <summary>
	/// Gets a value indicating whether any key is down.
	/// </summary>
	public bool AnyKeyDown
	{
		get
		{
			foreach (bool key in _current)
				if (key)
					return true;
			return false;
		}
	}

	internal void Update(KeyboardState state, TimeSpan elapsed)
	{
		double elapsedMilliseconds = elapsed.TotalMilliseconds;
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
		{
			bool down = state.IsKeyDown(scanCode);
			bool wasDown = _previous[scanCode];
			_pressed[scanCode] = down && !wasDown;
			_released[scanCode] = !down && wasDown;
			_repeats[scanCode] = 0;
			if (down)
			{
				if (!wasDown)
				{
					_heldMilliseconds[scanCode] = 0;
					_nextRepeatMilliseconds[scanCode] = _delayMilliseconds;
				}
				else
				{
					_heldMilliseconds[scanCode] += elapsedMilliseconds;
					_repeats[scanCode] = CountRepeats(scanCode);
				}
			}
			else
			{
				_heldMilliseconds[scanCode] = 0;
				_nextRepeatMilliseconds[scanCode] = 0;
			}
			_current[scanCode] = down;
			_previous[scanCode] = down;
		}
	}

	internal void ReleaseAll()
	{
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
		{
			_released[scanCode] = _previous[scanCode];
			_pressed[scanCode] = false;
			_repeats[scanCode] = 0;
			_heldMilliseconds[scanCode] = 0;
			_nextRepeatMilliseconds[scanCode] = 0;
			_current[scanCode] = false;
			_previous[scanCode] = false;
		}
	}

	internal void Resync(KeyboardState state)
	{
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
		{
			bool down = state.IsKeyDown(scanCode);
			_current[scanCode] = down;
			_previous[scanCode] = down;
			_pressed[scanCode] = false;
			_released[scanCode] = false;
			_repeats[scanCode] = 0;
			_heldMilliseconds[scanCode] = 0;
			_nextRepeatMilliseconds[scanCode] = down ? _delayMilliseconds : 0;
		}
	}

	private int CountRepeats(int scanCode)
	{
		double held = _heldMilliseconds[scanCode];
		double next = _nextRepeatMilliseconds[scanCode];
		if (held < next)
			return 0;
		double intervals = Math.Floor((held - next) / _intervalMilliseconds);
		int count = intervals >= int.MaxValue - 1 ? int.MaxValue : 1 + (int)intervals;
		_nextRepeatMilliseconds[scanCode] = next + count * _intervalMilliseconds;
		return count;
	}
}
