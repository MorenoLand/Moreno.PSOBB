namespace PsoBB.Input;

/// <summary>
/// The delay before a held key starts repeating and the interval between repeats.
/// </summary>
/// <remarks>
/// The defaults match the desktop keyboard repeat of half a second before the first repeat and thirty milliseconds between repeats.
/// </remarks>
public readonly record struct KeyRepeatSettings
{
	/// <summary>
	/// Creates repeat timings.
	/// </summary>
	/// <param name="delay">The time a key must be held before its first repeat.</param>
	/// <param name="interval">The time between repeats; it must be greater than zero.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="delay"/> is negative or <paramref name="interval"/> is not positive.</exception>
	public KeyRepeatSettings(TimeSpan delay, TimeSpan interval)
	{
		if (delay < TimeSpan.Zero)
			throw new ArgumentOutOfRangeException(nameof(delay), delay, "A repeat delay cannot be negative.");
		if (interval <= TimeSpan.Zero)
			throw new ArgumentOutOfRangeException(nameof(interval), interval, "A repeat interval must be greater than zero.");
		Delay = delay;
		Interval = interval;
	}

	/// <summary>
	/// Gets the time a key must be held before its first repeat.
	/// </summary>
	public TimeSpan Delay { get; }

	/// <summary>
	/// Gets the time between repeats.
	/// </summary>
	public TimeSpan Interval { get; }

	/// <summary>
	/// Gets the desktop repeat timings of 500 milliseconds and 30 milliseconds.
	/// </summary>
	public static KeyRepeatSettings Default => new(TimeSpan.FromMilliseconds(500), TimeSpan.FromMilliseconds(30));
}
