using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// A vertical scroll bar over a content extent and a visible page extent.
/// </summary>
/// <remarks>
/// The original keeps the current offset, the target offset and a three-frame ease inside the list
/// window and moves two child scroll elements. This type exposes that scroll state as a standalone
/// element; the caller supplies the track and thumb colours and the size.
/// </remarks>
public class UiScrollBar : UiControl
{
	private float _contentSize;
	private float _pageSize;
	private float _value;
	private float _target;
	private int _transitionFrames;
	private bool _dragging;
	private float _grabOffset;

	/// <summary>
	/// Gets or sets the total scrollable extent in pixels.
	/// </summary>
	public float ContentSize
	{
		get => _contentSize;
		set
		{
			_contentSize = MathF.Max(0f, value);
			Clamp();
		}
	}

	/// <summary>
	/// Gets or sets the visible extent in pixels.
	/// </summary>
	public float PageSize
	{
		get => _pageSize;
		set
		{
			_pageSize = MathF.Max(0f, value);
			Clamp();
		}
	}

	/// <summary>
	/// Gets the current offset in pixels.
	/// </summary>
	public float Value => _value;

	/// <summary>
	/// Gets the target offset in pixels.
	/// </summary>
	public float Target => _target;

	/// <summary>
	/// Gets the largest offset the bar accepts.
	/// </summary>
	public float MaxValue => MathF.Max(0f, _contentSize - _pageSize);

	/// <summary>
	/// Gets or sets the minimum thumb length in pixels.
	/// </summary>
	public float MinimumThumbSize { get; set; } = 8f;

	/// <summary>
	/// Gets or sets the wheel distance in pixels per notch.
	/// </summary>
	public float WheelStep { get; set; } = 20f;

	/// <summary>
	/// Gets or sets the thumb colour in 0xAARRGGBB form.
	/// </summary>
	public uint ThumbColor { get; set; } = 0xFFB0B0B0;

	/// <summary>
	/// Gets the thumb top offset from the element top in pixels.
	/// </summary>
	public float ThumbOffset
	{
		get
		{
			float travel = MathF.Max(0f, Size.Y - ThumbSize);
			return MaxValue <= 0f ? 0f : travel * (_value / MaxValue);
		}
	}

	/// <summary>
	/// Gets the thumb length in pixels.
	/// </summary>
	public float ThumbSize
	{
		get
		{
			if (_contentSize <= 0f || _contentSize <= _pageSize)
				return Size.Y;
			return MathF.Min(Size.Y, MathF.Max(MathF.Min(MinimumThumbSize, Size.Y), Size.Y * (_pageSize / _contentSize)));
		}
	}

	/// <summary>
	/// Sets the scroll target and starts the original three-frame ease.
	/// </summary>
	/// <param name="target">The requested offset in pixels.</param>
	[Original(0x0071522C)]
	public void SetTarget(float target)
	{
		_target = Math.Clamp(target, 0f, MaxValue);
		_transitionFrames = 3;
	}

	/// <summary>
	/// Moves the target by a signed pixel distance.
	/// </summary>
	/// <param name="distance">The signed distance in pixels.</param>
	public void ScrollBy(float distance) => SetTarget(_target + distance);

	/// <summary>
	/// Advances the eased offset toward the target.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	[Original(0x00715178)]
	public override void Update(float deltaSeconds)
	{
		if (_transitionFrames > 0)
		{
			_value = Math.Clamp(_value + ((_target - _value) / (_transitionFrames + 1f)), 0f, MaxValue);
			_transitionFrames--;
		}
		else
		{
			_value = _target;
		}
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.MouseWheel:
				ScrollBy(-uiEvent.WheelDelta / 120f * WheelStep);
				return true;
			case UiEventKind.MouseDown when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				_dragging = true;
				_grabOffset = uiEvent.Position.Y - (Position.Y + ThumbOffset);
				return true;
			case UiEventKind.MouseMove when _dragging:
				float travel = MathF.Max(0f, Size.Y - ThumbSize);
				if (travel > 0f && MaxValue > 0f)
				{
					float thumbTop = Math.Clamp(uiEvent.Position.Y - Position.Y - _grabOffset, 0f, travel);
					_target = Math.Clamp(thumbTop / travel * MaxValue, 0f, MaxValue);
					_value = _target;
					_transitionFrames = 0;
				}
				return true;
			case UiEventKind.MouseUp when uiEvent.Buttons == MouseButtons.Left:
				_dragging = false;
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.PageUp:
				ScrollBy(-MathF.Max(_pageSize, WheelStep));
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.PageDown:
				ScrollBy(MathF.Max(_pageSize, WheelStep));
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.Home:
				SetTarget(0f);
				return true;
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key == GameKey.End:
				SetTarget(MaxValue);
				return true;
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		base.Draw(drawList);
		if (_contentSize <= 0f)
			return;
		float size = ThumbSize;
		UiQuad thumb = new UiQuad(
			new Vector2(Position.X, Position.Y + ThumbOffset),
			new Vector2(Size.X, size),
			TextureCoordinates,
			null,
			ThumbColor).Clip(ClipBounds);
		if (!thumb.IsEmpty)
			drawList.Add(thumb);
	}

	private void Clamp()
	{
		_value = Math.Clamp(_value, 0f, MaxValue);
		_target = Math.Clamp(_target, 0f, MaxValue);
	}
}
