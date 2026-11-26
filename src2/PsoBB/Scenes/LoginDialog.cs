using System.Numerics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// The account panel's four-row menu and its disabled key hint.
/// </summary>
/// <remarks>The rows resolve to unitxt list 41 strings 3 through 6 with row data 0 through 3; the hint is the data-image literal <c>[%s]</c> at <c>0x00974EBC</c>, stored as a disabled row with the yellow colour <c>0xFFFFCC33</c>.</remarks>
public sealed class LoginDialog : IDisposable
{
	/// <summary>The unitxt list that holds the account-panel strings.</summary>
	public const int TextList = GameText.LoginScreenList;

	/// <summary>The hint text stored in the data image at <c>0x00974EBC</c>.</summary>
	public const string HintFormat = "[%s]";

	/// <summary>The hint row colour from the original row setup.</summary>
	public const uint HintColor = 0xFFFFCC33;

	/// <summary>The row step used by the list.</summary>
	public const float RowHeight = 20f;

	/// <summary>The row data value of the start-game row.</summary>
	public const int StartGameData = 0;

	/// <summary>The row data value of the exit-game row.</summary>
	public const int ExitGameData = 1;

	/// <summary>The row data value of the patch-download row.</summary>
	public const int PatchDownloadData = 2;

	/// <summary>The row data value of the register-user row.</summary>
	public const int RegisterUserIdData = 3;

	/// <summary>The row data value of the hint row.</summary>
	public const int HintData = 4;

	private readonly UiListWindow _menu;
	private IUiTextSurface? _textSurface;
	private LoginDialogAction? _requestedAction;
	private bool _closed;
	private bool _disposed;

	/// <summary>
	/// Builds the four rows and the hint from the account text table.
	/// </summary>
	/// <param name="text">The locale text surface.</param>
	/// <param name="hintText">The hint row text; the data-image literal is used by default.</param>
	/// <param name="textSurface">The optional text surface used to measure and draw the rows.</param>
	/// <exception cref="ArgumentNullException"><paramref name="text"/> is null.</exception>
	public LoginDialog(GameText text, string hintText = HintFormat, IUiTextSurface? textSurface = null)
	{
		ArgumentNullException.ThrowIfNull(text);
		_menu = new UiListWindow
		{
			ItemHeight = RowHeight,
			ScrollBarWidth = 0f,
		};
		_menu.SetItems(
		[
			new UiListItem(text.GetLoginScreenText(LoginScreenText.StartGame), true, StartGameData, 0xFFFFFFFFu),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.ExitGame), true, ExitGameData, 0xFFFFFFFFu),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.PatchDownload), true, PatchDownloadData, 0xFFFFFFFFu),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.RegisterUserId), true, RegisterUserIdData, 0xFFFFFFFFu),
			new UiListItem(hintText, false, HintData, HintColor),
		]);
		_menu.SelectedIndex = 0;
		TextSurface = textSurface;
	}

	/// <summary>Gets the list that owns the four rows and the hint.</summary>
	public UiListWindow Menu => _menu;

	/// <summary>Gets the action requested by the last confirmation, or <see langword="null"/>.</summary>
	public LoginDialogAction? RequestedAction => _requestedAction;

	/// <summary>Gets a value indicating whether the dialog has been closed.</summary>
	public bool IsClosed => _closed;

	/// <summary>Gets a value indicating whether the dialog has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Applies the text surface used to measure and draw the rows and hint.
	/// </summary>
	public IUiTextSurface? TextSurface
	{
		get => _textSurface;
		set
		{
			_textSurface = value;
			_menu.TextSurface = value;
			float width = 0f;
			if (value is not null)
				foreach (UiListItem item in _menu.Items)
					width = MathF.Max(width, value.Measure(item.Text));
			_menu.Size = new Vector2(MathF.Ceiling(width), _menu.Items.Count * RowHeight);
		}
	}

	/// <summary>
	/// Maps the selected row's data to its action, closes on the start-game row and exposes the requested action.
	/// </summary>
	/// <returns>The requested action, or <see langword="null"/> when no enabled row is selected.</returns>
	/// <exception cref="ObjectDisposedException">The dialog is released.</exception>
	[Original(0x007621E4, "dialog_confirm")]
	public LoginDialogAction? ConfirmSelected()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_closed || _menu.SelectedIndex < 0 || !_menu.Items[_menu.SelectedIndex].Enabled)
			return null;
		LoginDialogAction? action = _menu.SelectedData switch
		{
			StartGameData => LoginDialogAction.StartGame,
			ExitGameData => LoginDialogAction.ExitGame,
			PatchDownloadData => LoginDialogAction.PatchDownload,
			RegisterUserIdData => LoginDialogAction.RegisterUserId,
			_ => null,
		};
		if (action is null)
			return null;
		_requestedAction = action;
		if (action == LoginDialogAction.StartGame)
			_closed = true;
		return action;
	}

	/// <summary>
	/// Moves the selection, confirms a row or closes the dialog from the input actions.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The dialog is released.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_closed)
			return;
		if (input.WasActionPressed(InputAction.Cancel))
		{
			Close();
			return;
		}
		if (input.WasActionPressed(InputAction.MoveForward))
			_menu.SelectPrevious();
		else if (input.WasActionPressed(InputAction.MoveBackward))
			_menu.SelectNext();
		if (input.WasActionPressed(InputAction.Confirm))
			ConfirmSelected();
	}

	/// <summary>
	/// Closes the account panel and clears any earlier non-closing request.
	/// </summary>
	public void Close()
	{
		_closed = true;
		_requestedAction = null;
	}

	/// <summary>
	/// Adds the list's selection and rows to the draw list.
	/// </summary>
	/// <param name="drawList">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The dialog is released.</exception>
	public void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_closed)
			return;
		_menu.Draw(drawList);
	}

	/// <summary>
	/// Releases the list. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_menu.Dispose();
	}
}
