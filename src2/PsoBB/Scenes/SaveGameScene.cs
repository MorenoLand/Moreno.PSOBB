using System.Numerics;
using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 13: the save-after-credits screen and its Save and Exit without Saving menu.
/// </summary>
/// <remarks>
/// The scene at <c>0x6C8408</c> is the post-credits save screen, not the visual lobby: its two menu
/// rows resolve to unitxt group 12 strings 13 and 14, "Save." and "Exit without Saving.", and its
/// <c>title.adx</c> track is the title theme. It loads the same advertisement and background
/// surfaces as scene 5, applies the preset-9 NPC camera, and creates a 0x14000-byte menu buffer.
/// The port keeps the scene initialisation, the menu layout and the cancel, save-request and exit
/// transitions. The 0xBAA4-byte save container codec is ported in <c>PsoBB.Save</c>; the save-file
/// state machine and the session and character data it would write are not ported.
/// </remarks>
public sealed class SaveGameScene : IDisposable
{
	/// <summary>The scene number in the baked scene table.</summary>
	public const uint SceneNumber = 13;

	/// <summary>The scene parameter the initialiser stores.</summary>
	public const uint SceneParameter = 2;

	/// <summary>The viewport width the original uses.</summary>
	public const float ViewportWidth = 640f;

	/// <summary>The viewport height the original uses.</summary>
	public const float ViewportHeight = 480f;

	/// <summary>The right and bottom vertex coordinates of the full-screen surfaces.</summary>
	public static readonly Vector2 SurfaceSize = new(639f, 479f);

	/// <summary>The advertisement surface loaded at <c>0x401220</c>.</summary>
	public const string AdTextureName = "f256_ad_pic_2";

	/// <summary>The background surface loaded at <c>0x40141C</c>.</summary>
	public const string BackgroundTextureName = "f256_backtext";

	/// <summary>The music track at <c>0x96B8FC</c>.</summary>
	public const string MusicTrackName = "title.adx";

	/// <summary>The attenuation passed to <c>0x814888</c>.</summary>
	public const int MusicAttenuation = -900;

	/// <summary>The NPC camera preset selected by <c>0x4D30FC</c>.</summary>
	public const int CameraPreset = 9;

	/// <summary>The camera view origin passed to <c>0x4D33C0</c>.</summary>
	public static readonly Vector3 CameraViewOrigin = Vector3.Zero;

	/// <summary>The camera view extent passed to <c>0x4D33C0</c>.</summary>
	public static readonly Vector3 CameraViewExtent = new(0f, 0f, -100f);

	/// <summary>The list-window position from <c>0x96B8E0</c>.</summary>
	public static readonly Vector2 MenuPosition = new(324f, 374f);

	/// <summary>The row step the list window uses.</summary>
	public const float MenuRowHeight = 20f;

	/// <summary>The first menu row from unitxt group 12 string 13.</summary>
	public const string SaveLabel = "Save.";

	/// <summary>The second menu row from unitxt group 12 string 14.</summary>
	public const string ExitWithoutSavingLabel = "Exit without Saving.";

	/// <summary>The diffuse colour the background surface draws with.</summary>
	public const uint BackgroundColor = 0x3B280A81;

	/// <summary>The number of rows the menu creates.</summary>
	public const int MenuItemCount = 2;

	private readonly ITexture _adTexture;
	private readonly ITexture _backgroundTexture;
	private readonly MusicStream? _music;
	private readonly AudioPipeline? _audio;
	private UiListWindow? _menu;
	private IUiTextSurface? _textSurface;
	private SaveGameSceneState _state = SaveGameSceneState.CreatingMenu;
	private bool _disposed;

	/// <summary>
	/// Loads both surfaces and the title track and stores scene parameter 2; the first update creates the menu.
	/// </summary>
	/// <param name="files">The data files that resolve the retail assets.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <param name="audio">The optional music pipeline; the track is only opened when supplied.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	/// <exception cref="FileNotFoundException">A required surface is absent.</exception>
	/// <exception cref="TextureFormatException">A surface archive is malformed.</exception>
	[Original(0x006C8408, "SaveGameScene_Init_006c8408")]
	public SaveGameScene(IDataFiles files, IRenderer renderer, AudioPipeline? audio = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		ITexture ad = SceneTextureLoader.Load(files, renderer, AdTextureName);
		ITexture? background = null;
		MusicStream? music = null;
		try
		{
			background = SceneTextureLoader.Load(files, renderer, BackgroundTextureName);
			MusicTrackPath = MusicLibrary.GetTrackPath(MusicTrackName);
			HasMusic = files.TryRead(MusicTrackPath, out _);
			if (HasMusic && audio is not null)
			{
				MusicLibrary library = new(files);
				music = library.Open(MusicTrackName);
				music.IsLooping = true;
				audio.Music = music;
			}
		}
		catch
		{
			music?.Source.Dispose();
			background?.Dispose();
			ad.Dispose();
			throw;
		}
		_adTexture = ad;
		_backgroundTexture = background!;
		_music = music;
		_audio = music is null ? null : audio;
		SceneManager.SetSceneParameter(SceneParameter);
	}

