using System.Numerics;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 1: the publisher-logo screen that runs before the title menu.
/// </summary>
/// <remarks>
/// The initialiser creates the shared screen container, selects screen 9, loads the logo resource
/// group and starts the logo timeline. The resource group resets the selection and transform gate,
/// so the first update reactivates screen 9 and only then applies the two transform vectors. The
/// logo timeline finishes after its sixty-update states and schedules the automatic hand-off to
/// scene 2. Cancel restarts the scene loop and the shipped confirm check requests scene 0.
/// </remarks>
public sealed class Scene1 : IDisposable
{
	/// <summary>The scene number in the baked scene table.</summary>
	public const uint SceneNumber = 1;

	/// <summary>The scene requested when the logo timeline finishes.</summary>
	public const uint NextScene = 2;

	/// <summary>The screen index the title screen selects in the shared container.</summary>
	public const int TitleScreenIndex = CharacterPreview.TitleScreen;

	/// <summary>The screen constructor address at index 9 of the table at <c>0x9ACB70</c>.</summary>
	public const uint TitleScreenConstructor = 0x004D5A14;

	/// <summary>The position vector both the initialiser and the update write.</summary>
	public static readonly Vector3 ScreenPosition = Vector3.Zero;

	/// <summary>The direction vector both the initialiser and the update write.</summary>
	public static readonly Vector3 ScreenDirection = new(0f, 0f, -100f);

	/// <summary>The full-screen overlay size used by the fade task at <c>0x00788820</c>.</summary>
	public static readonly Vector2 FadeOverlaySize = new(640f, 480f);

	/// <summary>The transition handler the initialiser selects for scenes one through two.</summary>
	public const uint TransitionHandlerAddress = 0x005BA38C;

	/// <summary>The six resource pairs loaded from the table at <c>0x9FF6A4</c>.</summary>
	[OriginalGlobal(0x009FF6A4)]
	public static IReadOnlyList<TitleResourceCallback> ResourceGroup { get; } = Array.AsReadOnly<TitleResourceCallback>(
	[
		new(0x0078DFE4, 0x00000000),
		new(0x004D471C, 0x004D2AF0),
		new(0x004D4800, 0x004D2774),
		new(0x007933BC, 0x00793190),
		new(0x00411FB8, 0x00411BCC),
		new(0x0078DDA4, 0x00000000),
	]);

	private readonly CharacterPreview _preview;
	private readonly TitleLogo _logo;
	private readonly TitleLogoSequence _sequence;
	private readonly Func<bool> _confirmRequested;
	private bool _disposed;
	private bool _taskFinished;
	private bool _taskRequestedScene;

	/// <summary>
	/// Loads the logo resources and starts the logo timeline.
	/// </summary>
	/// <param name="files">The data files that resolve the logo archive.</param>
	/// <param name="renderer">The renderer that owns the screen container and textures.</param>
	/// <param name="textures">The shared texture cache that owns the logo sprites.</param>
	/// <param name="cinematicLogo">Whether the cinematic logo descriptor is selected.</param>
	/// <param name="confirmRequested">The replacement for the shipped confirm check, which returns zero.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The logo archive is absent.</exception>
	/// <exception cref="TextureFormatException">The logo archive is malformed or has too few sprites.</exception>
	[Original(0x007A45D0, "Scene1_Init_007a45d0")]
	public Scene1(
		IDataFiles files,
		IRenderer renderer,
		TextureCache textures,
		bool cinematicLogo = false,
		Func<bool>? confirmRequested = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(textures);
		SceneManager.SetSceneParameter(SceneNumber);
		_preview = new CharacterPreview();
		_preview.SelectScreen(TitleScreenIndex);
		_preview.SetScreenTransform(ScreenPosition, ScreenDirection);
		TitleFlags |= 2;
		_preview.ResetState();
		TitleScreenWidth = renderer.Settings.Width;
		TitleScreenHeight = renderer.Settings.Height;
		_logo = new TitleLogo(files, textures, cinematicLogo);
		TitleFlags &= ~2u;
		_sequence = new TitleLogoSequence(cinematicLogo);
		_confirmRequested = confirmRequested ?? (() => false);
	}

