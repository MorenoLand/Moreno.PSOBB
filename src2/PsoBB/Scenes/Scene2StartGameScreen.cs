using System.Numerics;
using System.Text;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Save;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// Scene-2 shared screen state 9: the post-Start-Game screen that reads the saved character records.
/// </summary>
/// <remarks>
/// The constructor at <c>0x00403018</c> allocates <c>0x1290</c> bytes, stores the vtable at
/// <c>0x00AF2230</c> and the data pointer at <c>0x009A2E88</c>, loads <c>patch.pvm</c> once through
/// <c>0x0070D510</c> and calls <c>0x004057F4</c>, which selects mode 26 because <c>0x006DC358</c>
/// returns zero in this image. The update at <c>0x00403084</c> dispatches the state table at
/// <c>0x009A2DA4</c> and the release at <c>0x00402AE0</c> frees the screen. The four character rows
/// are built by <c>0x00405F64</c> from <c>0x006C44D0</c> and text list 23 string 28; the three extra
/// rows, the system and guild-card images, the 524-byte ship table at <c>0x00A3B360</c> and the
/// patch client at <c>0x0070C150</c> are not ported.
/// </remarks>
public sealed class Scene2StartGameScreen : IDisposable
{
	/// <summary>The scene-2 shared screen state.</summary>
	public const uint SharedScreenState = 9;

	/// <summary>The number of bytes the original allocates for the screen.</summary>
	public const int AllocationSize = 0x1290;

	/// <summary>The constructor address in the original image.</summary>
	public const uint ConstructorAddress = 0x00403018;

	/// <summary>The update address in the original image.</summary>
	public const uint UpdateAddress = 0x00403084;

	/// <summary>The release address in the original image.</summary>
	public const uint ReleaseAddress = 0x00402AE0;

	/// <summary>The mode <c>0x004057F4</c> selects when <c>0x006DC358</c> returns zero.</summary>
	public const uint InitialMode = 26;

	/// <summary>The mode <c>0x004057F4</c> selects when <c>0x006DC358</c> returns one.</summary>
	public const uint AlternateMode = 28;

	/// <summary>The number of character records the ported save image carries.</summary>
	public const int CharacterSlotCount = CharacterSave.SlotCount;

	/// <summary>The three extra rows <c>0x00405F64</c> reads from the unported 11940-byte records.</summary>
	public const int UnportedSlotCount = 3;

	/// <summary>The text list that holds the empty-slot label.</summary>
	public const int EmptyTextList = 23;

	/// <summary>The empty-slot label index inside <see cref="EmptyTextList"/>.</summary>
	public const int EmptyTextIndex = 28;

	/// <summary>The offset of the narrow character name <c>0x006C44D0</c> exposes.</summary>
	public const int CharacterNameOffset = 0x374;

	/// <summary>The offset of the signature that marks a present record.</summary>
	public const int CharacterValidityOffset = CharacterSaveSlot.SignatureOffset;

	/// <summary>The row x position from the four pairs at <c>0x008F8908</c>, the default <c>this+8 == 0</c> branch.</summary>
	public const float RowX = 131f;

	/// <summary>The first row y position from <c>0x008F8944</c>.</summary>
	public const float RowY = 182f;

	/// <summary>The row spacing from the four pairs at <c>0x008F8940</c>.</summary>
	public const float RowStep = 43f;

	/// <summary>The selection width from <c>0x008F8988</c>.</summary>
	public const float RowWidth = 180f;

	/// <summary>The selection height from <c>0x008F8984</c>.</summary>
	public const float RowHeight = 38f;

	/// <summary>The shared state the successful network path selects.</summary>
	public const uint LobbySharedScreenState = 6;

	/// <summary>The shared state the return-to-title path selects.</summary>
	public const uint TitleSharedScreenState = 0;

	/// <summary>The four-row area the list widget uses.</summary>
	public static readonly Vector2 RowAreaSize = new(RowWidth, RowStep * CharacterSlotCount);

	private readonly CharacterSave _save;
	private readonly UiPanel _root;
	private readonly UiListWindow _menu;
	private readonly Scene2Screen _screen;
	private IUiTextSurface? _textSurface;
	private bool _started;
	private bool _disposed;

	/// <summary>
	/// Builds the four saved-character rows and wraps them in the state-9 screen.
	/// </summary>
	/// <param name="text">The unitxt surface that supplies the empty-slot label.</param>
	/// <param name="save">The parsed <c>PSO_CHARACTER</c> image.</param>
	/// <param name="characterSelected">The optional callback for a confirmed non-empty slot.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	public Scene2StartGameScreen(GameText text, CharacterSave save, Action<int>? characterSelected = null)
	{
		ArgumentNullException.ThrowIfNull(text);
		ArgumentNullException.ThrowIfNull(save);
		_save = save;
		CharacterSelected = characterSelected;
		_root = new UiPanel();
		_menu = new UiListWindow
		{
			Position = new Vector2(RowX, RowY),
			Size = RowAreaSize,
			ItemHeight = RowStep,
			SelectionHeight = RowHeight,
			ScrollBarWidth = 0f,
		};
		_menu.SetItems(BuildRows(text, save));
		_menu.SelectedIndex = 0;
		_root.Attach(_menu);
		_screen = new Scene2Screen(_root);
	}

