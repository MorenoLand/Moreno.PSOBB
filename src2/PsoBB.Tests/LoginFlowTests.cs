using PsoBB.Core;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the client login and character-selection flow over <see cref="GameSession"/>.
/// </summary>
public sealed class LoginFlowTests
{
	private const string TestHost = "login.invalid";
	private const int TestPort = 12000;
	private static readonly byte[] ServerKey = Pattern(0x30, 0x11);
	private static readonly byte[] ClientKey = Pattern(0x30, 0x41);
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];

	/// <summary>
	/// A successful welcome sends the 0x93 login packet once, encrypted, with the supplied credentials.
	/// </summary>
	[Fact]
	public void SuccessfulWelcomeSendsTheClientLoginPacket()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Packet loginPacket = Assert.Single(sent);
		Assert.Equal(0x93, loginPacket.Header.Opcode);
		ClientLoginPacket login = ClientLoginPacket.Read(loginPacket.Payload.Span);
		Assert.Equal(DefaultLogin().Username, login.Username);
		Assert.Equal(DefaultLogin().Password, login.Password);
		Assert.Equal(ClientLoginPacket.DefaultPlayerTag, login.PlayerTag);
		Assert.Equal(0, login.ConnectionPhase);
	}

	/// <summary>
	/// A nonzero 0xE6 error code rejects the login without a system-file request.
	/// </summary>
	[Fact]
	public void RejectedLoginFailsWithoutRequestingTheSystemFile()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		PushEncrypted(fixture.Connection, ClientInit(errorCode: 0x00000009));
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Equal(0x00000009u, fixture.Flow.LoginErrorCode);
		Assert.Contains("rejected", fixture.Flow.FailureReason!);
		Assert.Equal(GameSessionState.Disconnected, fixture.Session.State);
		Assert.Equal(new byte[] { 0x93 }, ReadSentPackets(fixture.Connection).Select(packet => packet.Header.Opcode));
	}

	/// <summary>
	/// An accepted 0xE6 stores the assignment and sends the empty 0xE0 system-file request.
	/// </summary>
	[Fact]
	public void AcceptedLoginRequestsTheSystemFileAndStoresTheAssignment()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		byte[] config = Pattern(0x28, 0x51);
		PushEncrypted(fixture.Connection, ClientInit(guildCardNumber: 0x0A0B0C0D, securityToken: 0x11223344, config: config));
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.AwaitingSystemFile, fixture.Flow.State);
		Assert.Equal(0u, fixture.Flow.LoginErrorCode);
		Assert.Equal(0x0A0B0C0Du, fixture.Flow.GuildCardNumber);
		Assert.Equal(0x11223344u, fixture.Flow.SecurityToken);
		Assert.Equal(config, fixture.Flow.ClientConfig.ToArray());
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Assert.Equal(new byte[] { 0x93, 0xE0 }, sent.Select(packet => packet.Header.Opcode));
		Assert.Empty(sent[1].Payload.ToArray());
	}

	/// <summary>
	/// A 0xE6 response with the wrong payload length fails the flow without a system-file request.
	/// </summary>
	[Fact]
	public void MalformedClientInitFailsWithoutRequestingTheSystemFile()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		PushEncrypted(fixture.Connection, Packet.Create(PacketCommand.ClientInit, 0, new byte[4]));
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Contains("malformed", fixture.Flow.FailureReason!);
		Assert.Equal(new byte[] { 0x93 }, ReadSentPackets(fixture.Connection).Select(packet => packet.Header.Opcode));
	}

	/// <summary>
	/// A partial 0xE6 response leaves the flow waiting; a later transport close fails it.
	/// </summary>
	[Fact]
	public void TruncatedClientInitWaitsAndDisconnectFailsTheFlow()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		byte[] wire = Encrypt(ClientInit(), ServerKey);
		fixture.Connection.Push(wire.AsSpan(0, 0x20));
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Authenticating, fixture.Flow.State);
		Assert.Equal(new byte[] { 0x93 }, ReadSentPackets(fixture.Connection).Select(packet => packet.Header.Opcode));
		fixture.Connection.RemoteClosed = true;
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Contains("closed", fixture.Flow.FailureReason!);
	}

	/// <summary>
	/// The created-default notice continues to character selection without a stored system file.
	/// </summary>
	[Fact]
	public void SystemFileCreatedEntersCharacterSelect()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToSystemFile();
		PushEncrypted(fixture.Connection, SystemFileCreated());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelect, fixture.Flow.State);
		Assert.False(fixture.Flow.HasSystemFile);
		Assert.Empty(fixture.Flow.SystemFile.ToArray());
	}

	/// <summary>
	/// A created-default notice other than one reports the original error 907 and disconnects.
	/// </summary>
	[Fact]
	public void SystemFileCreationErrorReports907()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToSystemFile();
		PushEncrypted(fixture.Connection, SystemFileCreated(result: 2));
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Contains("907", fixture.Flow.FailureReason!);
		Assert.Equal(GameSessionState.Disconnected, fixture.Session.State);
	}

	/// <summary>
	/// The full system-file sync stores both opaque sections and continues to character selection.
	/// </summary>
	[Fact]
	public void SystemFileSyncStoresBothSections()
	{
		using FlowFixture fixture = new();
		byte[] systemFile = Pattern(SyncSystemFilePacket.SystemFileLength, 0x31);
		byte[] teamMembership = Pattern(SyncSystemFilePacket.TeamMembershipLength, 0x71);
		fixture.AdvanceToSystemFile();
		PushEncrypted(fixture.Connection, new SyncSystemFilePacket { SystemFile = systemFile, TeamMembership = teamMembership }.ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelect, fixture.Flow.State);
		Assert.True(fixture.Flow.HasSystemFile);
		Assert.Equal(systemFile, fixture.Flow.SystemFile.ToArray());
		Assert.Equal(teamMembership, fixture.Flow.TeamMembership.ToArray());
	}

	/// <summary>
	/// A 0xE3 request sends the chosen slot and a 0xE4 approval records it.
	/// </summary>
	[Fact]
	public void ApprovedCharacterSelectionIsRecorded()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		Assert.True(fixture.Flow.RequestCharacterSelection(2));
		Assert.Equal(LoginFlowState.AwaitingCharacterChoice, fixture.Flow.State);
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Assert.Equal(new byte[] { 0x93, 0xE0, 0xE3 }, sent.Select(packet => packet.Header.Opcode));
		Assert.Equal(2, PlayerPreviewRequestPacket.Read(sent[2].Payload.Span).CharacterIndex);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(2).ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelected, fixture.Flow.State);
		Assert.Equal(2, fixture.Flow.SelectedCharacterIndex);
		Assert.True(fixture.Flow.LastCharacterChoice!.IsApproved);
	}

	/// <summary>
	/// An empty-slot answer returns to character selection and permits another request.
	/// </summary>
	[Fact]
	public void EmptyCharacterSlotKeepsTheFlowInCharacterSelect()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		fixture.Flow.RequestCharacterSelection(1);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.NoPlayer(1).ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelect, fixture.Flow.State);
		Assert.Null(fixture.Flow.SelectedCharacterIndex);
		Assert.False(fixture.Flow.LastCharacterChoice!.IsApproved);
		Assert.True(fixture.Flow.RequestCharacterSelection(0));
		Assert.Equal(LoginFlowState.AwaitingCharacterChoice, fixture.Flow.State);
	}

	/// <summary>
	/// An answer for a different slot than the request is a protocol error.
	/// </summary>
	[Fact]
	public void MismatchedCharacterChoiceFails()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		fixture.Flow.RequestCharacterSelection(1);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(2).ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Contains("slot 2", fixture.Flow.FailureReason!);
	}

	/// <summary>
	/// The final redirect stores the ship or block address and port without sending another packet.
	/// </summary>
	[Fact]
	public void ShipRedirectAfterCharacterSelectionStoresTheTarget()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		fixture.Flow.RequestCharacterSelection(3);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(3).ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelected, fixture.Flow.State);
		PushEncrypted(fixture.Connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Redirected, fixture.Flow.State);
		Assert.Null(fixture.Flow.FailureReason);
		Assert.Equal(0x0A000102u, fixture.Flow.Redirect!.Address);
		Assert.Equal((ushort)0x1F90, fixture.Flow.Redirect.Port);
		Assert.Equal(new byte[] { 0x93, 0xE0, 0xE3 }, ReadSentPackets(fixture.Connection).Select(packet => packet.Header.Opcode));
	}

	/// <summary>
	/// The login-only path accepts a redirect after the 0xE6 assignment without character selection.
	/// </summary>
	[Fact]
	public void RedirectAfterClientInitStoresTheTarget()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToSystemFile();
		PushEncrypted(fixture.Connection, new ReconnectPacket { Address = 0x7F000001, Port = 0x2EE0 }.ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Redirected, fixture.Flow.State);
		Assert.Null(fixture.Flow.SelectedCharacterIndex);
		Assert.Equal((ushort)0x2EE0, fixture.Flow.Redirect!.Port);
	}

	/// <summary>
	/// A welcome with the wrong copyright leaves the session failed, unencrypted and with nothing sent.
	/// </summary>
	[Fact]
	public void WelcomeFailureSendsNothingAndLeavesCryptoDisabled()
	{
		using FlowFixture fixture = new();
		Assert.True(fixture.Flow.Connect(TestHost, TestPort, DefaultLogin()));
		fixture.Connection.Push(Welcome(PacketCommand.ServerInit, "Wrong copyright").ToArray());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Failed, fixture.Flow.State);
		Assert.Equal(GameSessionState.Failed, fixture.Session.State);
		Assert.False(fixture.Session.IsEncrypted);
		Assert.Equal(GameServerRole.None, fixture.Session.ServerRole);
		Assert.Empty(fixture.Connection.Sent);
	}

	/// <summary>
	/// A keepalive received during authentication is echoed in order without changing the login stage.
	/// </summary>
	[Fact]
	public void PingDuringAuthenticationIsEchoed()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		PushEncrypted(fixture.Connection, PingPacket.Instance.ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Authenticating, fixture.Flow.State);
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Assert.Equal(new byte[] { 0x93, 0x1D }, sent.Select(packet => packet.Header.Opcode));
		Assert.Empty(sent[1].Payload.ToArray());
	}

	/// <summary>
	/// Consecutive server packets are handled in arrival order across the login and selection stages.
	/// </summary>
	[Fact]
	public void ConsecutiveServerPacketsAreHandledInOrder()
	{
		using FlowFixture fixture = new();
		fixture.ConnectAndAuthenticate();
		PushEncrypted(fixture.Connection, ClientInit(), SystemFileCreated());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.CharacterSelect, fixture.Flow.State);
		Assert.Equal(new byte[] { 0x93, 0xE0 }, ReadSentPackets(fixture.Connection).Select(packet => packet.Header.Opcode));
		fixture.Flow.RequestCharacterSelection(0);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(0).ToPacket(), new ReconnectPacket { Address = 0x0A000203, Port = 0x1F91 }.ToPacket());
		fixture.Flow.Pump();
		Assert.Equal(LoginFlowState.Redirected, fixture.Flow.State);
		Assert.Equal(0, fixture.Flow.SelectedCharacterIndex);
		Assert.Equal((ushort)0x1F91, fixture.Flow.Redirect!.Port);
	}

	private static ClientLoginPacket DefaultLogin() => new()
	{
		Username = ByteString.FromText("ACCOUNT")!,
		Password = ByteString.FromText("PASSWORD")!,
	};

	private static Packet ClientInit(uint errorCode = 0, uint guildCardNumber = 0x11223344, uint securityToken = 0x55667788, byte[]? config = null) =>
		new ClientInitPacket
		{
			ErrorCode = errorCode,
			GuildCardNumber = guildCardNumber,
			SecurityToken = securityToken,
			ClientConfig = config ?? Pattern(0x28, 0x21),
		}.ToPacket();

	private static Packet SystemFileCreated(uint result = SystemFileCreatedPacket.Success) =>
		new SystemFileCreatedPacket { Result = result }.ToPacket();

	private static Packet Welcome(PacketCommand command, string copyright) =>
		Packet.Create(command, 0, new ServerInitPacket
		{
			Copyright = ByteString.FromText(copyright)!,
			ServerKey = Mask(ServerKey),
			ClientKey = Mask(ClientKey),
		}.WritePayload());

	private static byte[] Pattern(int length, byte seed = 1)
	{
		byte[] values = new byte[length];
		for (int index = 0; index < values.Length; index++)
			values[index] = unchecked((byte)(seed + index));
		return values;
	}

	private static byte[] Mask(ReadOnlySpan<byte> key)
	{
		byte[] masked = key.ToArray();
		for (int index = 0; index < masked.Length; index++)
			masked[index] ^= KeyMask[index % KeyMask.Length];
		return masked;
	}

	private static byte[] Encrypt(Packet packet, ReadOnlySpan<byte> key)
	{
		byte[] wire = new byte[(packet.Length + 7) & ~7];
		packet.WriteTo(wire);
		PsoCipher cipher = new();
		cipher.Init(key);
		cipher.EncryptBlocks(wire);
		return wire;
	}

	private static void PushEncrypted(RecordingConnection connection, params Packet[] packets)
	{
		foreach (Packet packet in packets)
			connection.Push(Encrypt(packet, ServerKey));
	}

	private static List<Packet> ReadSentPackets(RecordingConnection connection)
	{
		byte[] wire = connection.Sent.ToArray();
		List<Packet> packets = [];
		PsoCipher cipher = new();
		cipher.Init(ClientKey);
		int offset = 0;
		while (offset < wire.Length)
		{
			if (wire.Length - offset < PacketHeader.Size)
				throw new InvalidDataException("A sent packet has a truncated header.");
			byte[] headerBytes = new byte[PacketHeader.Size];
			Array.Copy(wire, offset, headerBytes, 0, PacketHeader.Size);
			cipher.DecryptBlock(headerBytes);
			PacketHeader header = PacketHeader.Read(headerBytes);
			int padded = (header.Length + 7) & ~7;
			if (padded < PacketHeader.Size || offset + padded > wire.Length)
				throw new InvalidDataException("A sent packet has an invalid padded length.");
			byte[] body = new byte[padded - PacketHeader.Size];
			Array.Copy(wire, offset + PacketHeader.Size, body, 0, body.Length);
			if (body.Length > 0)
				cipher.DecryptBlocks(body);
			byte[] complete = new byte[header.Length];
			headerBytes.CopyTo(complete, 0);
			Array.Copy(body, 0, complete, PacketHeader.Size, header.Length - PacketHeader.Size);
			packets.Add(Packet.Read(complete));
			offset += padded;
		}
		return packets;
	}

	private sealed class FlowFixture : IDisposable
	{
		public FlowFixture()
		{
			Session = new GameSession(Connection);
			Flow = new LoginFlow(Session);
		}

		public RecordingConnection Connection { get; } = new();
		public GameSession Session { get; }
		public LoginFlow Flow { get; }

		public void Connect() => Assert.True(Flow.Connect(TestHost, TestPort, DefaultLogin()));

		public void ConnectAndAuthenticate()
		{
			Connect();
			Connection.Push(Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright).ToArray());
			Flow.Pump();
			Assert.Equal(LoginFlowState.Authenticating, Flow.State);
		}

		public void AdvanceToSystemFile()
		{
			ConnectAndAuthenticate();
			PushEncrypted(Connection, ClientInit());
			Flow.Pump();
			Assert.Equal(LoginFlowState.AwaitingSystemFile, Flow.State);
		}

		public void AdvanceToCharacterSelect()
		{
			AdvanceToSystemFile();
			PushEncrypted(Connection, SystemFileCreated());
			Flow.Pump();
			Assert.Equal(LoginFlowState.CharacterSelect, Flow.State);
		}

		public void Dispose() => Session.Dispose();
	}

	private sealed class RecordingConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public bool RemoteClosed { get; set; }
		public List<byte> Sent { get; } = [];

		public bool Connect(string host, int port)
		{
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data)
		{
			foreach (byte value in data)
				Sent.Add(value);
			return data.Length;
		}

		public int Receive(Span<byte> destination)
		{
			if (State != GameConnectionState.Connected)
				return 0;
			if (_received.Count == 0)
			{
				if (RemoteClosed)
					State = GameConnectionState.Disconnected;
				return 0;
			}
			int count = Math.Min(destination.Length, _received.Count);
			for (int index = 0; index < count; index++)
				destination[index] = _received.Dequeue();
			return count;
		}

		public void Close() => State = GameConnectionState.Disconnected;

		public void Dispose() => Close();

		public void Push(ReadOnlySpan<byte> bytes)
		{
			foreach (byte value in bytes)
				_received.Enqueue(value);
		}
	}
}
