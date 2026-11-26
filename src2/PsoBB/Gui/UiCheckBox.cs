using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// A two-state or multi-state selector with a filled check square.
/// </summary>
/// <remarks>
/// The original interface stores a one-byte value, a value count and a group in a small selector
/// record and advances the value when the opposite direction is pressed. The portable control keeps
/// the value and count and draws the checked state as a filled inset quad; the caller supplies the
/// box size, colours and label text.
/// </remarks>
public class UiCheckBox : UiControl
{
	private int _value;
	private int _valueCount = 2;

	/// <summary>
	/// Gets or sets the number of selectable values.
	/// </summary>
	/// <exception cref="ArgumentOutOfRangeException">The count is less than one.</exception>
	public int ValueCount
	{
		get => _valueCount;
		set
		{
			if (value < 1)
				throw new ArgumentOutOfRangeException(nameof(value));
			_valueCount = value;
			_value = Math.Min(_value, value - 1);
		}
	}

	/// <summary>
	/// Gets or sets the selected value in the range zero to <see cref="ValueCount"/> minus one.
	/// </summary>
	/// <exception cref="ArgumentOutOfRangeException">The value is outside the count.</exception>
	public int Value
	{
		get => _value;
		set
		{
			if ((uint)value >= (uint)_valueCount)
				throw new ArgumentOutOfRangeException(nameof(value));
			_value = value;
		}
	}

	/// <summary>
	/// Gets or sets a value indicating whether the value is nonzero.
	/// </summary>
	public bool IsChecked
	{
		get => _value != 0;
		set => Value = value ? 1 : 0;
	}

	/// <summary>
	/// Gets or sets the inset of the check fill from each edge.
	/// </summary>
	public float CheckInset { get; set; } = 2f;

	/// <summary>
	/// Gets or sets the check fill colour in 0xAARRGGBB form.
	/// </summary>
	public uint CheckColor { get; set; } = 0xFFFFFFFF;

	/// <summary>
	/// Stores a selector value and count as the original selector record does.
	/// </summary>
	/// <param name="value">The value in the range zero to <paramref name="count"/> minus one.</param>
	/// <param name="count">The number of selectable values.</param>
	[Original(0x0073E5D4)]
	public void SetValue(int value, int count)
	{
		ArgumentOutOfRangeException.ThrowIfLessThan(count, 1);
		ArgumentOutOfRangeException.ThrowIfNegative(value);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(value, count);
		_valueCount = count;
		_value = value;
	}

	/// <summary>
	/// Advances the value by one, wrapping at the count, when the control accepts input.
	/// </summary>
	/// <returns><see langword="true"/> when the value changed.</returns>
	[Original(0x0073E60C)]
	public bool Toggle()
	{
		if (!IsFocusable)
			return false;
		int next = _value + 1;
		if (next >= _valueCount)
			next = 0;
		if (next == _value)
			return false;
		_value = next;
		return true;
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.MouseDown when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				return true;
			case UiEventKind.MouseUp when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				return Toggle();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key is GameKey.Return or GameKey.Space:
				return Toggle();
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		base.Draw(drawList);
		if (_value != 0)
		{
			float inset = MathF.Max(0f, CheckInset);
			drawList.Add(new UiQuad(
				Position + new Vector2(inset, inset),
				new Vector2(MathF.Max(0f, Size.X - (inset * 2f)), MathF.Max(0f, Size.Y - (inset * 2f))),
				TextureCoordinates,
				null,
				CheckColor));
		}
		DrawText(drawList, Text, TextColor, Size.X);
	}
}
