using System.Numerics;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 2: the shared title and login interface that follows the publisher logo.
/// </summary>
/// <remarks>
/// The scene owns the shared screen state and fade word and the scene-2 subset of the title
/// initialiser. The title skin, theme table, one-megabyte effect buffer and the 108 interface
/// elements created by <c>0x008013BC</c> are not reconstructed here; the login and art ports supply
/// the interface tree through <see cref="Scene2Interface"/>. The transition overlay manager at
/// <c>0x007195C8</c> is represented by <see cref="Scene2TransitionOverlay"/> only for its observable
/// draw order; its band pass at <c>0x00719B1C</c> remains a renderer dependency.
/// </remarks>
public sealed class Scene2 : IDisposable
{
	/// <summary>The original scene number.</summary>
	public const uint SceneNumber = 2;

	/// <summary>The shared screen state the selector transition enters.</summary>
	public const uint SharedScreenState = 9;

	/// <summary>The shared screen state the scene initialiser enters.</summary>
	public const uint EntryScreenState = 0;

	/// <summary>The fade state the scene initialiser and the selector start.</summary>
	public const uint SharedFadeState = 1;

	/// <summary>The shared screen state the release callback writes.</summary>
	public const uint ReleasedScreenState = 0xC;

	/// <summary>The screen index the shared title container selects.</summary>
	public const int TitleScreenIndex = CharacterPreview.TitleScreen;

	/// <summary>The position vector the initialiser writes.</summary>
	public static readonly Vector3 ScreenPosition = Vector3.Zero;

	/// <summary>The direction vector the initialiser writes.</summary>
	public static readonly Vector3 ScreenDirection = new(0f, 0f, -100f);

	/// <summary>The replacement for the callback at <c>0x0083C4D8</c>, called when its flag is nonzero.</summary>
	public static Action? SharedScreenCallback { get; set; }

	private readonly Scene2Interface _interface;
	private readonly Func<bool> _confirmRequested;
	private CharacterPreview? _preview;
	private bool _started;
	private bool _disposed;

	/// <summary>
	/// Creates the scene over an interface tree supplied by the login and art ports.
	/// </summary>
	/// <param name="ui">The interface tree and shared-screen factory.</param>
	/// <param name="confirmRequested">The replacement for the shipped confirm check, which returns zero.</param>
	/// <exception cref="ArgumentNullException"><paramref name="ui"/> is null.</exception>
	public Scene2(Scene2Interface ui, Func<bool>? confirmRequested = null)
	{
		ArgumentNullException.ThrowIfNull(ui);
		_interface = ui;
		_confirmRequested = confirmRequested ?? (() => false);
	}

	/// <summary>Gets the shared title container the initialiser creates.</summary>
	/// <exception cref="InvalidOperationException">The scene is not started.</exception>
	public CharacterPreview Preview => _preview ?? throw new InvalidOperationException("The scene is not started.");

	/// <summary>Gets the interface tree and screen factory.</summary>
	public Scene2Interface Interface => _interface;

	/// <summary>Gets a value indicating whether the initialiser ran.</summary>
	public bool IsStarted => _started;

	/// <summary>Gets a value indicating whether the release callback ran.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Creates the shared title container, selects screen 9 with the original transform and enters
	/// shared screen state zero with fade one.
	/// </summary>
	/// <remarks>
	/// This is the scene-2 portion of <c>0x00824934</c>. The skin, theme, effect-buffer and interface
	/// element stages of <c>0x00824944</c> belong to the art and login ports; the frame-end call at
	/// <c>0x0080030C</c> belongs to the host loop.
	/// </remarks>
	/// <exception cref="InvalidOperationException">The scene is already started.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x00824934, "Scene2_Init_00824934")]
	public void Start()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_started)
			throw new InvalidOperationException("The scene is already started.");
		_started = true;
		_preview = new CharacterPreview();
		_preview.SelectScreen(TitleScreenIndex);
		_preview.SetScreenTransform(ScreenPosition, ScreenDirection);
		EnterSharedScreenStateZero();
	}

	/// <summary>
	/// Applies the shared fade step, advances the interface tree, then runs the cancel and confirm checks.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="InvalidOperationException">The scene is not started.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x0081AA00, "Scene2_Update_0081aa00")]
	public void Update(InputManager input) => Update(input, 0f);

	/// <summary>
	/// Applies the shared fade step, advances the interface tree, then runs the cancel and confirm checks.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <param name="deltaSeconds">The frame duration passed to the interface tree.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="InvalidOperationException">The scene is not started.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Update(InputManager input, float deltaSeconds)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (!_started)
			throw new InvalidOperationException("The scene is not started.");
		AdvanceFade();
		_interface.Update(deltaSeconds);
		if (input.WasActionPressed(InputAction.Cancel))
			SceneManager.RequestRestart();
		if (_confirmRequested())
			SceneManager.RequestExit();
	}

	/// <summary>
	/// Draws the interface tree in attach order.
	/// </summary>
	/// <param name="draw">The draw list that receives the interface quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_interface.Draw(draw);
	}

	/// <summary>
	/// Hides the current shared screen, releases the interface tree and marks the shared screen state released.
	/// </summary>
	/// <remarks>
	/// This is the scene-owned portion of <c>0x0081E160</c>. Renderer, file-handle, effect-buffer and
	/// frame-end teardown belong to the host; the interface tree teardown is delegated to
	/// <see cref="Scene2Interface.Dispose"/>.
	/// </remarks>
	[Original(0x0081E160, "Scene2_Release_0081e160")]
	public void Release()
	{
		if (_disposed)
			return;
		_disposed = true;
		_interface.HideCurrentScreen();
		_interface.Dispose();
		_preview?.Dispose();
		_preview = null;
		GameState.SceneScreenState = ReleasedScreenState;
	}

	/// <inheritdoc/>
	public void Dispose() => Release();

	/// <summary>
	/// Saves the current shared screen state, selects state 9 and starts fade 1.
	/// </summary>
	[Original(0x00824860)]
	public static void SelectSharedScreenState()
	{
		uint previous = GameState.SceneScreenState;
		GameState.SceneScreenState = SharedScreenState;
		GameState.PreviousSceneScreenState = previous;
		GameState.SceneFadeState = SharedFadeState;
	}

	/// <summary>
	/// Restores the scene-owned callback to its shipped state.
	/// </summary>
	public static void Reset() => SharedScreenCallback = null;

	[Original(0x0081E298, "Scene2_EnterSharedScreenStateZero_0081e298")]
	private static void EnterSharedScreenStateZero()
	{
		uint previous = GameState.SceneScreenState;
		GameState.SceneScreenState = EntryScreenState;
		GameState.PreviousSceneScreenState = previous;
		GameState.SceneFadeState = SharedFadeState;
		if (GameState.SharedScreenCallbackFlag != 0)
			SharedScreenCallback?.Invoke();
	}

	private void AdvanceFade()
	{
		uint fade = GameState.SceneFadeState;
		if (fade == 0)
			return;
		if (fade == 1)
		{
			_interface.HideCurrentScreen();
			GameState.SceneFadeState = 2;
			return;
		}
		if (fade != 2)
			return;
		GameState.SceneFadeState = 0;
		_interface.CreateScreen(GameState.SceneScreenState);
	}
}
