using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Models;
using PsoBB.Rendering;

namespace PsoBB.Scenes;

/// <summary>
/// The screen container shared by character making and the title screen: four player slots and
/// thirteen screen constructors.
/// </summary>
/// <remarks>
/// The original allocates a 468-byte container at <c>0x4D3408</c>, creates every screen from the
/// table at <c>0x9ACB70</c>, and activates one screen through <c>0x4D30FC</c>. Screens zero through
/// three are the four player preview slots; the remaining screens are the creation categories.
/// Scene 1 selects screen 9 through the same container.
/// </remarks>
public sealed class CharacterPreview : IDisposable
{
	/// <summary>The number of screen constructors in the original table.</summary>
	public const int ScreenCount = CharacterCreationScreen.Count;

	/// <summary>The number of player preview slots.</summary>
	public const int PlayerCount = CharacterCreationScreen.PlayerCount;

	/// <summary>The screen the character-making scene activates on entry.</summary>
	public const int InitialScreen = CharacterCreationScreen.InitialIndex;

	/// <summary>The screen the title scene selects on entry.</summary>
	public const int TitleScreen = 9;

	/// <summary>The original screen-constructor table at <c>0x9ACB70</c>.</summary>
	[OriginalGlobal(0x009ACB70)]
	public static IReadOnlyList<uint> ScreenConstructors { get; } = Array.AsReadOnly(CharacterCreationScreen.All.Select(screen => screen.ConstructorAddress).ToArray());

	private readonly CharacterCreationScreen[] _screens;
	private readonly CharacterPreviewModel[] _players;
	private int _selectedScreen = -1;
	private uint _status;
	private Vector3 _requestedPosition;
	private Vector3 _requestedDirection;
	private Vector3 _screenPosition;
	private Vector3 _screenDirection;
	private bool _disposed;

	/// <summary>
	/// Creates the thirteen screens and four player preview slots.
	/// </summary>
	[Original(0x004D3408, "CharacterMakingPreview_004d3408")]
	public CharacterPreview()
	{
		_screens = [.. CharacterCreationScreen.All];
		_players = new CharacterPreviewModel[PlayerCount];
		for (int index = 0; index < _players.Length; index++)
			_players[index] = new CharacterPreviewModel(index);
	}

	/// <summary>Gets the thirteen screens in constructor order.</summary>
	public IReadOnlyList<CharacterCreationScreen> Screens => _screens;

	/// <summary>Gets the four player preview slots.</summary>
	public IReadOnlyList<CharacterPreviewModel> Players => _players;

	/// <summary>Gets the active screen index, or minus one before a selection.</summary>
	public int SelectedScreen => _selectedScreen;

	/// <summary>Gets the number of preview slots with a model.</summary>
	public int LoadedModelCount => _players.Count(player => player.IsLoaded);

	/// <summary>Gets the shared screen status word that gates activation and transform writes.</summary>
	public uint Status => _status;

	/// <summary>Gets the last position passed to the transform writer, whether or not it was applied.</summary>
	public Vector3 RequestedPosition => _requestedPosition;

	/// <summary>Gets the last direction passed to the transform writer, whether or not it was applied.</summary>
	public Vector3 RequestedDirection => _requestedDirection;

	/// <summary>Gets the applied screen position, or zero before an activation opens the transform gate.</summary>
	public Vector3 ScreenPosition => _screenPosition;

	/// <summary>Gets the applied screen direction, or zero before an activation opens the transform gate.</summary>
	public Vector3 ScreenDirection => _screenDirection;

