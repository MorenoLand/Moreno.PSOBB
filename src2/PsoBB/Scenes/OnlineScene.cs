using System.Numerics;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Text;

namespace PsoBB.Scenes;

/// <summary>
/// Scene 11: the online-mode entry screen, its download and connection phases, and the character-selection hand-off.
/// </summary>
/// <remarks>
/// The scene stores scene parameter 2 and root scene 11, loads the progress-bar surface that
/// <c>0x407458</c> selects and submits the two translucent download panels that <c>0x407FB0</c> and
/// <c>0x40808C</c> draw. Loading completion sends the client to scene 2 through <c>0x7BD97C</c>'s tail,
/// unless the loading result is 3, which returns to root scene 0 first. The network exchange is the merged
/// <see cref="LoginFlow"/>: the scene consumes its states, opens the redirect target with
/// <see cref="GameServerFlow"/>, and feeds the game and lobby replies into <see cref="LobbyWorld"/>. A
/// command whose layout is not in the lift stops the redirected flow with a diagnostic.
/// </remarks>
public sealed class OnlineScene : IDisposable
{
	/// <summary>The scene number in the baked scene table.</summary>
	public const uint SceneNumber = 11;

	/// <summary>The scene parameter the initialiser stores.</summary>
	public const uint SceneParameter = 2;

	/// <summary>The scene requested when the loading phase finishes with any nonzero result.</summary>
	public const uint NextScene = 2;

	/// <summary>The root scene stored when the loading result is 3.</summary>
	public const uint LoadingCancelRootScene = 0;

	/// <summary>The viewport width the download panels use.</summary>
	public const float ViewportWidth = 640f;

	/// <summary>The viewport height the download panels use.</summary>
	public const float ViewportHeight = 480f;

	/// <summary>The upper download panel position from the data image at <c>0x008F8EA4</c>.</summary>
	public static readonly Vector2 UpperPanelPosition = new(0f, 28f);

	/// <summary>The upper download panel size from the data image at <c>0x008F8EAC</c>.</summary>
	public static readonly Vector2 UpperPanelSize = new(640f, 84f);

	/// <summary>The lower download panel position from the data image at <c>0x008F8EB4</c>.</summary>
	public static readonly Vector2 LowerPanelPosition = new(0f, 310f);

	/// <summary>The lower download panel size from the data image at <c>0x008F8EBC</c>.</summary>
	public static readonly Vector2 LowerPanelSize = new(640f, 136f);

	/// <summary>The per-vertex diffuse colour <c>0x407FD8</c> uses for the download panels.</summary>
	public const uint PanelColor = 0x8F000000;

	/// <summary>The English progress-bar archive the download window selects first.</summary>
	public const string ProgressTextureName = "f256_slot_eng";

	/// <summary>The progress-bar archive names in the order the three language tables select them.</summary>
	public static readonly string[] ProgressTextureNames = ["f256_slot_eng", "f256_slot", "f256_slot_cs"];

	private readonly ITexture _progressTexture;
	private readonly LoginFlow? _loginFlow;
	private GameServerFlow? _gameServerFlow;
	private OnlineSceneState _state = OnlineSceneState.Loading;
	private bool _loading = true;
	private bool _disposed;

	/// <summary>
	/// Loads the progress-bar surface, stores scene parameter 2 and sets root scene 11.
	/// </summary>
	/// <param name="files">The data files that resolve the progress-bar archive.</param>
	/// <param name="renderer">The renderer that owns the created texture.</param>
	/// <param name="loginFlow">The optional merged login flow the scene consumes.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	/// <exception cref="FileNotFoundException">No progress-bar archive is present.</exception>
	/// <exception cref="TextureFormatException">A progress-bar archive is malformed.</exception>
	[Original(0x007BD97C, "OnlineScene_Init_007bd97c")]
	public OnlineScene(IDataFiles files, IRenderer renderer, LoginFlow? loginFlow = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		SceneManager.SetSceneParameter(SceneParameter);
		SceneManager.SetRootScene(SceneNumber);
		_loginFlow = loginFlow;
		_progressTexture = LoadProgressTexture(files, renderer);
	}

	/// <summary>Gets the current scene phase.</summary>
	public OnlineSceneState State => _state;

	/// <summary>Gets a value indicating whether the loading phase is still running.</summary>
	public bool IsLoading => _loading;

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>Gets the progress-bar surface selected by <c>0x407458</c>.</summary>
	public ITexture ProgressTexture => _progressTexture;

	/// <summary>Gets the merged login flow the scene consumes, or <see langword="null"/> when none was supplied.</summary>
	public LoginFlow? LoginFlow => _loginFlow;

