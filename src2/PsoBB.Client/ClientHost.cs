using PsoBB.Configuration;
using PsoBB.Core;
using PsoBB.Graphics;
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
	/// Stops the loop and disposes the renderer. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_stopRequested = true;
		Renderer.Dispose();
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
		Renderer.BeginFrame();
		Renderer.Clear(EmptyFrameColor);
		Renderer.EndFrame();
		_frameCount++;
		return true;
	}
}
