using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks cooperative posts, timers and thread bodies on the single-threaded dispatcher.
/// </summary>
public sealed class SingleThreadedDispatcherTests
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	[Fact]
	public void PostsRunInOrderOnPump()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		List<int> order = [];
		dispatcher.Post(() => order.Add(1));
		dispatcher.Post(() => order.Add(2));
		Assert.Empty(order);
		dispatcher.Pump();
		Assert.Equal([1, 2], order);
		dispatcher.Pump();
		Assert.Equal([1, 2], order);
	}

	[Fact]
	public void WorkAddedDuringPumpWaitsForTheNextPump()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		List<int> order = [];
		dispatcher.Post(() =>
		{
			order.Add(1);
			dispatcher.Post(() => order.Add(2));
			dispatcher.Schedule(TimeSpan.Zero, () => order.Add(3));
		});
		dispatcher.Pump();
		Assert.Equal([1], order);
		dispatcher.Pump();
		Assert.Equal([1, 2, 3], order);
	}

	[Fact]
	public void TimersFireWhenTheClockReachesTheirDueTime()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		int fired = 0;
		dispatcher.Schedule(TimeSpan.FromMilliseconds(100), () => fired++);
		dispatcher.Pump();
		Assert.Equal(0, fired);
		clock.Advance(TimeSpan.FromMilliseconds(99));
		dispatcher.Pump();
		Assert.Equal(0, fired);
		clock.Advance(TimeSpan.FromMilliseconds(1));
		dispatcher.Pump();
		Assert.Equal(1, fired);
		dispatcher.Pump();
		Assert.Equal(1, fired);
	}

	[Fact]
	public void TimersRunInDueOrder()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		List<string> order = [];
		dispatcher.Schedule(TimeSpan.FromMilliseconds(200), () => order.Add("late"));
		dispatcher.Schedule(TimeSpan.FromMilliseconds(100), () => order.Add("early"));
		clock.Advance(TimeSpan.FromMilliseconds(200));
		dispatcher.Pump();
		Assert.Equal(["early", "late"], order);
	}

	[Fact]
	public void DisposingATimerCancelsIt()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		bool fired = false;
		IDisposable timer = dispatcher.Schedule(TimeSpan.FromMilliseconds(10), () => fired = true);
		timer.Dispose();
		clock.Advance(TimeSpan.FromSeconds(1));
		dispatcher.Pump();
		Assert.False(fired);
	}

	[Fact]
	public void AZeroDelayTimerWaitsForTheNextPump()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		bool fired = false;
		dispatcher.Schedule(TimeSpan.Zero, () => fired = true);
		Assert.False(fired);
		dispatcher.Pump();
		Assert.True(fired);
	}

	[Fact]
	public void ThreadBodiesRunOnPumpAndReportCompletion()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		Assert.False(dispatcher.SupportsBackgroundThreads);
		bool ran = false;
		IGameThread thread = dispatcher.StartThread("worker", () => ran = true);
		Assert.Equal("worker", thread.Name);
		Assert.False(thread.IsCompleted);
		dispatcher.Pump();
		Assert.True(ran);
		Assert.True(thread.IsCompleted);
		thread.Dispose();
		thread.Dispose();
	}

	[Fact]
	public void ThreadsAndPostsShareSubmissionOrder()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		List<string> order = [];
		IGameThread thread = dispatcher.StartThread("worker", () => order.Add("thread"));
		dispatcher.Post(() => order.Add("post"));
		dispatcher.Pump();
		Assert.Equal(["thread", "post"], order);
		Assert.True(thread.IsCompleted);
		thread.Dispose();
	}

	[Fact]
	public void AnEarlierDueTimerRunsBeforeALaterPost()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		List<string> order = [];
		dispatcher.Schedule(TimeSpan.Zero, () => order.Add("timer"));
		dispatcher.Post(() => order.Add("post"));
		clock.Advance(TimeSpan.FromMilliseconds(1));
		dispatcher.Pump();
		Assert.Equal(["timer", "post"], order);
	}

	[Fact]
	public void ReentrantPumpIsRejected()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		dispatcher.Post(() => dispatcher.Pump());
		Assert.Throws<InvalidOperationException>(() => dispatcher.Pump());
		dispatcher.Post(() => { });
		dispatcher.Pump();
	}

	[Fact]
	public void InvalidArgumentsAreRejected()
	{
		SingleThreadedDispatcher dispatcher = NewDispatcher(out _);
		Assert.Throws<ArgumentNullException>(() => new SingleThreadedDispatcher(null!));
		Assert.Throws<ArgumentNullException>(() => dispatcher.Post(null!));
		Assert.Throws<ArgumentNullException>(() => dispatcher.Schedule(TimeSpan.Zero, null!));
		Assert.Throws<ArgumentOutOfRangeException>(() => dispatcher.Schedule(TimeSpan.FromTicks(-1), () => { }));
		Assert.ThrowsAny<ArgumentException>(() => dispatcher.StartThread("", () => { }));
		Assert.Throws<ArgumentNullException>(() => dispatcher.StartThread("name", null!));
	}

	private static SingleThreadedDispatcher NewDispatcher(out ManualGameClock clock)
	{
		clock = new ManualGameClock(Start);
		return new SingleThreadedDispatcher(clock);
	}
}
