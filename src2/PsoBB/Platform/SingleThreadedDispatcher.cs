namespace PsoBB.Platform;

/// <summary>
/// A dispatcher that runs all work cooperatively on the thread that calls <see cref="Pump"/>.
/// </summary>
/// <remarks>
/// Work and timers added during a pump run on the next pump, and thread bodies must return or yield through the same queue because this implementation cannot block the main loop.
/// </remarks>
public sealed class SingleThreadedDispatcher : IGameDispatcher
{
	private readonly IGameClock _clock;
	private readonly Queue<(long Sequence, Action Callback)> _posted = new();
	private readonly List<ScheduledTimer> _timers = [];
	private long _nextSequence;
	private bool _pumping;

	/// <summary>
	/// Creates a dispatcher whose timers follow <paramref name="clock"/>.
	/// </summary>
	/// <param name="clock">The clock that supplies monotonic time.</param>
	public SingleThreadedDispatcher(IGameClock clock)
	{
		ArgumentNullException.ThrowIfNull(clock);
		_clock = clock;
	}

	/// <inheritdoc/>
	public bool SupportsBackgroundThreads => false;

	/// <inheritdoc/>
	public void Post(Action callback)
	{
		ArgumentNullException.ThrowIfNull(callback);
		_posted.Enqueue((_nextSequence++, callback));
	}

	/// <inheritdoc/>
	public IGameThread StartThread(string name, Action body)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(name);
		ArgumentNullException.ThrowIfNull(body);
		SingleThreadedThread thread = new(name);
		_posted.Enqueue((_nextSequence++, () =>
		{
			try
			{
				body();
			}
			finally
			{
				thread.Complete();
			}
		}));
		return thread;
	}

	/// <inheritdoc/>
	public IDisposable Schedule(TimeSpan dueTime, Action callback)
	{
		ArgumentNullException.ThrowIfNull(callback);
		if (dueTime < TimeSpan.Zero)
			throw new ArgumentOutOfRangeException(nameof(dueTime), dueTime, "A timer cannot be scheduled before the current time.");
		if (_clock.Frequency <= 0)
			throw new InvalidOperationException("The clock frequency must be positive.");
		Int128 delay = (Int128)dueTime.Ticks * _clock.Frequency / TimeSpan.TicksPerSecond;
		if (delay > long.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(dueTime), dueTime, "The timer is beyond the monotonic tick range.");
		long now = _clock.Timestamp;
		if (now > long.MaxValue - (long)delay)
			throw new ArgumentOutOfRangeException(nameof(dueTime), dueTime, "The timer is beyond the monotonic tick range.");
		ScheduledTimer timer = new(now + (long)delay, _nextSequence++, callback);
		_timers.Add(timer);
		return timer;
	}

	/// <inheritdoc/>
	public void Pump()
	{
		if (_pumping)
			throw new InvalidOperationException("The dispatcher is already pumping.");
		_pumping = true;
		try
		{
			long now = _clock.Timestamp;
			List<(long Due, long Sequence, Action Callback)> work = [];
			while (_posted.Count > 0)
			{
				(long sequence, Action callback) = _posted.Dequeue();
				work.Add((now, sequence, callback));
			}
			for (int index = _timers.Count - 1; index >= 0; index--)
			{
				ScheduledTimer timer = _timers[index];
				if (timer.Cancelled)
				{
					_timers.RemoveAt(index);
					continue;
				}
				if (timer.Due <= now)
				{
					work.Add((timer.Due, timer.Sequence, timer.Callback));
					_timers.RemoveAt(index);
				}
			}
			work.Sort(static (left, right) =>
			{
				int order = left.Due.CompareTo(right.Due);
				return order != 0 ? order : left.Sequence.CompareTo(right.Sequence);
			});
			foreach ((_, _, Action callback) in work)
				callback();
		}
		finally
		{
			_pumping = false;
		}
	}

	private sealed class SingleThreadedThread(string name) : IGameThread
	{
		private bool _completed;

		public string Name { get; } = name;
		public bool IsCompleted => _completed;

		public void Complete() => _completed = true;

		public void Dispose()
		{
		}
	}

	private sealed class ScheduledTimer(long due, long sequence, Action callback) : IDisposable
	{
		public long Due { get; } = due;
		public long Sequence { get; } = sequence;
		public Action Callback { get; } = callback;
		public bool Cancelled { get; private set; }

		public void Dispose() => Cancelled = true;
	}
}
