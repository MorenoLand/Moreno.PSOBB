using PsoBB.Platform;
using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the browser event queue that becomes the keyboard and mouse state at each poll.
/// </summary>
public sealed class BrowserGameInputTests
{
	[Fact]
	public void EventsApplyOnlyAtThePoll()
	{
		BrowserGameInput input = new(new FakeInputHost());
		input.Push(BrowserInputEvent.Key((int)GameKey.Return, true));
		Assert.False(input.Keyboard.IsKeyDown(GameKey.Return));
		input.Poll();
		Assert.True(input.Keyboard.IsKeyDown(GameKey.Return));
		input.Push(BrowserInputEvent.Key((int)GameKey.Return, false));
		Assert.True(input.Keyboard.IsKeyDown(GameKey.Return));
		input.Poll();
		Assert.False(input.Keyboard.IsKeyDown(GameKey.Return));
		Assert.False(input.Keyboard.AnyKeyDown);
	}

	[Fact]
	public void MovementAccumulatesUntilThePollAndThenClears()
	{
		BrowserGameInput input = new(new FakeInputHost());
		input.Push(BrowserInputEvent.PointerMove(10, 20, 3, 4));
		input.Push(BrowserInputEvent.PointerMove(12, 19, 2, -1));
		input.Push(BrowserInputEvent.Wheel(120));
		input.Poll();
		Assert.Equal(12, input.Mouse.X);
		Assert.Equal(19, input.Mouse.Y);
		Assert.Equal(5, input.Mouse.DeltaX);
		Assert.Equal(3, input.Mouse.DeltaY);
		Assert.Equal(120, input.Mouse.WheelDelta);
		input.Poll();
		Assert.Equal(12, input.Mouse.X);
		Assert.Equal(19, input.Mouse.Y);
		Assert.Equal(0, input.Mouse.DeltaX);
		Assert.Equal(0, input.Mouse.WheelDelta);
	}

	[Fact]
	public void ButtonsFollowTheLatestEvent()
	{
		BrowserGameInput input = new(new FakeInputHost());
		input.Push(BrowserInputEvent.PointerButtons(MouseButtons.Left | MouseButtons.Right));
		input.Poll();
		Assert.True(input.Mouse.IsButtonDown(MouseButtons.Left));
		Assert.True(input.Mouse.IsButtonDown(MouseButtons.Right));
		input.Push(BrowserInputEvent.PointerButtons(MouseButtons.Right | (MouseButtons)0x4000));
		input.Poll();
		Assert.False(input.Mouse.IsButtonDown(MouseButtons.Left));
		Assert.True(input.Mouse.IsButtonDown(MouseButtons.Right));
		Assert.Equal(MouseButtons.Right, input.Mouse.Buttons);
	}

	[Fact]
	public void FocusLossReleasesKeysAndButtons()
	{
		BrowserGameInput input = new(new FakeInputHost());
		input.Push(BrowserInputEvent.Key((int)GameKey.A, true));
		input.Push(BrowserInputEvent.PointerButtons(MouseButtons.Left));
		input.Poll();
		input.Push(BrowserInputEvent.FocusLost());
		input.Poll();
		Assert.False(input.Keyboard.AnyKeyDown);
		Assert.Equal(MouseButtons.None, input.Mouse.Buttons);
	}

	[Fact]
	public void UnknownScanCodesAreIgnored()
	{
		BrowserGameInput input = new(new FakeInputHost());
		input.Push(BrowserInputEvent.Key(0x100, true));
		input.Push(BrowserInputEvent.Key(-1, true));
		input.Poll();
		Assert.False(input.Keyboard.AnyKeyDown);
	}

	[Fact]
	public void CursorRequestsReachTheHostAndTheNextPoll()
	{
		FakeInputHost host = new();
		BrowserGameInput input = new(host);
		input.SetCursorPosition(100, 50);
		Assert.Equal(1, host.PositionCalls);
		Assert.Equal(100, host.LastX);
		Assert.Equal(50, host.LastY);
		Assert.Equal(0, input.Mouse.X);
		input.Poll();
		Assert.Equal(100, input.Mouse.X);
		Assert.Equal(50, input.Mouse.Y);
		Assert.True(input.CursorVisible);
		input.SetCursorVisible(false);
		Assert.False(input.CursorVisible);
		Assert.Equal(1, host.VisibilityCalls);
		Assert.False(host.LastVisible);
	}

	private sealed class FakeInputHost : IBrowserInputHost
	{
		public int PositionCalls { get; private set; }
		public int VisibilityCalls { get; private set; }
		public int LastX { get; private set; }
		public int LastY { get; private set; }
		public bool LastVisible { get; private set; }

		public void SetPointerPosition(int x, int y)
		{
			PositionCalls++;
			LastX = x;
			LastY = y;
		}

		public void SetPointerVisible(bool visible)
		{
			VisibilityCalls++;
			LastVisible = visible;
		}
	}
}
