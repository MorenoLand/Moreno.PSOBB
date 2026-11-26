namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Checks the monotonic and wall-clock readings of the Linux clock.
/// </summary>
public sealed class LinuxGameClockTests
{
	[Fact]
	public void FrequencyIsPositiveAndTicksAdvance()
	{
		LinuxGameClock clock = new();
		Assert.True(clock.Frequency > 0);
		long start = clock.Timestamp;
		Assert.True(SpinWait.SpinUntil(() => clock.Timestamp > start, 2000));
	}

	[Fact]
	public void MillisecondsFollowTheMonotonicCounter()
	{
		LinuxGameClock clock = new();
		long timestamp = clock.Timestamp;
		uint expected = unchecked((uint)((Int128)timestamp * 1000 / clock.Frequency));
		uint actual = clock.Milliseconds;
		Assert.InRange(unchecked(actual - expected), 0u, 2u);
	}

	[Fact]
	public void WallClockReadingsMatchTheSystem()
	{
		DateTimeOffset before = DateTimeOffset.UtcNow;
		LinuxGameClock clock = new();
		DateTimeOffset utc = clock.UtcNow;
		DateTimeOffset local = clock.LocalNow;
		DateTimeOffset after = DateTimeOffset.UtcNow;
		Assert.InRange(utc, before, after);
		Assert.Equal(TimeSpan.Zero, utc.Offset);
		Assert.Equal(TimeZoneInfo.Local.GetUtcOffset(utc), local.Offset);
	}

	[Fact]
	public void ClockImplementsTheContract()
	{
		IGameClock clock = new LinuxGameClock();
		Assert.True(clock.Frequency > 0);
		Assert.True(clock.Timestamp >= 0);
		Assert.True(clock.UtcNow.Offset == TimeSpan.Zero);
	}
}
