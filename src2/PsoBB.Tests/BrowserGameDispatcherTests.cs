using PsoBB.Platform;
using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks that the browser dispatcher runs every body on the caller's pump.
/// </summary>
public sealed class BrowserGameDispatcherTests
{
	[Fact]
	public void PostedWorkRunsOnTheNextPump()
	{
		BrowserGameDispatcher dispatcher = new(new ManualGameClock(DateTimeOffset.UnixEpoch));
		bool ran = false;
		dispatcher.Post(() => ran = true);
		Assert.False(ran);
		dispatcher.Pump();
		Assert.True(ran);
		Assert.False(dispatcher.SupportsBackgroundThreads);
	}

	[Fact]
	public void DueTimersFollowTheClock()
	{
		ManualGameClock clock = new(DateTimeOffset.UnixEpoch);
		BrowserGameDispatcher dispatcher = new(clock);
		int fired = 0;
		using IDisposable timer = dispatcher.Schedule(TimeSpan.FromMilliseconds(10), () => fired++);
		dispatcher.Pump();
		Assert.Equal(0, fired);
		clock.Advance(TimeSpan.FromMilliseconds(10));
		dispatcher.Pump();
		Assert.Equal(1, fired);
		dispatcher.Pump();
		Assert.Equal(1, fired);
	}

	[Fact]
	public void ThreadBodiesRunCooperatively()
	{
		BrowserGameDispatcher dispatcher = new(new ManualGameClock(DateTimeOffset.UnixEpoch));
		bool ran = false;
		using IGameThread thread = dispatcher.StartThread("worker", () => ran = true);
		Assert.False(ran);
		Assert.False(thread.IsCompleted);
		dispatcher.Pump();
		Assert.True(ran);
		Assert.True(thread.IsCompleted);
		Assert.Equal("worker", thread.Name);
	}
}
