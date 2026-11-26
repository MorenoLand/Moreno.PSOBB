using PsoBB.Platform;

namespace PsoBB.Game.Tasks;

/// <summary>
/// The root of the client's task tree and the per-frame update pump.
/// </summary>
/// <remarks>
/// The original root reads the frame time from process globals; the scheduler reads the same
/// interval from <see cref="IGameClock"/> and exposes it to tasks through <see cref="FrameDelta"/>.
/// </remarks>
public sealed class TaskScheduler : GameTask
{
	private readonly IGameClock _clock;
	private long _lastTimestamp;
	private uint _appliedUpdateFlags;
	private TaskSchedulerFlags _taskFlags;
	private long _frameCount;

	/// <summary>
	/// Creates a root task whose frame time follows <paramref name="clock"/>.
	/// </summary>
	/// <param name="clock">The monotonic clock that supplies the frame interval.</param>
	/// <param name="name">The diagnostic name.</param>
	/// <exception cref="ArgumentNullException"><paramref name="clock"/> is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The clock frequency is not positive.</exception>
	[Original(0x00819210, "TMainTask::TMainTask")]
	public TaskScheduler(IGameClock clock, string? name = "main task") : base(name)
	{
		ArgumentNullException.ThrowIfNull(clock);
		if (clock.Frequency <= 0)
			throw new ArgumentOutOfRangeException(nameof(clock), clock.Frequency, "A task clock must have a positive frequency.");
		_clock = clock;
		_lastTimestamp = clock.Timestamp;
	}

	/// <summary>
	/// Gets the root's per-frame state.
	/// </summary>
	public TaskSchedulerFlags TaskFlags => _taskFlags;

	/// <summary>
	/// Gets a value indicating whether the update pass is running.
	/// </summary>
	public bool IsUpdating => (_taskFlags & TaskSchedulerFlags.Updating) != 0;

	/// <summary>
	/// Gets a value indicating whether an update pass finished successfully.
	/// </summary>
	public bool HasUpdated => (_taskFlags & TaskSchedulerFlags.Updated) != 0;

	/// <summary>
	/// Gets the number of completed update passes.
	/// </summary>
	public long FrameCount => _frameCount;

	/// <summary>
	/// Gets the interval between the two most recent update passes.
	/// </summary>
	public TimeSpan FrameDelta { get; private set; }

	/// <summary>
	/// Gets the frame interval in seconds.
	/// </summary>
	public float FrameDeltaSeconds => (float)FrameDelta.TotalSeconds;

	/// <summary>
	/// Gets or sets the bit-per-child pause mask the original stores for whole task layers.
	/// </summary>
	public uint UpdateFlags { get; set; }

	/// <summary>
	/// Advances the clock interval and runs one update pass.
	/// </summary>
	/// <exception cref="ObjectDisposedException">The scheduler is disposed.</exception>
	/// <exception cref="InvalidOperationException">An update pass is already running.</exception>
	public void Update()
	{
		ObjectDisposedException.ThrowIf(IsDisposed, this);
		if (IsUpdating)
			throw new InvalidOperationException("The task scheduler is already updating.");
		long now = _clock.Timestamp;
		long elapsed = now - _lastTimestamp;
		_lastTimestamp = now;
		FrameDelta = ScaleElapsed(elapsed);
		RunTask();
	}

	/// <summary>
	/// Runs one update pass with the current frame interval.
	/// </summary>
	/// <exception cref="ObjectDisposedException">The scheduler is disposed.</exception>
	/// <exception cref="InvalidOperationException">An update pass is already running.</exception>
	[Original(0x0081745C, "TMainTask::run_task")]
	public override void RunTask()
	{
		ObjectDisposedException.ThrowIf(IsDisposed, this);
		if (IsUpdating)
			throw new InvalidOperationException("The task scheduler is already updating.");
		ApplyUpdateFlags();
		_taskFlags &= ~TaskSchedulerFlags.Updated;
		_taskFlags |= TaskSchedulerFlags.Updating;
		try
		{
			RunTasks();
			_taskFlags |= TaskSchedulerFlags.Updated;
			_frameCount++;
		}
		finally
		{
			_taskFlags &= ~TaskSchedulerFlags.Updating;
		}
	}

	private void ApplyUpdateFlags()
	{
		uint changed = UpdateFlags ^ _appliedUpdateFlags;
		if (changed == 0)
			return;
		uint bit = 1;
		for (GameTask? child = FirstChild; child is not null && bit != 0; child = child.NextSibling, bit <<= 1)
		{
			if ((changed & bit) == 0)
				continue;
			if ((UpdateFlags & bit) != 0)
				child.PauseUpdate();
			else
				child.ResumeUpdate();
		}
		_appliedUpdateFlags = UpdateFlags;
	}

	private TimeSpan ScaleElapsed(long elapsed)
	{
		if (elapsed <= 0)
			return TimeSpan.Zero;
		Int128 scaled = (Int128)elapsed * TimeSpan.TicksPerSecond / _clock.Frequency;
		return scaled > long.MaxValue ? TimeSpan.MaxValue : TimeSpan.FromTicks((long)scaled);
	}
}
