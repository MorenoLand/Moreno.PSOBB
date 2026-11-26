using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the control tree, focus and capture routing, synthetic event delivery, disposal and the
/// renderer-facing draw contract without a graphics device.
/// </summary>
public sealed class GuiFoundationTests
{
	[Fact]
	public void FocusOrderIsDepthFirstTreeOrder()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbePanel group = CreateGroup(10, 10);
		ProbeElement second = CreateElement(20, 20);
		ProbeElement third = CreateElement(40, 20);
		ProbeElement fourth = CreateElement(60, 20);
		root.Attach(first);
		root.Attach(group);
		group.Attach(second);
		group.Attach(third);
		root.Attach(fourth);
		using UiManager manager = new(root);

		Assert.Equal(new UiElement[] { first, second, third, fourth }, manager.FocusOrder);
	}

	[Fact]
	public void FocusNextAndPreviousWrapAndSkipUnavailableElements()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		ProbeElement third = CreateElement(40, 0);
		second.Hide();
		third.Disable();
		root.Attach(first);
		root.Attach(second);
		root.Attach(third);
		using UiManager manager = new(root);

		Assert.Equal(new UiElement[] { first }, manager.FocusOrder);
		Assert.True(manager.FocusNext());
		Assert.Same(first, manager.FocusedElement);
		Assert.True(manager.FocusPrevious());
		Assert.Same(first, manager.FocusedElement);
	}

	[Fact]
	public void FocusChangeUpdatesElementStateAndRaisesEvent()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		root.Attach(first);
		root.Attach(second);
		using UiManager manager = new(root);
		List<(UiElement? Previous, UiElement? Current)> changes = [];
		manager.FocusChanged += (previous, current) => changes.Add((previous, current));

		Assert.True(manager.SetFocus(first));
		Assert.True(first.IsFocused);
		Assert.True(manager.SetFocus(second));
		Assert.False(first.IsFocused);
		Assert.True(second.IsFocused);
		Assert.Equal(2, changes.Count);
		Assert.Same(first, changes[1].Previous);
		Assert.Same(second, changes[1].Current);

		Assert.True(manager.ClearFocus());
		Assert.False(second.IsFocused);
		Assert.Null(manager.FocusedElement);
	}

	[Fact]
	public void SetFocusRejectsDetachedDisabledAndLockedElements()
	{
		UiPanel root = CreateRoot();
		ProbeElement element = CreateElement(0, 0);
		ProbeElement detached = CreateElement(0, 0);
		root.Attach(element);
		using UiManager manager = new(root);

		Assert.False(manager.SetFocus(detached));
		element.Disable();
		Assert.False(manager.SetFocus(element));
		element.Enable();
		element.Lock();
		Assert.False(manager.SetFocus(element));
		element.Unlock();
		Assert.True(manager.SetFocus(element));
	}

	[Fact]
	public void KeyboardAndCommandEventsGoToFocusedElement()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		root.Attach(first);
		root.Attach(second);
		using UiManager manager = new(root);
		manager.SetFocus(second);

		Assert.False(manager.Dispatch(UiEvent.KeyDown(GameKey.Return)));
		Assert.False(manager.Dispatch(UiEvent.CommandEvent(42)));

		Assert.Empty(first.Events);
		Assert.Equal(2, second.Events.Count);
		Assert.Equal(UiEventKind.KeyDown, second.Events[0].Kind);
		Assert.Equal(GameKey.Return, second.Events[0].Key);
		Assert.Equal(UiEventKind.Command, second.Events[1].Kind);
		Assert.Equal(42, second.Events[1].Command);
	}

	[Fact]
	public void KeyboardDispatchRepairsFocusWhenTheFocusedElementBecomesDisabled()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		root.Attach(first);
		root.Attach(second);
		using UiManager manager = new(root);
		manager.SetFocus(second);
		second.Disable();

		Assert.False(manager.Dispatch(UiEvent.KeyDown(GameKey.Return)));

		Assert.Same(first, manager.FocusedElement);
		Assert.Single(first.Events);
		Assert.Empty(second.Events);
	}

	[Fact]
	public void EventsBubbleFromChildToParent()
	{
		UiPanel root = CreateRoot();
		ProbePanel group = CreateGroup(0, 0);
		ProbeElement child = CreateElement(10, 10);
		group.HandleEvents = true;
		root.Attach(group);
		group.Attach(child);
		using UiManager manager = new(root);
		manager.SetFocus(child);

		Assert.True(manager.Dispatch(UiEvent.KeyDown(GameKey.Return)));

		Assert.Single(child.Events);
		Assert.Single(group.Events);
		Assert.Equal(UiEventKind.KeyDown, group.Events[0].Kind);
	}

	[Fact]
	public void MouseDownUsesHitTestAndKeepsCaptureUntilMouseUp()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(100, 100);
		root.Attach(first);
		root.Attach(second);
		using UiManager manager = new(root);

		Assert.False(manager.Dispatch(UiEvent.MouseDown(new Vector2(5, 5), MouseButtons.Left)));
		Assert.Same(first, manager.CapturedElement);
		Assert.False(manager.Dispatch(UiEvent.MouseMove(new Vector2(105, 105))));
		Assert.Empty(second.Events);
		Assert.Equal(2, first.Events.Count);
		Assert.False(manager.Dispatch(UiEvent.MouseUp(new Vector2(105, 105), MouseButtons.Left)));
		Assert.Null(manager.CapturedElement);
		Assert.Equal(3, first.Events.Count);
		Assert.False(manager.Dispatch(UiEvent.MouseMove(new Vector2(105, 105))));
		Assert.Single(second.Events);
	}

	[Fact]
	public void HitTestReturnsTheTopmostVisibleChild()
	{
		UiPanel root = CreateRoot();
		ProbePanel group = CreateGroup(0, 0);
		ProbeElement back = CreateElement(10, 10);
		ProbeElement front = CreateElement(20, 20);
		root.Attach(group);
		group.Attach(back);
		group.Attach(front);
		using UiManager manager = new(root);

		Assert.Same(front, manager.HitTest(new Vector2(25, 25)));
		front.Hide();
		Assert.Same(back, manager.HitTest(new Vector2(25, 25)));
		back.Disable();
		Assert.Null(manager.HitTest(new Vector2(25, 25)));
	}

	[Fact]
	public void HiddenParentRemovesItsChildrenFromHitTestingAndFocusOrder()
	{
		UiPanel root = CreateRoot();
		ProbePanel group = CreateGroup(0, 0);
		ProbeElement child = CreateElement(10, 10);
		root.Attach(group);
		group.Attach(child);
		using UiManager manager = new(root);

		group.Hide();

		Assert.Null(manager.HitTest(new Vector2(15, 15)));
		Assert.Empty(manager.FocusOrder);
	}

	[Fact]
	public void ElementStateBitsTrackVisibilityEnablementAndLocking()
	{
		ProbeElement element = CreateElement(0, 0);
		Assert.True(element.IsVisible);
		Assert.False(element.IsDisabled);
		Assert.False(element.IsLocked);
		Assert.False(element.IsFocused);

		element.Hide();
		Assert.False(element.IsVisible);
		element.Show();
		element.Disable();
		Assert.True(element.IsDisabled);
		element.Enable();
		element.Lock();
		Assert.True(element.IsLocked);
		element.Unlock();
		element.SetHighlighted();
		Assert.True(element.IsHighlighted);
		element.ClearHighlighted();
		Assert.False(element.IsHighlighted);
	}

	[Fact]
	public void DisposingACapturedElementReleasesCaptureOnTheNextEvent()
	{
		UiPanel root = CreateRoot();
		ProbeElement captured = CreateElement(0, 0);
		ProbeElement replacement = CreateElement(100, 100);
		root.Attach(captured);
		root.Attach(replacement);
		using UiManager manager = new(root);
		manager.Capture(captured);

		captured.Dispose();

		Assert.False(manager.Dispatch(UiEvent.MouseMove(new Vector2(105, 105))));
		Assert.Null(manager.CapturedElement);
		Assert.Single(replacement.Events);
	}

	[Fact]
	public void AttachAndDetachMaintainTheParentLink()
	{
		UiPanel root = CreateRoot();
		ProbeElement child = CreateElement(0, 0);

		root.Attach(child);
		Assert.Same(root, child.Parent);
		Assert.Single(root.Children);
		Assert.True(root.Detach(child));
		Assert.Null(child.Parent);
		Assert.Empty(root.Children);
		Assert.False(root.Detach(child));
	}

	[Fact]
	public void AttachRejectsCyclesAndASecondParent()
	{
		UiPanel root = CreateRoot();
		ProbePanel group = CreateGroup(0, 0);
		ProbeElement child = CreateElement(0, 0);
		root.Attach(group);
		group.Attach(child);

		Assert.Throws<InvalidOperationException>(() => root.Attach(child));
		Assert.Throws<ArgumentException>(() => group.Attach(root));
	}

	[Fact]
	public void DetachAllLeavesChildrenAliveAndUnparented()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		root.Attach(first);
		root.Attach(second);

		root.DetachAll();

		Assert.Empty(root.Children);
		Assert.Null(first.Parent);
		Assert.Null(second.Parent);
		Assert.False(first.IsDisposed);
		Assert.False(second.IsDisposed);
	}

	[Fact]
	public void DisposingAChildRemovesItFromTheParent()
	{
		UiPanel root = CreateRoot();
		ProbeElement child = CreateElement(0, 0);
		root.Attach(child);

		child.Dispose();

		Assert.True(child.IsDisposed);
		Assert.Null(child.Parent);
		Assert.Empty(root.Children);
	}

	[Fact]
	public void DisposingTheManagerDisposesTheWholeTree()
	{
		UiPanel root = CreateRoot();
		ProbePanel group = CreateGroup(0, 0);
		ProbeElement child = CreateElement(0, 0);
		root.Attach(group);
		group.Attach(child);
		UiManager manager = new(root);

		manager.Dispose();

		Assert.True(root.IsDisposed);
		Assert.True(group.IsDisposed);
		Assert.True(child.IsDisposed);
	}

	[Fact]
	public void DisposedElementsCannotBeAttached()
	{
		UiPanel root = CreateRoot();
		ProbeElement child = CreateElement(0, 0);
		child.Dispose();

		Assert.Throws<ObjectDisposedException>(() => root.Attach(child));
	}

	[Fact]
	public void DisposedPanelsRejectNewChildren()
	{
		UiPanel root = CreateRoot();
		ProbeElement child = CreateElement(0, 0);
		root.Dispose();

		Assert.Throws<ObjectDisposedException>(() => root.Attach(child));
	}

	[Fact]
	public void PositionSetterAppliesTheOriginalHorizontalOffset()
	{
		ProbeElement element = CreateElement(0, 0);

		element.SetPosition(10f, 20f);

		Assert.Equal(new Vector2(42f, 20f), element.Position);
	}

	[Fact]
	public void TextureCoordinatesUseTheOriginalAtlasSize()
	{
		ProbeElement element = CreateElement(0, 0);
		element.Size = new Vector2(64f, 32f);

		element.SetTextureCoordinates(128f, 64f);

		Assert.Equal(new Vector4(0.5f, 0.25f, 0.75f, 0.375f), element.TextureCoordinates);
	}

	[Fact]
	public void DrawListClipsAndSubmitsTransformedTriangles()
	{
		ProbeElement element = CreateElement(10, 10);
		element.Size = new Vector2(100f, 100f);
		element.Color = 0xFF112233;
		element.SetClipBounds(0f, 0f, 50f, 50f);
		UiDrawList list = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);

		element.Draw(list);
		list.Render(renderer);

		UiQuad quad = Assert.Single(list.Quads);
		Assert.Equal(new Vector2(10f, 10f), quad.Position);
		Assert.Equal(new Vector2(40f, 40f), quad.Size);
		Assert.Equal(
			["Texture 0:0x0", "Draw TriangleList 2 28 144"],
			renderer.Commands);
	}

	[Fact]
	public void DrawSkipsHiddenAndTransparentElements()
	{
		ProbeElement element = CreateElement(0, 0);
		UiDrawList list = new();
		element.Draw(list);
		Assert.Empty(list.Quads);
		element.Color = 0xFF000000;
		element.Hide();
		element.Draw(list);
		Assert.Empty(list.Quads);
		element.Show();
		element.Draw(list);
		Assert.Single(list.Quads);
	}

	[Fact]
	public void PanelDrawsChildrenInAttachOrder()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		first.Color = 0xFF000001;
		second.Color = 0xFF000002;
		root.Attach(first);
		root.Attach(second);
		UiDrawList list = new();

		root.Draw(list);

		Assert.Equal(2, list.Quads.Count);
		Assert.Equal(0xFF000001u, list.Quads[0].Color);
		Assert.Equal(0xFF000002u, list.Quads[1].Color);
	}

	[Fact]
	public void UpdateVisitsEveryElementInTheTree()
	{
		UiPanel root = CreateRoot();
		ProbeElement first = CreateElement(0, 0);
		ProbeElement second = CreateElement(20, 0);
		root.Attach(first);
		root.Attach(second);
		using UiManager manager = new(root);

		manager.Update(0.25f);

		Assert.Equal(1, first.UpdateCount);
		Assert.Equal(1, second.UpdateCount);
	}

	private static UiPanel CreateRoot() => new()
	{
		Position = Vector2.Zero,
		Size = new Vector2(200f, 200f),
	};

	private static ProbePanel CreateGroup(float x, float y) => new()
	{
		Position = new Vector2(x, y),
		Size = new Vector2(160f, 160f),
	};

	private static ProbeElement CreateElement(float x, float y) => new()
	{
		Position = new Vector2(x, y),
		Size = new Vector2(20f, 20f),
	};

	private sealed class ProbeElement : UiElement
	{
		public List<UiEvent> Events { get; } = [];
		public bool HandleEvents { get; set; }
		public int UpdateCount { get; private set; }

		public override bool OnEvent(UiEvent uiEvent)
		{
			Events.Add(uiEvent);
			return HandleEvents;
		}

		public override void Update(float deltaSeconds) => UpdateCount++;
	}

	private sealed class ProbePanel : UiPanel
	{
		public List<UiEvent> Events { get; } = [];

		public bool HandleEvents { get; set; }

		public override bool OnEvent(UiEvent uiEvent)
		{
			Events.Add(uiEvent);
			return HandleEvents;
		}
	}
}
