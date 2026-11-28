using System.Reflection;
using PsoBB.Game.Tasks;
using PsoBB.Platform;
using TaskScheduler = PsoBB.Game.Tasks.TaskScheduler;

namespace PsoBB.Tests;

/// <summary>
/// Checks the task tree ordering, lifecycle, frame clock and release paths.
/// </summary>
public sealed class TaskSchedulerTests
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	private sealed class RecordingTask : GameTask
	{
		private readonly string _name;
		private readonly List<string> _log;

		public RecordingTask(string name, List<string> log) : base(name)
		{
			_name = name;
			_log = log;
		}

		public Action<RecordingTask>? OnRun { get; set; }

		public override void RunTask()
		{
			_log.Add(_name);
			OnRun?.Invoke(this);
		}
	}

	private static ManualGameClock Clock() => new(Start);

	[Fact]
	public void ChildrenRunInInsertionOrderAndDepthFirst()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask firstChild = new("first child", log);
		RecordingTask firstGrandchild = new("first grandchild", log);
		RecordingTask secondChild = new("second child", log);
		RecordingTask second = new("second", log);
		first.Add(firstChild);
		firstChild.Add(firstGrandchild);
		first.Add(secondChild);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Update();
		Assert.Equal(["first", "first child", "first grandchild", "second child", "second"], log);
	}

	[Fact]
	public void AChildAddedDuringThePumpRunsInTheSameFrame()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		RecordingTask third = new("third", log);
		RecordingTask added = new("added", log);
		first.OnRun = _ => scheduler.Add(added);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Add(third);
		scheduler.Update();
		Assert.Equal(["first", "second", "third", "added"], log);
	}

	[Fact]
	public void AChildAddedToTheRunningNodeRunsBeforeTheNextSibling()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		RecordingTask added = new("added", log);
		first.OnRun = _ => first.Add(added);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Update();
		Assert.Equal(["first", "added", "second"], log);
	}

	[Fact]
	public void ARemovedSiblingStillRunsBecauseTheNextNodeWasRemembered()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask removed = new("removed", log);
		RecordingTask third = new("third", log);
		first.OnRun = _ => removed.RemoveFromParent();
		scheduler.Add(first);
		scheduler.Add(removed);
		scheduler.Add(third);
		scheduler.Update();
		Assert.Equal(["first", "removed", "third"], log);
		Assert.Null(removed.Parent);
		Assert.False(removed.IsDisposed);
	}

	[Fact]
	public void ARemovedSelfDoesNotRunAgainOnTheNextFrame()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		first.OnRun = _ => first.RemoveFromParent();
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Update();
		scheduler.Update();
		Assert.Equal(["first", "second", "second"], log);
		Assert.Null(first.Parent);
	}

	[Fact]
	public void AQueuedTaskIsDisposedWithoutRunning()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask queued = new("queued", log);
		RecordingTask third = new("third", log);
		scheduler.Add(first);
		scheduler.Add(queued);
		scheduler.Add(third);
		queued.QueueDestruction();
		scheduler.Update();
		Assert.Equal(["first", "third"], log);
		Assert.True(queued.IsDisposed);
		Assert.Null(queued.Parent);
	}

	[Fact]
	public void ChildQueueDestructionDeletesTheChildrenThenRunsTheNodeOnce()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask child = new("child", log);
		first.Add(child);
		first.QueueChildDestruction();
		scheduler.Add(first);
		scheduler.Update();
		Assert.Equal(["first"], log);
		Assert.True(child.IsDisposed);
		Assert.Null(first.FirstChild);
		Assert.False(first.IsDisposed);
	}

	[Fact]
	public void SuspendedAndPausedTasksAreSkipped()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask running = new("running", log);
		RecordingTask suspended = new("suspended", log);
		RecordingTask paused = new("paused", log);
		suspended.SuspendUpdate();
		paused.PauseUpdate();
		scheduler.Add(running);
		scheduler.Add(suspended);
		scheduler.Add(paused);
		scheduler.Update();
		Assert.Equal(["running"], log);
		suspended.ClearUpdateSuspension();
		paused.ResumeUpdate();
		scheduler.Update();
		Assert.Equal(["running", "running", "suspended", "paused"], log);
	}

	[Fact]
	public void TheUpdateMaskPausesAndResumesWholeChildSlots()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.UpdateFlags = 0x2;
		scheduler.Update();
		Assert.Equal(["first"], log);
		scheduler.UpdateFlags = 0;
		scheduler.Update();
		Assert.Equal(["first", "first", "second"], log);
	}

	[Fact]
	public void TheFrameDeltaComesFromTheClockAndDoesNotAccumulate()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask task = new("task", log);
		TimeSpan observed = TimeSpan.MinValue;
		task.OnRun = _ => observed = scheduler.FrameDelta;
		scheduler.Add(task);
		scheduler.Update();
		Assert.Equal(TimeSpan.Zero, scheduler.FrameDelta);
		clock.Advance(TimeSpan.FromMilliseconds(10));
		scheduler.Update();
		Assert.Equal(TimeSpan.FromMilliseconds(10), observed);
		Assert.Equal(0.01f, scheduler.FrameDeltaSeconds);
		clock.Advance(TimeSpan.FromMilliseconds(5));
		scheduler.Update();
		Assert.Equal(TimeSpan.FromMilliseconds(5), scheduler.FrameDelta);
		Assert.Equal(3, scheduler.FrameCount);
	}

	[Fact]
	public void TheFrameStateIsResetBeforeEachUpdate()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask task = new("task", log);
		bool updatedDuringFirst = true;
		task.OnRun = _ => updatedDuringFirst = scheduler.HasUpdated;
		scheduler.Add(task);
		scheduler.Update();
		Assert.False(updatedDuringFirst);
		Assert.True(scheduler.HasUpdated);
		bool updatedDuringSecond = true;
		task.OnRun = _ => updatedDuringSecond = scheduler.HasUpdated;
		scheduler.Update();
		Assert.False(updatedDuringSecond);
		Assert.True(scheduler.HasUpdated);
	}

	[Fact]
	public void AnUpdateIsNotReentrant()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask task = new("task", log);
		task.OnRun = _ => scheduler.Update();
		scheduler.Add(task);
		Assert.Throws<InvalidOperationException>(scheduler.Update);
		Assert.False(scheduler.IsUpdating);
		Assert.Equal(0, scheduler.FrameCount);
	}

	[Fact]
	public void AnExceptionStopsTheFrameAndTheSchedulerRemainsUsable()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		first.OnRun = _ => throw new InvalidOperationException("task failed");
		scheduler.Add(first);
		scheduler.Add(second);
		Assert.Throws<InvalidOperationException>(scheduler.Update);
		Assert.Equal(["first"], log);
		Assert.Equal(0, scheduler.FrameCount);
		Assert.False(scheduler.IsUpdating);
		Assert.False(scheduler.HasUpdated);
		first.OnRun = null;
		scheduler.Update();
		Assert.Equal(["first", "first", "second"], log);
		Assert.Equal(1, scheduler.FrameCount);
		Assert.True(scheduler.HasUpdated);
	}

	[Fact]
	public void DisposingTheSchedulerReleasesEveryTask()
	{
		ManualGameClock clock = Clock();
		TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask child = new("child", log);
		RecordingTask second = new("second", log);
		first.Add(child);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Dispose();
		Assert.True(scheduler.IsDisposed);
		Assert.True(first.IsDisposed);
		Assert.True(child.IsDisposed);
		Assert.True(second.IsDisposed);
		Assert.Null(scheduler.FirstChild);
		Assert.Null(first.Parent);
		Assert.Null(child.Parent);
		Assert.Equal(0, scheduler.NodeCount());
		Assert.Throws<ObjectDisposedException>(scheduler.Update);
		scheduler.Dispose();
	}

	[Fact]
	public void DisposingOneTaskKeepsItsSiblingsOrdered()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask middle = new("middle", log);
		RecordingTask last = new("last", log);
		scheduler.Add(first);
		scheduler.Add(middle);
		scheduler.Add(last);
		middle.Dispose();
		Assert.Same(last, first.NextSibling);
		Assert.Same(first, last.PreviousSibling);
		Assert.Equal(2, scheduler.NodeCount());
		scheduler.Update();
		Assert.Equal(["first", "last"], log);
	}

	[Fact]
	public void ReparentingAppendsToTheNewParent()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		RecordingTask sibling = new("sibling", log);
		scheduler.Add(first);
		scheduler.Add(second);
		scheduler.Add(sibling);
		sibling.Add(second);
		Assert.Same(sibling, second.Parent);
		Assert.Null(second.NextSibling);
		scheduler.Update();
		Assert.Equal(["first", "sibling", "second"], log);
		scheduler.Add(second);
		Assert.Same(scheduler, second.Parent);
		Assert.Null(sibling.FirstChild);
		scheduler.Update();
		Assert.Equal(["first", "sibling", "second", "first", "sibling", "second"], log);
	}

	[Fact]
	public void NodeCountAndParentDestructionFlagsFollowTheTree()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask child = new("child", log);
		RecordingTask second = new("second", log);
		first.Add(child);
		scheduler.Add(first);
		scheduler.Add(second);
		Assert.Equal(3, scheduler.NodeCount());
		Assert.True(child.AllParentsUnqueuedForDestruction());
		first.QueueDestruction();
		Assert.False(child.AllParentsUnqueuedForDestruction());
	}

	[Fact]
	public void DeferRenderTogglesTheDeferredMark()
	{
		GameTask task = new("task");
		Assert.True(task.DeferRender());
		Assert.True(task.IsRenderDeferred());
		Assert.False(task.DeferRender());
		Assert.False(task.IsRenderDeferred());
		task.Flags = GameTaskFlags.NoDeferRender;
		Assert.False(task.DeferRender());
		Assert.False(task.IsRenderDeferred());
	}

	[Fact]
	public void SetParentToNullDetachesTheNode()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask first = new("first", log);
		RecordingTask second = new("second", log);
		scheduler.Add(first);
		scheduler.Add(second);
		second.SetParent(null);
		Assert.Null(second.Parent);
		Assert.Same(first, scheduler.FirstChild);
		Assert.Null(first.NextSibling);
		Assert.Same(first, first.PreviousSibling);
		scheduler.Update();
		Assert.Equal(["first"], log);
	}

	[Fact]
	public void DisallowDestructionKeepsAQueuedNode()
	{
		ManualGameClock clock = Clock();
		using TaskScheduler scheduler = new(clock);
		List<string> log = [];
		RecordingTask task = new("task", log);
		scheduler.Add(task);
		task.Flags = GameTaskFlags.DisallowDestruction;
		task.QueueDestruction();
		scheduler.Update();
		Assert.False(task.IsDisposed);
		Assert.Same(scheduler, task.Parent);
		Assert.Empty(log);
		scheduler.Update();
		Assert.Equal(["task"], log);
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["RunTasks"] = 0x00817574,
			["SetParent"] = 0x008172D4,
			["DeleteChildren"] = 0x00817284,
			["Dispose"] = 0x008170D8,
			["NodeCount"] = 0x0081737C,
			["AllParentsUnqueuedForDestruction"] = 0x008173B4,
			["DeferRender"] = 0x008173D0,
		};
		MethodInfo[] methods = typeof(GameTask)
			.GetMethods(BindingFlags.Public | BindingFlags.Instance | BindingFlags.DeclaredOnly)
			.Where(method => method.GetCustomAttribute<OriginalAttribute>() is not null)
			.ToArray();
		Assert.Equal(expected.Count, methods.Length);
		foreach (MethodInfo method in methods)
		{
			OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
			Assert.Equal(expected[method.Name], attribute.Address);
		}
		MethodInfo runTask = typeof(TaskScheduler).GetMethod(nameof(TaskScheduler.RunTask), BindingFlags.Public | BindingFlags.Instance | BindingFlags.DeclaredOnly)!;
		Assert.Equal(0x0081745C, Assert.IsType<OriginalAttribute>(runTask.GetCustomAttribute<OriginalAttribute>()).Address);
	}
}
