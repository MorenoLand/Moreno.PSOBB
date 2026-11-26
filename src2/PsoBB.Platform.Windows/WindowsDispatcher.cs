using System.Collections.Concurrent;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Runs posted work on the pumping thread and thread bodies on real Windows threads.
/// </summary>
/// <remarks>
/// Posts and timers are accepted from any thread; a timer fires on the first pump after its monotonic due time, and a thread body completes independently of the pump.
/// </remarks>
public sealed class WindowsDispatcher : IGameDispatcher
{
	private readonly IGameClock _clock;
	private readonly ConcurrentQueue<(long Sequence, Action Callback)> _posted = new();
	private readonly List<ScheduledTimer> _timers = [];
	private long _nextSequence;
	private int _pumping;

	/// <summary>
	/// Creates a dispatcher whose timers follow <paramref name="clock"/>.
	/// </summary>
	/// <param name="clock">The clock that supplies monotonic time.</param>
	/// <exception cref="ArgumentNullException"><paramref name="clock"/> is null.</exception>
	public WindowsDispatcher(IGameClock clock)
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
		BackgroundThread thread = new(name, body);
		thread.Start();
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
		lock (_timers)
			_timers.Add(timer);
		return timer;
	}

	/// <inheritdoc/>
	public void Pump()
	{
		if (Interlocked.CompareExchange(ref _pumping, 1, 0) != 0)
			throw new InvalidOperationException("The dispatcher is already pumping.");
		try
		{
			long now = _clock.Timestamp;
			List<(long Due, long Sequence, Action Callback)> work = [];
			while (_posted.TryDequeue(out (long Sequence, Action Callback) posted))
				work.Add((now, posted.Sequence, posted.Callback));
			lock (_timers)
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
						work.Add((timer.Due, timer.Sequence, timer.Callback));
						_timers.RemoveAt(index);
					}
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
			Volatile.Write(ref _pumping, 0);
		}
	}

	private sealed class BackgroundThread : IGameThread
	{
		private readonly Action _body;
		private readonly Thread _thread;
		private int _completed;

		public BackgroundThread(string name, Action body)
		{
			Name = name;
			_body = body;
			_thread = new Thread(Run) { Name = name, IsBackground = true };
		}

		public string Name { get; }

		public bool IsCompleted => Volatile.Read(ref _completed) != 0;

		public Exception? Failure { get; private set; }

		public void Start() => _thread.Start();

		public void Dispose()
		{
		}

		private void Run()
		{
			try
			{
				_body();
			}
			catch (Exception exception)
			{
				Failure = exception;
			}
			finally
			{
				Volatile.Write(ref _completed, 1);
			}
		}
	}

	private sealed class ScheduledTimer(long due, long sequence, Action callback) : IDisposable
	{
		private int _cancelled;

		public long Due { get; } = due;

		public long Sequence { get; } = sequence;

		public Action Callback { get; } = callback;

		public bool Cancelled => Volatile.Read(ref _cancelled) != 0;

		public void Dispose() => Volatile.Write(ref _cancelled, 1);
	}
}
