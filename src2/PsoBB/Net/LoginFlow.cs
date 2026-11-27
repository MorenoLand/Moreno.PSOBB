using PsoBB.Core;

namespace PsoBB.Net;

/// <summary>
/// Drives the client login and character-selection exchange over one <see cref="GameSession"/>.
/// </summary>
/// <remarks>
/// The flow sends command 0x93 after the server welcome, answers command 0xE6 with the 0xE0 system-file request, stores the 0xE1 or 0xE2 answer, requests a character preview with 0xE3 and records the 0xE4 answer. Command 0x19 then names the next connection target. The notes establish no separate ship, block or lobby list command, so the flow stops at the redirect and leaves the next connection and its login phase to the caller. A rejected login, a malformed response or a transport failure closes the session and moves the flow to <see cref="LoginFlowState.Failed"/>.
/// </remarks>
public sealed class LoginFlow
{
	private readonly GameSession _session;
	private readonly Queue<Packet> _unhandledPackets = new();
	private ClientLoginPacket? _loginRequest;
	private int? _requestedCharacterIndex;

	/// <summary>
	/// Creates a flow over an existing session.
	/// </summary>
	/// <param name="session">The session that carries the connection; the flow does not dispose it.</param>
	public LoginFlow(GameSession session)
	{
		ArgumentNullException.ThrowIfNull(session);
		_session = session;
	}

	/// <summary>Gets the session that carries the connection.</summary>
	public GameSession Session => _session;

	/// <summary>Gets the current flow state.</summary>
	public LoginFlowState State { get; private set; }

	/// <summary>Gets the reason the flow failed, or <see langword="null"/> when it has not failed.</summary>
	public string? FailureReason { get; private set; }

	/// <summary>Gets the error code from the last client initialization response.</summary>
	public uint? LoginErrorCode { get; private set; }

	/// <summary>Gets the guild card number assigned by the server.</summary>
	public uint GuildCardNumber { get; private set; }

	/// <summary>Gets the security token assigned by the server.</summary>
	public uint SecurityToken { get; private set; }

	/// <summary>Gets the opaque client configuration assigned by the server.</summary>
	public ReadOnlyMemory<byte> ClientConfig { get; private set; }

	/// <summary>Gets whether a full system file arrived instead of the created-default notice.</summary>
	public bool HasSystemFile { get; private set; }

	/// <summary>Gets a value indicating whether the server created a default system file (command 0xE1).</summary>
	public bool SystemFileCreated { get; private set; }

	/// <summary>Gets the base account system file, or empty bytes before it arrives.</summary>
	public ReadOnlyMemory<byte> SystemFile { get; private set; }

	/// <summary>Gets the team membership record, or empty bytes before it arrives.</summary>
	public ReadOnlyMemory<byte> TeamMembership { get; private set; }

	/// <summary>Gets the character slot approved by the server, or <see langword="null"/> when none is selected.</summary>
	public int? SelectedCharacterIndex { get; private set; }

	/// <summary>Gets the last character choice answer returned by the server.</summary>
	public PlayerChoicePacket? LastCharacterChoice { get; private set; }

	/// <summary>Gets the last existing-character preview, or <see langword="null"/>.</summary>
	public PlayerPreviewPacket? LastPlayerPreview { get; private set; }

	/// <summary>Gets the redirect target from command 0x19, or <see langword="null"/> before it arrives.</summary>
	public ReconnectPacket? Redirect { get; private set; }

	/// <summary>Gets or sets whether commands this flow does not handle are queued for the caller.</summary>
	public bool ForwardUnhandledPackets { get; set; }

	/// <summary>
	/// Removes the oldest packet this flow did not handle.
	/// </summary>
	/// <param name="packet">The packet, or <see langword="null"/> when none is queued.</param>
	/// <returns><see langword="true"/> when a packet was returned.</returns>
	public bool TryReadUnhandledPacket(out Packet? packet)
	{
		if (_unhandledPackets.Count == 0)
		{
			packet = null;
			return false;
		}
		packet = _unhandledPackets.Dequeue();
		return true;
	}

