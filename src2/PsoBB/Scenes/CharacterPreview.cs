using PsoBB.Graphics;
using PsoBB.Models;
using PsoBB.Rendering;

namespace PsoBB.Scenes;

/// <summary>
/// The character-making preview container: four player slots and thirteen screen constructors.
/// </summary>
/// <remarks>
/// The original allocates a 468-byte container at <c>0x4D3408</c>, creates every screen from the
/// table at <c>0x9ACB70</c>, and activates one screen through <c>0x4D30FC</c>. Screens zero through
/// three are the four player preview slots; the remaining screens are the creation components.
/// </remarks>
public sealed class CharacterPreview : IDisposable
{
	/// <summary>The number of screen constructors in the original table.</summary>
	public const int ScreenCount = CharacterCreationScreen.Count;

	/// <summary>The number of player preview slots.</summary>
	public const int PlayerCount = CharacterCreationScreen.PlayerCount;

	/// <summary>The screen the scene activates on entry.</summary>
	public const int InitialScreen = CharacterCreationScreen.InitialIndex;

	/// <summary>The original screen-constructor table in constructor order.</summary>
	public static IReadOnlyList<uint> ScreenConstructors { get; } = Array.AsReadOnly(CharacterCreationScreen.All.Select(screen => screen.ConstructorAddress).ToArray());

	private readonly CharacterCreationScreen[] _screens;
	private readonly CharacterPreviewModel[] _players;
	private int _selectedScreen = -1;
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
