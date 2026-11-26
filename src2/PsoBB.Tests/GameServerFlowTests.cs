using System.Buffers.Binary;
using System.Text;
using PsoBB.Core;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the game-server connection that follows the command 0x19 redirect.
/// </summary>
public sealed class GameServerFlowTests
{
	private const string TestHost = "login.invalid";
	private const int TestPort = 14000;
	private static readonly byte[] ServerKey = Pattern(0x30, 0x11);
	private static readonly byte[] ClientKey = Pattern(0x30, 0x41);
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];

	/// <summary>
	/// The redirect target is opened, the stored login request is sent after the second welcome, and the second login response starts the game-server phase.
	/// </summary>
	[Fact]
	public void RedirectOpensTargetAndSendsTheStoredLoginRequest()
	{
		using Fixture fixture = new();
		fixture.AdvanceToRedirect(0x0A000102, 0x1F90);
		GameServerFlow flow = new(fixture.LoginFlow);
		Assert.True(flow.Start());
		Assert.Equal(GameServerFlowState.Connecting, flow.State);
		Assert.Equal("10.0.1.2", fixture.Connection.LastHost);
		Assert.Equal(0x1F90, fixture.Connection.LastPort);
		Assert.Equal(LoginFlowState.AwaitingWelcome, fixture.LoginFlow.State);

		fixture.Connection.Push(Welcome().ToArray());
		flow.Pump();
		Assert.Equal(GameServerFlowState.Authenticating, flow.State);
		Assert.Equal(LoginFlowState.Authenticating, fixture.LoginFlow.State);
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Assert.Equal(new byte[] { 0x93, 0xE0, 0x93 }, sent.Select(packet => packet.Header.Opcode));
		ClientLoginPacket login = ClientLoginPacket.Read(sent[2].Payload.Span);
		Assert.Equal(DefaultLogin().Username, login.Username);
		Assert.Equal(DefaultLogin().Password, login.Password);
		Assert.Equal(0, login.ConnectionPhase);
	}

	/// <summary>
	/// A second redirect from the game server reopens the new target and sends the login packet again.
	/// </summary>
	[Fact]
	public void SecondRedirectReopensTheNewTarget()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, new ReconnectPacket { Address = 0x0A000203, Port = 0x1F91 }.ToPacket());
		flow.Pump();
		Assert.Equal(GameServerFlowState.Connecting, flow.State);
		Assert.Equal("10.0.2.3", fixture.Connection.LastHost);
		Assert.Equal(0x1F91, fixture.Connection.LastPort);
		fixture.Connection.Push(Welcome().ToArray());
		flow.Pump();
		Assert.Equal(GameServerFlowState.Authenticating, flow.State);
		Assert.Equal(LoginFlowState.Authenticating, fixture.LoginFlow.State);
	}

	/// <summary>
	/// A 0x64 game-join snapshot after the second welcome fills the lobby world with its four player records.
	/// </summary>
	[Fact]
	public void GameJoinSnapshotFillsTheWorld()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, GameJoin((1, "ALPHA"), (2, "BETA")));
		flow.Pump();
		Assert.Equal(GameServerFlowState.Game, flow.State);
		Assert.Equal(LobbyWorldState.GameLoading, flow.World.State);
		Assert.Equal(2, flow.World.Entities.Count);
		Assert.Equal(2, flow.World.LocalPlayerIndex);
	}

	/// <summary>
	/// A 0x67 lobby-join snapshot after the second welcome enters the lobby state with its player records.
	/// </summary>
	[Fact]
	public void LobbyJoinSnapshotEntersTheLobby()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, JoinLobby((4, "GAMMA")));
		flow.Pump();
		Assert.Equal(GameServerFlowState.Lobby, flow.State);
		Assert.Equal(LobbyWorldState.Lobby, flow.World.State);
		Assert.Equal((byte)3, flow.World.LobbyNumber);
		Assert.Equal((byte)2, flow.World.BlockNumber);
		Assert.Equal(1, flow.World.Entities.Count);
	}

	/// <summary>
	/// A truncated game-join body stops the flow with a malformed-command diagnostic.
	/// </summary>
	[Fact]
	public void MalformedGameJoinStopsWithADiagnostic()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, Packet.Create(PacketCommand.GameJoin, 0, new byte[8]));
		flow.Pump();
		Assert.Equal(GameServerFlowState.Failed, flow.State);
		Assert.Contains("0x64", flow.Diagnostic!);
		Assert.Contains("malformed", flow.Diagnostic!);
	}

	/// <summary>
	/// A list command whose record layout is not in the lift stops the flow instead of being ignored.
	/// </summary>
	[Fact]
	public void UnsupportedListCommandStopsWithADiagnostic()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, Packet.Create((PacketCommand)0x1A, 0, new byte[0]));
		flow.Pump();
		Assert.Equal(GameServerFlowState.Unsupported, flow.State);
		Assert.Contains("0x1A", flow.Diagnostic!);
		Assert.Contains("no record codec", flow.Diagnostic!);
		Assert.Equal(GameSessionState.Disconnected, fixture.Session.State);
	}

	/// <summary>
	/// A 0x83 reply stores its header-counted menu records instead of stopping the flow, and a zero-count or later reply replaces them.
	/// </summary>
	[Fact]
	public void LobbyMenuRepliesReplaceTheMenuAndZeroEntriesClearIt()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, LobbyMenu((0x11, 0x22, 3), (0x33, 0x44, 7)));
		flow.Pump();
		Assert.Equal(GameServerFlowState.Authenticating, flow.State);
		Assert.NotNull(flow.World.LobbyMenu);
		Assert.Equal(2, flow.World.LobbyMenu.Count);
		Assert.Equal(new LobbyMenuRecord(0x11, 0x22, 3), flow.World.LobbyMenu.Records[0]);
		PushEncrypted(fixture.Connection, LobbyMenu());
		flow.Pump();
		Assert.Equal(0, flow.World.LobbyMenu!.Count);
		PushEncrypted(fixture.Connection, LobbyMenu((0x55, 0x66, 1)));
		flow.Pump();
		Assert.Equal(1, flow.World.LobbyMenu!.Count);
		Assert.Equal(new LobbyMenuRecord(0x55, 0x66, 1), flow.World.LobbyMenu.Records[0]);
	}

	/// <summary>
	/// Repeated 0x81 replies are decoded and added to the mail list instead of stopping the flow.
	/// </summary>
	[Fact]
	public void SimpleMailRepliesAccumulate()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, SimpleMail(), SimpleMail());
		flow.Pump();
		Assert.Equal(GameServerFlowState.Authenticating, flow.State);
		Assert.Equal(2, flow.World.SimpleMails.Count);
		Assert.Equal(string.Empty, flow.World.SimpleMails[0].Text);
	}

	/// <summary>
	/// A close after the redirect target opens fails the flow with the login flow's reason.
	/// </summary>
	[Fact]
	public void ClosedRedirectedConnectionFailsTheFlow()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		fixture.Connection.RemoteClosed = true;
		flow.Pump();
		Assert.Equal(GameServerFlowState.Failed, flow.State);
		Assert.Contains("closed", flow.Diagnostic!);
		Assert.Equal(GameSessionState.Disconnected, fixture.Session.State);
	}

	/// <summary>
	/// Starting before the login flow reaches the redirect fails without opening a second connection.
	/// </summary>
	[Fact]
	public void StartRequiresARedirect()
	{
		using Fixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		GameServerFlow flow = new(fixture.LoginFlow);
		Assert.False(flow.Start());
		Assert.Equal(GameServerFlowState.Failed, flow.State);
		Assert.Contains("not redirected", flow.Diagnostic!);
	}

	/// <summary>
	/// A refused redirect connection fails the flow and leaves the session disconnected.
	/// </summary>
	[Fact]
	public void RefusedRedirectConnectionFailsTheFlow()
	{
		using Fixture fixture = new();
		fixture.AdvanceToRedirect(0x0A000102, 0x1F90);
		fixture.Connection.RefuseNextConnect = true;
		GameServerFlow flow = new(fixture.LoginFlow);
		Assert.False(flow.Start());
		Assert.Equal(GameServerFlowState.Failed, flow.State);
		Assert.Equal(GameSessionState.Failed, fixture.Session.State);
	}

	/// <summary>
	/// Disconnect closes the redirected session and clears the world.
	/// </summary>
	[Fact]
	public void DisconnectClosesTheSession()
	{
		using Fixture fixture = new();
		GameServerFlow flow = fixture.StartGameServer();
		PushEncrypted(fixture.Connection, JoinLobby((4, "GAMMA")));
		flow.Pump();
		Assert.Equal(LobbyWorldState.Lobby, flow.World.State);
		flow.Disconnect();
		Assert.Equal(GameServerFlowState.Disconnected, flow.State);
		Assert.Equal(GameSessionState.Disconnected, fixture.Session.State);
		Assert.Equal(LobbyWorldState.Disconnected, flow.World.State);
	}

	/// <summary>
	/// The redirect codec formats the host-order IPv4 value as four decimal octets.
	/// </summary>
	[Fact]
	public void RedirectTargetHostUsesFourOctets()
	{
		ReconnectPacket redirect = new() { Address = 0xC0A801FE, Port = 0x2EE0 };
		Assert.Equal("192.168.1.254", redirect.Host);
	}

	private static ClientLoginPacket DefaultLogin() => new()
	{
		Username = ByteString.FromText("ACCOUNT")!,
		Password = ByteString.FromText("PASSWORD")!,
	};

	private static Packet Welcome() => Packet.Create(PacketCommand.ServerInit, 0, new ServerInitPacket
	{
		Copyright = ByteString.FromText(ServerInitPacket.GameServerCopyright)!,
		ServerKey = Mask(ServerKey),
		ClientKey = Mask(ClientKey),
	}.WritePayload());

	private static Packet ClientInit() => new ClientInitPacket
	{
		GuildCardNumber = 0x11223344,
		SecurityToken = 0x55667788,
		ClientConfig = Pattern(0x28, 0x21),
	}.ToPacket();

	private static Packet GameJoin(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.GameJoinBodyLength];
		body[0x190] = 2;
		body[0x191] = 1;
		body[0x193] = 2;
		body[0x196] = 3;
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x198), 0xA1B2C3D4);
		for (int index = 0; index < players.Length; index++)
			LobbyData(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.GameJoinPlayerOffset + (index * LobbyEntity.LobbyDataSize));
		return Packet.Create(PacketCommand.GameJoin, 0, body);
	}

	private static Packet JoinLobby(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + (players.Length * LobbyWorld.LobbyJoinEntryLength)];
		body[0] = 4;
		body[1] = 5;
		body[3] = 3;
		body[4] = 2;
		for (int index = 0; index < players.Length; index++)
			LobbyEntry(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset + (index * LobbyWorld.LobbyJoinEntryLength));
		return Packet.Create(PacketCommand.JoinLobby, (uint)players.Length, body);
	}

	private static Packet LobbyMenu(params (uint MenuId, uint ItemId, uint PlayerCount)[] records)
	{
		byte[] body = new byte[records.Length * LobbyMenuPacket.RecordLength];
		for (int index = 0; index < records.Length; index++)
		{
			Span<byte> record = body.AsSpan(index * LobbyMenuPacket.RecordLength, LobbyMenuPacket.RecordLength);
			BinaryPrimitives.WriteUInt32LittleEndian(record, records[index].MenuId);
			BinaryPrimitives.WriteUInt32LittleEndian(record[0x04..], records[index].ItemId);
			BinaryPrimitives.WriteUInt32LittleEndian(record[0x08..], records[index].PlayerCount);
		}
		return Packet.Create(PacketCommand.LobbyMenu, (uint)records.Length, body);
	}

	private static Packet SimpleMail() => Packet.Create(PacketCommand.SimpleMail, 0, new byte[SimpleMailPacket.PayloadLength]);

	private static byte[] LobbyData(int clientId, string name)
	{
		byte[] data = new byte[LobbyEntity.LobbyDataSize];
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(LobbyEntity.ClientIdOffset), (uint)clientId);
		byte[] encoded = Encoding.Unicode.GetBytes(name);
		encoded.AsSpan(0, Math.Min(encoded.Length, LobbyEntity.NameLength)).CopyTo(data.AsSpan(LobbyEntity.NameOffset));
		return data;
	}

	private static byte[] LobbyEntry(int clientId, string name) =>
		[.. LobbyData(clientId, name), .. new byte[LobbyWorld.LobbyJoinEntryLength - LobbyEntity.LobbyDataSize]];

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
			byte[] headerBytes = new byte[PacketHeader.Size];
			Array.Copy(wire, offset, headerBytes, 0, PacketHeader.Size);
			cipher.DecryptBlock(headerBytes);
			PacketHeader header = PacketHeader.Read(headerBytes);
			int padded = (header.Length + 7) & ~7;
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

	private sealed class Fixture : IDisposable
	{
		public Fixture()
		{
			Session = new GameSession(Connection);
			LoginFlow = new LoginFlow(Session);
		}

		public RecordingConnection Connection { get; } = new();
		public GameSession Session { get; }
		public LoginFlow LoginFlow { get; }

		public void AdvanceToCharacterSelect()
		{
			Assert.True(LoginFlow.Connect(TestHost, TestPort, DefaultLogin()));
			Connection.Push(Welcome().ToArray());
			LoginFlow.Pump();
			PushEncrypted(Connection, ClientInit());
			LoginFlow.Pump();
			PushEncrypted(Connection, new SystemFileCreatedPacket().ToPacket());
			LoginFlow.Pump();
			Assert.Equal(LoginFlowState.CharacterSelect, LoginFlow.State);
		}

		public void AdvanceToRedirect(uint address, ushort port)
		{
			AdvanceToCharacterSelect();
			PushEncrypted(Connection, new ReconnectPacket { Address = address, Port = port }.ToPacket());
			LoginFlow.Pump();
			Assert.Equal(LoginFlowState.Redirected, LoginFlow.State);
		}

		public GameServerFlow StartGameServer()
		{
			AdvanceToRedirect(0x0A000102, 0x1F90);
			GameServerFlow flow = new(LoginFlow);
			Assert.True(flow.Start());
			Connection.Push(Welcome().ToArray());
			flow.Pump();
			Assert.Equal(GameServerFlowState.Authenticating, flow.State);
			return flow;
		}

		public void Dispose() => Session.Dispose();
	}

	private sealed class RecordingConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public bool RemoteClosed { get; set; }
		public bool RefuseNextConnect { get; set; }
		public string? LastHost { get; private set; }
		public int LastPort { get; private set; }
		public List<byte> Sent { get; } = [];

		public bool Connect(string host, int port)
		{
			LastHost = host;
			LastPort = port;
			if (RefuseNextConnect)
			{
				RefuseNextConnect = false;
				State = GameConnectionState.Failed;
				return false;
			}
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
