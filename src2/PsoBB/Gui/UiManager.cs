using System.Numerics;

namespace PsoBB.Gui;

/// <summary>
/// Owns an interface tree and routes focus, capture, hit testing and events through it.
/// </summary>
public sealed class UiManager : IDisposable
{
	private UiElement? _focusedElement;
	private UiElement? _capturedElement;
	private bool _disposed;

	/// <summary>
	/// Creates a manager for a root panel and takes ownership of it.
	/// </summary>
	/// <param name="root">The root panel.</param>
	/// <exception cref="ArgumentNullException"><paramref name="root"/> is null.</exception>
	public UiManager(UiPanel root)
	{
		ArgumentNullException.ThrowIfNull(root);
		ObjectDisposedException.ThrowIf(root.IsDisposed, root);
		Root = root;
	}

	/// <summary>Gets the root panel.</summary>
	public UiPanel Root { get; }

	/// <summary>Gets the element that owns keyboard focus.</summary>
	public UiElement? FocusedElement => _focusedElement;

	/// <summary>Gets the element that owns mouse capture.</summary>
	public UiElement? CapturedElement => _capturedElement;

	/// <summary>Raised after the focused element changes.</summary>
	public event Action<UiElement?, UiElement?>? FocusChanged;

	/// <summary>
	/// Gets the focusable elements in depth-first tree order.
	/// </summary>
	public IReadOnlyList<UiElement> FocusOrder
	{
		get
		{
			List<UiElement> order = [];
			CollectFocusable(Root, true, order);
			return order;
		}
	}

