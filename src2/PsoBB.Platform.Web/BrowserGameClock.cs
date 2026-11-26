namespace PsoBB.Platform.Web;

/// <summary>
/// A monotonic clock driven by <c>performance.now</c> and a wall clock driven by <c>Date</c>.
/// </summary>
public sealed class BrowserGameClock : IGameClock
{
	private readonly IBrowserClockSource _source;
	private long _lastTimestamp;

	/// <summary>
	/// Creates a clock over the supplied browser time source.
	/// </summary>
	/// <param name="source">The browser time source.</param>
	public BrowserGameClock(IBrowserClockSource source)
	{
		ArgumentNullException.ThrowIfNull(source);
		_source = source;
	}

	/// <inheritdoc/>
	public long Frequency => TimeSpan.TicksPerSecond;

	/// <inheritdoc/>
	public long Timestamp
	{
		get
		{
			long timestamp = ToTicks(_source.MonotonicMilliseconds);
			if (timestamp < _lastTimestamp)
				timestamp = _lastTimestamp;
			else
				_lastTimestamp = timestamp;
			return timestamp;
		}
	}

	/// <inheritdoc/>
	public uint Milliseconds => unchecked((uint)(Timestamp / TimeSpan.TicksPerMillisecond));

	/// <inheritdoc/>
	public DateTimeOffset UtcNow => FromUnixMilliseconds(_source.UnixMilliseconds);

	/// <inheritdoc/>
	public DateTimeOffset LocalNow => UtcNow.ToOffset(TimeSpan.FromMinutes(_source.LocalOffsetMinutes));

	private static long ToTicks(double milliseconds)
	{
		if (!(milliseconds > 0))
			return 0;
		double ticks = Math.Floor(milliseconds * TimeSpan.TicksPerMillisecond);
		return ticks >= long.MaxValue ? long.MaxValue : (long)ticks;
	}

	private static DateTimeOffset FromUnixMilliseconds(double milliseconds)
	{
		long ticks = ToTicks(milliseconds);
		long available = DateTimeOffset.MaxValue.Ticks - DateTimeOffset.UnixEpoch.Ticks;
		return DateTimeOffset.UnixEpoch.AddTicks(Math.Min(ticks, available));
	}
}
