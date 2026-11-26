using PsoBB.Configuration;
using PsoBB.Core;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Client;

/// <summary>
/// The portable client composition root: it initialises the original globals and drives the
/// frame loop while the game systems attach to it.
/// </summary>
/// <remarks>
/// The host owns the renderer and disposes it on shutdown; the platform services are supplied by
/// the program and remain owned by it. Frames contain no game logic yet: each frame polls input,
/// pumps deferred work and presents a cleared backbuffer.
/// </remarks>
public sealed class ClientHost : IDisposable
{
	/// <summary>
	/// The colour an empty frame clears to, in 0xAARRGGBB form.
	/// </summary>
	public const uint EmptyFrameColor = 0xFF000000;
	private readonly ClientOptions _options;
	private SceneDirector? _director;
	private bool _stopRequested;
	private bool _disposed;
	private long _frameCount;
	private long _lastTimestamp;

	/// <summary>
	/// Creates the host and resets <see cref="GlobalState"/> to its start-up values.
	/// </summary>
	/// <param name="options">The data folder.</param>
	/// <param name="fileSystem">The file system rooted at the data folder.</param>
	/// <param name="clock">The monotonic and wall clock.</param>
	/// <param name="settings">The persisted client settings.</param>
	/// <param name="input">The keyboard and mouse devices.</param>
	/// <param name="dispatcher">The deferred-work and timer pump.</param>
	/// <param name="audioDevice">The host audio devices.</param>
	/// <param name="renderer">The renderer this host owns and presents through.</param>
	/// <exception cref="ArgumentNullException">A service is null.</exception>
	public ClientHost(
		ClientOptions options,
		IGameFileSystem fileSystem,
		IGameClock clock,
		IGameSettings settings,
		IGameInput input,
		IGameDispatcher dispatcher,
		IAudioDevice audioDevice,
		IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(options);
		ArgumentNullException.ThrowIfNull(fileSystem);
		ArgumentNullException.ThrowIfNull(clock);
		ArgumentNullException.ThrowIfNull(settings);
		ArgumentNullException.ThrowIfNull(input);
		ArgumentNullException.ThrowIfNull(dispatcher);
		ArgumentNullException.ThrowIfNull(audioDevice);
		ArgumentNullException.ThrowIfNull(renderer);
		_options = options;
		FileSystem = fileSystem;
		Clock = clock;
		GameSettings = settings;
		GameInput = input;
		Input = new InputManager(input);
		Dispatcher = dispatcher;
		AudioDevice = audioDevice;
		Renderer = renderer;
		GameOptions = PsoBB.Configuration.GameOptions.Load(settings);
		GlobalState.Reset();
		_lastTimestamp = clock.Timestamp;
	}

	/// <summary>
	/// Gets the options the host was created with.
	/// </summary>
	public ClientOptions Options => _options;

	/// <summary>
	/// Gets the file system rooted at the data folder.
	/// </summary>
	public IGameFileSystem FileSystem { get; }

	/// <summary>
	/// Gets the monotonic and wall clock.
	/// </summary>
	public IGameClock Clock { get; }

	/// <summary>
	/// Gets the persisted client settings.
	/// </summary>
	public IGameSettings GameSettings { get; }

	/// <summary>
	/// Gets the typed options loaded from <see cref="GameSettings"/> at start-up.
	/// </summary>
	public GameOptions GameOptions { get; }

	/// <summary>
	/// Gets the keyboard and mouse devices.
	/// </summary>
	public IGameInput GameInput { get; }

	/// <summary>
	/// Gets the mapped actions, edges and repeat state built from <see cref="GameInput"/>.
	/// </summary>
	public InputManager Input { get; }

	/// <summary>
	/// Gets the deferred-work and timer pump.
	/// </summary>
	public IGameDispatcher Dispatcher { get; }

	/// <summary>
	/// Gets the host audio devices.
	/// </summary>
	public IAudioDevice AudioDevice { get; }

	/// <summary>
	/// Gets the renderer and presents through it.
	/// </summary>
	public IRenderer Renderer { get; }

	/// <summary>
	/// Gets the attached scene director, or <see langword="null"/> when the host presents empty frames.
	/// </summary>
	public SceneDirector? Director => _director;

	/// <summary>
	/// Gets the director's unsupported-scene diagnostic, or <see langword="null"/>.
	/// </summary>
	public string? DirectorDiagnostic => _director?.Diagnostic;

