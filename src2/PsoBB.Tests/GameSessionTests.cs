using PsoBB.Core;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the game session, its ordered send queue and the welcome handshake.
/// </summary>
public sealed class GameSessionTests
{
	private const string TestHost = "session.invalid";
	private const int TestPort = 12000;
	private static readonly byte[] ServerKey = Pattern(0x30, 0x11);
	private static readonly byte[] ClientKey = Pattern(0x30, 0x41);
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];

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

	private static Packet Welcome(PacketCommand command, string copyright, ReadOnlySpan<byte> serverKey, ReadOnlySpan<byte> clientKey) =>
		Packet.Create(command, 0, new ServerInitPacket
		{
			Copyright = ByteString.FromText(copyright)!,
			ServerKey = Mask(serverKey),
			ClientKey = Mask(clientKey),
		}.WritePayload());

	private static byte[] Encrypt(Packet packet, ReadOnlySpan<byte> key)
	{
		byte[] wire = new byte[(packet.Length + 7) & ~7];
		packet.WriteTo(wire);
		PsoCipher cipher = new();
		cipher.Init(key);
		cipher.EncryptBlocks(wire);
		return wire;
	}

	private static void CompleteWelcome(GameSession session, InMemoryGameConnection connection, Packet welcome)
	{
		connection.Push(welcome.ToArray());
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? received));
		Assert.Equal(welcome.Header, received!.Header);
		Assert.Equal(GameSessionState.Ready, session.State);
		Assert.True(session.IsEncrypted);
	}

	/// <summary>
	/// A successful connect opens the transport without enabling encryption.
	/// </summary>
	[Fact]
	public void ConnectOpensTheTransportWithoutEncryption()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		Assert.True(session.Connect(TestHost, TestPort));
		Assert.Equal(GameSessionState.Connected, session.State);
		Assert.Equal(GameConnectionState.Connected, connection.State);
		Assert.False(session.IsEncrypted);
		Assert.Equal(GameServerRole.None, session.ServerRole);
		Assert.Null(session.FailureReason);
	}

	/// <summary>
	/// A refused connect leaves the session failed with a reason.
	/// </summary>
	[Fact]
	public void ConnectFailureMarksTheSessionFailed()
	{
		InMemoryGameConnection connection = new() { ConnectResult = false };
		using GameSession session = new(connection);
		Assert.False(session.Connect(TestHost, TestPort));
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
		Assert.False(session.IsEncrypted);
		Assert.Throws<InvalidOperationException>(() => session.Send(PingPacket.Instance.ToPacket()));
	}

	/// <summary>
	/// A failed session accepts a later connect attempt.
	/// </summary>
	[Fact]
	public void ConnectAfterFailureCanRetry()
	{
		InMemoryGameConnection connection = new() { ConnectResult = false };
		using GameSession session = new(connection);
		Assert.False(session.Connect(TestHost, TestPort));
		Assert.Equal(GameSessionState.Failed, session.State);
		connection.ConnectResult = true;
		Assert.True(session.Connect(TestHost, TestPort));
		Assert.Equal(GameSessionState.Connected, session.State);
		Assert.Null(session.FailureReason);
	}

	/// <summary>
	/// A local disconnect closes the transport and drops queued bytes.
	/// </summary>
	[Fact]
	public void LocalDisconnectClosesTheTransportAndClearsQueuedBytes()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		session.Send(PingPacket.Instance.ToPacket());
		Assert.True(session.PendingSendBytes > 0);
		session.Disconnect();
		Assert.Equal(GameSessionState.Disconnected, session.State);
		Assert.Equal(GameConnectionState.Disconnected, connection.State);
		Assert.Equal(0, session.PendingSendBytes);
		Assert.Throws<InvalidOperationException>(() => session.Send(PingPacket.Instance.ToPacket()));
	}

	/// <summary>
	/// Before the welcome, a queued packet is sent unchanged and without padding.
	/// </summary>
	[Fact]
	public void PlaintextSendWritesTheExactPacket()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet packet = Packet.Create(PacketCommand.ClientLogin, 0, Pattern(7));
		session.Send(packet);
		Assert.Equal(packet.Length, session.PendingSendBytes);
		session.FlushSends();
		Assert.Equal(packet.ToArray(), connection.Sent);
		Assert.Equal(0, session.PendingSendBytes);
	}

	/// <summary>
	/// The command 0x03 welcome enables the game-server role and surfaces after the handshake.
	/// </summary>
	[Fact]
	public void GameServerWelcomeEnablesCryptoAndIsReturned()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet welcome = Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey);
		CompleteWelcome(session, connection, welcome);
		Assert.Equal(GameServerRole.GameServer, session.ServerRole);
	}

	/// <summary>
	/// The command 0x9B welcome selects the character-server magic and the same handshake.
	/// </summary>
	[Fact]
	public void CharacterServerWelcomeUsesTheCharacterMagic()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet welcome = Welcome(PacketCommand.CharacterServerInit, ServerInitPacket.CharacterServerCopyright, ServerKey, ClientKey);
		CompleteWelcome(session, connection, welcome);
		Assert.Equal(GameServerRole.CharacterServer, session.ServerRole);
	}

	/// <summary>
	/// A packet queued before the welcome is encrypted only if it is queued after the handshake.
	/// </summary>
	[Fact]
	public void PacketQueuedBeforeWelcomeStaysPlaintextAfterHandshake()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet packet = Packet.Create(PacketCommand.ClientLogin, 0, Pattern(7));
		session.Send(packet);
		connection.Push(Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey).ToArray());
		session.ReceiveAvailable();
		Assert.True(session.TryReadPacket(out _));
		session.FlushSends();
		Assert.Equal(packet.ToArray(), connection.Sent);
		Assert.Equal(0, session.PendingSendBytes);
	}

	/// <summary>
	/// After the welcome, sends are padded to eight bytes and encrypted with the client key.
	/// </summary>
	[Fact]
	public void SendAfterWelcomePadsAndEncryptsWithTheClientKey()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet packet = Packet.Create(PacketCommand.SystemFileRequest, 0, Pattern(5, 0x31));
		session.Send(packet);
		session.FlushSends();
		byte[] expected = Encrypt(packet, ClientKey);
		Assert.Equal(expected, connection.Sent);
		Assert.Equal(0, expected.Length % PsoCipher.BlockSize);
		Assert.True(expected.Length > packet.Length);
	}

	/// <summary>
	/// Partial transport writes retain the remainder and keep packet order.
	/// </summary>
	[Fact]
	public void SendQueuePreservesOrderAcrossPartialWrites()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet first = Packet.Create(PacketCommand.ClientLogin, 1, Pattern(9, 0x51));
		Packet second = Packet.Create(PacketCommand.Ping, 2, Pattern(3, 0x71));
		session.Send(first);
		session.Send(second);
		byte[] expectedFirst = Encrypt(first, ClientKey);
		byte[] expectedSecond = Encrypt(second, ClientKey);
		connection.SendBudget = 5;
		session.FlushSends();
		Assert.Equal(5, connection.Sent.Count);
		Assert.Equal(expectedFirst.Length + expectedSecond.Length - 5, session.PendingSendBytes);
		connection.SendBudget = int.MaxValue;
		session.FlushSends();
		Assert.Equal(expectedFirst.Concat(expectedSecond).ToArray(), connection.Sent);
		Assert.Equal(0, session.PendingSendBytes);
	}

	/// <summary>
	/// After the welcome, received packets are decrypted with the server key.
	/// </summary>
	[Fact]
	public void ReceiveDecryptsWithTheServerKey()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet packet = Packet.Create(PacketCommand.Ping, 0, Pattern(6, 0x91));
		connection.Push(Encrypt(packet, ServerKey));
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? received));
		Assert.Equal(packet.Header, received!.Header);
		Assert.Equal(packet.Payload.ToArray(), received.Payload.ToArray());
	}

	/// <summary>
	/// A plaintext packet split across reads is assembled by the framer.
	/// </summary>
	[Fact]
	public void PlaintextFramingHandlesSplitReads()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet packet = Packet.Create(PacketCommand.SystemFileCreated, 7, Pattern(11, 0xA1));
		byte[] bytes = packet.ToArray();
		connection.Push(bytes.AsSpan(0, 3));
		session.Pump();
		Assert.False(session.TryReadPacket(out _));
		connection.Push(bytes.AsSpan(3));
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? received));
		Assert.Equal(packet.Header, received!.Header);
		Assert.Equal(packet.Payload.ToArray(), received.Payload.ToArray());
	}

	/// <summary>
	/// An encrypted packet split inside its header and payload decrypts once and is framed.
	/// </summary>
	[Fact]
	public void EncryptedFramingHandlesSplitReads()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet packet = Packet.Create(PacketCommand.Ping, 0, Pattern(13, 0xB1));
		byte[] bytes = Encrypt(packet, ServerKey);
		connection.Push(bytes.AsSpan(0, 5));
		session.Pump();
		Assert.False(session.TryReadPacket(out _));
		connection.Push(bytes.AsSpan(5));
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? received));
		Assert.Equal(packet.Header, received!.Header);
		Assert.Equal(packet.Payload.ToArray(), received.Payload.ToArray());
	}

	/// <summary>
	/// Short transport reads are accumulated until an encrypted packet is complete.
	/// </summary>
	[Fact]
	public void ShortReadsAreAssembledWithinOnePump()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet packet = Packet.Create(PacketCommand.Ping, 0, Pattern(17, 0xE1));
		connection.Push(Encrypt(packet, ServerKey));
		connection.ReceiveLimit = 3;
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? received));
		Assert.Equal(packet.Header, received!.Header);
		Assert.Equal(packet.Payload.ToArray(), received.Payload.ToArray());
	}

	/// <summary>
	/// Several encrypted packets arriving together are returned in order.
	/// </summary>
	[Fact]
	public void EncryptedFramingReturnsConsecutivePackets()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		Packet first = Packet.Create(PacketCommand.Ping, 0, Pattern(4, 0xC1));
		Packet second = Packet.Create(PacketCommand.SystemFileCreated, 9, Pattern(19, 0xC9));
		connection.Push(Encrypt(first, ServerKey));
		connection.Push(Encrypt(second, ServerKey));
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? readFirst));
		Assert.True(session.TryReadPacket(out Packet? readSecond));
		Assert.False(session.TryReadPacket(out _));
		Assert.Equal(first.Header, readFirst!.Header);
		Assert.Equal(second.Header, readSecond!.Header);
		Assert.Equal(second.Payload.ToArray(), readSecond.Payload.ToArray());
	}

	/// <summary>
	/// A welcome followed by encrypted bytes in one read switches modes at the packet boundary.
	/// </summary>
	[Fact]
	public void WelcomeAndEncryptedPacketInOneReadAreBothFramed()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet welcome = Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey);
		Packet packet = Packet.Create(PacketCommand.Ping, 0, Pattern(10, 0xD1));
		connection.Push(welcome.ToArray());
		connection.Push(Encrypt(packet, ServerKey));
		session.Pump();
		Assert.True(session.TryReadPacket(out Packet? readWelcome));
		Assert.True(session.TryReadPacket(out Packet? readPacket));
		Assert.Equal(welcome.Header, readWelcome!.Header);
		Assert.Equal(packet.Header, readPacket!.Header);
		Assert.Equal(packet.Payload.ToArray(), readPacket.Payload.ToArray());
	}

	/// <summary>
	/// A plaintext length below the header size fails the session before framing.
	/// </summary>
	[Fact]
	public void MalformedPlaintextLengthFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		byte[] header = new byte[PacketHeader.Size];
		new PacketHeader(7, (ushort)PacketCommand.Ping, 0).Write(header);
		connection.Push(header);
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
		Assert.Equal(GameConnectionState.Disconnected, connection.State);
		Assert.False(session.TryReadPacket(out _));
	}

	/// <summary>
	/// A plaintext length above the receive buffer fails the session.
	/// </summary>
	[Fact]
	public void OversizedPlaintextLengthFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		byte[] header = new byte[PacketHeader.Size];
		new PacketHeader(0x7C08, (ushort)PacketCommand.Ping, 0).Write(header);
		connection.Push(header);
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
	}

	/// <summary>
	/// A decrypted encrypted length below the header size fails the session.
	/// </summary>
	[Fact]
	public void EncryptedLengthBelowTheHeaderFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		byte[] block = new byte[PsoCipher.BlockSize];
		new PacketHeader(7, (ushort)PacketCommand.Ping, 0).Write(block);
		PsoCipher cipher = new();
		cipher.Init(ServerKey);
		cipher.EncryptBlocks(block);
		connection.Push(block);
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
	}

	/// <summary>
	/// A decrypted encrypted length outside the receive buffer fails the session.
	/// </summary>
	[Fact]
	public void MalformedEncryptedLengthFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		byte[] block = new byte[PsoCipher.BlockSize];
		new PacketHeader(0x7C08, (ushort)PacketCommand.Ping, 0).Write(block);
		PsoCipher cipher = new();
		cipher.Init(ServerKey);
		cipher.EncryptBlocks(block);
		connection.Push(block);
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
	}

	/// <summary>
	/// A welcome with another server's copyright fails and closes the transport.
	/// </summary>
	[Fact]
	public void WelcomeWithWrongCopyrightFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet welcome = Welcome(PacketCommand.ServerInit, ServerInitPacket.CharacterServerCopyright, ServerKey, ClientKey);
		connection.Push(welcome.ToArray());
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.NotNull(session.FailureReason);
		Assert.Equal(GameConnectionState.Disconnected, connection.State);
		Assert.False(session.IsEncrypted);
		Assert.False(session.TryReadPacket(out _));
	}

	/// <summary>
	/// A welcome with the wrong payload length fails before any key reaches a cipher.
	/// </summary>
	[Fact]
	public void WelcomeWithWrongPayloadLengthFailsTheSession()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		Packet welcome = Packet.Create(PacketCommand.ServerInit, 0, Pattern(0x10));
		connection.Push(welcome.ToArray());
		session.Pump();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.False(session.IsEncrypted);
		Assert.NotNull(session.FailureReason);
	}

	/// <summary>
	/// A remote orderly close clears encryption and queued sends.
	/// </summary>
	[Fact]
	public void RemoteCloseDisconnectsAndClearsState()
	{
		InMemoryGameConnection connection = new();
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		CompleteWelcome(session, connection, Welcome(PacketCommand.ServerInit, ServerInitPacket.GameServerCopyright, ServerKey, ClientKey));
		session.Send(PingPacket.Instance.ToPacket());
		connection.RemoteClosed = true;
		session.Pump();
		Assert.Equal(GameSessionState.Disconnected, session.State);
		Assert.False(session.IsEncrypted);
		Assert.Equal(GameServerRole.None, session.ServerRole);
		Assert.Equal(0, session.PendingSendBytes);
		Assert.Null(session.FailureReason);
	}

	/// <summary>
	/// A transport send failure fails the session with the exception meaning preserved.
	/// </summary>
	[Fact]
	public void SendFailureMarksTheSessionFailed()
	{
		InMemoryGameConnection connection = new() { FailOnSend = new IOException("send failed") };
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		session.Send(PingPacket.Instance.ToPacket());
		session.FlushSends();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.Contains("send failed", session.FailureReason!);
		Assert.Equal(0, session.PendingSendBytes);
	}

	/// <summary>
	/// A transport receive failure fails the session with the exception meaning preserved.
	/// </summary>
	[Fact]
	public void ReceiveFailureMarksTheSessionFailed()
	{
		InMemoryGameConnection connection = new() { FailOnReceive = new IOException("receive failed") };
		using GameSession session = new(connection);
		session.Connect(TestHost, TestPort);
		session.ReceiveAvailable();
		Assert.Equal(GameSessionState.Failed, session.State);
		Assert.Contains("receive failed", session.FailureReason!);
	}

	private sealed class InMemoryGameConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public bool ConnectResult { get; set; } = true;
		public IOException? FailOnSend { get; init; }
		public IOException? FailOnReceive { get; init; }
		public int SendBudget { get; set; } = int.MaxValue;
		public int ReceiveLimit { get; set; } = int.MaxValue;
		public bool RemoteClosed { get; set; }
		public List<byte> Sent { get; } = [];

		public bool Connect(string host, int port)
		{
			if (!ConnectResult)
			{
				State = GameConnectionState.Failed;
				return false;
			}
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data)
		{
			if (FailOnSend is not null)
			{
				State = GameConnectionState.Failed;
				throw FailOnSend;
			}
			if (State != GameConnectionState.Connected)
				throw new IOException("The connection is not open.");
			int count = Math.Min(data.Length, SendBudget);
			for (int index = 0; index < count; index++)
				Sent.Add(data[index]);
			SendBudget -= count;
			return count;
		}

		public int Receive(Span<byte> destination)
		{
			if (FailOnReceive is not null)
			{
				State = GameConnectionState.Failed;
				throw FailOnReceive;
			}
			if (State != GameConnectionState.Connected)
				return 0;
			if (_received.Count == 0)
			{
				if (RemoteClosed)
					State = GameConnectionState.Disconnected;
				return 0;
			}
			int count = Math.Min(Math.Min(destination.Length, _received.Count), ReceiveLimit);
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