	/// <summary>
	/// Opens the transport and arms the login request to be sent after the server welcome.
	/// </summary>
	/// <param name="host">The host name or numeric address.</param>
	/// <param name="port">The TCP port.</param>
	/// <param name="loginRequest">The client login packet to send after the welcome.</param>
	/// <returns><see langword="true"/> when the transport opened.</returns>
	/// <exception cref="InvalidOperationException">The flow is already running.</exception>
	public bool Connect(string host, int port, ClientLoginPacket loginRequest)
	{
		ArgumentNullException.ThrowIfNull(loginRequest);
		if (State is not (LoginFlowState.Disconnected or LoginFlowState.Failed))
			throw new InvalidOperationException($"The login flow is {State}.");
		ResetFlow();
		_loginRequest = loginRequest;
		if (!_session.Connect(host, port))
			return Fail(_session.FailureReason ?? $"The connection to {host}:{port} failed.");
		State = LoginFlowState.AwaitingWelcome;
		return true;
	}

	/// <summary>
	/// Closes the login connection and opens the target named by command 0x19, keeping the original login packet for the next welcome.
	/// </summary>
	/// <returns><see langword="true"/> when the redirected transport opened.</returns>
	/// <exception cref="InvalidOperationException">The flow is not at a redirect or has no stored login packet.</exception>
	[Original(0x007C87E8, "LoginFlow_ReconnectToRedirect_007c87e8")]
	public bool ReconnectToRedirect()
	{
		if (State != LoginFlowState.Redirected)
			throw new InvalidOperationException($"The login flow is {State}, not redirected.");
		ReconnectPacket target = Redirect ?? throw new InvalidOperationException("The login flow has no redirect target.");
		ClientLoginPacket loginRequest = _loginRequest ?? throw new InvalidOperationException("The login flow has no stored login packet.");
		_session.Disconnect();
		ResetFlow();
		_loginRequest = loginRequest;
		Redirect = target;
		string host = target.Host;
		if (!_session.Connect(host, target.Port))
			return Fail(_session.FailureReason ?? $"The connection to {host}:{target.Port} failed.");
		State = LoginFlowState.AwaitingWelcome;
		return true;
	}

	/// <summary>
	/// Exchanges queued bytes, reads available packets and advances the login sequence.
	/// </summary>
	public void Pump()
	{
		if (State is LoginFlowState.Disconnected or LoginFlowState.Failed or LoginFlowState.Redirected)
			return;
		_session.Pump();
		if (!ContinueAfterSessionPump())
			return;
		if (State == LoginFlowState.AwaitingWelcome && _session.State == GameSessionState.Ready)
		{
			if (!StartAuthentication())
				return;
		}
		while (_session.TryReadPacket(out Packet? packet))
		{
			if (!HandlePacket(packet!))
				return;
		}
	}

	/// <summary>
	/// Requests the character preview for one slot and waits for the server choice.
	/// </summary>
	/// <param name="characterIndex">The character slot to request.</param>
	/// <returns><see langword="true"/> when the request was queued.</returns>
	/// <exception cref="InvalidOperationException">The flow is not accepting a character choice.</exception>
	public bool RequestCharacterSelection(int characterIndex)
	{
		if (State != LoginFlowState.CharacterSelect)
			throw new InvalidOperationException($"A character can be requested only during character selection, not while the flow is {State}.");
		_requestedCharacterIndex = characterIndex;
		State = LoginFlowState.AwaitingCharacterChoice;
		return SendPacket(new PlayerPreviewRequestPacket { CharacterIndex = characterIndex }.ToPacket());
	}

	/// <summary>
	/// Closes the character-select connection and opens a new login with the chosen slot at phase one.
	/// </summary>
	/// <returns><see langword="true"/> when the game-server transport opened.</returns>
	/// <exception cref="InvalidOperationException">No character has been approved or no login packet is stored.</exception>
	[Original(0x0046819C, "LoginFlow_FollowCharacter_0046819c")]
	public bool FollowSelectedCharacter()
	{
		if (State != LoginFlowState.CharacterSelected)
			throw new InvalidOperationException($"The login flow is {State}, not character-selected.");
		int slot = SelectedCharacterIndex ?? throw new InvalidOperationException("The login flow has no approved character slot.");
		ClientLoginPacket loginRequest = (_loginRequest ?? throw new InvalidOperationException("The login flow has no stored login packet.")).WithCharacter(slot);
		ReconnectPacket target = Redirect ?? throw new InvalidOperationException("The login flow has no redirect target.");
		_session.Disconnect();
		ResetFlow();
		_loginRequest = loginRequest;
		Redirect = target;
		if (!_session.Connect(target.Host, target.Port))
			return Fail(_session.FailureReason ?? $"The connection to {target.Host}:{target.Port} failed.");
		State = LoginFlowState.AwaitingWelcome;
		return true;
	}

