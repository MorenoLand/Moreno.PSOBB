namespace PsoBB.Platform;

/// <summary>
/// A handle to background work started through <see cref="IGameDispatcher.StartThread"/>.
/// </summary>
/// <remarks>
/// Disposing releases the handle; it does not terminate the body, which matches the lifetime the original gets from the <c>CreateThread</c> handle.
/// </remarks>
public interface IGameThread : IDisposable
{
	/// <summary>
	/// Gets the diagnostic name of the thread.
	/// </summary>
	string Name { get; }

	/// <summary>
	/// Gets a value indicating whether the body has returned or thrown.
	/// </summary>
	bool IsCompleted { get; }
}