	/// <summary>
	/// Gives keyboard focus to an element in the tree.
	/// </summary>
	/// <param name="element">The element, or <see langword="null"/> to clear focus.</param>
	/// <returns><see langword="true"/> when the focus changed or already belonged to the element.</returns>
	public bool SetFocus(UiElement? element)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (element is null)
			return ClearFocus();
		if (!IsInTree(element) || !element.IsFocusable)
			return false;
		if (ReferenceEquals(_focusedElement, element))
			return true;
		UiElement? previous = _focusedElement;
		previous?.ClearFocus();
		_focusedElement = element;
		element.SetFocus();
		FocusChanged?.Invoke(previous, element);
		return true;
	}

	/// <summary>
	/// Removes keyboard focus.
	/// </summary>
	/// <returns><see langword="true"/> when an element lost focus.</returns>
	public bool ClearFocus()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		UiElement? previous = _focusedElement;
		if (previous is null)
			return false;
		_focusedElement = null;
		previous.ClearFocus();
		FocusChanged?.Invoke(previous, null);
		return true;
	}

	/// <summary>
	/// Moves focus to the next focusable element, wrapping at the end.
	/// </summary>
	/// <returns><see langword="true"/> when an element received focus.</returns>
	public bool FocusNext()
	{
		IReadOnlyList<UiElement> order = FocusOrder;
		if (order.Count == 0)
			return false;
		int index = IndexOfFocus(order);
		int next = index < 0 ? 0 : (index + 1) % order.Count;
		return SetFocus(order[next]);
	}

	/// <summary>
	/// Moves focus to the previous focusable element, wrapping at the start.
	/// </summary>
	/// <returns><see langword="true"/> when an element received focus.</returns>
	public bool FocusPrevious()
	{
		IReadOnlyList<UiElement> order = FocusOrder;
		if (order.Count == 0)
			return false;
		int index = IndexOfFocus(order);
		int previous = index < 0 ? order.Count - 1 : (index + order.Count - 1) % order.Count;
		return SetFocus(order[previous]);
	}

	/// <summary>
	/// Gives mouse capture to an element, or releases it when <paramref name="element"/> is null.
	/// </summary>
	/// <param name="element">The element that owns the pointer.</param>
	/// <exception cref="ArgumentException">The element is not in this tree.</exception>
	/// <exception cref="ObjectDisposedException">The element is disposed.</exception>
	public void Capture(UiElement? element)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (element is null)
		{
			_capturedElement = null;
			return;
		}
		ObjectDisposedException.ThrowIf(element.IsDisposed, element);
		if (!IsInTree(element))
			throw new ArgumentException("The element is not in this tree.", nameof(element));
		_capturedElement = element;
	}

	/// <summary>
	/// Releases mouse capture.
	/// </summary>
	/// <returns><see langword="true"/> when an element lost capture.</returns>
	public bool ReleaseCapture()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_capturedElement is null)
			return false;
		_capturedElement = null;
		return true;
	}

	/// <summary>
	/// Returns the deepest visible element under a client-area point.
	/// </summary>
	/// <param name="point">The client-area point.</param>
	/// <returns>The hit element, or <see langword="null"/>.</returns>
	public UiElement? HitTest(Vector2 point) => Root.HitTest(point);

	/// <summary>
	/// Routes an event through capture, hit testing or the focused element.
	/// </summary>
	/// <param name="uiEvent">The event.</param>
	/// <returns><see langword="true"/> when an element handled the event.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="uiEvent"/> is null.</exception>
	public bool Dispatch(UiEvent uiEvent)
	{
		ArgumentNullException.ThrowIfNull(uiEvent);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_capturedElement is not null && (_capturedElement.IsDisposed || !IsInTree(_capturedElement)))
			ReleaseCapture();
		if (IsMouseEvent(uiEvent.Kind))
		{
			UiElement? target = _capturedElement ?? HitTest(uiEvent.Position);
			if (uiEvent.Kind == UiEventKind.MouseDown && target is not null)
				Capture(target);
			if (uiEvent.Kind == UiEventKind.MouseUp)
			{
				bool handled = Route(target, uiEvent);
				ReleaseCapture();
				return handled;
			}
			return Route(target, uiEvent);
		}
		EnsureFocus();
		return Route(_focusedElement, uiEvent);
	}

	/// <summary>
	/// Advances the whole tree by one frame.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	public void Update(float deltaSeconds)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		Root.Update(deltaSeconds);
	}

	/// <summary>
	/// Draws the whole tree into a draw list.
	/// </summary>
	/// <param name="drawList">The list that receives the quads.</param>
	public void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ObjectDisposedException.ThrowIf(_disposed, this);
		Root.Draw(drawList);
	}

	/// <summary>
	/// Clears focus and capture and disposes the root panel and every child.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_focusedElement = null;
		_capturedElement = null;
		Root.Dispose();
	}

	private static bool IsMouseEvent(UiEventKind kind)
		=> kind is UiEventKind.MouseMove or UiEventKind.MouseDown or UiEventKind.MouseUp or UiEventKind.MouseWheel;

	private static void CollectFocusable(UiElement element, bool parentVisible, List<UiElement> order)
	{
		bool visible = parentVisible && element.IsVisible;
		if (visible && element.IsFocusable && !element.IsDisposed)
			order.Add(element);
		if (element is UiPanel panel)
			foreach (UiElement child in panel.Children)
				CollectFocusable(child, visible, order);
	}

	private bool IsInTree(UiElement element)
	{
		for (UiElement? node = element; node is not null; node = node.Parent)
			if (ReferenceEquals(node, Root))
				return true;
		return false;
	}

	private int IndexOfFocus(IReadOnlyList<UiElement> order)
	{
		if (_focusedElement is null)
			return -1;
		for (int index = 0; index < order.Count; index++)
			if (ReferenceEquals(order[index], _focusedElement))
				return index;
		return -1;
	}

	private void EnsureFocus()
	{
		if (_focusedElement is not null && IsInTree(_focusedElement) && _focusedElement.IsFocusable)
			return;
		if (_focusedElement is not null)
			ClearFocus();
		IReadOnlyList<UiElement> order = FocusOrder;
		if (order.Count != 0)
			SetFocus(order[0]);
	}

	private static bool Route(UiElement? target, UiEvent uiEvent)
	{
		for (UiElement? node = target; node is not null; node = node.Parent)
			if (node.OnEvent(uiEvent))
				return true;
		return false;
	}
}
