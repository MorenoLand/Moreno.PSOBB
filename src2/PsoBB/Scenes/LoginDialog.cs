using System.Numerics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// The account panel's four-row menu and its disabled key hint.
/// </summary>
/// <remarks>The header is unitxt list 41 string 2, the rows are strings 3 through 6 with row data 0 through 3, and the hint is the data-image format at <c>0x00974EBC</c> with the retail key label <c>d</c>.</remarks>
public sealed class LoginDialog : IDisposable
{
	/// <summary>The unitxt list that holds the account-panel strings.</summary>
	public const int TextList = GameText.LoginScreenList;

	/// <summary>The hint format stored in the data image at <c>0x00974EBC</c>.</summary>
	public const string HintFormat = "[%s]";

	/// <summary>The confirm key label the retail title frame shows in the hint.</summary>
	public const string DefaultHintKey = "d";

	/// <summary>The hint text the retail title frame shows.</summary>
	public const string DefaultHint = "[d]";

	/// <summary>The hint row colour from the original row setup.</summary>
	public const uint HintColor = 0xFFFFCC33;

	/// <summary>The row step used by the list.</summary>
	public const float RowHeight = 20f;

	/// <summary>The online account-edit panel position from the data image at <c>0x00974E08</c>.</summary>
	public static readonly Vector2 PanelPosition = new(210f, 340f);

	/// <summary>The title-menu panel position observed in the oracle capture.</summary>
	public static readonly Vector2 TitlePanelPosition = LoginDialogFrame.TitlePanelPosition;

	/// <summary>The title-menu panel size.</summary>
	public static readonly Vector2 PanelSize = LoginDialogFrame.TitlePanelSize;

	/// <summary>The header height taken from the panel's first row.</summary>
	public const float HeaderHeight = LoginDialogFrame.HeaderHeight;

	/// <summary>The position of the header label inside the title-menu panel.</summary>
	public static readonly Vector2 HeaderPosition = TitlePanelPosition;

	/// <summary>The position of the four-row list inside the title-menu panel.</summary>
	public static readonly Vector2 RowAreaPosition = new(TitlePanelPosition.X, TitlePanelPosition.Y + HeaderHeight);

	/// <summary>The size of the four-row list and its disabled hint row.</summary>
	public static readonly Vector2 RowAreaSize = new(PanelSize.X, PanelSize.Y - HeaderHeight);

	/// <summary>The scene-2 selector element that owns the header frame.</summary>
	public const int SelectorHeaderElement = 15;

	/// <summary>The scene-2 selector elements that own the four row frames.</summary>
	public static readonly int[] SelectorRowElements = [11, 12, 13, 14];

	/// <summary>The scene-2 selector element that owns the selected-row frame.</summary>
	public const int SelectorSelectionElement = 10;

	/// <summary>The scene-2 selector header frame position.</summary>
	public static readonly Vector2 SelectorHeaderPosition = new(192f, 308f);

	/// <summary>The scene-2 selector row frame positions.</summary>
	public static readonly Vector2[] SelectorRowPositions =
	[
		new(193f, 300f),
		new(193f, 332f),
		new(193f, 364f),
		new(193f, 396f),
	];

	/// <summary>The scene-2 selector selected-row frame position.</summary>
	public static readonly Vector2 SelectorSelectionPosition = new(193f, 338f);

	/// <summary>The frame table the scene-2 selector uses for its element animation.</summary>
	public const int SelectorFrameTable = 0x009CFB60;

	/// <summary>The frame index of the selected-row element.</summary>
	public const int SelectorSelectionFrame = 10;

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

	private readonly UiLabel _header;
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
	/// <param name="panelPosition">The panel origin; the mode-zero position is used by default.</param>
	/// <exception cref="ArgumentNullException"><paramref name="text"/> is null.</exception>
	public LoginDialog(GameText text, string hintText = DefaultHint, IUiTextSurface? textSurface = null, Vector2? panelPosition = null)
	{
		ArgumentNullException.ThrowIfNull(text);
		Vector2 position = panelPosition ?? TitlePanelPosition;
		_header = new UiLabel
		{
			Position = position,
			Size = new Vector2(PanelSize.X, HeaderHeight),
		};
		_header.SetText(text.GetLoginScreenText(LoginScreenText.Login));
		_menu = new UiListWindow
		{
			Position = new Vector2(position.X, position.Y + HeaderHeight),
			Size = RowAreaSize,
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

	/// <summary>Gets the header label that carries unitxt list 41 string 2.</summary>
	public UiLabel Header => _header;

	/// <summary>Gets the list that owns the four rows and the hint.</summary>
	public UiListWindow Menu => _menu;

	/// <summary>
	/// Gets or sets the scene-2 selector renderer that draws its selected-row strip at (193, 338).
	/// </summary>
	public Action<UiDrawList>? SelectorFrameDraw { get; set; }

	/// <summary>Gets or sets the textured title-menu frame drawn behind the header and rows.</summary>
	public LoginDialogFrame? Frame { get; set; }

	/// <summary>
	/// Substitutes the confirm key label into the data-image hint format.
	/// </summary>
	/// <param name="key">The confirm key label.</param>
	/// <returns>The formatted hint.</returns>
	public static string FormatHint(string key) => HintFormat.Replace("%s", key, StringComparison.Ordinal);

	/// <summary>Gets the action requested by the last confirmation, or <see langword="null"/>.</summary>
	public LoginDialogAction? RequestedAction => _requestedAction;

	/// <summary>Gets a value indicating whether the dialog has been closed.</summary>
	public bool IsClosed => _closed;

	/// <summary>Gets a value indicating whether the dialog has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Applies the text surface used to measure and draw the header, rows and hint.
	/// </summary>
	public IUiTextSurface? TextSurface
	{
		get => _textSurface;
		set
		{
			_textSurface = value;
			_header.TextSurface = value;
			_menu.TextSurface = value;
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
		SelectorFrameDraw?.Invoke(drawList);
		Frame?.Draw(drawList, _menu.SelectedIndex);
		_header.Draw(drawList);
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
		Frame?.Dispose();
		_header.Dispose();
		_menu.Dispose();
	}
}
