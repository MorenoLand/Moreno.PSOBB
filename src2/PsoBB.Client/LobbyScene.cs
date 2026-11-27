using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// Runs scene 11 from the online request through the game-server connection and into the field or lobby.
/// </summary>
/// <remarks>
/// Scene 11 stays current while the redirected game server feeds <see cref="LobbyWorld"/>, so this
/// scene promotes the same world into a <see cref="FieldScene"/> instead of requesting scene 10.
/// The host supplies the scene-10 shell, map, camera, textures, player and ground query; a missing
/// field host or a failed online step stops the scene with a diagnostic.
/// </remarks>
public sealed class LobbyScene : IWorldSceneScreen
{
	/// <summary>The baked scene number the online path runs.</summary>
	public const uint SceneNumber = OnlineScene.SceneNumber;

	private readonly OnlineScene _online;
	private readonly GameSession? _session;
	private readonly LobbySceneHost? _host;
	private FieldScene? _field;
	private LobbyController? _controller;
	private LobbyWorld? _world;
	private bool _stopped;
	private bool _disposed;
	private string? _diagnostic;

	/// <summary>
	/// Wraps an online scene that already has its login flow and session.
	/// </summary>
	/// <param name="online">The scene-11 online scene.</param>
	/// <param name="session">The session the wrapper releases, or <see langword="null"/> when another owner releases it.</param>
	/// <param name="host">The field resources, or <see langword="null"/> to stop when the lobby arrives.</param>
	/// <exception cref="ArgumentNullException"><paramref name="online"/> is null.</exception>
	public LobbyScene(OnlineScene online, GameSession? session = null, LobbySceneHost? host = null)
	{
		ArgumentNullException.ThrowIfNull(online);
		_online = online;
		_session = session;
		_host = host;
	}

	/// <summary>
	/// Builds the session, login flow, online scene and selected login endpoint from the host inputs.
	/// </summary>
	/// <param name="files">The data files the online scene reads.</param>
	/// <param name="renderer">The renderer that owns the created texture.</param>
	/// <param name="network">The host table and login inputs.</param>
	/// <param name="host">The field resources, or <see langword="null"/> to stop when the lobby arrives.</param>
	/// <returns>The running scene-11 lobby path.</returns>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	public static LobbyScene Create(IDataFiles files, IRenderer renderer, SceneNetworkOptions network, LobbySceneHost? host = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(network);
		GameSession session = new(network.ConnectionFactory());
		OnlineScene? online = null;
		try
		{
			online = new OnlineScene(files, renderer, new LoginFlow(session));
			online.CompleteLoading(0);
			ServerAddress address = new ServerEndpoints(network.Hosts).SelectLoginEndpoint(
				network.ClientMode,
				network.AlternateEndpointSet,
				network.UseSecondaryEndpoints,
				new ServerAddress(network.RuntimeHost, network.RuntimePort));
			online.Connect(address.Host, address.Port, network.LoginRequest);
			return new LobbyScene(online, session, host);
		}
		catch
		{
			try
			{
				online?.Dispose();
			}
			finally
			{
				session.Dispose();
			}
			throw;
		}
	}

	/// <summary>Gets the scene-11 online scene.</summary>
	public OnlineScene Online => _online;

	/// <summary>Gets the redirected game-server flow, or <see langword="null"/> before command 0x19.</summary>
	public GameServerFlow? GameServerFlow => _online.GameServerFlow;

	/// <summary>Gets the lobby world once the game server supplies it, or <see langword="null"/>.</summary>
	public LobbyWorld? World => _world;

	/// <summary>Gets the field scene once the lobby world is promoted, or <see langword="null"/>.</summary>
	public FieldScene? Field => _field;

	/// <summary>Gets the movement controller once the host inputs are available, or <see langword="null"/>.</summary>
	public LobbyController? Controller => _controller;

	/// <summary>Gets a value indicating whether the field scene is running.</summary>
	public bool IsFieldReady => _field is not null;

	/// <summary>Gets a value indicating whether the path stopped.</summary>
	public bool IsStopped => _stopped;

	/// <summary>Gets a value indicating whether the scene is released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>Gets the exact unsupported or failed step, or <see langword="null"/>.</summary>
	public string? Diagnostic => _diagnostic;

	/// <summary>
	/// Pumps the online flow until the lobby arrives, then advances the field and controller.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_stopped)
			return;
		_online.Update(input);
		if (_online.State is OnlineSceneState.Failed)
		{
			Stop(_online.FailureReason ?? "The online scene failed.");
			return;
		}
		if (_online.State is OnlineSceneState.Canceled)
			return;
		if (_field is not null)
		{
			_field.Update(input, false);
			_controller?.Update();
			return;
		}
		GameServerFlow? flow = _online.GameServerFlow;
		if (flow is null)
			return;
		if (flow.State is GameServerFlowState.Failed or GameServerFlowState.Unsupported)
		{
			Stop(flow.Diagnostic ?? $"The game-server flow stopped in state {flow.State}.");
			return;
		}
		LobbyWorld? world = _online.LobbyWorld;
		if (world is null || flow.State is not (GameServerFlowState.Lobby or GameServerFlowState.Game) || world.State is not (LobbyWorldState.Lobby or LobbyWorldState.Game))
			return;
		_world = world;
		if (_host is null)
		{
			Stop("The lobby world has no field host.");
			return;
		}
		CreateField(input);
	}

	/// <summary>
	/// Adds the online download panels while the field is not running.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (!_stopped && _field is null)
			_online.Draw(draw);
	}

	/// <summary>
	/// Submits the field map and models through the host camera.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <returns>The number of surfaces submitted, or zero before the field or camera is supplied.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public int DrawWorld(IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_stopped || _field is null || _host?.Camera is not FieldCamera camera)
			return 0;
		return _field.Draw(renderer, camera.Camera);
	}

	/// <summary>
	/// Releases the field, online scene and session; the host resources stay with the host. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_stopped = true;
		try
		{
			_field?.Dispose();
		}
		finally
		{
			_field = null;
			_controller = null;
			_world = null;
			try
			{
				_online.Dispose();
			}
			finally
			{
				_session?.Dispose();
			}
		}
	}

	private void CreateField(InputManager input)
	{
		FieldScene field = new(_host!.Offline, _world, _host.Textures);
		try
		{
			field.SetMap(_host.Map);
			if (_host.PlayerModel is not null)
				field.SetPlayerModel(_host.PlayerModel);
			field.SetPlayer(_host.Player);
			_field = field;
			if (_host.Player is not null && _host.Camera is not null && _host.Ground is not null)
				_controller = new LobbyController(input, _host.Player, _host.Camera, _host.Ground, _world);
			field.Update(input, false);
			_controller?.Update();
		}
		catch
		{
			field.Dispose();
			_field = null;
			_controller = null;
			throw;
		}
	}

	private void Stop(string diagnostic)
	{
		_diagnostic = diagnostic;
		_stopped = true;
	}
}
