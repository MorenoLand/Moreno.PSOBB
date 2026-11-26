using PsoBB.Platform;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks posted work, timers and real background threads on the Windows dispatcher.
/// </summary>
public sealed class WindowsDispatcherTests
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	[Fact]
	public void PostsRunInOrderOnPump()
	{
		WindowsDispatcher dispatcher = NewDispatcher(out _);
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
		WindowsDispatcher dispatcher = NewDispatcher(out _);
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
		WindowsDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
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
	public void DisposedTimersNeverFire()
	{
		WindowsDispatcher dispatcher = NewDispatcher(out ManualGameClock clock);
		bool fired = false;
		IDisposable timer = dispatcher.Schedule(TimeSpan.FromMilliseconds(50), () => fired = true);
		timer.Dispose();
		clock.Advance(TimeSpan.FromMilliseconds(50));
		dispatcher.Pump();
		Assert.False(fired);
		Assert.Throws<ArgumentOutOfRangeException>(() => dispatcher.Schedule(TimeSpan.FromTicks(-1), () => { }));
		Assert.Throws<ArgumentNullException>(() => dispatcher.Schedule(TimeSpan.Zero, null!));
	}

	[Fact]
	public void PostsFromAnotherThreadAreAccepted()
	{
		WindowsDispatcher dispatcher = NewDispatcher(out _);
		Exception? failure = null;
		Thread thread = new(() =>
		{
			try
			{
				dispatcher.Post(() => { });
			}
			catch (Exception exception)
			{
				failure = exception;
			}
		});
		thread.Start();
		thread.Join();
		Assert.Null(failure);
		dispatcher.Pump();
	}

	[Fact]
	public void ThreadBodiesRunOnBackgroundThreads()
	{
		WindowsDispatcher dispatcher = NewDispatcher(out _);
		int callingThread = Environment.CurrentManagedThreadId;
		int bodyThread = 0;
		using ManualResetEventSlim started = new();
		IGameThread thread = dispatcher.StartThread("worker", () =>
		{
			bodyThread = Environment.CurrentManagedThreadId;
			started.Set();
		});
		Assert.True(started.Wait(TimeSpan.FromSeconds(5)));
		Assert.True(SpinWait.SpinUntil(() => thread.IsCompleted, TimeSpan.FromSeconds(5)));
		Assert.True(dispatcher.SupportsBackgroundThreads);
		Assert.Equal("worker", thread.Name);
		Assert.NotEqual(0, bodyThread);
		Assert.NotEqual(callingThread, bodyThread);
		thread.Dispose();
	}

	[Fact]
	public void APumpInsideACallbackIsRejected()
	{
		WindowsDispatcher dispatcher = NewDispatcher(out _);
		bool rejected = false;
		dispatcher.Post(() => rejected = ThrowsPump(dispatcher));
		dispatcher.Pump();
		Assert.True(rejected);
		dispatcher.Pump();
	}

	private static bool ThrowsPump(WindowsDispatcher dispatcher)
	{
		try
		{
			dispatcher.Pump();
			return false;
		}
		catch (InvalidOperationException)
		{
			return true;
		}
	}

	private static WindowsDispatcher NewDispatcher(out ManualGameClock clock)
	{
		clock = new ManualGameClock(Start);
		return new WindowsDispatcher(clock);
	}
}
