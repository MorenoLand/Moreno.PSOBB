using System.Numerics;
using PsoBB.Audio;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Models;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 5: the character-making screen with its four player previews and thirteen creation screens.
/// </summary>
/// <remarks>
/// The scene loads <c>charamakingmot.bml</c>, the <c>CHARA.adx</c> music track and the two full-screen
/// surfaces the original creates at <c>0x401220</c> and <c>0x40141C</c>. It then creates the preview
/// container at <c>0x4D3408</c> and activates screen 8 through <c>0x4D30FC</c>. The creation controls
/// themselves and the 3D model draw are not ported; the scene stops at the preview and transition
/// boundary.
/// </remarks>
public sealed class CharacterMakingScene : IDisposable
{
	/// <summary>The scene number in the baked scene table.</summary>
	public const uint SceneNumber = 5;

	/// <summary>The scene parameter the initialiser stores.</summary>
	public const uint SceneParameter = 2;

	/// <summary>The scene requested after a confirmation.</summary>
	public const uint ConfirmScene = 2;

	/// <summary>The viewport width the original uses.</summary>
	public const float ViewportWidth = 640f;

	/// <summary>The viewport height the original uses.</summary>
	public const float ViewportHeight = 480f;

	/// <summary>The right and bottom vertex coordinates of the full-screen surfaces.</summary>
	public static readonly Vector2 SurfaceSize = new(639f, 479f);

	/// <summary>The model archive named by the table at <c>0x9B1308</c>.</summary>
	public const string ModelArchiveName = "charamakingmot.bml";

	/// <summary>The music track loaded after the model.</summary>
	public const string MusicTrackName = "CHARA.adx";

	/// <summary>The advertisement surface loaded at <c>0x401220</c>.</summary>
	public const string AdTextureName = "f256_ad_pic_2";

	/// <summary>The background surface loaded at <c>0x40141C</c>.</summary>
	public const string BackgroundTextureName = "f256_backtext";

	/// <summary>The control identifier the original tests after the mouse and keyboard update.</summary>
	public const int ConfirmControlId = 0x50;

	private BmlArchive? _modelArchive;
	private CharacterPreview? _preview;
	private ITexture? _adTexture;
	private ITexture? _backgroundTexture;
	private MusicStream? _music;
	private AudioPipeline? _audio;
	private bool _disposed;

	/// <summary>
	/// Gets or sets the re-entry flag that redirects the next scene start to the exit scene.
	/// </summary>
	[OriginalGlobal(0x00A721CC)]
	public static byte ReenterFlag { get; set; }

	/// <summary>
	/// Loads the scene assets, creates the preview container and selects screen 8.
	/// </summary>
	/// <param name="files">The data files that resolve the retail assets.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <param name="audio">The optional music pipeline; the track is only opened when supplied.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	/// <exception cref="FileNotFoundException">A required asset is absent.</exception>
	/// <exception cref="ModelFormatException">The model archive is malformed.</exception>
	/// <exception cref="TextureFormatException">A texture archive is malformed.</exception>
	[Original(0x004E9C74, "CharacterMakingScene_Init_004e9c74")]
	public CharacterMakingScene(IDataFiles files, IRenderer renderer, AudioPipeline? audio = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		SceneManager.SetSceneParameter(SceneParameter);
		if (ReenterFlag != 0)
		{
			ReenterFlag = 0;
			IsEntryRestart = true;
			SceneManager.RequestRestart();
			return;
		}
		LoadPreview(files, renderer, audio);
	}

	/// <summary>Gets the loaded model archive.</summary>
	/// <exception cref="InvalidOperationException">The scene requested a restart before loading.</exception>
	public BmlArchive ModelArchive => _modelArchive ?? throw NotLoaded();

	/// <summary>Gets the preview container.</summary>
	/// <exception cref="InvalidOperationException">The scene requested a restart before loading.</exception>
	public CharacterPreview Preview => _preview ?? throw NotLoaded();