	/// <summary>Gets the shared screen container.</summary>
	public CharacterPreview Preview => _preview;

	/// <summary>Gets the loaded logo sprites.</summary>
	public TitleLogo Logo => _logo;

	/// <summary>Gets the logo timeline.</summary>
	public TitleLogoSequence Sequence => _sequence;

	/// <summary>Gets a value indicating whether the first update activated screen 9.</summary>
	public bool IsScreenActive => (_preview.Status & 4) != 0;

	/// <summary>Gets a value indicating whether the logo timeline has handed the scene to scene 2.</summary>
	public bool IsComplete => _taskRequestedScene;

	/// <summary>Gets the title drawing flag word at <c>0xA9CA40</c>; bit 1 enables the title pass.</summary>
	[OriginalGlobal(0x00A9CA40)]
	public static uint TitleFlags { get; private set; }

	/// <summary>Gets a value indicating whether bit 1 of the title drawing flag is set.</summary>
	public static bool TitleDrawingEnabled => (TitleFlags & 2) != 0;

	/// <summary>Sets bit 1 of the title drawing flag, which enables the loading draw.</summary>
	[Original(0x0078DFE4, "TitleDrawing_Enable_0078dfe4")]
	public static void EnableTitleDrawing() => TitleFlags |= 2;

	/// <summary>Clears bit 1 of the title drawing flag when it is set.</summary>
	[Original(0x0078DDA4, "TitleDrawing_Disable_0078dda4")]
	public static void DisableTitleDrawing()
	{
		if ((TitleFlags & 2) != 0)
			TitleFlags &= ~2u;
	}

	/// <summary>Gets the width the logo resource group stores from the display settings.</summary>
	public static int TitleScreenWidth { get; private set; }

	/// <summary>Gets the height the logo resource group stores from the display settings.</summary>
	public static int TitleScreenHeight { get; private set; }

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Reactivates screen 9, rewrites both transform vectors, advances the logo timeline, then runs
	/// the cancel and confirm checks in the original order.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007A4418, "Scene1_Update_007a4418")]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_preview.ActivateScreen(TitleScreenIndex);
		_preview.SetScreenTransform(ScreenPosition, ScreenDirection);
		_sequence.Update();
		if (!_taskFinished && _sequence.IsFinished)
			_taskFinished = true;
		else if (_taskFinished && !_taskRequestedScene)
		{
			SceneManager.RequestScene(NextScene);
			_taskRequestedScene = true;
		}
		if (input.WasActionPressed(InputAction.Cancel))
			SceneManager.RequestRestart();
		if (_confirmRequested())
			SceneManager.RequestScene(SceneManager.ExitScene);
	}

	/// <summary>
	/// Adds the white background, the logo rectangles for the current timeline state and the black fade overlay.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		draw.Add(new UiQuad(Vector2.Zero, FadeOverlaySize, new Vector4(0f, 0f, 1f, 1f), null, 0xFFFFFFFFu));
		if (!_sequence.IsFinished)
			_logo.Draw(draw, _sequence.Variant);
		if (_sequence.Alpha > 0)
			draw.Add(new UiQuad(Vector2.Zero, FadeOverlaySize, new Vector4(0f, 0f, 1f, 1f), null, (uint)_sequence.Alpha << 24));
	}

	/// <summary>
	/// Releases the logo sprites and clears the title drawing flag. Repeated calls do nothing.
	/// </summary>
	[Original(0x007A44D0, "Scene1_Release_007a44d0")]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_logo.Dispose();
		TitleFlags &= ~2u;
	}

	/// <summary>
	/// Restores the process-wide flags and dimensions to their shipped values.
	/// </summary>
	public static void Reset()
	{
		TitleFlags = 0;
		TitleScreenWidth = 0;
		TitleScreenHeight = 0;
	}
}

/// <summary>
/// One initialiser and shutdown pair from the title resource table at <c>0x9FF6A4</c>.
/// </summary>
/// <param name="Initializer">The function called while loading, in table order.</param>
/// <param name="Shutdown">The function called while releasing, in reverse table order, or zero.</param>
public readonly record struct TitleResourceCallback(uint Initializer, uint Shutdown);
