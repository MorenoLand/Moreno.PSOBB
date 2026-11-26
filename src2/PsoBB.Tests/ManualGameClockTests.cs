using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the manually advanced clock and its Win32-compatible millisecond count.
/// </summary>
public sealed class ManualGameClockTests
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	[Fact]
	public void StartsAtTheConfiguredTime()
	{
		ManualGameClock clock = new(Start, TimeSpan.FromHours(-5));
		Assert.Equal(TimeSpan.TicksPerSecond, clock.Frequency);
		Assert.Equal(0, clock.Timestamp);
		Assert.Equal(0u, clock.Milliseconds);
		Assert.Equal(Start, clock.UtcNow);
		Assert.Equal(Start.ToOffset(TimeSpan.FromHours(-5)), clock.LocalNow);
	}

	[Fact]
	public void AdvanceMovesMonotonicAndWallTime()
	{
		ManualGameClock clock = new(Start, TimeSpan.FromHours(2));
		clock.Advance(TimeSpan.FromMilliseconds(1500));
		Assert.Equal(15_000_000, clock.Timestamp);
		Assert.Equal(1500u, clock.Milliseconds);
		Assert.Equal(Start.AddMilliseconds(1500), clock.UtcNow);
		Assert.Equal(Start.AddMilliseconds(1500).ToOffset(TimeSpan.FromHours(2)), clock.LocalNow);
	}

	[Fact]
	public void MillisecondsWrapLikeGetTickCount()
	{
		ManualGameClock clock = new(Start, timestamp: TimeSpan.FromMilliseconds(uint.MaxValue - 5).Ticks);
		Assert.Equal(uint.MaxValue - 5, clock.Milliseconds);
		clock.Advance(TimeSpan.FromMilliseconds(10));
		Assert.Equal(4u, clock.Milliseconds);
	}

	[Fact]
	public void WallClockCanMoveWithoutMovingMonotonicTime()
	{
		ManualGameClock clock = new(Start);
		clock.Advance(TimeSpan.FromSeconds(1));
		long timestamp = clock.Timestamp;
		clock.SetUtcNow(Start.AddHours(-1));
		Assert.Equal(Start.AddHours(-1), clock.UtcNow);
		Assert.Equal(timestamp, clock.Timestamp);
	}

	[Fact]
	public void ConstructorNormalisesUtcAndLocalOffset()
	{
		ManualGameClock clock = new(new DateTimeOffset(2026, 11, 26, 12, 0, 0, TimeSpan.FromHours(3)), TimeSpan.FromHours(14));
		Assert.Equal(TimeSpan.Zero, clock.UtcNow.Offset);
		Assert.Equal(TimeSpan.FromHours(14), clock.LocalNow.Offset);
		Assert.Equal(0, clock.Timestamp);
	}

	[Fact]
	public void InvalidTimesAndOffsetsAreRejected()
	{
		ManualGameClock clock = new(Start);
		Assert.Throws<ArgumentOutOfRangeException>(() => clock.Advance(TimeSpan.FromTicks(-1)));
		Assert.Throws<ArgumentOutOfRangeException>(() => new ManualGameClock(Start, timestamp: -1));
		Assert.Throws<ArgumentOutOfRangeException>(() => clock.SetLocalOffset(TimeSpan.FromHours(15)));
		Assert.Throws<ArgumentOutOfRangeException>(() => clock.SetLocalOffset(TimeSpan.FromHours(-15)));
	}
}
