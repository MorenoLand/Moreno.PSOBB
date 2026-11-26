using PsoBB.Platform;

namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Checks posted work, due timers and real background threads on the Linux dispatcher.
/// </summary>
public sealed class LinuxGameDispatcherTests
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	[Fact]
	public void PostsRunInOrderOnPump()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
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
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
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
		LinuxGameDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
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
		LinuxGameDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
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
		LinuxGameDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		bool fired = false;
		IDisposable timer = dispatcher.Schedule(TimeSpan.FromMilliseconds(10), () => fired = true);
		timer.Dispose();
		clock.Advance(TimeSpan.FromSeconds(1));
		dispatcher.Pump();
		Assert.False(fired);
	}

	[Fact]
	public void ThreadBodiesRunOffThePumpThreadAndComplete()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
		Assert.True(dispatcher.SupportsBackgroundThreads);
		int pumpThread = Environment.CurrentManagedThreadId;
		int bodyThread = 0;
		using ManualResetEventSlim ran = new(false);
		IGameThread thread = dispatcher.StartThread("worker", () =>
		{
			bodyThread = Environment.CurrentManagedThreadId;
			ran.Set();
		});
		Assert.Equal("worker", thread.Name);
		Assert.True(ran.Wait(5000));
		Assert.NotEqual(pumpThread, bodyThread);
		Assert.True(SpinWait.SpinUntil(() => thread.IsCompleted, 5000));
		thread.Dispose();
		thread.Dispose();
	}

	[Fact]
	public void AThrowingThreadBodyCompletesAndKeepsTheFailure()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
		LinuxGameThread thread = Assert.IsType<LinuxGameThread>(dispatcher.StartThread("faulting", () => throw new InvalidOperationException("body failed")));
		Assert.True(SpinWait.SpinUntil(() => thread.IsCompleted, 5000));
		Assert.IsType<InvalidOperationException>(thread.Failure);
		Assert.Equal("body failed", thread.Failure!.Message);
	}

	[Fact]
	public void BackgroundThreadsCanPostAndSchedule()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
		int posted = 0;
		int scheduled = 0;
		using ManualResetEventSlim submitted = new(false);
		IGameThread thread = dispatcher.StartThread("poster", () =>
		{
			dispatcher.Post(() => posted = 1);
			dispatcher.Schedule(TimeSpan.Zero, () => scheduled = 1);
			submitted.Set();
		});
		Assert.True(submitted.Wait(5000));
		Assert.Equal(0, posted);
		Assert.Equal(0, scheduled);
		dispatcher.Pump();
		Assert.Equal(1, posted);
		Assert.Equal(1, scheduled);
		Assert.True(SpinWait.SpinUntil(() => thread.IsCompleted, 5000));
	}

	[Fact]
	public void ReentrantPumpIsRejected()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
		dispatcher.Post(() => dispatcher.Pump());
		Assert.Throws<InvalidOperationException>(() => dispatcher.Pump());
		dispatcher.Post(() => { });
		dispatcher.Pump();
	}

	[Fact]
	public void InvalidArgumentsAreRejected()
	{
		LinuxGameDispatcher dispatcher = NewDispatcher(out _);
		Assert.Throws<ArgumentNullException>(() => new LinuxGameDispatcher(null!));
		Assert.Throws<ArgumentNullException>(() => dispatcher.Post(null!));
		Assert.Throws<ArgumentNullException>(() => dispatcher.Schedule(TimeSpan.Zero, null!));
		Assert.Throws<ArgumentOutOfRangeException>(() => dispatcher.Schedule(TimeSpan.FromTicks(-1), () => { }));
		Assert.ThrowsAny<ArgumentException>(() => dispatcher.StartThread("", () => { }));
		Assert.Throws<ArgumentNullException>(() => dispatcher.StartThread("name", null!));
	}

	private static LinuxGameDispatcher NewDispatcher(out ManualGameClock clock)
	{
		clock = new ManualGameClock(Start);
		return new LinuxGameDispatcher(clock);
	}
}