	/// <summary>Gets the advertisement surface created at <c>0x401220</c>.</summary>
	/// <exception cref="InvalidOperationException">The scene requested a restart before loading.</exception>
	public ITexture AdTexture => _adTexture ?? throw NotLoaded();

	/// <summary>Gets the background surface created at <c>0x40141C</c>.</summary>
	/// <exception cref="InvalidOperationException">The scene requested a restart before loading.</exception>
	public ITexture BackgroundTexture => _backgroundTexture ?? throw NotLoaded();

	/// <summary>Gets the number of player preview objects.</summary>
	public int PreviewObjectCount => Preview.Players.Count;

	/// <summary>Gets the selected creation screen.</summary>
	public int SelectedScreen => Preview.SelectedScreen;

	/// <summary>Gets the resolved music path, or the empty string before a successful load.</summary>
	public string MusicTrackPath { get; private set; } = "";

	/// <summary>Gets a value indicating whether the music track is present in the data files.</summary>
	public bool HasMusic { get; private set; }

	/// <summary>Gets a value indicating whether the scene requested the exit scene instead of loading.</summary>
	public bool IsEntryRestart { get; }

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Applies the cancel and confirm transitions of the scene update.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x004E9BD4, "CharacterMakingScene_Update_004e9bd4")]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (IsEntryRestart)
			return;
		if (input.WasActionPressed(InputAction.Cancel))
			SceneManager.RequestRestart();
		if (input.WasActionPressed(InputAction.Confirm))
			SceneManager.RequestScene(ConfirmScene);
	}

	/// <summary>
	/// Adds the two full-screen surfaces to the interface draw list in creation order.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (IsEntryRestart)
			return;
		Vector4 coordinates = new(0f, 0f, 1f, 1f);
		draw.Add(new UiQuad(Vector2.Zero, SurfaceSize, coordinates, AdTexture, 0xFFFFFFFFu));
		draw.Add(new UiQuad(Vector2.Zero, SurfaceSize, coordinates, BackgroundTexture, 0xFFFFFFFFu));
	}

	/// <summary>
	/// Stops the music, releases the preview surfaces and marks the scene released.
	/// </summary>
	[Original(0x004E9C58, "CharacterMakingScene_Release_004e9c58")]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		ReleasePreview();
	}

	[Original(0x004E3134, "CharacterMakingScene_ReleaseObjects_004e3134")]
	private void ReleasePreview()
	{
		if (_audio is not null && _music is not null)
		{
			if (ReferenceEquals(_audio.Music, _music))
				_audio.Music = null;
			_music.Source.Dispose();
		}
		_adTexture?.Dispose();
		_backgroundTexture?.Dispose();
		_adTexture = null;
		_backgroundTexture = null;
		_music = null;
		_audio = null;
		_preview = null;
	}

	/// <summary>
	/// Restores the re-entry flag to its shipped value.
	/// </summary>
	public static void Reset() => ReenterFlag = 0;

	[Original(0x004DF9EC, "CharacterMakingScene_Load_004df9ec")]
	private void LoadPreview(IDataFiles files, IRenderer renderer, AudioPipeline? audio)
	{
		_preview = new CharacterPreview();
		_preview.SelectScreen(CharacterPreview.InitialScreen);
		_adTexture = SceneTextureLoader.Load(files, renderer, AdTextureName);
		_backgroundTexture = SceneTextureLoader.Load(files, renderer, BackgroundTextureName);
		_modelArchive = BmlArchive.Parse(files.Read(ModelArchiveName).Span);
		MusicTrackPath = MusicLibrary.GetTrackPath(MusicTrackName);
		HasMusic = files.TryRead(MusicTrackPath, out _);
		if (HasMusic && audio is not null)
		{
			MusicLibrary library = new(files);
			_music = library.Open(MusicTrackName);
			_music.IsLooping = true;
			_audio = audio;
			_audio.Music = _music;
		}
	}

	private static InvalidOperationException NotLoaded() =>
		new("The scene requested a restart before loading its assets.");
}
