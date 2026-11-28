using System.Numerics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// The account entry from <c>0x00762224</c>: the input prompt, the user-id and password fields and
/// the confirm and cancel buttons.
/// </summary>
public sealed class TitleRegisterDialog : IDisposable
{
	/// <summary>The observed dialog position from the data image at <c>0x00974E20</c>.</summary>
	public static readonly Vector2 PanelPosition = new(140f, 330f);

	/// <summary>The observed dialog size from the data image at <c>0x00974E28</c>.</summary>
	public static readonly Vector2 PanelSize = new(360f, 100f);

	/// <summary>The top of the first row, taken from the user-id edit position written at <c>0x00762224</c>.</summary>
	public const float RowTop = 346f;

	/// <summary>The row step of the four rows.</summary>
	public const float RowHeight = 20f;

	/// <summary>The left edge of the value column, taken from the edit positions <c>(316, 346)</c> and <c>(316, 366)</c> set at <c>0x007624E0</c>.</summary>
	public const float ValueColumn = 316f;

	/// <summary>The number of characters the password row shows when the network flag is set.</summary>
	public const int NetworkPasswordDisplayLength = 8;

	private const int UserIdRow = 0;
	private const int PasswordRow = 1;
	private const int ConfirmRow = 2;
	private const int NoEdit = -1;

	private readonly LoginDialogFrame? _frame;
	private readonly UiLabel _header;
	private readonly UiLabel _userIdLabel;
	private readonly UiLabel _passwordLabel;
	private readonly UiLabel _userIdValueLabel;
	private readonly UiLabel _passwordValueLabel;
	private readonly UiEditBox _userIdEditor;
	private readonly UiEditBox _passwordEditor;
	private readonly UiListWindow _buttons;
	private string _userId = string.Empty;
	private string _password = string.Empty;
	private int _index;
	private int _editing = NoEdit;
	private bool _disposed;

