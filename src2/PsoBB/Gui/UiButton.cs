using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// A rectangular control that activates its callback on a completed click or a focused key press.
/// </summary>
/// <remarks>
/// The original button stores a callback pointer and invokes it when its activation message is
/// delivered. Pressing gives the highlighted state; releasing outside the rectangle cancels.
/// </remarks>
public class UiButton : UiControl
{
	private bool _pressed;

	/// <summary>
	/// Gets a value indicating whether the pointer is held on the button.
	/// </summary>
	public bool IsPressed => _pressed;

	/// <summary>
	/// Invokes the installed callback when the button accepts activation.
	/// </summary>
	/// <returns><see langword="true"/> when the callback was invoked.</returns>
	[Original(0x00713068)]
	public bool Activate()
	{
		if (!IsFocusable)
			return false;
		Callback?.Invoke(this);
		return true;
	}

	/// <summary>
	/// Clears a held press when the button becomes unavailable.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	public override void Update(float deltaSeconds)
	{
		if (!IsFocusable)
		{
			_pressed = false;
			ClearHighlighted();
		}
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.MouseDown when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				_pressed = true;
				SetHighlighted();
				return true;
			case UiEventKind.MouseMove:
				if (_pressed || Contains(uiEvent.Position))
					SetHighlighted();
				else
					ClearHighlighted();
				return false;
			case UiEventKind.MouseUp when uiEvent.Buttons == MouseButtons.Left:
				bool inside = Contains(uiEvent.Position);
				bool pressed = _pressed;
				_pressed = false;
				ClearHighlighted();
				return pressed && inside && Activate();
			case UiEventKind.KeyDown when IsFocused && uiEvent.Key is GameKey.Return or GameKey.Space:
				return Activate();
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		base.Draw(drawList);
		DrawText(drawList, Text, TextColor, Size.X);
	}
}
