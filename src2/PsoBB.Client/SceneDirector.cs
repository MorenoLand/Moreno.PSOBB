using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Client;

/// <summary>
/// Runs the ported scene loop over the baked scene numbers and the <see cref="SceneManager"/> requests.
/// </summary>
/// <remarks>
/// The loop follows <c>0x007A5E84</c>: scene zero exits, the transition word is cleared before a
/// screen initialises, the screen updates while no transition is pending, then releases and switches
/// only for transition values 1 through 3. A number with no ported screen stops the loop with a
/// diagnostic; no fallback screen or transition is substituted.
/// </remarks>
public sealed class SceneDirector : IDisposable
{
	private readonly InputManager _input;
	private readonly ISceneScreenFactory _screens;
	private readonly IDisposable[] _resources;
	private ISceneScreen? _screen;
	private bool _releasePending;
	private bool _stopped;
	private bool _exited;
	private bool _disposed;
	private string? _diagnostic;

	/// <summary>
	/// Creates a director over the input layer and the scene factory.
	/// </summary>
	/// <param name="input">The input layer the screens read; the director does not poll it.</param>
	/// <param name="screens">The factory that creates each ported screen.</param>
	/// <param name="resources">Additional resources the director owns and releases with the factory.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public SceneDirector(InputManager input, ISceneScreenFactory screens, params IDisposable[] resources)
	{
		ArgumentNullException.ThrowIfNull(input);
		ArgumentNullException.ThrowIfNull(screens);
		ArgumentNullException.ThrowIfNull(resources);
		_input = input;
		_screens = screens;
		_resources = resources;
	}

	/// <summary>Gets the current scene number.</summary>
	public uint CurrentScene => GameState.CurrentScene;

	/// <summary>Gets the scene number that ran before the last switch.</summary>
	public uint PreviousScene => GameState.PreviousScene;

	/// <summary>Gets the active screen, or <see langword="null"/> before entry, after release or after a stop.</summary>
	public ISceneScreen? Screen => _screen;

	/// <summary>Gets a value indicating whether the loop has stopped.</summary>
	public bool IsStopped => _stopped;

	/// <summary>Gets a value indicating whether the loop stopped because the current scene became zero.</summary>
	public bool IsExited => _exited;

	/// <summary>Gets the diagnostic for an unsupported scene, or <see langword="null"/>.</summary>
	public string? Diagnostic => _diagnostic;

	/// <summary>
	/// Runs one scene-loop pass for the current host frame.
	/// </summary>
	/// <remarks>
	/// A screen entered by this call starts in the same pass. A transition requested by its update
	/// releases the screen at the start of the next update, after the caller has drawn the frame.
	/// </remarks>
	/// <exception cref="ObjectDisposedException">The director is disposed.</exception>
	public void Update()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_stopped)
			return;
		if (_releasePending)
		{
			ReleaseAndSwitch();
			if (_stopped)
				return;
		}
		if (_screen is null)
		{
			EnterScene();
			if (_screen is null)
				return;
			if (GameState.SceneTransition != 0)
			{
				ReleaseAndSwitch();
				return;
			}
		}
		_screen.Update(_input);
		if (GameState.SceneTransition != 0)
			_releasePending = true;
	}

	/// <summary>
	/// Adds the active screen's interface geometry to the draw list.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The director is disposed.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_screen?.Draw(draw);
	}

	/// <summary>
	/// Releases the active screen, the factory and the owned resources. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_stopped = true;
		ISceneScreen? screen = _screen;
		_screen = null;
		try
		{
			screen?.Dispose();
		}
		finally
		{
			try
			{
				_screens.Dispose();
			}
			finally
			{
				foreach (IDisposable resource in _resources)
					resource.Dispose();
			}
		}
	}

	/// <summary>
	/// Creates a director over the host's file system, renderer and input layer.
	/// </summary>
	/// <param name="host">The host that supplies the services; the director does not create replacements.</param>
	/// <param name="options">The scene directory options, or the defaults.</param>
	/// <returns>The director over the ported scene directory.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="host"/> is null.</exception>
	/// <exception cref="FileNotFoundException">The data archive required by the scene directory is absent.</exception>
	public static SceneDirector Create(ClientHost host, SceneDirectorOptions? options = null)
	{
		ArgumentNullException.ThrowIfNull(host);
		options ??= new SceneDirectorOptions();
		DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl(SceneDirectory.DataArchivePath));
		SceneDirectory directory;
		try
		{
			directory = new SceneDirectory(files, host.Renderer, options.Network, options.CinematicLogo);
		}
		catch
		{
			files.Dispose();
			throw;
		}
		return new SceneDirector(host.Input, directory, files);
	}

	private void EnterScene()
	{
		uint scene = GameState.CurrentScene;
		if (scene == SceneManager.ExitScene)
		{
			_stopped = true;
			_exited = true;
			return;
		}
		if (scene >= SceneLibrary.SceneCount)
		{
			Stop($"Scene {scene} is outside the baked scene table.");
			return;
		}
		GameState.SceneTransition = 0;
		ISceneScreen? screen = _screens.Create(scene);
		if (screen is null)
		{
			Stop($"Scene {scene} has no ported screen.");
			return;
		}
		_screen = screen;
		_releasePending = false;
	}

	private void ReleaseAndSwitch()
	{
		uint scene = GameState.CurrentScene;
		ISceneScreen? screen = _screen;
		_screen = null;
		_releasePending = false;
		screen?.Dispose();
		uint transition = GameState.SceneTransition;
		if (transition is >= 1u and <= 3u)
		{
			GameState.PreviousScene = scene;
			GameState.CurrentScene = GameState.RequestedScene;
		}
	}

	private void Stop(string diagnostic)
	{
		_diagnostic = diagnostic;
		_stopped = true;
	}
}