	/// <summary>
	/// Closes the transport and returns the flow to its starting state unless it had failed.
	/// </summary>
	public void Disconnect()
	{
		if (_session.State != GameSessionState.Disconnected)
			_session.Disconnect();
		_unhandledPackets.Clear();
		if (State != LoginFlowState.Failed)
		{
			State = LoginFlowState.Disconnected;
			FailureReason = null;
		}
	}

	private bool ContinueAfterSessionPump()
	{
		if (_session.State == GameSessionState.Failed)
			return Fail(_session.FailureReason ?? "The connection failed during login.");
		if (_session.State == GameSessionState.Disconnected)
			return Fail("The connection closed during login.");
		return true;
	}

	private bool StartAuthentication()
	{
		if (!_session.IsEncrypted || _session.ServerRole != GameServerRole.GameServer)
			return Fail($"The login flow requires the encrypted game-server welcome but the session is {_session.ServerRole}.");
		if (_loginRequest is null)
			return Fail("No client login packet was supplied.");
		if (!SendPacket(_loginRequest.ToPacket()))
			return false;
		State = LoginFlowState.Authenticating;
		return true;
	}

	private bool HandlePacket(Packet packet)
	{
		if (packet.IsCommand(PacketCommand.ServerInit) || packet.IsCommand(PacketCommand.CharacterServerInit))
			return true;
		if (packet.IsCommand(PacketCommand.Ping))
			return HandlePing(packet);
		if (packet.IsCommand(PacketCommand.ClientInit))
			return HandleClientInit(packet);
		if (packet.IsCommand(PacketCommand.SystemFileCreated))
			return HandleSystemFileCreated(packet);
		if (packet.IsCommand(PacketCommand.SyncSystemFile))
			return HandleSyncSystemFile(packet);
		if (packet.IsCommand(PacketCommand.PlayerChoice))
			return HandlePlayerChoice(packet);
		if (packet.IsCommand(PacketCommand.PlayerPreview))
			return HandlePlayerPreview(packet);
		if (packet.IsCommand(PacketCommand.Reconnect))
			return HandleReconnect(packet);
		if (ForwardUnhandledPackets)
			_unhandledPackets.Enqueue(packet);
		return true;
	}

	[Original(0x0047B684)]
	private bool HandlePing(Packet packet)
	{
		try
		{
			PingPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The ping packet is malformed: {exception.Message}");
		}
		return SendPacket(PingPacket.Instance.ToPacket());
	}

	[Original(0x00464A90)]
	private bool HandleClientInit(Packet packet)
	{
		if (State != LoginFlowState.Authenticating)
			return FailUnexpected("a client initialization response");
		ClientInitPacket init;
		try
		{
			init = ClientInitPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The client initialization response is malformed: {exception.Message}");
		}
		LoginErrorCode = init.ErrorCode;
		if (init.ErrorCode != 0)
			return Fail($"The login was rejected with error 0x{init.ErrorCode:X8}.");
		GuildCardNumber = init.GuildCardNumber;
		SecurityToken = init.SecurityToken;
		ClientConfig = init.ClientConfig;
		if (_loginRequest is not null)
			_loginRequest = _loginRequest.WithServerState(init.GuildCardNumber, init.SecurityToken, init.ClientConfig);
		State = LoginFlowState.AwaitingSystemFile;
		return SendPacket(new SystemFileRequestPacket().ToPacket());
	}

	[Original(0x0046E8E4)]
	private bool HandleSystemFileCreated(Packet packet)
	{
		if (State != LoginFlowState.AwaitingSystemFile)
			return FailUnexpected("a system-file creation notice");
		SystemFileCreatedPacket created;
		try
		{
			created = SystemFileCreatedPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The system-file creation notice is malformed: {exception.Message}");
		}
		if (!created.IsSuccess)
			return Fail($"The server reported system-file creation error 907 with result 0x{created.Result:X8}.");
		HasSystemFile = false;
		SystemFileCreated = true;
		State = LoginFlowState.CharacterSelect;
		return true;
	}

