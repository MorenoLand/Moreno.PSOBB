using System.Numerics;

namespace PsoBB.Gui;

/// <summary>
/// An interface element that owns child elements and routes hit testing and drawing through them.
/// </summary>
public class UiPanel : UiElement
{
	private readonly List<UiElement> _children = [];

	/// <summary>
	/// Creates a panel that is a container rather than a focus target.
	/// </summary>
	public UiPanel() => Focusable = false;

	/// <summary>Gets the child elements in drawing and focus order.</summary>
	public IReadOnlyList<UiElement> Children => _children;

	/// <summary>Gets the number of child elements.</summary>
	public int Count => _children.Count;

	/// <summary>Gets a child element by index.</summary>
	/// <param name="index">The child index.</param>
	/// <returns>The child element.</returns>
	public UiElement this[int index] => _children[index];

	/// <summary>
	/// Attaches a child element and records this panel as its parent.
	/// </summary>
	/// <param name="child">The element to attach.</param>
	/// <exception cref="ArgumentNullException"><paramref name="child"/> is null.</exception>
	/// <exception cref="ArgumentException">The child is this panel or one of its ancestors.</exception>
	/// <exception cref="InvalidOperationException">The child already belongs to a panel.</exception>
	/// <exception cref="ObjectDisposedException">The child is disposed.</exception>
	public void Attach(UiElement child)
	{
		ArgumentNullException.ThrowIfNull(child);
		ObjectDisposedException.ThrowIf(IsDisposed, this);
		ObjectDisposedException.ThrowIf(child.IsDisposed, child);
		if (child.Parent is not null)
			throw new InvalidOperationException("The element already belongs to a panel.");
		if (child == this || child is UiPanel panel && panel.IsAncestorOf(this))
			throw new ArgumentException("An element cannot be attached below itself.", nameof(child));
		_children.Add(child);
		child.Parent = this;
	}

	/// <summary>
	/// Detaches a direct child without disposing it.
	/// </summary>
	/// <param name="child">The child to detach.</param>
	/// <returns><see langword="true"/> when the child belonged to this panel.</returns>
	public bool Detach(UiElement child)
	{
		ArgumentNullException.ThrowIfNull(child);
		if (child.Parent != this)
			return false;
		_children.Remove(child);
		child.Parent = null;
		return true;
	}

	/// <summary>
	/// Detaches every child without disposing it.
	/// </summary>
	[Original(0x007138A8)]
	public void DetachAll()
	{
		foreach (UiElement child in _children)
			child.Parent = null;
		_children.Clear();
	}

	/// <summary>
	/// Returns whether this panel contains <paramref name="element"/> at any depth.
	/// </summary>
	/// <param name="element">The element to find.</param>
	/// <returns><see langword="true"/> when the element is a descendant.</returns>
	public bool IsAncestorOf(UiElement element)
	{
		ArgumentNullException.ThrowIfNull(element);
		for (UiElement? node = element.Parent; node is not null; node = node.Parent)
			if (node == this)
				return true;
		return false;
	}

	/// <inheritdoc/>
	public override UiElement? HitTest(Vector2 point)
	{
		if (IsDisposed || !IsVisible || IsDisabled || IsLocked || !Contains(point))
			return null;
		for (int index = _children.Count - 1; index >= 0; index--)
		{
			UiElement? hit = _children[index].HitTest(point);
			if (hit is not null)
				return hit;
		}
		return Focusable ? this : null;
	}

	/// <inheritdoc/>
	public override void Update(float deltaSeconds)
	{
		foreach (UiElement child in _children)
			child.Update(deltaSeconds);
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (!IsVisible || IsDisposed)
			return;
		base.Draw(drawList);
		foreach (UiElement child in _children)
			child.Draw(drawList);
	}

	/// <summary>
	/// Disposes the panel and every child element.
	/// </summary>
	/// <param name="disposing">Whether managed resources are being released.</param>
	protected override void Dispose(bool disposing)
	{
		if (IsDisposed)
			return;
		UiElement[] children = [.. _children];
		_children.Clear();
		foreach (UiElement child in children)
			child.Parent = null;
		if (disposing)
			foreach (UiElement child in children)
				child.Dispose();
		base.Dispose(disposing);
	}
}
