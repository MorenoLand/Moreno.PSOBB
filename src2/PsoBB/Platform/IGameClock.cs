namespace PsoBB.Platform;

/// <summary>
/// Monotonic and wall-clock time for the client.
/// </summary>
/// <remarks>
/// These properties replace <c>GetTickCount</c>, <c>timeGetTime</c>, <c>QueryPerformanceCounter</c>, <c>QueryPerformanceFrequency</c>, <c>GetSystemTimeAsFileTime</c> and <c>GetLocalTime</c>; the host owns timer resolution and blocking sleeps, so single-threaded hosts never wait here.
/// </remarks>
public interface IGameClock
{
	/// <summary>
	/// Gets the number of monotonic ticks per second.
	/// </summary>
	long Frequency { get; }

	/// <summary>
	/// Gets the monotonic tick count; only differences between readings are meaningful.
	/// </summary>
	long Timestamp { get; }

	/// <summary>
	/// Gets the low 32 bits of the monotonic millisecond count, which wraps like <c>GetTickCount</c>.
	/// </summary>
	uint Milliseconds { get; }

	/// <summary>
	/// Gets the current UTC wall-clock time with 100-nanosecond precision.
	/// </summary>
	DateTimeOffset UtcNow { get; }

	/// <summary>
	/// Gets the current wall-clock time in the host's local time zone.
	/// </summary>
	DateTimeOffset LocalNow { get; }
}