	[Original(0x0046B4B0)]
	private bool HandleSyncSystemFile(Packet packet)
	{
		if (State != LoginFlowState.AwaitingSystemFile)
			return FailUnexpected("a system-file sync");
		SyncSystemFilePacket sync;
		try
		{
			sync = SyncSystemFilePacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The system-file sync is malformed: {exception.Message}");
		}
		SystemFile = sync.SystemFile;
		TeamMembership = sync.TeamMembership;
		HasSystemFile = true;
		if (!SendPacket(sync.ToPacket()))
			return false;
		return true;
	}

	[Original(0x00474FCC)]
	private bool HandlePlayerChoice(Packet packet)
	{
		if (State != LoginFlowState.AwaitingCharacterChoice)
			return FailUnexpected("a player choice");
		PlayerChoicePacket choice;
		try
		{
			choice = PlayerChoicePacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The player choice is malformed: {exception.Message}");
		}
		if (choice.CharacterIndex != _requestedCharacterIndex)
			return Fail($"The server answered for character slot {choice.CharacterIndex} instead of slot {_requestedCharacterIndex}.");
		LastCharacterChoice = choice;
		if (choice.IsApproved)
		{
			SelectedCharacterIndex = choice.CharacterIndex;
			_requestedCharacterIndex = null;
			State = LoginFlowState.CharacterSelected;
			return true;
		}
		if (choice.Result == PlayerChoicePacket.NoPlayerError)
		{
			_requestedCharacterIndex = null;
			State = LoginFlowState.CharacterSelect;
			return true;
		}
		return Fail($"The player choice result 0x{choice.Result:X8} is not an approval or the empty-slot error.");
	}

	[Original(0x0047B0A8)]
	private bool HandlePlayerPreview(Packet packet)
	{
		if (State != LoginFlowState.AwaitingCharacterChoice)
			return FailUnexpected("a player preview");
		PlayerPreviewPacket preview;
		try
		{
			preview = PlayerPreviewPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The player preview is malformed: {exception.Message}");
		}
		if (preview.CharacterIndex != _requestedCharacterIndex)
			return Fail($"The server previewed character slot {preview.CharacterIndex} instead of slot {_requestedCharacterIndex}.");
		LastPlayerPreview = preview;
		SelectedCharacterIndex = preview.CharacterIndex;
		_requestedCharacterIndex = null;
		State = LoginFlowState.CharacterSelected;
		return true;
	}

	[Original(0x0046819C)]
	private bool HandleReconnect(Packet packet)
	{
		if (State is not (LoginFlowState.Authenticating or LoginFlowState.AwaitingSystemFile or LoginFlowState.CharacterSelect or LoginFlowState.CharacterSelected))
			return FailUnexpected("a redirect");
		ReconnectPacket redirect;
		try
		{
			redirect = ReconnectPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			return Fail($"The redirect is malformed: {exception.Message}");
		}
		Redirect = redirect;
		State = LoginFlowState.Redirected;
		return true;
	}

	private bool SendPacket(Packet packet)
	{
		if (_session.State is not (GameSessionState.Connected or GameSessionState.Ready))
			return Fail($"The connection is {_session.State} while the login flow is sending.");
		_session.Send(packet);
		_session.FlushSends();
		if (_session.State == GameSessionState.Failed)
			return Fail(_session.FailureReason ?? "The connection failed while the login flow was sending.");
		return true;
	}

	private bool FailUnexpected(string description) =>
		Fail($"The server sent {description} while the login flow was {State}.");

	private bool Fail(string reason)
	{
		FailureReason = reason;
		State = LoginFlowState.Failed;
		if (_session.State is not (GameSessionState.Disconnected or GameSessionState.Failed))
			_session.Disconnect();
		return false;
	}

	private void ResetFlow()
	{
		State = LoginFlowState.Disconnected;
		FailureReason = null;
		LoginErrorCode = null;
		GuildCardNumber = 0;
		SecurityToken = 0;
		ClientConfig = ReadOnlyMemory<byte>.Empty;
		HasSystemFile = false;
		SystemFileCreated = false;
		SystemFile = ReadOnlyMemory<byte>.Empty;
		TeamMembership = ReadOnlyMemory<byte>.Empty;
		SelectedCharacterIndex = null;
		LastCharacterChoice = null;
		LastPlayerPreview = null;
		Redirect = null;
		_loginRequest = null;
		_requestedCharacterIndex = null;
		_unhandledPackets.Clear();
	}
}