	/// <summary>
	/// Creates and attaches a director over the host's file system, renderer and input layer.
	/// </summary>
	/// <param name="options">The scene directory options, or the defaults.</param>
	/// <returns>The attached director; the host disposes it.</returns>
	/// <exception cref="InvalidOperationException">A director is already attached.</exception>
	/// <exception cref="ObjectDisposedException">The host is disposed.</exception>
	/// <exception cref="FileNotFoundException">The data archive required by the scene directory is absent.</exception>
	public SceneDirector StartSceneDirector(SceneDirectorOptions? options = null)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_director is not null)
			throw new InvalidOperationException("A scene director is already attached.");
		_director = SceneDirector.Create(this, options);
		return _director;
	}

	/// <summary>
	/// Attaches a supplied director; the host drives and disposes it.
	/// </summary>
	/// <param name="director">The director to attach.</param>
	/// <exception cref="ArgumentNullException"><paramref name="director"/> is null.</exception>
	/// <exception cref="InvalidOperationException">A director is already attached.</exception>
	/// <exception cref="ObjectDisposedException">The host is disposed.</exception>
	public void AttachDirector(SceneDirector director)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		ArgumentNullException.ThrowIfNull(director);
		if (_director is not null)
			throw new InvalidOperationException("A scene director is already attached.");
		_director = director;
	}

	/// <summary>
	/// Gets the number of frames presented since the host was created.
	/// </summary>
	public long FrameCount => _frameCount;

	/// <summary>
	/// Gets a value indicating whether a stop has been requested.
	/// </summary>
	public bool IsStopRequested => _stopRequested;

	/// <summary>
	/// Runs frames until <see cref="RequestStop"/> is called or the host is disposed.
	/// </summary>
	/// <exception cref="ObjectDisposedException">The host is disposed.</exception>
	public void Run()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		while (!_stopRequested && RunFrame())
		{
		}
	}

	/// <summary>
	/// Runs at most <paramref name="frameCount"/> frames, stopping early after a stop request.
	/// </summary>
	/// <param name="frameCount">The maximum number of frames to present; zero runs nothing.</param>
	/// <returns>The number of frames actually presented.</returns>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="frameCount"/> is negative.</exception>
	/// <exception cref="ObjectDisposedException">The host is disposed.</exception>
	public int RunFrames(int frameCount)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(frameCount);
		ObjectDisposedException.ThrowIf(_disposed, this);
		int completed = 0;
		while (completed < frameCount && !_stopRequested && RunFrame())
			completed++;
		return completed;
	}

	/// <summary>
	/// Requests that the loop stop at the next frame boundary.
	/// </summary>
	public void RequestStop() => _stopRequested = true;

	/// <summary>
	/// Stops the loop, releases the director and disposes the renderer. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_stopRequested = true;
		try
		{
			_director?.Dispose();
		}
		finally
		{
			_director = null;
			Renderer.Dispose();
		}
	}

	private bool RunFrame()
	{
		GameInput.Poll();
		long timestamp = Clock.Timestamp;
		double seconds = Clock.Frequency > 0 ? (timestamp - _lastTimestamp) / (double)Clock.Frequency : 0;
		_lastTimestamp = timestamp;
		Input.Update(TimeSpan.FromSeconds(seconds));
		Dispatcher.Pump();
		if (_stopRequested)
			return false;
		_director?.Update();
		if (_stopRequested)
			return false;
		if (_director is { IsStopped: true })
		{
			_stopRequested = true;
			return false;
		}
		Renderer.BeginFrame();
		if (_director is null)
		{
			Renderer.Clear(EmptyFrameColor);
		}
		else
		{
			ApplyUiState();
			Renderer.Clear(EmptyFrameColor);
			UiDrawList draw = new();
			_director.Draw(draw);
			draw.Render(Renderer);
		}
		Renderer.EndFrame();
		_frameCount++;
		return true;
	}

	private void ApplyUiState()
	{
		Renderer.SetViewport(0, 0, Renderer.Settings.Width, Renderer.Settings.Height);
		Renderer.SetRenderState(RenderStateId.ZEnable, 0);
		Renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		Renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		Renderer.SetRenderState(RenderStateId.Lighting, 0);
		Renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
		Renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
		Renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
	}
}
