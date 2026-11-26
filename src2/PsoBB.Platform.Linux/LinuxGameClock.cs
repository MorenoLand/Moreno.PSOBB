using System.Diagnostics;

namespace PsoBB.Platform.Linux;

/// <summary>
/// The Linux clock, backed by the monotonic performance counter and the system wall clock.
/// </summary>
/// <remarks>
/// The performance counter is independent of wall-clock adjustments, and the millisecond count is the low 32 bits of the monotonic milliseconds, so it wraps like the original tick count after roughly 49 days.
/// </remarks>
public sealed class LinuxGameClock : IGameClock
{
	/// <inheritdoc/>
	public long Frequency => Stopwatch.Frequency;

	/// <inheritdoc/>
	public long Timestamp => Stopwatch.GetTimestamp();

	/// <inheritdoc/>
	public uint Milliseconds => unchecked((uint)((Int128)Timestamp * 1000 / Frequency));

	/// <inheritdoc/>
	public DateTimeOffset UtcNow => DateTimeOffset.UtcNow;

	/// <inheritdoc/>
	public DateTimeOffset LocalNow => DateTimeOffset.Now;
}