	/// <summary>
	/// Builds the prompt, the two value rows, the two editors and the two buttons.
	/// </summary>
	/// <param name="text">The account text table.</param>
	/// <param name="surface">The surface that measures and draws the text.</param>
	/// <param name="frame">The optional title skin installed over the dialog rectangle.</param>
	/// <param name="networkMode">Whether the network flag at <c>0x0082D2F8</c> is set.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public TitleRegisterDialog(GameText text, IUiTextSurface surface, LoginDialogFrame? frame = null, bool networkMode = false)
	{
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(surface);
		NetworkMode = networkMode;
		_frame = frame;
		if (_frame is not null)
			_frame.RowAreaTop = RowTop - PanelPosition.Y;
		_header = CreateHeader(text.GetLoginScreenText(LoginScreenText.InputUserId), surface, _frame?.PanelHeaderWidth ?? LoginDialogFrame.HeaderWidth);
		_userIdLabel = CreateLabel(text.GetLoginScreenText(LoginScreenText.UserId), new Vector2(PanelPosition.X + 10f, RowTop), new Vector2(60f, RowHeight), surface);
		_passwordLabel = CreateLabel(text.GetLoginScreenText(LoginScreenText.Password), new Vector2(PanelPosition.X + 10f, RowTop + RowHeight), new Vector2(60f, RowHeight), surface);
		Vector2 valueSize = new(PanelPosition.X + PanelSize.X - ValueColumn - 10f, RowHeight);
		_userIdValueLabel = CreateLabel(string.Empty, new Vector2(ValueColumn, RowTop), valueSize, surface);
		_passwordValueLabel = CreateLabel(string.Empty, new Vector2(ValueColumn, RowTop + RowHeight), valueSize, surface);
		_userIdEditor = CreateField(new Vector2(ValueColumn, RowTop), valueSize, surface, null);
		_passwordEditor = CreateField(new Vector2(ValueColumn, RowTop + RowHeight), valueSize, surface, '*');
		_buttons = new UiListWindow
		{
			Position = new Vector2(PanelPosition.X + 10f, RowTop + RowHeight * 2f),
			Size = new Vector2(PanelSize.X - 20f, RowHeight * 2f),
			ItemHeight = RowHeight,
			ScrollBarWidth = 0f,
			SelectionColor = 0x00000000u,
			SelectedTextColor = 0xFFFFFFFFu,
		};
		_buttons.SetItems(
		[
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Confirm), true, 0, 0xFFFFFFFFu, centered: true),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Cancel), true, 1, 0xFFFFFFFFu, centered: true),
		]);
		_buttons.TextSurface = surface;
		_userIdEditor.MaxLength = UserIdLimit;
		_passwordEditor.MaxLength = PasswordLimit;
		Select(0);
	}

	/// <summary>Gets whether the network flag at <c>0x0082D2F8</c> is set.</summary>
	public bool NetworkMode { get; }

	/// <summary>Gets the user-id length limit written by <c>0x00762D2C</c>.</summary>
	public int UserIdLimit => NetworkMode ? 12 : 16;

	/// <summary>Gets the password length limit written by <c>0x00762D00</c>.</summary>
	public int PasswordLimit => 16;

	/// <summary>Gets the number of asterisks the password row can show.</summary>
	public int PasswordDisplayLimit => NetworkMode ? NetworkPasswordDisplayLength : 16;

	/// <summary>Gets the selected row: user id, password, confirm or cancel.</summary>
	public int SelectedRow => _index;

	/// <summary>Gets whether a text row is being edited in its popup.</summary>
	public bool IsEditing => _editing != NoEdit;

	/// <summary>Gets or sets the callback that plays a sound-effect identifier.</summary>
	public Action<int>? SoundPlayer { get; set; }

	/// <summary>Gets the entered account name.</summary>
	public string UserId => _userId;

	/// <summary>Gets the entered password.</summary>
	public string Password => _password;

	/// <summary>Gets whether the confirm action was accepted.</summary>
	public bool Confirmed { get; private set; }

	/// <summary>Gets whether the dialog was cancelled.</summary>
	public bool Cancelled { get; private set; }

	/// <summary>Moves between rows, edits the text rows in their popup and answers the prompt.</summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	[Original(0x007624E0)]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		if (Confirmed || Cancelled)
			return;
		if (_editing != NoEdit)
		{
			UpdateEdit(input);
			return;
		}
		if (input.WasActionPressed(InputAction.Cancel))
		{
			SoundPlayer?.Invoke(UiSounds.Cancel);
			Cancelled = true;
			return;
		}
		if (input.WasActionPressed(InputAction.MoveForward))
		{
			Select((_index + 3) % 4);
			SoundPlayer?.Invoke(UiSounds.Select);
		}
		else if (input.WasActionPressed(InputAction.MoveBackward))
		{
			Select((_index + 1) % 4);
			SoundPlayer?.Invoke(UiSounds.Select);
		}
		if (input.WasActionPressed(InputAction.Confirm))
		{
			SoundPlayer?.Invoke(UiSounds.Activate);
			Activate(_index);
		}
	}

	/// <summary>Adds the panel, labels, values, popup editor and buttons to the draw list.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		if (_frame is not null)
			_frame.Draw(draw, _editing == NoEdit ? _index : -1);
		else
			draw.Add(new UiQuad(PanelPosition, PanelSize, new Vector4(0f, 0f, 1f, 1f), null, 0xE0101010u));
		_header.Draw(draw);
		_userIdLabel.Draw(draw);
		_passwordLabel.Draw(draw);
		if (_editing == UserIdRow)
			_userIdEditor.Draw(draw);
		else
			_userIdValueLabel.Draw(draw);
		if (_editing == PasswordRow)
			_passwordEditor.Draw(draw);
		else
			_passwordValueLabel.Draw(draw);
		_buttons.Draw(draw);
	}

	/// <summary>Releases the child controls. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_frame?.Dispose();
		_header.Dispose();
		_userIdLabel.Dispose();
		_passwordLabel.Dispose();
		_userIdValueLabel.Dispose();
		_passwordValueLabel.Dispose();
		_userIdEditor.Dispose();
		_passwordEditor.Dispose();
		_buttons.Dispose();
	}

	/// <summary>
	/// Creates the orange header label. It covers the header pill and centres its text across the pill and vertically within it, as the title menu's header does.
	/// </summary>
	private static UiLabel CreateHeader(string text, IUiTextSurface surface, float headerWidth)
	{
		UiLabel header = new()
		{
			Position = PanelPosition - new Vector2(0f, LoginDialogFrame.HeaderOverhang),
			Size = new Vector2(headerWidth, LoginDialogFrame.HeaderHeight),
			TextSurface = surface,
		};
		header.SetText(text);
		header.SetTextColor(0xFF000000u);
		header.TextOffset = new Vector2(
			MathF.Max(0f, (headerWidth - surface.Measure(text)) * 0.5f),
			(LoginDialogFrame.HeaderHeight - BitmapFont.GlyphHeight) * 0.5f);
		return header;
	}

	private static UiLabel CreateLabel(string text, Vector2 position, Vector2 size, IUiTextSurface surface)
	{
		UiLabel label = new() { Position = position, Size = size };
		label.SetText(text);
		label.TextSurface = surface;
		return label;
	}

	private static UiEditBox CreateField(Vector2 position, Vector2 size, IUiTextSurface surface, char? maskCharacter)
	{
		UiEditBox field = new()
		{
			Position = position,
			Size = size,
			MaskCharacter = maskCharacter,
			Focusable = true,
			TextSurface = surface,
			TextOffset = new Vector2(2f, 2f),
		};
		return field;
	}

	private void Select(int index)
	{
		_index = index;
		_buttons.SelectedIndex = index >= ConfirmRow ? index - ConfirmRow : -1;
	}

	private void Activate(int row)
	{
		switch (row)
		{
			case UserIdRow:
				BeginEdit(_userIdEditor, _userId, UserIdRow);
				break;
			case PasswordRow:
				BeginEdit(_passwordEditor, _password, PasswordRow);
				break;
			case ConfirmRow:
				Confirmed = true;
				break;
			default:
				Cancelled = true;
				break;
		}
	}

	private void BeginEdit(UiEditBox editor, string value, int row)
	{
		editor.SetText(value);
		editor.SetFocus();
		editor.BeginEdit();
		_editing = row;
	}

	private void UpdateEdit(InputManager input)
	{
		UiEditBox editor = _editing == UserIdRow ? _userIdEditor : _passwordEditor;
		if (input.WasActionPressed(InputAction.Cancel))
		{
			editor.CancelEdit();
			editor.ClearFocus();
			_editing = NoEdit;
			return;
		}
		if (input.WasActionPressed(InputAction.Confirm))
		{
			CommitEdit(editor);
			return;
		}
		ReadText(input.Keyboard, editor);
	}

	private void CommitEdit(UiEditBox editor)
	{
		if (_editing == UserIdRow)
		{
			editor.CommitInput();
			_userId = editor.Text;
			_userIdValueLabel.SetText(_userId);
		}
		else
		{
			_password = editor.Text;
			_passwordValueLabel.SetText(new string('*', Math.Min(_password.Length, PasswordDisplayLimit)));
		}
		editor.ClearFocus();
		_editing = NoEdit;
	}

	private static void ReadText(KeyboardInput keyboard, UiEditBox field)
	{
		if (keyboard.WasKeyPressed(0x0E))
			field.OnEvent(UiEvent.KeyDown(GameKey.Backspace));
		if (TryReadCharacter(keyboard, out char character))
			field.OnEvent(UiEvent.Text(character));
	}

	private static bool TryReadCharacter(KeyboardInput keyboard, out char character)
	{
		bool shift = keyboard.IsKeyDown(0x2A) || keyboard.IsKeyDown(0x36);
		for (int scan = 0x02; scan <= 0x0B; scan++)
		{
			if (keyboard.WasKeyPressed(scan))
			{
				character = (char)('1' + (scan - 0x02));
				if (scan == 0x0B)
					character = '0';
				return true;
			}
		}
		foreach ((int scan, char lower) in Letters)
		{
			if (keyboard.WasKeyPressed(scan))
			{
				character = shift ? char.ToUpperInvariant(lower) : lower;
				return true;
			}
		}
		character = '\0';
		return false;
	}

	private static readonly (int Scan, char Lower)[] Letters =
	[
		(0x1E, 'a'), (0x30, 'b'), (0x2E, 'c'), (0x20, 'd'), (0x12, 'e'), (0x21, 'f'),
		(0x22, 'g'), (0x23, 'h'), (0x17, 'i'), (0x24, 'j'), (0x25, 'k'), (0x26, 'l'),
		(0x32, 'm'), (0x31, 'n'), (0x18, 'o'), (0x19, 'p'), (0x10, 'q'), (0x13, 'r'),
		(0x1F, 's'), (0x14, 't'), (0x16, 'u'), (0x2F, 'v'), (0x11, 'w'), (0x2D, 'x'),
		(0x15, 'y'), (0x2C, 'z'),
	];
}
