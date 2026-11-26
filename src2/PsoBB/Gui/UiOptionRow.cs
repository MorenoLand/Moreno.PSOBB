using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// One option row: a label and a selected value that advances with the left and right controls.
/// </summary>
/// <remarks>
/// The original row keeps its values in a child list, positions each child forty pixels apart and draws only the selected child. The row reports activation and cancellation separately so the owning panel can persist a value on confirmation and leave it unpersisted on cancellation.
/// </remarks>
public sealed class UiOptionRow : UiControl
{
	private readonly List<string> _values = [];
	private int _selectedValue;

	/// <summary>Creates an empty row with the original twenty-pixel height.</summary>
	public UiOptionRow() => Size = new Vector2(0f, 20f);

	/// <summary>Raised after <see cref="SelectedValue"/> changes.</summary>
	public event Action<UiOptionRow, int>? ValueChanged;

	/// <summary>Gets the row label.</summary>
	public string Label { get; private set; } = string.Empty;

	/// <summary>Gets the selectable value texts in their original order.</summary>
	public IReadOnlyList<string> Values => _values;

	/// <summary>Gets or sets the distance between value slots in pixels.</summary>
	public float ValueSpacing { get; set; } = 40f;

	/// <summary>Gets or sets the selected-value background colour in 0xAARRGGBB form.</summary>
	public uint SelectionColor { get; set; } = 0xFF204060;

	/// <summary>Gets or sets the selected-value text colour in 0xAARRGGBB form.</summary>
	public uint SelectedTextColor { get; set; } = 0xFFFFFFFF;

	/// <summary>Gets the selected value index.</summary>
	public int SelectedValue => _selectedValue;

	/// <summary>Gets a value indicating whether the row was confirmed.</summary>
	public bool IsActivated { get; private set; }

	/// <summary>Gets a value indicating whether the row was cancelled.</summary>
	public bool IsCanceled { get; private set; }

	/// <summary>Replaces the row label.</summary>
	/// <param name="label">The label; <see langword="null"/> becomes the empty string.</param>
	public void SetLabel(string? label) => Label = label ?? string.Empty;

	/// <summary>Appends a selectable value.</summary>
	/// <param name="value">The value text; <see langword="null"/> becomes the empty string.</param>
	public void AddValue(string? value) => _values.Add(value ?? string.Empty);

	/// <summary>Selects a value index.</summary>
	/// <param name="value">The zero-based value index.</param>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the values.</exception>
	public void SetSelectedValue(int value)
	{
		if ((uint)value >= (uint)_values.Count)
			throw new ArgumentOutOfRangeException(nameof(value));
		if (_selectedValue == value)
			return;
		_selectedValue = value;
		ValueChanged?.Invoke(this, value);
	}

	/// <summary>Moves to the previous value, wrapping at the start.</summary>
	/// <returns><see langword="true"/> when the selection moved.</returns>
	public bool SelectPrevious()
	{
		if (_values.Count == 0)
			return false;
		SetSelectedValue((_selectedValue + _values.Count - 1) % _values.Count);
		return true;
	}

	/// <summary>Moves to the next value, wrapping at the end.</summary>
	/// <returns><see langword="true"/> when the selection moved.</returns>
	public bool SelectNext()
	{
		if (_values.Count == 0)
			return false;
		SetSelectedValue((_selectedValue + 1) % _values.Count);
		return true;
	}

	/// <summary>Confirms the row.</summary>
	/// <returns><see langword="true"/> when the row accepted the confirmation.</returns>
	public bool Activate()
	{
		if (!IsFocusable || _values.Count == 0)
			return false;
		IsActivated = true;
		return true;
	}

	/// <summary>Cancels the row without discarding the current value.</summary>
	public void Cancel() => IsCanceled = true;

	/// <summary>Clears the activation and cancellation results.</summary>
	public void ClearResult()
	{
		IsActivated = false;
		IsCanceled = false;
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Left:
				return SelectPrevious();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Right:
				return SelectNext();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key is GameKey.Return or GameKey.Space:
				return Activate();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Escape:
				Cancel();
				return true;
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		base.Draw(drawList);
		if (TextSurface is null)
			return;
		TextSurface.Draw(drawList, Label, Position, TextColor, Size.X);
		if ((uint)_selectedValue >= (uint)_values.Count)
			return;
		string value = _values[_selectedValue];
		Vector2 valuePosition = Position + new Vector2(_selectedValue * ValueSpacing, 0f);
		if (IsFocused || IsHighlighted)
		{
			float width = TextSurface.Measure(value);
			if (width > 0f)
				drawList.Add(new UiQuad(valuePosition, new Vector2(width, Size.Y), TextureCoordinates, null, SelectionColor));
		}
		TextSurface.Draw(drawList, value, valuePosition, SelectedTextColor, 0f);
	}
}
