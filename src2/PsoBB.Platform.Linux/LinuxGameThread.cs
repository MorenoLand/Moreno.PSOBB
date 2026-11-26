using System.Collections.Concurrent;
using System.Diagnostics;

namespace PsoBB.Platform.Linux;

/// <summary>
/// A handle to a dedicated background thread started by <see cref="LinuxGameDispatcher"/>.
/// </summary>
/// <remarks>
/// The body's exception, when it throws, is kept on the handle so a host can report it after observing completion; disposing the handle never terminates the body.
/// </remarks>
public sealed class LinuxGameThread : IGameThread
{
	private volatile bool _completed;

	internal LinuxGameThread(string name)
	{
		Name = name;
	}

	/// <inheritdoc/>
	public string Name { get; }

	/// <inheritdoc/>
	public bool IsCompleted => _completed;

	/// <summary>
	/// Gets the exception that ended the body, or <see langword="null"/> when it returned normally.
	/// </summary>
	public Exception? Failure { get; private set; }

	internal void Fail(Exception exception) => Failure = exception;

	internal void Complete() => _completed = true;

	/// <inheritdoc/>
	public void Dispose()
	{
	}
}
