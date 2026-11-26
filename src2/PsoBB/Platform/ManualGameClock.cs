namespace PsoBB.Platform;

/// <summary>
/// A clock advanced only by the test or headless host.
/// </summary>
/// <remarks>
/// Monotonic ticks use the same 100-nanosecond unit as <see cref="TimeSpan"/>; wall-clock time can jump independently, as it does on a real machine.
/// </remarks>
public sealed class ManualGameClock : IGameClock
{
	private static readonly TimeSpan MaximumOffset = TimeSpan.FromHours(14);
	private long _timestamp;
	private DateTimeOffset _utcNow;
	private TimeSpan _localOffset;

	/// <summary>
	/// Creates a clock starting at the supplied wall-clock time and monotonic tick.
	/// </summary>
	/// <param name="utcNow">The initial UTC wall-clock time.</param>
	/// <param name="localOffset">The initial local time-zone offset from UTC; zero when omitted.</param>
	/// <param name="timestamp">The initial monotonic tick count, which cannot be negative.</param>
	public ManualGameClock(DateTimeOffset utcNow, TimeSpan? localOffset = null, long timestamp = 0)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(timestamp);
		SetLocalOffset(localOffset ?? TimeSpan.Zero);
		_utcNow = utcNow.ToUniversalTime();
		_timestamp = timestamp;
	}

	/// <inheritdoc/>
	public long Frequency => TimeSpan.TicksPerSecond;

	/// <inheritdoc/>
	public long Timestamp => _timestamp;

	/// <inheritdoc/>
	public uint Milliseconds => unchecked((uint)(_timestamp / (TimeSpan.TicksPerMillisecond)));

	/// <inheritdoc/>
	public DateTimeOffset UtcNow => _utcNow;

	/// <inheritdoc/>
	public DateTimeOffset LocalNow => _utcNow.ToOffset(_localOffset);

	/// <summary>
	/// Advances both the monotonic tick count and the wall clock.
	/// </summary>
	/// <param name="duration">The non-negative interval to add.</param>
	public void Advance(TimeSpan duration)
	{
		if (duration < TimeSpan.Zero)
			throw new ArgumentOutOfRangeException(nameof(duration), duration, "A clock cannot move backward.");
		if (_timestamp > long.MaxValue - duration.Ticks)
			throw new ArgumentOutOfRangeException(nameof(duration), duration, "The monotonic tick count would overflow.");
		_timestamp += duration.Ticks;
		_utcNow = _utcNow.Add(duration);
	}

	/// <summary>
	/// Moves the wall clock without changing the monotonic tick count.
	/// </summary>
	/// <param name="utcNow">The new UTC wall-clock time.</param>
	public void SetUtcNow(DateTimeOffset utcNow) => _utcNow = utcNow.ToUniversalTime();

	/// <summary>
	/// Changes the local time-zone offset without changing the instant.
	/// </summary>
	/// <param name="offset">The new offset from UTC.</param>
	public void SetLocalOffset(TimeSpan offset)
	{
		if (offset < -MaximumOffset || offset > MaximumOffset)
			throw new ArgumentOutOfRangeException(nameof(offset), offset, "A local offset is between -14 and +14 hours.");
		_localOffset = offset;
	}
}