	/// <summary>
	/// Activates one screen by index.
	/// </summary>
	/// <remarks>
	/// The original also calls the selected screen's virtual initialiser and copies the six floats
	/// at object offsets <c>0x3C</c> through <c>0x50</c> into the container; those fields are not
	/// part of the constructor records.
	/// </remarks>
	/// <param name="index">The screen index from zero through twelve.</param>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the table.</exception>
	[Original(0x004D30FC, "CharacterMakingPreview_SelectScreen_004d30fc")]
	public void SelectScreen(int index)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(index);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, ScreenCount);
		_selectedScreen = index;
		_status |= 0x800;
	}

	/// <summary>
	/// Selects one screen when the activation bit is clear, then sets that bit. A second call does
	/// nothing until the container state is reset.
	/// </summary>
	/// <param name="index">The screen index from zero through twelve.</param>
	/// <returns><see langword="true"/> when this call activated the screen.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the table.</exception>
	[Original(0x004D31F4, "CharacterMakingPreview_ActivateScreen_004d31f4")]
	public bool ActivateScreen(int index)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(index);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, ScreenCount);
		if ((_status & 4) != 0)
			return false;
		_status |= 4;
		_selectedScreen = index;
		return true;
	}

	/// <summary>
	/// Records a requested position and direction and applies them when the transform gate is open.
	/// </summary>
	/// <param name="position">The requested screen position.</param>
	/// <param name="direction">The requested screen direction.</param>
	[Original(0x004D33C0, "CharacterMakingPreview_SetTransform_004d33c0")]
	public void SetScreenTransform(Vector3 position, Vector3 direction)
	{
		_requestedPosition = position;
		_requestedDirection = direction;
		if ((_status & 0xC) == 0)
			return;
		_screenPosition = position;
		_screenDirection = direction;
	}

	/// <summary>
	/// Restores the selection and transform state the resource group initialiser clears.
	/// </summary>
	/// <remarks>This is the selection and status portion of the reset at <c>0x4D471C</c>.</remarks>
	public void ResetState()
	{
		_selectedScreen = 0;
		_status = 0;
		_requestedPosition = Vector3.Zero;
		_requestedDirection = Vector3.Zero;
		_screenPosition = Vector3.Zero;
		_screenDirection = Vector3.Zero;
	}

	/// <summary>
	/// Loads the first four model-bearing entries into the player slots, using the motion archive's
	/// first motion as the shared animation when an entry carries none.
	/// </summary>
	/// <param name="archive">The parsed class model archive.</param>
	/// <param name="renderer">The renderer that owns the textures.</param>
	/// <param name="motionArchive">The motion archive loaded from <c>charamakingmot.bml</c>, or null to use the model archive's own motions.</param>
	/// <returns>The number of slots that received a model.</returns>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	public int LoadModels(BmlArchive archive, IRenderer renderer, BmlArchive? motionArchive = null)
	{
		ArgumentNullException.ThrowIfNull(archive);
		ArgumentNullException.ThrowIfNull(renderer);
		NinjaMotion? sharedMotion = motionArchive?.Files.Select(file => file.Motion).FirstOrDefault(motion => motion is not null)
			?? archive.Files.Select(file => file.Motion).FirstOrDefault(motion => motion is not null);
		int loaded = 0;
		foreach (BmlFile file in archive.Files)
		{
			if (file.Model is null || loaded >= PlayerCount)
				continue;
			_players[loaded].Load(file, renderer, file.Motion ?? sharedMotion);
			loaded++;
		}
		return loaded;
	}

	/// <summary>
	/// Advances every loaded preview motion.
	/// </summary>
	/// <param name="frames">The number of frames to add.</param>
	public void Advance(float frames)
	{
		foreach (CharacterPreviewModel player in _players)
			player.Advance(frames);
	}

	/// <summary>
	/// Submits every visible preview node through the merged scene renderer.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="camera">The camera for the preview scene.</param>
	/// <returns>The number of surfaces submitted.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ObjectDisposedException">The preview is released.</exception>
	public int Draw(IRenderer renderer, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ObjectDisposedException.ThrowIf(_disposed, this);
		List<SceneSurface> opaque = [];
		List<SceneSurface> transparent = [];
		foreach (CharacterPreviewModel player in _players)
			player.AppendSurfaces(opaque, transparent);
		if (opaque.Count == 0 && transparent.Count == 0)
			return 0;
		new SceneRenderer().Render(renderer, new RenderScene { Camera = camera, Opaque = opaque, Transparent = transparent });
		return opaque.Count + transparent.Count;
	}

	/// <summary>Releases the four preview models and their textures.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (CharacterPreviewModel player in _players)
			player.Dispose();
	}
}
