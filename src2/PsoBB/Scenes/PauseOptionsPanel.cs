using System.Numerics;
using PsoBB.Configuration;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Platform;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// The pause menu's option list: ten original setting rows with their values and persistence.
/// </summary>
/// <remarks>
/// The panel ports the original option list at <c>0x0075377C</c>, the update state machine at <c>0x007538EC</c>, the row factory at <c>0x00753D84</c> and the two per-frame row helpers at <c>0x00753C24</c> and <c>0x00753C70</c>. The pad-button and keyboard configuration rows open separate original windows; this panel reports them as external requests instead of rebuilding those windows.
/// </remarks>
public sealed class PauseOptionsPanel : UiPanel
{
	/// <summary>The original option list capacity.</summary>
	public const int RowCapacity = 11;
	private readonly GameOptions _options;
	private readonly IGameSettings _settings;
	private readonly UiTextTable _text;
	private readonly PauseOptionState _optionState;
	private readonly Action<int>? _applyBrightness;
	private readonly UiLabel _caption;
	private readonly UiListWindow _list;
	private readonly List<OptionEntry> _entries = [];
	private int _state;
	private int _rowOptionId = -1;
	private int _lastVibration = -1;
	private bool _activationRequested;
	private bool _cancelRequested;
	private bool _resumeExternal;
	private UiOptionRow? _row;

	/// <summary>
	/// Creates the option panel and its original rows.
	/// </summary>
	/// <param name="options">The typed options; its brightness value is the <c>EXT0</c> value.</param>
	/// <param name="settings">The store that receives <c>EXT0</c> on confirmation.</param>
	/// <param name="text">The unitxt container used for every label and value.</param>
	/// <param name="optionState">The session graphics bits the rows read and write.</param>
	/// <param name="size">The list size supplied by the host layout.</param>
	/// <param name="padButtonConfigAvailable">Whether the pad-button configuration row is enabled.</param>
	/// <param name="textSurface">The text surface used for drawing.</param>
	/// <param name="applyBrightness">Receives the confirmed brightness level for the renderer's gamma ramp.</param>
	/// <exception cref="ArgumentNullException">An injected dependency is null.</exception>
	[Original(0x007536F4)]
	public PauseOptionsPanel(
		GameOptions options,
		IGameSettings settings,
		UiTextTable text,
		PauseOptionState optionState,
		Vector2 size,
		bool padButtonConfigAvailable = false,
		IUiTextSurface? textSurface = null,
		Action<int>? applyBrightness = null)
	{
		ArgumentNullException.ThrowIfNull(options);
		ArgumentNullException.ThrowIfNull(settings);
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(optionState);
		_options = options;
		_settings = settings;
		_text = text;
		_optionState = optionState;
		_applyBrightness = applyBrightness;
		Position = Vector2.Zero;
		Size = size;
		_caption = new UiLabel
		{
			Position = Vector2.Zero,
			Size = new Vector2(size.X, 20f),
			TextSurface = textSurface,
		};
		_caption.SetText(text.GetMessage(61));
		Attach(_caption);
		_list = CreateOptionList(new Vector2(size.X, MathF.Max(0f, size.Y - 20f)), padButtonConfigAvailable, textSurface);
		_list.Position = new Vector2(0f, 20f);
		Attach(_list);
	}

	/// <summary>Raised when the option list is cancelled and the pause menu should resume.</summary>
	public event Action? CloseRequested;

	/// <summary>Raised when the pad-button configuration row is activated.</summary>
	public event Action? PadButtonConfigRequested;

	/// <summary>Raised when the keyboard configuration row is activated.</summary>
	public event Action? KeyboardConfigurationRequested;

	/// <summary>Raised when the original row requests sound effect 192 with its parameter.</summary>
	public event Action<int, int>? SoundRequested;

	/// <summary>Gets the option list.</summary>
	public UiListWindow List => _list;

	/// <summary>Gets the open value row, or <see langword="null"/> when the list is active.</summary>
	public UiOptionRow? ActiveRow => _row;

	/// <summary>Gets the original option identifiers in list order.</summary>
	public IReadOnlyList<int> OptionIds => [.. _entries.Select(entry => entry.Id)];

	/// <summary>Gets the selected original option identifier, or minus one when nothing is selected.</summary>
	public int SelectedOptionId => (uint)_list.SelectedIndex < (uint)_entries.Count ? _entries[_list.SelectedIndex].Id : -1;

	/// <summary>Gets a value indicating whether the panel has closed.</summary>
	public bool IsClosed => _state == 9;

	/// <summary>Resumes the panel after an external configuration window closes.</summary>
	public void ResumeFromExternalScreen() => _resumeExternal = true;

