using PsoBB.Platform;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks the Windows monotonic counter and wall clock.
/// </summary>
public sealed class WindowsGameClockTests
{
	[Fact]
	public void MonotonicTimestampAdvancesAndFrequencyIsPositive()
	{
		WindowsGameClock clock = new();
		Assert.True(clock.Frequency > 0);
		long start = clock.Timestamp;
		Assert.True(SpinWait.SpinUntil(() => clock.Timestamp != start, TimeSpan.FromSeconds(5)));
		Assert.True(clock.Timestamp > start);
	}

	[Fact]
	public void MillisecondCountIsTheLow32BitsOfTheSystemTick()
	{
		WindowsGameClock clock = new();
		uint first = clock.Milliseconds;
		Assert.True(SpinWait.SpinUntil(() => clock.Milliseconds != first, TimeSpan.FromSeconds(5)));
	}

	[Fact]
	public void WallClockReadsUtcAndLocalTime()
	{
		WindowsGameClock clock = new();
		Assert.InRange((clock.UtcNow - DateTimeOffset.UtcNow).Duration(), TimeSpan.Zero, TimeSpan.FromSeconds(5));
		Assert.Equal(TimeZoneInfo.Local.GetUtcOffset(clock.UtcNow), clock.LocalNow.Offset);
		Assert.InRange((clock.LocalNow.ToUniversalTime() - clock.UtcNow).Duration(), TimeSpan.Zero, TimeSpan.FromSeconds(5));
	}
}
