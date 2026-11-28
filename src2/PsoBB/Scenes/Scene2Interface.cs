using PsoBB.Gui;

namespace PsoBB.Scenes;

/// <summary>
/// The shared screen factory and the update and draw pump the scene-2 lifecycle drives.
/// </summary>
/// <remarks>
/// The original allocates one screen object for the current shared state at <c>0x0081AAC8</c> and
/// stores it in the pointer at <c>0x00ACA4E0</c>. The screen constructors are not part of this
/// assembly: the login and art ports supply them through <see cref="ScreenFactory"/>. The fade
/// path clears the pointer after setting bit zero of the screen's flag word, exactly as
/// <c>0x0081AA00</c> and <c>0x0081E160</c> do.
/// </remarks>
public sealed class Scene2Interface : IDisposable
{
	/// <summary>The number of shared screen states in the original switch.</summary>
	public const int ScreenStateCount = 13;

	/// <summary>The value the release callback writes to the shared screen state.</summary>
	public const uint ReleasedScreenState = Scene2.ReleasedScreenState;

	/// <summary>The original state-to-constructor table read from the switch at <c>0x0081AAC8</c>.</summary>
	public static IReadOnlyList<Scene2ScreenDefinition> ScreenDefinitions { get; } = Array.AsReadOnly<Scene2ScreenDefinition>(
	[
		new(0, 0x006F8130, 0x4C, true),
		new(1, 0x00793458, 0x28, true),
		new(2, 0x00000000, 0x00, false),
		new(3, 0x007BDDC8, 0x30, true),
		new(4, 0x0041450C, 0x24, true),
		new(5, 0x00412A48, 0x24, true),
		new(6, 0x004135E0, 0x60, true),
		new(7, 0x004107FC, 0x48, true),
		new(8, 0x0040D8EC, 0x24, true),
		new(9, 0x00403018, 0x1290, true),
		new(10, 0x00000000, 0x00, false),
		new(11, 0x00788050, 0x24, true),
		new(12, 0x00000000, 0x00, false),
	]);

	private readonly Func<uint, Scene2Screen?> _screenFactory;
	private Scene2Screen? _hiddenScreen;
	private bool _disposed;

	/// <summary>
	/// Creates the interface over the screen factory supplied by the login and art ports.
	/// </summary>
	/// <param name="screenFactory">The factory that builds one shared screen for a state, or null when that state is unported.</param>
	/// <exception cref="ArgumentNullException"><paramref name="screenFactory"/> is null.</exception>
	public Scene2Interface(Func<uint, Scene2Screen?> screenFactory)
	{
		ArgumentNullException.ThrowIfNull(screenFactory);
		_screenFactory = screenFactory;
	}

	/// <summary>Gets the active shared screen, or <see langword="null"/> after the fade clears it.</summary>
	public Scene2Screen? CurrentScreen { get; private set; }

	/// <summary>Gets or sets the screen factory in use.</summary>
	public Func<uint, Scene2Screen?> ScreenFactory => _screenFactory;

	/// <summary>
	/// Creates the shared screen for a state and stores it as the current screen.
	/// </summary>
	/// <remarks>
	/// States 2, 10 and 12 have no case in the original switch and leave the current screen alone.
	/// States other than 0 and 9 run the string comparison at <c>0x0081E118</c>; that comparison only
	/// gates a side effect and is not reproduced here. A state with a ported constructor calls the
	/// factory; an unported constructor leaves <see cref="CurrentScreen"/> null.
	/// </remarks>
	/// <param name="state">The shared screen state.</param>
	/// <exception cref="ObjectDisposedException">The interface is released.</exception>
	[Original(0x0081AAC8, "Scene2_CreateSharedScreen_0081aac8")]
	public void CreateScreen(uint state)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (state >= ScreenStateCount || !ScreenDefinitions[(int)state].CreatesScreen)
			return;
		CurrentScreen = _screenFactory(state);
	}

	/// <summary>
	/// Advances the current shared screen tree.
	/// </summary>
	/// <remarks>This is the update half of the task pass at <c>0x0081745C</c>.</remarks>
	/// <param name="deltaSeconds">The frame duration.</param>
	/// <exception cref="ObjectDisposedException">The interface is released.</exception>
	public void Update(float deltaSeconds)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		CurrentScreen?.Update(deltaSeconds);
	}

	/// <summary>
	/// Draws the current shared screen tree in attach order.
	/// </summary>
	/// <remarks>This is the draw half of the pass at <c>0x00817604</c> and <c>0x00818F80</c>.</remarks>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The interface is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		CurrentScreen?.Draw(draw);
	}

	/// <summary>
	/// Clears the current screen pointer and marks its flag word hidden with the original mask.
	/// </summary>
	/// <remarks>
	/// The original zero-extends the low word at screen offset eight, sets bit zero and stores only
	/// the low word back, so the high word keeps its value: the result is
	/// <c>(oldHighWord &lt;&lt; 16) | (oldLowWord | 1)</c>. The screen is not disposed here; the owner
	/// that supplied it keeps responsibility, matching the original, which only clears the pointer.
	/// </remarks>
	public void HideCurrentScreen()
	{
		Scene2Screen? screen = CurrentScreen;
		if (screen is null)
			return;
		CurrentScreen = null;
		screen.Flags = (screen.Flags & 0xFFFF0000u) | ((screen.Flags | 1u) & 0xFFFFu);
		_hiddenScreen = screen;
	}

	/// <summary>
	/// Releases the interface and the current shared screen.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		CurrentScreen?.Dispose();
		_hiddenScreen?.Dispose();
		CurrentScreen = null;
		_hiddenScreen = null;
	}

}

/// <summary>
/// One shared screen object with its original flag word and interface tree.
/// </summary>
public sealed class Scene2Screen : IDisposable
{
	/// <summary>The bit the fade and release paths set in the shared screen flag word.</summary>
	public const uint HiddenFlag = 1;

	private readonly UiManager _ui;
	private bool _disposed;

	/// <summary>
	/// Creates a screen over an interface panel and takes ownership of the panel.
	/// </summary>
	/// <param name="root">The root panel supplied by the login and art ports.</param>
	/// <param name="flags">The initial value of the original flag word.</param>
	/// <exception cref="ArgumentNullException"><paramref name="root"/> is null.</exception>
	public Scene2Screen(UiPanel root, uint flags = 0)
	{
		ArgumentNullException.ThrowIfNull(root);
		_ui = new UiManager(root);
		Flags = flags;
	}

	/// <summary>Gets or sets the original screen flag word.</summary>
	public uint Flags { get; set; }

	/// <summary>Gets the interface tree owned by the screen.</summary>
	public UiManager Ui => _ui;

	/// <summary>Gets a value indicating whether the screen is released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>Advances the interface tree.</summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	public void Update(float deltaSeconds) => _ui.Update(deltaSeconds);

	/// <summary>Draws the interface tree.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	public void Draw(UiDrawList draw) => _ui.Draw(draw);

	/// <summary>Releases the interface tree.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_ui.Dispose();
	}
}

/// <summary>
/// One entry in the original shared screen switch.
/// </summary>
/// <param name="State">The shared screen state.</param>
/// <param name="ConstructorAddress">The original screen constructor, or zero when the switch has no case.</param>
/// <param name="Size">The number of bytes the original allocates for the screen.</param>
/// <param name="CreatesScreen">Whether the switch has a case for this state.</param>
public readonly record struct Scene2ScreenDefinition(uint State, uint ConstructorAddress, int Size, bool CreatesScreen);