	/// <summary>
	/// Advances the option list and its active row.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	[Original(0x007538EC)]
	public override void Update(float deltaSeconds)
	{
		if (_state == 9)
			return;
		_list.Update(deltaSeconds);
		_row?.Update(deltaSeconds);
		switch (_state)
		{
			case 0:
			case 1:
				CloseRow();
				_list.Enable();
				_state = 2;
				break;
			case 2:
				UpdateOptionList();
				break;
			case 3:
				OpenRow();
				_state = _row is null ? 1 : 4;
				break;
			case 4:
				UpdateValueRow();
				break;
			case 5:
				if (_resumeExternal)
				{
					_resumeExternal = false;
					_state = 1;
				}
				break;
		}
	}

	/// <inheritdoc/>
	public override bool OnEvent(UiEvent uiEvent)
	{
		ArgumentNullException.ThrowIfNull(uiEvent);
		if (_state == 9)
			return false;
		if (_row is not null && _row.OnEvent(uiEvent))
			return true;
		if (uiEvent.Kind == UiEventKind.KeyDown && uiEvent.Key == GameKey.Escape)
		{
			_cancelRequested = true;
			return true;
		}
		return _list.OnEvent(uiEvent);
	}

	[Original(0x0075377C)]
	private UiListWindow CreateOptionList(Vector2 size, bool padButtonConfigAvailable, IUiTextSurface? textSurface)
	{
		UiListWindow list = new()
		{
			Position = Vector2.Zero,
			Size = size,
			ItemHeight = 20f,
			ScrollBarWidth = 0f,
			TextSurface = textSurface,
		};
		List<UiListItem> items = [];
		AddOption(items, 0, _text.GetMessage(121), true);
		AddOption(items, 1, _text.GetOptionText(6), true);
		AddOption(items, 2, _text.GetOptionText(9), true);
		AddOption(items, 3, _text.GetOptionText(10), true);
		AddOption(items, 4, _text.GetOptionText(17), padButtonConfigAvailable);
		AddOption(items, 5, _text.GetOptionText(0), true);
		AddOption(items, 6, _text.GetMessage(123), true);
		AddOption(items, 7, _text.GetMessage(124), true);
		AddOption(items, 9, _text.GetMessage(129), true);
		AddOption(items, 10, _text.GetMessage(130), true);
		list.SetItems(items);
		list.ItemActivated += (_, _) => _activationRequested = true;
		return list;
	}

	private void AddOption(List<UiListItem> items, int id, string text, bool enabled)
	{
		_entries.Add(new OptionEntry(id));
		items.Add(new UiListItem(text, enabled));
	}

	private void UpdateOptionList()
	{
		if (_cancelRequested)
		{
			_cancelRequested = false;
			_state = 9;
			CloseRequested?.Invoke();
			return;
		}
		if (!_activationRequested)
			return;
		_activationRequested = false;
		switch (SelectedOptionId)
		{
			case 4:
				_state = 5;
				_list.Disable();
				PadButtonConfigRequested?.Invoke();
				break;
			case 5:
				_state = 5;
				_list.Disable();
				KeyboardConfigurationRequested?.Invoke();
				break;
			default:
				_state = 3;
				break;
		}
	}