	/// <summary>Gets the reason the merged flow or the redirected game-server flow reported a failure, or <see langword="null"/>.</summary>
	public string? FailureReason => _gameServerFlow?.Diagnostic ?? _loginFlow?.FailureReason;

	/// <summary>Gets the server redirect from command 0x19, or <see langword="null"/> before it arrives.</summary>
	public ReconnectPacket? Redirect => _loginFlow?.Redirect;

	/// <summary>Gets the redirected game-server flow, or <see langword="null"/> before command 0x19 arrived.</summary>
	public GameServerFlow? GameServerFlow => _gameServerFlow;

	/// <summary>Gets the lobby world fed by the redirected game server, or <see langword="null"/>.</summary>
	public LobbyWorld? LobbyWorld => _gameServerFlow?.World;

	/// <summary>Gets the character slot approved by the server, or <see langword="null"/>.</summary>
	public int? SelectedCharacterIndex => _loginFlow?.SelectedCharacterIndex;

	/// <summary>
	/// Completes the loading phase and applies the transition the original initialiser takes.
	/// </summary>
	/// <param name="result">The loading result from <c>0x40821C</c>; zero keeps the scene, 3 returns to root 0, and any other value uses root 2.</param>
	/// <returns><see langword="true"/> when a scene transition was requested.</returns>
	/// <exception cref="InvalidOperationException">The loading phase already finished.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public bool CompleteLoading(uint result)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (!_loading)
			throw new InvalidOperationException("The loading phase already finished.");
		_loading = false;
		if (result == 0)
		{
			_state = OnlineSceneState.Idle;
			return false;
		}
		SceneManager.SetRootScene(result == 3 ? LoadingCancelRootScene : NextScene);
		SceneManager.RequestScene(NextScene);
		_state = OnlineSceneState.Transitioned;
		return true;
	}

	/// <summary>
	/// Opens the merged login flow over its session and arms the client login request.
	/// </summary>
	/// <param name="host">The server host name or numeric address.</param>
	/// <param name="port">The server TCP port.</param>
	/// <param name="loginRequest">The client login packet to send after the welcome.</param>
	/// <returns><see langword="true"/> when the transport opened.</returns>
	/// <exception cref="InvalidOperationException">No login flow was supplied, the scene is still loading, or the flow is already running.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x0079B698, "OnlineScene_StartConnection_0079b698")]
	public bool Connect(string host, int port, ClientLoginPacket loginRequest)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		LoginFlow flow = _loginFlow ?? throw new InvalidOperationException("The scene has no login flow to connect.");
		if (_loading)
			throw new InvalidOperationException("The scene is still loading.");
		bool connected = flow.Connect(host, port, loginRequest);
		_state = connected ? OnlineSceneState.Connecting : OnlineSceneState.Failed;
		return connected;
	}

	/// <summary>
	/// Advances the loading phase or pumps the merged login flow for one frame.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007BCBC4, "OnlineScene_Update_007bcbc4")]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (input.WasActionPressed(InputAction.Cancel))
		{
			Cancel();
			return;
		}
		if (_loading)
			return;
		if (_state is OnlineSceneState.Transitioned or OnlineSceneState.Canceled or OnlineSceneState.Failed)
			return;
		UpdateConnection();
	}

	/// <summary>
	/// Requests the character preview for one slot and lets the merged flow record the server answer.
	/// </summary>
	/// <param name="characterIndex">The character slot to preview.</param>
	/// <returns><see langword="true"/> when the preview request was queued.</returns>
	/// <exception cref="InvalidOperationException">The flow is not accepting a character choice.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public bool SelectCharacter(int characterIndex)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		LoginFlow flow = _loginFlow ?? throw new InvalidOperationException("The scene has no login flow to select a character on.");
		return flow.RequestCharacterSelection(characterIndex);
	}

	/// <summary>
	/// Closes the connection and requests the exit scene, as the original cancel path does.
	/// </summary>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007BD2DC, "OnlineScene_Cancel_007bd2dc")]
	public void Cancel()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		_gameServerFlow?.Disconnect();
		_loginFlow?.Disconnect();
		_state = OnlineSceneState.Canceled;
		SceneManager.RequestScene(SceneManager.ExitScene);
	}

	/// <summary>The connecting label at <c>0x008F8F2C</c>.</summary>
	public const string ConnectingText = "Connecting..";

	/// <summary>The label x position from <c>0x007AB534</c>.</summary>
	public const float StatusX = 23f;

	/// <summary>The label y position from <c>0x007AB534</c>.</summary>
	public const float StatusY = 331f;

	/// <summary>The label colour from the <c>0x007AB534</c> call.</summary>
	public const uint StatusColor = 0xFFFFFFFF;

	/// <summary>
	/// Adds the two download panels while the scene is in its loading or connection phase.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_state is not (OnlineSceneState.Loading or OnlineSceneState.Connecting))
			return;
		DrawProgressPanel(draw);
	}

	/// <summary>
	/// Adds the <c>Connecting..</c> label at <c>(23,331)</c> while the scene is loading or connecting.
	/// </summary>
	/// <param name="surface">The surface that emits the glyph quads.</param>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007AB534)]
	public void DrawStatus(IUiTextSurface surface, UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(surface);
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_state is not (OnlineSceneState.Loading or OnlineSceneState.Connecting))
			return;
		surface.Draw(draw, ConnectingText, new Vector2(StatusX, StatusY), StatusColor);
	}

	/// <summary>
	/// Disconnects the merged flow and releases the progress-bar texture. Repeated calls do nothing.
	/// </summary>
	[Original(0x007BCB04, "OnlineScene_Release_007bcb04")]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_loading = false;
		_state = OnlineSceneState.Released;
		_gameServerFlow?.Disconnect();
		_loginFlow?.Disconnect();
		_progressTexture.Dispose();
	}

	[Original(0x007BCBF0, "OnlineScene_UpdateConnection_007bcbf0")]
	private void UpdateConnection()
	{
		if (_loginFlow is null)
		{
			_state = OnlineSceneState.Idle;
			return;
		}
		if (_gameServerFlow is not null || _loginFlow.State == LoginFlowState.Redirected)
		{
			UpdateGameServer();
			return;
		}
		_loginFlow.Pump();
		_state = _loginFlow.State switch
		{
			LoginFlowState.Disconnected => OnlineSceneState.Idle,
			LoginFlowState.AwaitingWelcome or LoginFlowState.Authenticating or LoginFlowState.AwaitingSystemFile => OnlineSceneState.Connecting,
			LoginFlowState.CharacterSelect or LoginFlowState.AwaitingCharacterChoice => OnlineSceneState.CharacterSelect,
			LoginFlowState.CharacterSelected => OnlineSceneState.CharacterSelected,
			LoginFlowState.Redirected => OnlineSceneState.Redirected,
			LoginFlowState.Failed => OnlineSceneState.Failed,
			_ => OnlineSceneState.Idle,
		};
	}

	private void UpdateGameServer()
	{
		if (_loginFlow is null)
			return;
		if (_gameServerFlow is null)
		{
			GameServerFlow flow = new(_loginFlow);
			_gameServerFlow = flow;
			if (!flow.Start())
			{
				_state = OnlineSceneState.Failed;
				return;
			}
		}
		_gameServerFlow.Pump();
		_state = _gameServerFlow.State switch
		{
			GameServerFlowState.Disconnected => OnlineSceneState.Idle,
			GameServerFlowState.Connecting or GameServerFlowState.Authenticating => OnlineSceneState.Connecting,
			GameServerFlowState.Game or GameServerFlowState.Lobby => OnlineSceneState.GameServer,
			GameServerFlowState.Failed or GameServerFlowState.Unsupported => OnlineSceneState.Failed,
			_ => OnlineSceneState.Idle,
		};
	}

	[Original(0x00407F6C, "OnlineScene_DrawProgressPanel_00407f6c")]
	private void DrawProgressPanel(UiDrawList draw)
	{
		DrawUpperPanel(draw);
		DrawLowerPanel(draw);
	}

	[Original(0x00407FB0, "OnlineScene_DrawUpperPanel_00407fb0")]
	private static void DrawUpperPanel(UiDrawList draw) => DrawPanel(draw, UpperPanelPosition, UpperPanelSize);

	[Original(0x0040808C, "OnlineScene_DrawLowerPanel_0040808c")]
	private static void DrawLowerPanel(UiDrawList draw) => DrawPanel(draw, LowerPanelPosition, LowerPanelSize);

	[Original(0x00407FD8, "OnlineScene_DrawPanel_00407fd8")]
	private static void DrawPanel(UiDrawList draw, Vector2 position, Vector2 size) =>
		draw.Add(new UiQuad(position, size, new Vector4(0f, 0f, 1f, 1f), null, PanelColor));

	[Original(0x00407458, "OnlineScene_LoadProgressTexture_00407458")]
	private static ITexture LoadProgressTexture(IDataFiles files, IRenderer renderer)
	{
		foreach (string name in ProgressTextureNames)
			if (SceneTextureLoader.TryLoad(files, renderer, name, out ITexture? texture))
				return texture!;
		throw new FileNotFoundException("No online progress texture archive is present.", ProgressTextureName + ".prs");
	}
}
