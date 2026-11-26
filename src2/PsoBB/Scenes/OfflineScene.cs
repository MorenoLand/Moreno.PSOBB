using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Scene;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 10: the offline game scene that loads a character save and starts the field.
/// </summary>
/// <remarks>
/// The scene stores parameter 2 and root 10, loads <c>lightentry.bin</c> and the
/// <c>PSO_CHARACTER</c> save, and dispatches between the pre-game setup at <c>0x7BB6F0</c> and
/// the running field at <c>0x7BBBA8</c>. It owns no draw list; the field, map objects and player
/// are rendered by the unported game systems.
/// </remarks>
public sealed class OfflineScene : IDisposable
{
	/// <summary>The scene number in the baked scene table.</summary>
	public const uint SceneNumber = 10;

	/// <summary>The scene parameter the initialiser stores.</summary>
	public const uint SceneParameter = 2;

	/// <summary>The save file the character loader opens.</summary>
	public const string CharacterFileName = "PSO_CHARACTER";

	/// <summary>The save file size the character loader allocates and reads.</summary>
	public const int CharacterFileLength = 0xBAA4;

	/// <summary>The light table the shared initialiser loads.</summary>
	public const string LightTableName = "lightentry.bin";

	/// <summary>The number of initialiser and release pairs in the scene table.</summary>
	public const int InitEntryCount = 47;

	/// <summary>The original address of the first initialiser and release pair.</summary>
	public const uint InitTableAddress = 0x00A0F2E0;

	/// <summary>
	/// The 47 initialiser and release pairs at <c>0x00A0F2E0</c>.
	/// </summary>
	/// <remarks>
	/// <c>0x78B184</c> runs the first word of each pair in order. <c>0x78B0A0</c> runs the second
	/// word in reverse order during release.
	/// </remarks>
	[OriginalGlobal(0x00A0F2E0)]
	public static IReadOnlyList<SceneInitEntry> InitTable { get; } = Array.AsReadOnly<SceneInitEntry>(
	[
		new(0x00792818, 0x00000000),
		new(0x00412E7C, 0x00412A40),
		new(0x006A745C, 0x006A7284),
		new(0x00695A80, 0x006861C4),
		new(0x0080C7C8, 0x0061CDB0),
		new(0x006BB79C, 0x006BB518),
		new(0x004D9D48, 0x00000000),
		new(0x007933BC, 0x00793190),
		new(0x0071A1F4, 0x00719500),
		new(0x00719234, 0x007162AC),
		new(0x0077BC80, 0x0061CDB0),
		new(0x007896C8, 0x0061CDB0),
		new(0x0061CDB0, 0x0061CDB0),
		new(0x0077B42C, 0x0077A650),
		new(0x007BAA24, 0x0061CDB0),
		new(0x007BA13C, 0x007B4B9C),
		new(0x005BDADC, 0x005BC480),
		new(0x00796708, 0x00793F48),
		new(0x004F3B3C, 0x004F39A0),
		new(0x0080CBC4, 0x0080CB00),
		new(0x00813234, 0x0081031C),
		new(0x005C58AC, 0x005C3A2C),
		new(0x0080D700, 0x0080CF28),
		new(0x00805A24, 0x0080598C),
		new(0x0080FAB8, 0x0080ED44),
		new(0x0080D578, 0x0080CF44),
		new(0x007BE3E0, 0x007BE2DC),
		new(0x005012D4, 0x00500FC8),
		new(0x00703254, 0x00701A58),
		new(0x00816FE0, 0x00816FE0),
		new(0x006D80B8, 0x006D7E3C),
		new(0x006CC6EC, 0x006CBD44),
		new(0x006BD514, 0x006BC72C),
		new(0x0064B70C, 0x0061CDB0),
		new(0x00813A70, 0x00813A70),
		new(0x0077A644, 0x0077A644),
		new(0x0078DFF8, 0x0078DFF8),
		new(0x007814B4, 0x007814B4),
		new(0x00828880, 0x00828880),
		new(0x0077E084, 0x0061CDB0),
		new(0x0077F0B0, 0x0077ED08),
		new(0x006B0208, 0x006AF940),
		new(0x006585E4, 0x00658408),
		new(0x00825A4C, 0x00825A4C),
		new(0x007833F0, 0x0061CDB0),
		new(0x0048CAEC, 0x00000000),
		new(0x0077D644, 0x0077D644),
	]);

	private ReadOnlyMemory<byte> _characterSave;
	private MapLightTable? _lightTable;
	private bool _disposed;

