using System.Numerics;
using System.Text;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// A single-line text entry control with a caret, a maximum length and space-trimming commit.
/// </summary>
/// <remarks>
/// The original obtains composed text from the Windows input method and, on completion, removes
/// ASCII and full-width spaces before storing the line. The portable control takes the same text as
/// <see cref="UiEvent.TextInput"/> messages; the platform host supplies the composition result.
/// </remarks>
public class UiEditBox : UiControl
{
	private int _caret;
	private string _original = string.Empty;
	private bool _editing;

	/// <summary>Gets or sets the maximum number of characters; zero means no limit.</summary>
	public int MaxLength { get; set; }

	/// <summary>Gets or sets the character used to mask rendered text.</summary>
	public char? MaskCharacter { get; set; }

	/// <summary>Gets a value indicating whether the box is accepting characters.</summary>
	public bool IsEditing => _editing;

	/// <summary>Gets the caret position in characters.</summary>
	public int CaretIndex => _caret;

	/// <summary>Gets or sets the caret colour in 0xAARRGGBB form.</summary>
	public uint CaretColor { get; set; } = 0xFFFFFFFF;

	/// <summary>Gets or sets the caret width in pixels.</summary>
	public float CaretWidth { get; set; } = 1f;

	/// <summary>Gets or sets the vertical caret inset in pixels.</summary>
	public float CaretInset { get; set; } = 2f;

	/// <summary>
	/// Starts editing and places the caret at the end of the current text.
	/// </summary>
	/// <returns><see langword="true"/> when the box can be edited.</returns>
	public bool BeginEdit()
	{
		if (!IsFocusable)
			return false;
		if (!_editing)
		{
			_editing = true;
			_original = Text;
		}
		_caret = Text.Length;
		return true;
	}

	/// <summary>
	/// Restores the text that was present when editing began.
	/// </summary>
	public void CancelEdit()
	{
		if (!_editing)
			return;
		SetText(_original);
		_caret = Text.Length;
		_editing = false;
	}

	/// <summary>
	/// Commits the line after removing ASCII and full-width spaces.
	/// </summary>
	[Original(0x00723BDC)]
	public void CommitInput()
	{
		if (!_editing)
			return;
		StringBuilder trimmed = new(Text.Length);
		foreach (char character in Text)
		{
			if (character == '\0')
				break;
			if (character != ' ' && character != '\u3000')
				trimmed.Append(character);
		}
		SetText(trimmed.ToString());
		_caret = Math.Min(_caret, Text.Length);
		_original = Text;
		_editing = false;
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		switch (uiEvent.Kind)
		{
			case UiEventKind.MouseDown when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				return true;
			case UiEventKind.MouseUp when uiEvent.Buttons == MouseButtons.Left && Contains(uiEvent.Position):
				return BeginEdit();
			case UiEventKind.TextInput when IsFocused:
				return Insert(uiEvent.Character);
			case UiEventKind.KeyDown when IsFocused:
				return OnKey(uiEvent.Key);
			default:
				return false;
		}
	}

	/// <inheritdoc/>
	public override void Draw(UiDrawList drawList)
	{
		base.Draw(drawList);
		string displayText = MaskCharacter is char mask ? new string(mask, Text.Length) : Text;
		DrawText(drawList, displayText, TextColor, Size.X);
		if (!_editing || !IsFocused)
			return;
		float caret = TextSurface?.Measure(displayText[..Math.Clamp(_caret, 0, displayText.Length)]) ?? 0f;
		float inset = MathF.Max(0f, CaretInset);
		UiQuad quad = new UiQuad(
			new Vector2(Position.X + TextOffset.X + caret, Position.Y + TextOffset.Y + inset),
			new Vector2(CaretWidth, MathF.Max(0f, Size.Y - (inset * 2f))),
			TextureCoordinates,
			null,
			CaretColor).Clip(ClipBounds);
		if (!quad.IsEmpty)
			drawList.Add(quad);
	}

	private bool OnKey(GameKey key)
	{
		switch (key)
		{
			case GameKey.Return:
				CommitInput();
				return true;
			case GameKey.Escape:
				CancelEdit();
				return true;
			case GameKey.Backspace:
				return DeleteBeforeCaret();
			case GameKey.Delete:
				return DeleteAtCaret();
			case GameKey.Left:
				if (_caret <= 0)
					return false;
				_caret--;
				return true;
			case GameKey.Right:
				if (_caret >= Text.Length)
					return false;
				_caret++;
				return true;
			case GameKey.Home:
				if (_caret == 0)
					return false;
				_caret = 0;
				return true;
			case GameKey.End:
				if (_caret == Text.Length)
					return false;
				_caret = Text.Length;
				return true;
			default:
				return false;
		}
	}

	private bool EnsureEditing()
	{
		if (_editing)
			return true;
		return BeginEdit();
	}

	private bool Insert(char character)
	{
		if (!EnsureEditing() || char.IsControl(character))
			return false;
		if (MaxLength > 0 && Text.Length >= MaxLength)
			return false;
		int caret = Math.Clamp(_caret, 0, Text.Length);
		SetText(Text.Insert(caret, character.ToString()));
		_caret = caret + 1;
		return true;
	}

	private bool DeleteBeforeCaret()
	{
		if (!EnsureEditing() || _caret <= 0)
			return false;
		int caret = Math.Clamp(_caret, 0, Text.Length);
		if (caret <= 0)
			return false;
		SetText(Text.Remove(caret - 1, 1));
		_caret = caret - 1;
		return true;
	}

	private bool DeleteAtCaret()
	{
		if (!EnsureEditing())
			return false;
		int caret = Math.Clamp(_caret, 0, Text.Length);
		if (caret >= Text.Length)
			return false;
		SetText(Text.Remove(caret, 1));
		return true;
	}
}
