namespace PsoBB.Platform.Web;

/// <summary>
/// The browser dispatcher, which runs every callback cooperatively on the pump thread.
/// </summary>
public sealed class BrowserGameDispatcher : IGameDispatcher
{
	private readonly SingleThreadedDispatcher _dispatcher;

	/// <summary>
	/// Creates a cooperative dispatcher whose timers follow the browser clock.
	/// </summary>
	/// <param name="clock">The browser clock.</param>
	public BrowserGameDispatcher(IGameClock clock)
	{
		ArgumentNullException.ThrowIfNull(clock);
		_dispatcher = new SingleThreadedDispatcher(clock);
	}

	/// <inheritdoc/>
	public bool SupportsBackgroundThreads => false;

	/// <inheritdoc/>
	public void Post(Action callback) => _dispatcher.Post(callback);

	/// <inheritdoc/>
	public IGameThread StartThread(string name, Action body) => _dispatcher.StartThread(name, body);

	/// <inheritdoc/>
	public IDisposable Schedule(TimeSpan dueTime, Action callback) => _dispatcher.Schedule(dueTime, callback);

	/// <inheritdoc/>
	public void Pump() => _dispatcher.Pump();
}