	/// <summary>Gets the current scene phase.</summary>
	public SaveGameSceneState State => _state;

	/// <summary>Gets the loaded advertisement surface.</summary>
	public ITexture AdTexture => _adTexture;

	/// <summary>Gets the loaded background surface.</summary>
	public ITexture BackgroundTexture => _backgroundTexture;

	/// <summary>Gets the two-row menu, or throws before the first update creates it.</summary>
	public UiListWindow Menu => _menu ?? throw new InvalidOperationException("The menu is not created before the first update.");

	/// <summary>Gets the resolved music path, or the empty string when no track was opened.</summary>
	public string MusicTrackPath { get; }

	/// <summary>Gets a value indicating whether the title track is present in the data files.</summary>
	public bool HasMusic { get; }

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Applies the text surface used to measure and draw the two menu rows.
	/// </summary>
	public IUiTextSurface? TextSurface
	{
		get => _textSurface;
		set
		{
			_textSurface = value;
			if (_menu is not null)
				ApplyTextSurface(_menu, value);
		}
	}

	/// <summary>
	/// Creates the menu on the first frame, then moves the selection and applies the save, exit and cancel transitions.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x006C81A0, "SaveGameScene_Update_006c81a0")]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_state == SaveGameSceneState.CreatingMenu)
		{
			CreateMenu();
			_state = SaveGameSceneState.Menu;
			return;
		}
		if (_state != SaveGameSceneState.Menu)
			return;
		UiListWindow menu = Menu;
		if (input.WasActionPressed(InputAction.Cancel))
		{
			_state = SaveGameSceneState.Canceled;
			SceneManager.RequestRestart();
			return;
		}
		if (input.WasActionPressed(InputAction.MoveForward))
			menu.SelectPrevious();
		else if (input.WasActionPressed(InputAction.MoveBackward))
			menu.SelectNext();
		if (!input.WasActionPressed(InputAction.Confirm))
			return;
		if (menu.SelectedIndex == 0)
		{
			_state = SaveGameSceneState.SaveRequested;
			return;
		}
		_state = SaveGameSceneState.ExitRequested;
		SceneManager.RequestRootScene();
	}

	/// <summary>
	/// Adds the advertisement surface, the tinted background surface and the menu to the draw list.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		Vector4 coordinates = new(0f, 0f, 1f, 1f);
		draw.Add(new UiQuad(Vector2.Zero, SurfaceSize, coordinates, _adTexture, 0xFFFFFFFFu));
		draw.Add(new UiQuad(Vector2.Zero, SurfaceSize, coordinates, _backgroundTexture, BackgroundColor));
		_menu?.Draw(draw);
	}

	/// <summary>
	/// Stops the music, releases both surfaces and the menu, and marks the scene released.
	/// </summary>
	[Original(0x006C8268, "SaveGameScene_Release_006c8268")]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_state = SaveGameSceneState.Released;
		if (_audio is not null && _music is not null && ReferenceEquals(_audio.Music, _music))
			_audio.Music = null;
		if (_music is not null)
			_music.Source.Dispose();
		_menu?.Dispose();
		_adTexture.Dispose();
		_backgroundTexture.Dispose();
	}

	[Original(0x006C7C34, "SaveGameScene_CreateMenu_006c7c34")]
	private void CreateMenu()
	{
		UiListWindow created = new() { Position = MenuPosition, ItemHeight = MenuRowHeight, ScrollBarWidth = 0f };
		created.SetItems([new UiListItem(SaveLabel), new UiListItem(ExitWithoutSavingLabel)]);
		created.SelectedIndex = 0;
		ApplyTextSurface(created, _textSurface);
		_menu = created;
	}

	private static void ApplyTextSurface(UiListWindow menu, IUiTextSurface? surface)
	{
		menu.TextSurface = surface;
		float width = 0f;
		if (surface is not null)
		{
			width = MathF.Max(width, surface.Measure(SaveLabel));
			width = MathF.Max(width, surface.Measure(ExitWithoutSavingLabel));
		}
		menu.Size = new Vector2(MathF.Ceiling(width), MenuItemCount * MenuRowHeight);
	}
}
