using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Scenes;

/// <summary>
/// The title account panel with its Start Game dispatch to shared screen state 9.
/// </summary>
/// <remarks>
/// The selector at <c>0x006F8464</c> reads entry zero of <c>0x009D04C8</c>; <c>0x006F853C</c>
/// calls <c>0x00824860</c> before it enters shared screen state 9. The panel still owns the
/// four rows and the hint; this type only adds the Start Game link.
/// </remarks>
public sealed class Scene2TitleMenu : IDisposable
{
	private readonly LoginDialog _dialog;
	private bool _started;
	private bool _disposed;

	/// <summary>
	/// Creates the title menu over an account panel.
	/// </summary>
	/// <param name="dialog">The panel that owns the rows.</param>
	/// <exception cref="ArgumentNullException"><paramref name="dialog"/> is null.</exception>
	public Scene2TitleMenu(LoginDialog dialog)
	{
		ArgumentNullException.ThrowIfNull(dialog);
		_dialog = dialog;
	}

	/// <summary>Gets the account panel that owns the rows.</summary>
	public LoginDialog Dialog => _dialog;

	/// <summary>Gets the four-row list and its hint.</summary>
	public UiListWindow Menu => _dialog.Menu;

	/// <summary>Gets the action requested by the last confirmation, or <see langword="null"/>.</summary>
	public LoginDialogAction? RequestedAction => _dialog.RequestedAction;

	/// <summary>Gets a value indicating whether the panel has been closed.</summary>
	public bool IsClosed => _dialog.IsClosed;

	/// <summary>Gets a value indicating whether the menu is released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Confirms the selected row and selects shared screen state 9 for the Start Game row.
	/// </summary>
	/// <returns>The requested action, or <see langword="null"/> when no enabled row is selected.</returns>
	/// <exception cref="ObjectDisposedException">The menu is released.</exception>
	[Original(0x006F853C, "TitleMenu_StartGame_006f853c")]
	public LoginDialogAction? Confirm() => Dispatch(_dialog.ConfirmSelected());

	/// <summary>
	/// Moves the selection, confirms a row or closes the panel and dispatches Start Game.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The menu is released.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_dialog.Update(input);
		Dispatch(_dialog.RequestedAction);
	}

	/// <summary>Draws the account panel in its original order.</summary>
	/// <param name="drawList">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The menu is released.</exception>
	public void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_dialog.Draw(drawList);
	}

	/// <summary>Releases the account panel. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_dialog.Dispose();
	}

	private LoginDialogAction? Dispatch(LoginDialogAction? action)
	{
		if (action == LoginDialogAction.StartGame && !_started)
		{
			_started = true;
			Scene2.SelectStartGame();
		}
		return action;
	}
}
