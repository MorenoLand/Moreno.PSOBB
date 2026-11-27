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

	private readonly LoginDialogFrame? _frame;
	private readonly UiLabel _header;
	private readonly UiLabel _userIdLabel;
	private readonly UiLabel _passwordLabel;
	private readonly UiEditBox _userId;
	private readonly UiEditBox _password;
	private readonly UiListWindow _buttons;
	private int _index;
	private bool _disposed;

	/// <summary>
	/// Builds the prompt, the two fields and the two buttons.
	/// </summary>
	/// <param name="text">The account text table.</param>
	/// <param name="surface">The surface that measures and draws the text.</param>
	/// <param name="frame">The optional title skin installed over the dialog rectangle.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public TitleRegisterDialog(GameText text, IUiTextSurface surface, LoginDialogFrame? frame = null)
	{
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(surface);
		_frame = frame;
		_header = CreateLabel(text.GetLoginScreenText(LoginScreenText.InputUserId), PanelPosition + new Vector2(10f, 2f), new Vector2(PanelSize.X - 20f, 20f), surface);
		_userIdLabel = CreateLabel(text.GetLoginScreenText(LoginScreenText.UserId), PanelPosition + new Vector2(10f, 22f), new Vector2(60f, 20f), surface);
		_passwordLabel = CreateLabel(text.GetLoginScreenText(LoginScreenText.Password), PanelPosition + new Vector2(10f, 42f), new Vector2(60f, 20f), surface);
		_userId = CreateField(PanelPosition + new Vector2(70f, 20f), new Vector2(PanelSize.X - 80f, 20f), surface);
		_password = CreateField(PanelPosition + new Vector2(70f, 40f), new Vector2(PanelSize.X - 80f, 20f), surface);
		_buttons = new UiListWindow
		{
			Position = PanelPosition + new Vector2(10f, 62f),
			Size = new Vector2(PanelSize.X - 20f, 38f),
			ItemHeight = 19f,
			ScrollBarWidth = 0f,
			SelectionColor = 0x60000000u,
			SelectedTextColor = 0xFFFFCC33u,
		};
		_buttons.SetItems(
		[
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Confirm), true, 0, 0xFFFFFFFFu, centered: true),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Cancel), true, 1, 0xFFFFFFFFu, centered: true),
		]);
		_buttons.TextSurface = surface;
		Select(0);
	}

	/// <summary>Gets the entered account name.</summary>
	public string UserId => _userId.Text;

	/// <summary>Gets the entered password.</summary>
	public string Password => _password.Text;

	/// <summary>Gets whether the confirm action was accepted.</summary>
	public bool Confirmed { get; private set; }

	/// <summary>Gets whether the dialog was cancelled.</summary>
	public bool Cancelled { get; private set; }

	/// <summary>Moves between fields and buttons, reads typed characters and answers the prompt.</summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		if (Confirmed || Cancelled)
			return;
		ReadText(input.Keyboard);
		if (input.WasActionPressed(InputAction.Cancel))
		{
			Cancelled = true;
			return;
		}
		if (input.WasActionPressed(InputAction.MoveForward))
			Select((_index + 3) % 4);
		else if (input.WasActionPressed(InputAction.MoveBackward))
			Select((_index + 1) % 4);
		if (input.WasActionPressed(InputAction.Confirm) && _index >= 2)
			Activate(_index - 2);
	}

	/// <summary>Adds the panel, labels, fields and buttons to the draw list.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		if (_frame is not null)
			_frame.Draw(draw, -1);
		else
			draw.Add(new UiQuad(PanelPosition, PanelSize, new Vector4(0f, 0f, 1f, 1f), null, 0xE0101010u));
		_header.Draw(draw);
		_userIdLabel.Draw(draw);
		_passwordLabel.Draw(draw);
		_userId.Draw(draw);
		_password.Draw(draw);
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
		_userId.Dispose();
		_password.Dispose();
		_buttons.Dispose();
	}

	private static UiLabel CreateLabel(string text, Vector2 position, Vector2 size, IUiTextSurface surface)
	{
		UiLabel label = new() { Position = position, Size = size };
		label.SetText(text);
		label.TextSurface = surface;
		return label;
	}

	private static UiEditBox CreateField(Vector2 position, Vector2 size, IUiTextSurface surface)
	{
		UiEditBox field = new()
		{
			Position = position,
			Size = size,
			MaxLength = 16,
			Focusable = true,
			TextSurface = surface,
			TextOffset = new Vector2(2f, 2f),
		};
		return field;
	}

	private void Select(int index)
	{
		CommitField(_index);
		_index = index;
		_userId.ClearFocus();
		_password.ClearFocus();
		if (index is 0 or 1)
		{
			UiEditBox field = index == 0 ? _userId : _password;
			field.SetFocus();
			field.BeginEdit();
		}
		_buttons.SelectedIndex = index >= 2 ? index - 2 : -1;
	}

	private void CommitField(int index)
	{
		if (index == 0)
			_userId.CommitInput();
		else if (index == 1)
			_password.CommitInput();
	}

	private void Activate(int button)
	{
		if (button == 0)
			Confirmed = true;
		else
			Cancelled = true;
	}

	private void ReadText(KeyboardInput keyboard)
	{
		if (_index is not (0 or 1))
			return;
		UiEditBox field = _index == 0 ? _userId : _password;
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
