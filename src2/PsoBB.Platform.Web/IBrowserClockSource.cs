namespace PsoBB.Platform.Web;

/// <summary>
/// The browser primitives behind the monotonic and wall clocks.
/// </summary>
public interface IBrowserClockSource
{
	/// <summary>
	/// Gets the fractional milliseconds from <c>performance.now</c>.
	/// </summary>
	double MonotonicMilliseconds { get; }

	/// <summary>
	/// Gets the fractional milliseconds since the Unix epoch from <c>Date</c>.
	/// </summary>
	double UnixMilliseconds { get; }

	/// <summary>
	/// Gets the local time-zone offset in minutes east of UTC.
	/// </summary>
	int LocalOffsetMinutes { get; }
}
