using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The <c>performance.now</c> and <c>Date</c> time source.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed partial class BrowserClockSource : IBrowserClockSource
{
	/// <inheritdoc/>
	public double MonotonicMilliseconds => ReadMonotonicMilliseconds();

	/// <inheritdoc/>
	public double UnixMilliseconds => ReadUnixMilliseconds();

	/// <inheritdoc/>
	public int LocalOffsetMinutes => ReadLocalOffsetMinutes();

	[JSImport("clock.monotonicMilliseconds", "psobb.platform")]
	private static partial double ReadMonotonicMilliseconds();

	[JSImport("clock.unixMilliseconds", "psobb.platform")]
	private static partial double ReadUnixMilliseconds();

	[JSImport("clock.localOffsetMinutes", "psobb.platform")]
	private static partial int ReadLocalOffsetMinutes();
}