	/// <summary>Gets the callback invoked when a non-empty saved slot is confirmed.</summary>
	public Action<int>? CharacterSelected { get; }

	/// <summary>Gets the character save the rows read.</summary>
	public CharacterSave Save => _save;

	/// <summary>Gets the list that owns the four rows.</summary>
	public UiListWindow Menu => _menu;

	/// <summary>Gets the shared screen that owns the interface tree.</summary>
	public Scene2Screen Screen => _screen;

	/// <summary>Gets or sets the text surface used to measure and draw the rows.</summary>
	public IUiTextSurface? TextSurface
	{
		get => _textSurface;
		set
		{
			_textSurface = value;
			_menu.TextSurface = value;
			_menu.TextOffset = Vector2.Zero;
		}
	}

	/// <summary>Gets a value indicating whether a non-empty saved slot was confirmed.</summary>
	public bool IsStarted => _started;

	/// <summary>Gets a value indicating whether the screen is released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Confirms the selected row and forwards a present saved slot to <see cref="CharacterSelected"/>.
	/// </summary>
	/// <returns><see langword="true"/> when a non-empty row was confirmed.</returns>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	public bool ConfirmSelected()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		int slot = _menu.SelectedData;
		if (slot < 0 || slot >= CharacterSlotCount || _save[slot].Signature == 0)
			return false;
		_started = true;
		CharacterSelected?.Invoke(slot);
		return true;
	}

	/// <summary>Requests the exit scene, as the state-9 cancel path at <c>0x00405768</c> does.</summary>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	[Original(0x00405768, "Scene2StartGame_Cancel_00405768")]
	public void Cancel()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		SceneManager.RequestScene(SceneManager.ExitScene);
	}

	/// <summary>Selects the lobby shared state, as the successful path at <c>0x0040578C</c> does.</summary>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	[Original(0x0040578C, "Scene2StartGame_Succeed_0040578c")]
	public void Succeed()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		Scene2.SelectLobbyScreenState();
	}

	/// <summary>Selects the title shared state, as the return path at <c>0x00404CA4</c> does.</summary>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	public void ReturnToTitle()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		Scene2.EnterSharedScreenStateZero();
	}

	/// <summary>Advances the interface tree.</summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	public void Update(float deltaSeconds)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		_screen.Update(deltaSeconds);
	}

	/// <summary>Draws the four rows in list order.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The screen is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_screen.Draw(draw);
	}

	/// <summary>Releases the interface tree. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_screen.Dispose();
	}

	private static UiListItem[] BuildRows(GameText text, CharacterSave save)
	{
		string empty = text.GetString(EmptyTextList, EmptyTextIndex);
		UiListItem[] rows = new UiListItem[CharacterSlotCount];
		for (int slot = 0; slot < rows.Length; slot++)
		{
			CharacterSaveSlot record = save[slot];
			string name = record.Signature == 0 ? empty : ReadName(record);
			rows[slot] = new UiListItem(name.Length == 0 ? empty : name, true, slot, 0xFFFFFFFFu);
		}
		return rows;
	}

	private static string ReadName(CharacterSaveSlot record)
	{
		ReadOnlySpan<byte> bytes = record.Bytes;
		int end = CharacterNameOffset;
		while (end < bytes.Length && bytes[end] != 0)
			end++;
		return Encoding.Latin1.GetString(bytes[CharacterNameOffset..end]);
	}
}

/// <summary>
/// Builds the scene-2 state-9 screen only when the ported character save is available.
/// </summary>
public static class Scene2StartGameScreenFactory
{
	/// <summary>The exact data boundary the state-9 screen stops at.</summary>
	public const string MissingData =
		"Scene 2 state 9 needs PSO_CHARACTER for its four character rows; " +
		"the three extra rows 4-6 at 0x006C44D0, PSO_SYSTEM, PSO_GUILDCARD, " +
		"the 524-byte ship table at 0x00A3B360 and the patch client at 0x0070C150 are not ported.";

	/// <summary>
	/// Creates the state-9 screen when both the text table and the character save are present.
	/// </summary>
	/// <param name="text">The unitxt surface that supplies the empty-slot label.</param>
	/// <param name="save">The parsed <c>PSO_CHARACTER</c> image.</param>
	/// <param name="characterSelected">The optional callback for a confirmed non-empty slot.</param>
	/// <returns>The screen, or <see langword="null"/> when a required data source is absent.</returns>
	public static Scene2StartGameScreen? CreateScreen(GameText? text, CharacterSave? save, Action<int>? characterSelected = null) =>
		text is null || save is null ? null : new Scene2StartGameScreen(text, save, characterSelected);

	/// <summary>
	/// Creates the state-9 shared screen when both the text table and the character save are present.
	/// </summary>
	/// <param name="text">The unitxt surface that supplies the empty-slot label.</param>
	/// <param name="save">The parsed <c>PSO_CHARACTER</c> image.</param>
	/// <param name="characterSelected">The optional callback for a confirmed non-empty slot.</param>
	/// <returns>The shared screen, or <see langword="null"/> when a required data source is absent.</returns>
	public static Scene2Screen? Create(GameText? text, CharacterSave? save, Action<int>? characterSelected = null) =>
		CreateScreen(text, save, characterSelected)?.Screen;
}