	/// <summary>
	/// Loads the light table and the character save, then stores scene parameter 2 and root 10.
	/// </summary>
	/// <param name="files">The data files that resolve the light table and the save.</param>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	/// <exception cref="SceneFormatException">The light table is present but malformed.</exception>
	[Original(0x007BC27C, "OfflineScene_Init_007bc27c")]
	public OfflineScene(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		_lightTable = LoadLightTable(files);
		if (!TryLoadCharacter(files))
			CancelStartup();
		SceneManager.SetSceneParameter(SceneParameter);
		SceneManager.SetRootScene(SceneNumber);
	}

	/// <summary>Gets the loaded light table, or <see langword="null"/> when the file is absent.</summary>
	public MapLightTable? LightTable => _lightTable;

	/// <summary>Gets the character save bytes, or empty when the save is absent or the scene is released.</summary>
	public ReadOnlyMemory<byte> CharacterSave => _characterSave;

	/// <summary>Gets a value indicating whether a complete character save is loaded.</summary>
	public bool HasCharacterSave => _characterSave.Length == CharacterFileLength;

	/// <summary>Gets a value indicating whether the field game has started.</summary>
	public bool IsGameStarted => GameState.GameStarted != 0;

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Dispatches one frame to the pre-game setup or the running field.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007BB6D8, "OfflineScene_Update_007bb6d8")]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (GameState.GameStarted != 0)
			UpdateField(input);
		else
			UpdateStartup(input);
	}

	/// <summary>
	/// Adds no interface geometry: scene 10 has no draw entry and the field is rendered by the game systems.
	/// </summary>
	/// <param name="draw">The draw list the scene would fill.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
	}

	/// <summary>
	/// Resets the game and releases the loaded save and light table. Repeated calls do nothing.
	/// </summary>
	[Original(0x007BBFB0, "OfflineScene_Release_007bbfb0")]
	public void Dispose()
	{
		if (_disposed)
			return;
		ResetGame();
		_lightTable = null;
		_characterSave = default;
		_disposed = true;
	}

	[Original(0x007BB6F0, "OfflineScene_UpdateStartup_007bb6f0")]
	private void UpdateStartup(InputManager input)
	{
		if (input.WasActionPressed(InputAction.Cancel))
		{
			CancelStartup();
			return;
		}
		if (SceneManager.MapLoaded)
		{
			GameState.GameStarted = 1;
			SceneManager.ClearSceneEvent();
		}
	}

	[Original(0x007BBBA8, "OfflineScene_UpdateField_007bbba8")]
	private void UpdateField(InputManager input)
	{
		if (input.WasActionPressed(InputAction.Cancel))
		{
			CancelField();
			return;
		}
		if (SceneManager.SceneEvent)
		{
			SceneManager.ClearSceneEvent();
			return;
		}
		if (SceneManager.MapLoaded)
			SceneManager.ClearMapLoaded();
	}

	[Original(0x007BBB88, "OfflineScene_CancelStartup_007bbb88")]
	private void CancelStartup()
	{
		SceneManager.RequestRestart();
		SceneManager.ClearSceneEvent();
		SceneManager.ClearMapLoaded();
		GameState.GameStarted = 0;
	}

	[Original(0x007BBF8C, "OfflineScene_CancelField_007bbf8c")]
	private void CancelField()
	{
		ResetGame();
		SceneManager.RequestRestart();
		SceneManager.ClearSceneEvent();
		SceneManager.ClearMapLoaded();
		GameState.GameStarted = 0;
	}

	[Original(0x007BB668, "OfflineScene_ResetGame_007bb668")]
	private static void ResetGame() => GameState.GameStarted = 0;

	[Original(0x00796708, "load_light_entry_00796708")]
	private static MapLightTable? LoadLightTable(IDataFiles files) =>
		files.TryRead(LightTableName, out ReadOnlyMemory<byte> data) ? MapLightTable.Parse(data.Span) : null;

	private bool TryLoadCharacter(IDataFiles files)
	{
		if (!files.TryRead(CharacterFileName, out ReadOnlyMemory<byte> data) || data.Length < CharacterFileLength)
			return false;
		_characterSave = data[..CharacterFileLength];
		return true;
	}

	/// <summary>One initialiser and its release function from the scene table.</summary>
	/// <param name="InitAddress">The function called in table order during initialisation.</param>
	/// <param name="ReleaseAddress">The function called in reverse table order during release, or zero.</param>
	public sealed record SceneInitEntry(uint InitAddress, uint ReleaseAddress);
}
