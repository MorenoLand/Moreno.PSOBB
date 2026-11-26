using System.Diagnostics;

namespace PsoBB.Platform.Windows;

/// <summary>
/// The Windows monotonic performance counter and wall clock.
/// </summary>
/// <remarks>
/// The monotonic tick count follows the high-resolution performance counter, while the millisecond value wraps at 32 bits like the original tick count.
/// </remarks>
public sealed class WindowsGameClock : IGameClock
{
	/// <inheritdoc/>
	public long Frequency => Stopwatch.Frequency;

	/// <inheritdoc/>
	public long Timestamp => Stopwatch.GetTimestamp();

	/// <inheritdoc/>
	public uint Milliseconds => unchecked((uint)Environment.TickCount64);

	/// <inheritdoc/>
	public DateTimeOffset UtcNow => DateTimeOffset.UtcNow;

	/// <inheritdoc/>
	public DateTimeOffset LocalNow => DateTimeOffset.Now;
}
