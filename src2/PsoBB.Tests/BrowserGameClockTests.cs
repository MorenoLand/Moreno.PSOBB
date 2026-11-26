using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the performance.now and Date clock used by the browser host.
/// </summary>
public sealed class BrowserGameClockTests
{
	[Fact]
	public void MonotonicTicksUseDotNetTickUnits()
	{
		FakeClockSource source = new() { MonotonicMilliseconds = 1234.5 };
		BrowserGameClock clock = new(source);
		Assert.Equal(TimeSpan.TicksPerSecond, clock.Frequency);
		Assert.Equal(12_345_000, clock.Timestamp);
		Assert.Equal(1234u, clock.Milliseconds);
	}

	[Fact]
	public void TimestampNeverMovesBackward()
	{
		FakeClockSource source = new() { MonotonicMilliseconds = 50 };
		BrowserGameClock clock = new(source);
		long first = clock.Timestamp;
		source.MonotonicMilliseconds = 10;
		Assert.Equal(first, clock.Timestamp);
		source.MonotonicMilliseconds = 60;
		Assert.Equal(600_000, clock.Timestamp);
	}

	[Fact]
	public void WallClockUsesDateAndLocalOffset()
	{
		FakeClockSource source = new() { UnixMilliseconds = 1_700_000_000_123, LocalOffsetMinutes = 120 };
		BrowserGameClock clock = new(source);
		Assert.Equal(DateTimeOffset.FromUnixTimeMilliseconds(1_700_000_000_123), clock.UtcNow);
		Assert.Equal(TimeSpan.FromHours(2), clock.LocalNow.Offset);
		Assert.Equal(clock.UtcNow, clock.LocalNow);
	}

	[Fact]
	public void NegativeReadingsClampToTheEpoch()
	{
		FakeClockSource source = new() { MonotonicMilliseconds = -5, UnixMilliseconds = -5 };
		BrowserGameClock clock = new(source);
		Assert.Equal(0, clock.Timestamp);
		Assert.Equal(DateTimeOffset.UnixEpoch, clock.UtcNow);
	}

	private sealed class FakeClockSource : IBrowserClockSource
	{
		public double MonotonicMilliseconds { get; set; }
		public double UnixMilliseconds { get; set; }
		public int LocalOffsetMinutes { get; set; }
	}
}
