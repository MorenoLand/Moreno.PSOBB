namespace PsoBB.Net;

/// <summary>
/// Opens the connection named by the login redirect and feeds its game and lobby replies into <see cref="LobbyWorld"/>.
/// </summary>
/// <remarks>
/// Command 0x19 stores the IPv4 address and port, closes the login connection and reopens the same session at the new target. The next command 0x03 welcome is validated by <see cref="GameSession"/> and the login flow sends the stored 0x93 packet, exactly as the login connection did. The game and lobby snapshots that follow are handled by <see cref="LobbyWorld"/>, including the 0x81 mail and 0x83 lobby-menu replies; a command outside that set stops the flow with an explicit diagnostic instead of being ignored.
/// </remarks>
public sealed class GameServerFlow
{
	private readonly LoginFlow _loginFlow;
	private readonly LobbyWorld _world;
	private GameServerFlowState _state;
	private string? _diagnostic;

	/// <summary>
	/// Creates a flow over the login flow that reached command 0x19.
	/// </summary>
	/// <param name="loginFlow">The login flow that carries the session; the flow does not dispose it.</param>
	/// <exception cref="ArgumentNullException"><paramref name="loginFlow"/> is null.</exception>
	public GameServerFlow(LoginFlow loginFlow)
	{
		ArgumentNullException.ThrowIfNull(loginFlow);
		_loginFlow = loginFlow;
		_world = new LobbyWorld(loginFlow.Session);
		_loginFlow.ForwardUnhandledPackets = true;
	}

	/// <summary>Gets the login flow that carries the redirected session.</summary>
	public LoginFlow LoginFlow => _loginFlow;

	/// <summary>Gets the world that receives the game and lobby replies.</summary>
	public LobbyWorld World => _world;

	/// <summary>Gets the current flow state.</summary>
	public GameServerFlowState State => _state;

	/// <summary>Gets the exact unsupported or failed step, or <see langword="null"/> when the flow is healthy.</summary>
	public string? Diagnostic => _diagnostic;

	/// <summary>Gets the redirect target the flow opened.</summary>
	public ReconnectPacket? Redirect => _loginFlow.Redirect;

	/// <summary>
	/// Closes the login connection and opens the redirect target, keeping the stored client login packet for the next welcome.
	/// </summary>
	/// <returns><see langword="true"/> when the redirected transport opened.</returns>
	/// <exception cref="InvalidOperationException">The flow already started.</exception>
	public bool Start()
	{
		if (_state != GameServerFlowState.Disconnected)
			throw new InvalidOperationException($"The game-server flow is already {_state}.");
		if (_loginFlow.State != LoginFlowState.Redirected)
			return Fail($"The login flow is {_loginFlow.State}, not redirected.");
		if (_loginFlow.Redirect is null)
			return Fail("The login flow has no redirect target.");
		if (!_loginFlow.ReconnectToRedirect())
			return Fail(_loginFlow.FailureReason ?? "The redirected connection failed.");
		_state = GameServerFlowState.Connecting;
		return true;
	}

	/// <summary>
	/// Pumps the redirected session, sends the login packet after the welcome and dispatches game-server replies.
	/// </summary>
	public void Pump()
	{
		if (_state is GameServerFlowState.Disconnected or GameServerFlowState.Failed or GameServerFlowState.Unsupported)
			return;
		_loginFlow.Pump();
		if (_loginFlow.State == LoginFlowState.Failed)
		{
			Fail(_loginFlow.FailureReason ?? "The redirected connection failed.");
			return;
		}
		if (_loginFlow.State == LoginFlowState.Disconnected)
		{
			Fail("The redirected connection closed before the welcome.");
			return;
		}
		if (_loginFlow.State == LoginFlowState.Redirected)
		{
			_world.Reset();
			if (!_loginFlow.ReconnectToRedirect())
			{
				Fail(_loginFlow.FailureReason ?? "The next redirected connection failed.");
				return;
			}
			_state = GameServerFlowState.Connecting;
			return;
		}
		if (_loginFlow.State == LoginFlowState.Authenticating && _state == GameServerFlowState.Connecting)
			_state = GameServerFlowState.Authenticating;
		while (_loginFlow.TryReadUnhandledPacket(out Packet? packet))
		{
			if (!HandlePacket(packet!))
				return;
		}
	}

	/// <summary>
	/// Closes the redirected connection and clears the world.
	/// </summary>
	public void Disconnect()
	{
		if (_state is GameServerFlowState.Disconnected)
			return;
		_loginFlow.Disconnect();
		_world.Reset();
		_state = GameServerFlowState.Disconnected;
		_diagnostic = null;
	}

	private bool HandlePacket(Packet packet)
	{
		bool handled;
		try
		{
			handled = _world.HandlePacket(packet);
		}
		catch (InvalidDataException exception)
		{
			CloseSession();
			return Fail($"Command 0x{packet.Header.Opcode:X2} is malformed: {exception.Message}");
		}
		if (!handled)
			return Unsupported(packet);
		_state = _world.State switch
		{
			LobbyWorldState.GameLoading or LobbyWorldState.Game => GameServerFlowState.Game,
			LobbyWorldState.Lobby => GameServerFlowState.Lobby,
			_ => GameServerFlowState.Authenticating,
		};
		return true;
	}

	private bool Unsupported(Packet packet)
	{
		_state = GameServerFlowState.Unsupported;
		_diagnostic = packet.Header.Opcode switch
		{
			0x1A => "Command 0x1A is a payload copy with no record codec in the lift.",
			_ => $"Command 0x{packet.Header.Opcode:X2} is not a supported game-server packet.",
		};
		CloseSession();
		return false;
	}

	private void CloseSession()
	{
		if (_loginFlow.Session.State is not (GameSessionState.Disconnected or GameSessionState.Failed))
			_loginFlow.Disconnect();
	}

	private bool Fail(string diagnostic)
	{
		_state = GameServerFlowState.Failed;
		_diagnostic = diagnostic;
		return false;
	}
}
