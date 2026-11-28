using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// A vertical list of labelled rows with a selected row, wrapping navigation and an eased scroll.
/// </summary>
/// <remarks>
/// The original menu list keeps its rows in a pointer array, skips rows whose enabled bit is clear,
/// wraps at either end unless the no-wrap flag is set and eases the scroll offset over three frames.
/// The row height defaults to the twenty-pixel step the original uses when it derives the scroll
/// offset from a row index.
/// </remarks>
public class UiListWindow : UiControl
{
	private readonly List<UiListItem> _items = [];
	private readonly UiScrollBar _scrollBar = new() { Color = 0x00000000 };
	private int _selectedIndex = -1;
	private int _pressedIndex = -1;

	/// <summary>
	/// Raised after the selected row changes.
	/// </summary>
	public event Action<UiListWindow, int>? SelectionChanged;

	/// <summary>
	/// Raised when the selected row is activated.
	/// </summary>
	public event Action<UiListWindow, UiListItem>? ItemActivated;

	/// <summary>Gets the rows in drawing order.</summary>
	public IReadOnlyList<UiListItem> Items => _items;

	/// <summary>Gets the scroll state used by the list.</summary>
	public UiScrollBar ScrollBar => _scrollBar;

	/// <summary>Gets or sets the row height in pixels.</summary>
	public float ItemHeight { get; set; } = 20f;

	/// <summary>Gets or sets the selection height; zero uses <see cref="ItemHeight"/>.</summary>
	public float SelectionHeight { get; set; }

	/// <summary>Gets or sets the width reserved for the scroll bar in pixels.</summary>
	public float ScrollBarWidth { get; set; } = 12f;

	/// <summary>Gets or sets a value indicating whether navigation wraps at the ends.</summary>
	public bool WrapSelection { get; set; } = true;

	/// <summary>Gets or sets the selected-row fill colour in 0xAARRGGBB form.</summary>
	public uint SelectionColor { get; set; } = 0xFF204060;

	/// <summary>Gets or sets the selected-row text colour in 0xAARRGGBB form.</summary>
	public uint SelectedTextColor { get; set; } = 0xFFFFFFFF;

	/// <summary>Gets or sets the disabled-row text colour in 0xAARRGGBB form.</summary>
	public uint DisabledTextColor { get; set; } = 0xFF808080;

	/// <summary>
	/// Gets or sets the selected row index, or minus one when nothing is selected.
	/// </summary>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the rows.</exception>
	public int SelectedIndex
	{
		get => _selectedIndex;
		set
		{
			if (value < -1 || value >= _items.Count)
				throw new ArgumentOutOfRangeException(nameof(value));
			if (_selectedIndex == value)
				return;
			_selectedIndex = value;
			SelectionChanged?.Invoke(this, value);
		}
	}

	/// <summary>
	/// Gets the data value stored beside the selected row, or minus one when no row is selected.
	/// </summary>
	public int SelectedData => _selectedIndex >= 0 && _selectedIndex < _items.Count ? _items[_selectedIndex].Data : -1;

	/// <summary>
	/// Replaces the rows and selects the first enabled row when the old selection no longer fits.
	/// </summary>
	/// <param name="items">The new rows.</param>
	/// <exception cref="ArgumentNullException"><paramref name="items"/> is null.</exception>
	public void SetItems(IEnumerable<UiListItem> items)
	{
		ArgumentNullException.ThrowIfNull(items);
		UiListItem[] rows = [.. items];
		_items.Clear();
		_items.AddRange(rows);
		_pressedIndex = -1;
		int previous = _selectedIndex;
		if (_selectedIndex < 0 || _selectedIndex >= _items.Count || !_items[_selectedIndex].Enabled)
			_selectedIndex = FirstEnabledIndex();
		LayoutScrollBar();
		ScrollToSelected();
		if (previous != _selectedIndex)
			SelectionChanged?.Invoke(this, _selectedIndex);
	}

	/// <summary>
	/// Moves selection to the next enabled row, wrapping unless disabled.
	/// </summary>
	/// <returns><see langword="true"/> when the selection moved.</returns>
	[Original(0x00736768)]
	public bool SelectNext() => MoveSelection(1);

	/// <summary>
	/// Moves selection to the previous enabled row, wrapping unless disabled.
	/// </summary>
	/// <returns><see langword="true"/> when the selection moved.</returns>
	[Original(0x007381E0)]
	public bool SelectPrevious() => MoveSelection(-1);

	/// <summary>
	/// Activates the selected row when it is enabled.
	/// </summary>
	/// <returns><see langword="true"/> when the row was activated.</returns>
	[Original(0x0073885C)]
	public bool ActivateSelected()
	{
		if (!IsFocusable || _selectedIndex < 0 || _selectedIndex >= _items.Count)
			return false;
		UiListItem item = _items[_selectedIndex];
		if (!item.Enabled)
			return false;
		ItemActivated?.Invoke(this, item);
		return true;
	}

