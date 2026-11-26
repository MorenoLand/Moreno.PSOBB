namespace PsoBB.Platform;

/// <summary>
/// Runs deferred work, one-shot timers and background threads without assuming an operating-system thread.
/// </summary>
/// <remarks>
/// This replaces <c>CreateThread</c> and the client's timers; there are no blocking waits, and a threaded host runs thread bodies off the pump while a single-threaded browser host runs them cooperatively. Implementations that support background threads must accept <see cref="Post"/> and <see cref="Schedule"/> from any thread.
/// </remarks>
public interface IGameDispatcher
{
	/// <summary>
	/// Gets a value indicating whether <see cref="StartThread"/> runs bodies off the pumping thread.
	/// </summary>
	bool SupportsBackgroundThreads { get; }

	/// <summary>
	/// Queues a callback for the next pump.
	/// </summary>
	/// <param name="callback">The work to run on the pump thread.</param>
	void Post(Action callback);

	/// <summary>
	/// Starts a named body, either on a background thread or as cooperative work for the next pump.
	/// </summary>
	/// <param name="name">The diagnostic thread name.</param>
	/// <param name="body">The work to run.</param>
	/// <returns>A handle that reports completion and can be released.</returns>
	IGameThread StartThread(string name, Action body);

	/// <summary>
	/// Schedules a one-shot callback for a monotonic due time.
	/// </summary>
	/// <param name="dueTime">The non-negative delay before the callback is due.</param>
	/// <param name="callback">The work to run on the pump thread.</param>
	/// <returns>A handle whose disposal cancels the timer before it fires.</returns>
	IDisposable Schedule(TimeSpan dueTime, Action callback);

	/// <summary>
	/// Runs currently queued work and due timers without blocking.
	/// </summary>
	void Pump();
}