	[Original(0x00753D84)]
	private void OpenRow()
	{
		int id = SelectedOptionId;
		if (id < 0)
			return;
		UiOptionRow row = new()
		{
			Position = new Vector2(_list.Position.X, _list.Position.Y + (_list.SelectedIndex * _list.ItemHeight)),
			Size = new Vector2(_list.Size.X, _list.ItemHeight),
			TextSurface = _list.TextSurface,
		};
		switch (id)
		{
			case 0:
				row.SetLabel(_text.GetMessage(121));
				row.AddValue(_text.GetMessage(131));
				row.AddValue(_text.GetMessage(132));
				row.SetSelectedValue(_optionState.HasFlagBits(1) ? 1 : 0);
				break;
			case 1:
				row.SetLabel(_text.GetOptionText(6));
				row.AddValue(_text.GetOptionText(7));
				row.AddValue(_text.GetOptionText(8));
				row.SetSelectedValue(_optionState.HasFlagBits(0x2000000) ? 1 : 0);
				break;
			case 2:
				row.SetLabel(_text.GetOptionText(9));
				row.AddValue(_text.GetMessage(196));
				row.AddValue(_text.GetMessage(197));
				row.SetSelectedValue(_optionState.HasFlagBits(0x1000000) ? 1 : 0);
				break;
			case 3:
				row.SetLabel(_text.GetOptionText(10));
				row.AddValue(_text.GetOptionText(11));
				row.AddValue(_text.GetOptionText(12));
				row.AddValue(_text.GetOptionText(13));
				row.SetSelectedValue(Math.Min(_optionState.MouseControls, 2));
				break;
			case 5:
				row.SetLabel(_text.GetOptionText(0));
				row.AddValue(_text.GetMessage(133));
				row.AddValue(_text.GetMessage(134));
				row.SetSelectedValue(_optionState.HasFlagBits(2) ? 1 : 0);
				break;
			case 6:
				row.SetLabel(_text.GetMessage(123));
				row.AddValue(_text.GetMessage(135));
				row.AddValue(_text.GetMessage(136));
				row.SetSelectedValue(_optionState.HasFlagBits(4) ? 1 : 0);
				break;
			case 7:
				row.SetLabel(_text.GetMessage(124));
				row.AddValue(_text.GetMessage(137));
				row.AddValue(_text.GetMessage(138));
				row.AddValue(_text.GetMessage(139));
				row.AddValue(_text.GetMessage(140));
				row.SetSelectedValue(_optionState.MessageSpeed);
				break;
			case 8:
				row.SetLabel(_text.GetMessage(125));
				row.AddValue(_text.GetMessage(196));
				row.AddValue(_text.GetMessage(197));
				row.SetSelectedValue(_optionState.HasFlagBits(8) ? 1 : 0);
				_lastVibration = row.SelectedValue;
				break;
			case 9:
				row.SetLabel(_text.GetMessage(129));
				row.AddValue(_text.GetMessage(141));
				row.AddValue(_text.GetMessage(142));
				row.AddValue(_text.GetMessage(143));
				row.AddValue(_text.GetMessage(144));
				row.SetSelectedValue(Math.Min(_optionState.AutoDisconnect, 3));
				break;
			case 10:
				row.SetLabel(_text.GetMessage(130));
				row.AddValue(_text.GetMessage(146));
				row.AddValue(_text.GetMessage(147));
				row.AddValue(_text.GetMessage(148));
				row.AddValue(_text.GetMessage(149));
				row.AddValue(_text.GetMessage(150));
				row.SetSelectedValue(_options.Brightness);
				break;
			default:
				return;
		}
		_rowOptionId = id;
		row.ClearResult();
		row.SetFocus();
		Attach(row);
		_row = row;
		_list.Disable();
	}

	private void UpdateValueRow()
	{
		if (_row is null)
		{
			_state = 1;
			return;
		}
		ApplyRowValue();
		UpdateRowSelection();
		if (_row.IsActivated)
		{
			if (_rowOptionId == 10)
				ConfirmBrightness();
			CloseRow();
			_state = 1;
		}
	}

	[Original(0x00753C24)]
	private void UpdateRowSelection()
	{
		if (_row is null || _rowOptionId != 8 || _row.SelectedValue == _lastVibration)
			return;
		_lastVibration = _row.SelectedValue;
		if (_lastVibration == 0)
			SoundRequested?.Invoke(192, 15);
	}

	[Original(0x00753C70)]
	private void ApplyRowValue()
	{
		if (_row is null)
			return;
		int value = _row.SelectedValue;
		switch (_rowOptionId)
		{
			case 0:
				_optionState.SetFlagBits(value, ~1);
				break;
			case 1:
				_optionState.SetFlagBits(value << 25, ~0x2000000);
				break;
			case 2:
				_optionState.SetFlagBits(value << 24, ~0x1000000);
				break;
			case 3:
				_optionState.SetFlagBits(value << 20, ~0x700000);
				break;
			case 5:
				_optionState.SetFlagBits(value * 2, ~2);
				break;
			case 6:
				_optionState.SetFlagBits(value * 4, ~4);
				break;
			case 7:
				_optionState.SetFlagBits(value << 8, ~0x300);
				break;
			case 8:
				_optionState.SetFlagBits(value * 8, ~8);
				break;
			case 9:
				_optionState.SetFlagBits(value << 10, ~0xC00);
				break;
			case 10:
				_options.Brightness = value;
				break;
		}
	}

	[Original(0x00482A40)]
	private void ApplyBrightness() => _applyBrightness?.Invoke(_options.Brightness);

	private void ConfirmBrightness()
	{
		ApplyBrightness();
		_options.SaveBrightness(_settings);
	}

	private void CloseRow()
	{
		if (_row is null)
			return;
		UiOptionRow row = _row;
		_row = null;
		_rowOptionId = -1;
		Detach(row);
		row.Dispose();
		_list.Enable();
	}

	private sealed record OptionEntry(int Id);
}