	/// <summary>
	/// Scrolls the selected row into the visible page.
	/// </summary>
	[Original(0x007151DC)]
	public void ScrollToSelected()
	{
		if (_selectedIndex < 0)
			return;
		LayoutScrollBar();
		float top = _selectedIndex * ItemHeight;
		float bottom = top + ItemHeight;
		float viewTop = _scrollBar.Value;
		float viewBottom = viewTop + Size.Y;
		if (top < viewTop)
			_scrollBar.SetTarget(top);
		else if (bottom > viewBottom)
			_scrollBar.SetTarget(bottom - Size.Y);
	}

	/// <summary>
	/// Advances the scroll ease and keeps the scroll extent in step with the rows and size.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	public override void Update(float deltaSeconds)
	{
		LayoutScrollBar();
		_scrollBar.Update(deltaSeconds);
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.MouseDown when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				int pressed = IndexAt(uiEvent.Position);
				if (pressed < 0 || !_items[pressed].Enabled)
					return false;
				SelectedIndex = pressed;
				_pressedIndex = pressed;
				ScrollToSelected();
				return true;
			case UiEventKind.MouseUp when uiEvent.Buttons == MouseButtons.Left:
				int released = IndexAt(uiEvent.Position);
				bool activate = _pressedIndex >= 0 && released == _pressedIndex;
				_pressedIndex = -1;
				if (!activate)
					return false;
				SelectedIndex = released;
				return ActivateSelected();
			case UiEventKind.MouseWheel:
				LayoutScrollBar();
				return _scrollBar.OnEvent(uiEvent);
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Up:
				return SelectPrevious();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Down:
				return SelectNext();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.PageUp:
				_scrollBar.ScrollBy(-MathF.Max(Size.Y, ItemHeight));
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.PageDown:
				_scrollBar.ScrollBy(MathF.Max(Size.Y, ItemHeight));
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key is GameKey.Return or GameKey.Space:
				return ActivateSelected();
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (IsDisposed || !IsVisible)
			return;
		base.Draw(drawList);
		LayoutScrollBar();
		Vector4 clip = new(Position.X, Position.Y, Position.X + Size.X, Position.Y + Size.Y);
		float width = MathF.Max(0f, Size.X - ScrollBarWidth);
		for (int index = 0; index < _items.Count; index++)
		{
			float top = Position.Y + (index * ItemHeight) - _scrollBar.Value;
			if (top + ItemHeight <= Position.Y || top >= Position.Y + Size.Y)
				continue;
			if (index == _selectedIndex)
				drawList.Add(new UiQuad(
					new Vector2(Position.X, top),
					new Vector2(Size.X, SelectionHeight > 0f ? SelectionHeight : ItemHeight),
					TextureCoordinates,
					null,
					SelectionColor).Clip(clip));
			UiListItem item = _items[index];
			uint color = index == _selectedIndex
				? SelectedTextColor
				: item.Color ?? (item.Enabled ? TextColor : DisabledTextColor);
			float textX = Position.X + TextOffset.X;
			if (item.Centered && TextSurface is not null)
				textX = Position.X + MathF.Max(0f, (width - TextSurface.Measure(item.Text)) * 0.5f);
			TextSurface?.Draw(drawList, item.Text, new Vector2(textX, top + TextOffset.Y), color, width);
		}
		_scrollBar.Draw(drawList);
	}

	private bool MoveSelection(int step)
	{
		if (_items.Count == 0)
			return false;
		int current = _selectedIndex;
		for (int distance = 1; distance <= _items.Count; distance++)
		{
			int index = current + (step * distance);
			if (index < 0 || index >= _items.Count)
			{
				if (!WrapSelection)
					return false;
				index %= _items.Count;
				if (index < 0)
					index += _items.Count;
			}
			if (index == current)
				return false;
			if (!_items[index].Enabled)
				continue;
			SelectedIndex = index;
			ScrollToSelected();
			return true;
		}
		return false;
	}

	private int FirstEnabledIndex()
	{
		for (int index = 0; index < _items.Count; index++)
			if (_items[index].Enabled)
				return index;
		return -1;
	}

	private int IndexAt(Vector2 point)
	{
		if (point.Y < Position.Y || point.Y >= Position.Y + Size.Y)
			return -1;
		float offset = point.Y - Position.Y + _scrollBar.Value;
		int index = (int)MathF.Floor(offset / MathF.Max(1f, ItemHeight));
		return index >= 0 && index < _items.Count ? index : -1;
	}

	private void LayoutScrollBar()
	{
		_scrollBar.Position = new Vector2(Position.X + Size.X - ScrollBarWidth, Position.Y);
		_scrollBar.Size = new Vector2(ScrollBarWidth, Size.Y);
		_scrollBar.ContentSize = _items.Count * ItemHeight;
		_scrollBar.PageSize = Size.Y;
	}
}
