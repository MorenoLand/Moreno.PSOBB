using System.Collections.Concurrent;

namespace PsoBB.Platform.Linux;

/// <summary>
/// A dispatcher that runs posted work and timers on the pump thread and thread bodies on dedicated background threads.
/// </summary>
/// <remarks>
/// Posts and timer changes may come from any thread; queued work runs in submission order, due timers run before later work, and work added during a pump waits for the next pump. A fault in a background body completes its handle instead of taking down the process.
/// </remarks>
public sealed class LinuxGameDispatcher : IGameDispatcher
{
	private readonly IGameClock _clock;
	private readonly ConcurrentQueue<(long Sequence, Action Callback)> _posted = new();
	private readonly object _timersGate = new();
	private readonly List<ScheduledTimer> _timers = [];
	private long _nextSequence;
	private int _pumping;

	/// <summary>
	/// Creates a dispatcher whose timers follow <paramref name="clock"/>.
	/// </summary>
	/// <param name="clock">The clock that supplies monotonic time.</param>
	public LinuxGameDispatcher(IGameClock clock)
	{
		ArgumentNullException.ThrowIfNull(clock);
		_clock = clock;
	}

	/// <inheritdoc/>
	public bool SupportsBackgroundThreads => true;

	/// <inheritdoc/>
	public void Post(Action callback)
	{
		ArgumentNullException.ThrowIfNull(callback);
		_posted.Enqueue((Interlocked.Increment(ref _nextSequence), callback));
	}

	/// <inheritdoc/>
	public IGameThread StartThread(string name, Action body)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(name);
		ArgumentNullException.ThrowIfNull(body);
		LinuxGameThread thread = new(name);
		Thread worker = new(() =>
		{
			try
			{
				body();
			}
			catch (Exception exception) when (exception is not OutOfMemoryException)
			{
				thread.Fail(exception);
			}
			finally
			{
				thread.Complete();
			}
		})
		{
			IsBackground = true,
			Name = name,
		};
		worker.Start();
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
		ScheduledTimer timer = new(now + (long)delay, Interlocked.Increment(ref _nextSequence), callback);
		lock (_timersGate)
			_timers.Add(timer);
		return timer;
	}

	/// <inheritdoc/>
	public void Pump()
	{
		if (Interlocked.Exchange(ref _pumping, 1) != 0)
			throw new InvalidOperationException("The dispatcher is already pumping.");
		try
		{
			long now = _clock.Timestamp;
			List<(long Due, long Sequence, Action Callback, ScheduledTimer? Timer)> work = [];
			while (_posted.TryDequeue(out (long Sequence, Action Callback) posted))
				work.Add((now, posted.Sequence, posted.Callback, null));
			lock (_timersGate)
			{
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
						work.Add((timer.Due, timer.Sequence, timer.Callback, timer));
						_timers.RemoveAt(index);
					}
				}
			}
			work.Sort(static (left, right) =>
			{
				int order = left.Due.CompareTo(right.Due);
				return order != 0 ? order : left.Sequence.CompareTo(right.Sequence);
			});
			foreach ((_, _, Action callback, ScheduledTimer? timer) in work)
			{
				if (timer is not null && timer.Cancelled)
					continue;
				callback();
			}
		}
		finally
		{
			Volatile.Write(ref _pumping, 0);
		}
	}

	private sealed class ScheduledTimer(long due, long sequence, Action callback) : IDisposable
	{
		private int _cancelled;

		public long Due { get; } = due;
		public long Sequence { get; } = sequence;
		public Action Callback { get; } = callback;
		public bool Cancelled => Volatile.Read(ref _cancelled) != 0;

		public void Dispose() => Interlocked.Exchange(ref _cancelled, 1);
	}
}
