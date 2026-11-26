namespace PsoBB.Platform;

/// <summary>
/// The keyboard keys held at the last input poll, indexed by DirectInput scan code.
/// </summary>
/// <remarks>
/// The state covers all 256 scan codes, so keys without a <see cref="GameKey"/> name remain readable by number.
/// </remarks>
public sealed class KeyboardState
{
	/// <summary>
	/// The number of DirectInput keyboard scan codes.
	/// </summary>
	public const int KeyCount = 256;
	private readonly bool[] _keys = new bool[KeyCount];

	/// <summary>
	/// Returns whether a named key is down.
	/// </summary>
	/// <param name="key">The key to test.</param>
	/// <returns><see langword="true"/> when the key was down at the last poll.</returns>
	public bool IsKeyDown(GameKey key) => IsKeyDown((int)key);

	/// <summary>
	/// Returns whether a scan code is down.
	/// </summary>
	/// <param name="scanCode">The DirectInput scan code from 0 through 255.</param>
	/// <returns><see langword="true"/> when the key was down; false for an out-of-range code.</returns>
	public bool IsKeyDown(int scanCode) => (uint)scanCode < KeyCount && _keys[scanCode];

	/// <summary>
	/// Gets a value indicating whether any key is down.
	/// </summary>
	public bool AnyKeyDown
	{
		get
		{
			foreach (bool key in _keys)
				if (key)
					return true;
			return false;
		}
	}

	internal void SetKey(int scanCode, bool down)
	{
		if ((uint)scanCode >= KeyCount)
			throw new ArgumentOutOfRangeException(nameof(scanCode), scanCode, "A scan code is between 0 and 255.");
		_keys[scanCode] = down;
	}
}
