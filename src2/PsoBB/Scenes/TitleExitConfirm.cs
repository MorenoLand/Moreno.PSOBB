using System.Numerics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// The exit confirmation from <c>0x00762490</c>: the list 41 string 12 prompt and the confirm and
/// cancel rows, with cancel selected first.
/// </summary>
public sealed class TitleExitConfirm : IDisposable
{
	/// <summary>The panel position.</summary>
	public static readonly Vector2 PanelPosition = new(220f, 180f);

	/// <summary>The panel size.</summary>
	public static readonly Vector2 PanelSize = new(200f, 100f);

	private readonly UiLabel _header;
	private readonly UiListWindow _list;
	private bool _disposed;

	/// <summary>
	/// Builds the prompt and the two rows from the account text table.
	/// </summary>
	/// <param name="text">The account text table.</param>
	/// <param name="surface">The surface that measures and draws the text.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public TitleExitConfirm(GameText text, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(surface);
		_header = new UiLabel
		{
			Position = PanelPosition + new Vector2(10f, 6f),
			Size = new Vector2(PanelSize.X - 20f, 20f),
		};
		_header.SetText(text.GetLoginScreenText(LoginScreenText.ReallyOk));
		_header.SetTextColor(0xFFFFCC33u);
		_header.TextSurface = surface;
		_header.TextOffset = new Vector2(MathF.Max(0f, (_header.Size.X - surface.Measure(_header.Text)) * 0.5f), 0f);
		_list = new UiListWindow
		{
			Position = PanelPosition + new Vector2(10f, 30f),
			Size = new Vector2(PanelSize.X - 20f, 60f),
			ItemHeight = 20f,
			ScrollBarWidth = 0f,
			SelectionColor = 0x60000000u,
			SelectedTextColor = 0xFFFFCC33u,
		};
		_list.SetItems(
		[
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Confirm), true, 0, 0xFFFFFFFFu, centered: true),
			new UiListItem(text.GetLoginScreenText(LoginScreenText.Cancel), true, 1, 0xFFFFFFFFu, centered: true),
		]);
		_list.SelectedIndex = 1;
		_list.TextSurface = surface;
	}

	/// <summary>Gets or sets the callback that plays a sound-effect identifier.</summary>
	public Action<int>? SoundPlayer { get; set; }

	/// <summary>Gets whether the confirm row was accepted.</summary>
	public bool Confirmed { get; private set; }

	/// <summary>Gets whether the dialog was cancelled.</summary>
	public bool Cancelled { get; private set; }

	/// <summary>Moves the selection or answers the prompt.</summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		if (Confirmed || Cancelled)
			return;
		if (input.WasActionPressed(InputAction.Cancel))
		{
			SoundPlayer?.Invoke(UiSounds.Cancel);
			Cancelled = true;
			return;
		}
		int selected = _list.SelectedIndex;
		if (input.WasActionPressed(InputAction.MoveForward))
			_list.SelectPrevious();
		else if (input.WasActionPressed(InputAction.MoveBackward))
			_list.SelectNext();
		if (_list.SelectedIndex != selected)
			SoundPlayer?.Invoke(UiSounds.Select);
		if (input.WasActionPressed(InputAction.Confirm))
		{
			SoundPlayer?.Invoke(UiSounds.Activate);
			if (_list.SelectedData == 0)
				Confirmed = true;
			else
				Cancelled = true;
		}
	}

	/// <summary>Adds the panel and its rows to the draw list.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		draw.Add(new UiQuad(PanelPosition, PanelSize, new Vector4(0f, 0f, 1f, 1f), null, 0xE0101010u));
		_header.Draw(draw);
		_list.Draw(draw);
	}

	/// <summary>Releases the label and the list. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_header.Dispose();
		_list.Dispose();
	}
}
