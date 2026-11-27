using PsoBB.Core;
using PsoBB.Net.Crypto;
using PsoBB.Platform;

namespace PsoBB.Net;

/// <summary>
/// One ordered game-server connection with framing, send queuing and the Blue Burst welcome handshake.
/// </summary>
/// <remarks>
/// The session owns the supplied connection. Packets queued before a welcome travel in clear text; every packet queued after the welcome is padded to eight bytes and encrypted with the client key from the welcome. Received welcome packets are returned through <see cref="TryReadPacket"/> after encryption is active, so the caller's login or registration response is encrypted too. A malformed packet, a failed transport or a welcome with the wrong copyright closes the session and moves it to <see cref="GameSessionState.Failed"/>.
/// </remarks>
public sealed class GameSession : IDisposable
{
	private const int MaxPacketLength = 0x7C00;
	private static readonly ByteString GameServerCopyright = ByteString.FromText(ServerInitPacket.GameServerCopyright)!;
	private static readonly ByteString CharacterServerCopyright = ByteString.FromText(ServerInitPacket.CharacterServerCopyright)!;
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];
	private readonly IGameConnection _connection;
	private readonly Queue<byte[]> _sendChunks = new();
	private readonly Queue<Packet> _receivedPackets = new();
	private readonly PacketFramer _framer = new();
	private byte[] _receivedBytes = new byte[MaxPacketLength * 2];
	private int _receivedStart;
	private int _receivedLength;
	private int _sendOffset;
	private int _pendingSendBytes;
	private PsoCipher? _sendCipher;
	private PsoCipher? _receiveCipher;
	private bool _encrypted;
	private bool _disposed;

	/// <summary>
	/// Creates a session over a host connection.
	/// </summary>
	/// <param name="connection">The host connection; the session takes ownership of it.</param>
	public GameSession(IGameConnection connection)
	{
		ArgumentNullException.ThrowIfNull(connection);
		_connection = connection;
	}

	/// <summary>Gets the session state.</summary>
	public GameSessionState State { get; private set; }

	/// <summary>Gets whether the welcome handshake completed and traffic is encrypted.</summary>
	public bool IsEncrypted => _encrypted;

	/// <summary>Gets the role of the server that completed the handshake.</summary>
	public GameServerRole ServerRole { get; private set; }

	/// <summary>Gets the accepted server welcome, or <see langword="null"/> before one arrives.</summary>
	public ServerInitPacket? Welcome { get; private set; }

	/// <summary>Gets the reason the session failed, or <see langword="null"/> when it has not failed.</summary>
	public string? FailureReason { get; private set; }

	/// <summary>Gets the number of queued bytes not yet accepted by the transport.</summary>
	public int PendingSendBytes => _pendingSendBytes;

	/// <summary>
	/// Opens the transport and enters <see cref="GameSessionState.Connected"/> without a welcome.
	/// </summary>
	/// <param name="host">The host name or numeric address.</param>
	/// <param name="port">The TCP port.</param>
	/// <returns><see langword="true"/> when the transport opened.</returns>
	/// <exception cref="InvalidOperationException">The session is already connected.</exception>
	public bool Connect(string host, int port)
	{
		ThrowIfDisposed();
		ArgumentException.ThrowIfNullOrWhiteSpace(host);
		ArgumentOutOfRangeException.ThrowIfNegative(port);
		ArgumentOutOfRangeException.ThrowIfGreaterThan(port, ushort.MaxValue);
		if (State is GameSessionState.Connected or GameSessionState.Ready)
			throw new InvalidOperationException("The session is already connected.");
		ResetSession();
		bool connected;
		try
		{
			connected = _connection.Connect(host, port);
		}
		catch (IOException exception)
		{
			FailureReason = $"The connection to {host}:{port} failed: {exception.Message}";
			State = GameSessionState.Failed;
			return false;
		}
		if (!connected)
		{
			FailureReason = $"The connection to {host}:{port} failed.";
			State = GameSessionState.Failed;
			return false;
		}
		State = GameSessionState.Connected;
		return true;
	}

	/// <summary>
	/// Closes the transport and discards queued and received packets.
	/// </summary>
	public void Disconnect()
	{
		ThrowIfDisposed();
		ResetSession();
	}

	/// <summary>
	/// Queues one packet for the transport in order, applying the original padding and encryption when the handshake is complete.
	/// </summary>
	/// <param name="packet">The packet to send.</param>
	/// <exception cref="InvalidOperationException">The session is not connected.</exception>
	[Original(0x0077FD10)]
	public void Send(Packet packet)
	{
		ThrowIfDisposed();
		ArgumentNullException.ThrowIfNull(packet);
		if (State is not (GameSessionState.Connected or GameSessionState.Ready))
			throw new InvalidOperationException($"Cannot send while the session is {State}.");
		byte[] wire;
		if (_encrypted)
		{
			wire = new byte[(packet.Length + 7) & ~7];
			packet.WriteTo(wire);
			_sendCipher!.EncryptBlocks(wire);
		}
		else
		{
			wire = packet.ToArray();
		}
		_sendChunks.Enqueue(wire);
		_pendingSendBytes += wire.Length;
	}

	/// <summary>
	/// Offers queued bytes to the transport until it accepts all of them or reports no space.
	/// </summary>
	public void FlushSends()
	{
		ThrowIfDisposed();
		while (_sendChunks.Count > 0)
		{
			if (_connection.State != GameConnectionState.Connected)
			{
				Fail(_connection.State == GameConnectionState.Disconnected
					? "The connection closed before all queued bytes were sent."
					: $"The connection is {_connection.State} while sending.");
				return;
			}
			byte[] chunk = _sendChunks.Peek();
			int available = chunk.Length - _sendOffset;
			int sent;
			try
			{
				sent = _connection.Send(chunk.AsSpan(_sendOffset));
			}
			catch (IOException exception)
			{
				Fail($"Sending failed: {exception.Message}");
				return;
			}
			if (sent < 0 || sent > available)
			{
				Fail($"The connection reported sending {sent} bytes from a {available}-byte request.");
				return;
			}
			if (sent == 0)
				return;
			_sendOffset += sent;
			_pendingSendBytes -= sent;
			if (_sendOffset == chunk.Length)
			{
				_sendChunks.Dequeue();
				_sendOffset = 0;
			}
		}
	}

	/// <summary>
	/// Reads every byte the transport currently offers and frames complete packets.
	/// </summary>
	[Original(0x007D3244)]
	public void ReceiveAvailable()
	{
		ThrowIfDisposed();
		if (State is not (GameSessionState.Connected or GameSessionState.Ready))
			return;
		while (true)
		{
			if (!EnsureReceiveSpace())
			{
				Fail("The receive buffer filled with an incomplete packet.");
				return;
			}
			int free = _receivedBytes.Length - (_receivedStart + _receivedLength);
			int read;
			try
			{
				read = _connection.Receive(_receivedBytes.AsSpan(_receivedStart + _receivedLength, free));
			}
			catch (IOException exception)
			{
				Fail($"Receiving failed: {exception.Message}");
				return;
			}
			if (read < 0 || read > free)
			{
				Fail($"The connection reported receiving {read} bytes into a {free}-byte buffer.");
				return;
			}
			if (read == 0)
			{
				if (_connection.State == GameConnectionState.Disconnected)
				{
					ResetSession();
					return;
				}
				if (_connection.State == GameConnectionState.Failed)
				{
					Fail("The connection failed while receiving.");
					return;
				}
				break;
			}
			_receivedLength += read;
			ProcessReceivedBytes();
			if (State is not (GameSessionState.Connected or GameSessionState.Ready))
				return;
		}
	}

	/// <summary>
	/// Sends queued bytes and then reads every available packet.
	/// </summary>
	public void Pump()
	{
		ThrowIfDisposed();
		FlushSends();
		ReceiveAvailable();
	}

	/// <summary>
	/// Removes the oldest complete packet.
	/// </summary>
	/// <param name="packet">The packet, or <see langword="null"/> when none is queued.</param>
	/// <returns><see langword="true"/> when a packet was returned.</returns>
	public bool TryReadPacket(out Packet? packet)
	{
		if (_receivedPackets.Count == 0)
		{
			packet = null;
			return false;
		}
		packet = _receivedPackets.Dequeue();
		return true;
	}

	/// <summary>
	/// Closes the transport and releases the connection.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		try
		{
			_connection.Dispose();
		}
		finally
		{
			ClearBuffers();
			FailureReason = null;
			State = GameSessionState.Disconnected;
		}
	}

	[Original(0x007BE364)]
	private void ProcessReceivedBytes()
	{
		Span<byte> headerBytes = stackalloc byte[PacketHeader.Size];
		while (true)
		{
			if (_encrypted)
			{
				if (_receivedLength < PacketHeader.Size)
					return;
				_receivedBytes.AsSpan(_receivedStart, PacketHeader.Size).CopyTo(headerBytes);
				_receiveCipher!.DecryptBlock(headerBytes);
				PacketHeader header = PacketHeader.Read(headerBytes);
				int padded = (header.Length + 7) & ~7;
				if (header.Length < PacketHeader.Size || padded > MaxPacketLength)
				{
					Fail($"The received packet length 0x{header.Length:X4} is invalid after decryption.");
					return;
				}
				if (_receivedLength < padded)
					return;
				_receiveCipher.DecryptBlock(_receivedBytes.AsSpan(_receivedStart, PacketHeader.Size));
				_receiveCipher.DecryptBlocks(_receivedBytes.AsSpan(_receivedStart + PacketHeader.Size, padded - PacketHeader.Size));
				_framer.Append(_receivedBytes.AsSpan(_receivedStart, header.Length));
				if (!TryTakeFramedPacket())
					return;
				ConsumeReceived(padded);
				continue;
			}
			if (_receivedLength < PacketHeader.Size)
				return;
			PacketHeader plain = PacketHeader.Read(_receivedBytes.AsSpan(_receivedStart, _receivedLength));
			if (plain.Length < PacketHeader.Size || plain.Length > MaxPacketLength)
			{
				Fail($"The received packet length 0x{plain.Length:X4} is invalid.");
				return;
			}
			if (_receivedLength < plain.Length)
				return;
			_framer.Append(_receivedBytes.AsSpan(_receivedStart, plain.Length));
			if (!TryTakeFramedPacket())
				return;
			ConsumeReceived(plain.Length);
		}
	}

	private bool TryTakeFramedPacket()
	{
		try
		{
			while (_framer.TryRead(out Packet? packet))
			{
				if (!AcceptPacket(packet!))
					return false;
			}
		}
		catch (InvalidDataException exception)
		{
			Fail($"The received packet is malformed: {exception.Message}");
			return false;
		}
		return true;
	}

	private bool AcceptPacket(Packet packet)
	{
		if (!_encrypted && packet.IsCommand(PacketCommand.ServerInit) && !HandleGameServerWelcome(packet))
			return false;
		if (!_encrypted && packet.IsCommand(PacketCommand.CharacterServerInit) && !HandleCharacterServerWelcome(packet))
			return false;
		_receivedPackets.Enqueue(packet);
		return true;
	}

	[Original(0x007EF003)]
	private bool HandleGameServerWelcome(Packet packet) => ApplyWelcome(packet, GameServerCopyright, GameServerRole.GameServer);

	[Original(0x007DE33B)]
	private bool HandleCharacterServerWelcome(Packet packet) => ApplyWelcome(packet, CharacterServerCopyright, GameServerRole.CharacterServer);

	private bool ApplyWelcome(Packet packet, ByteString expectedCopyright, GameServerRole role)
	{
		ServerInitPacket welcome;
		try
		{
			welcome = ServerInitPacket.Read(packet.Payload.Span);
		}
		catch (InvalidDataException exception)
		{
			Fail($"The {role} welcome is malformed: {exception.Message}");
			return false;
		}
		if (welcome.Copyright != expectedCopyright)
		{
			Fail($"The {role} welcome copyright does not match the protocol magic.");
			return false;
		}
		byte[] serverKey = UnmaskKey(welcome.ServerKey.Span);
		byte[] clientKey = UnmaskKey(welcome.ClientKey.Span);
		PsoCipher receive = new();
		receive.Init(serverKey);
		PsoCipher send = new();
		send.Init(clientKey);
		_receiveCipher = receive;
		_sendCipher = send;
		Welcome = welcome;
		_encrypted = true;
		ServerRole = role;
		State = GameSessionState.Ready;
		return true;
	}

	private static byte[] UnmaskKey(ReadOnlySpan<byte> masked)
	{
		byte[] key = masked.ToArray();
		for (int index = 0; index < key.Length; index++)
			key[index] ^= KeyMask[index % KeyMask.Length];
		return key;
	}

	private void ConsumeReceived(int count)
	{
		_receivedStart += count;
		_receivedLength -= count;
		if (_receivedLength == 0)
			_receivedStart = 0;
	}

	private bool EnsureReceiveSpace()
	{
		if (_receivedStart + _receivedLength < _receivedBytes.Length)
			return true;
		if (_receivedLength > 0)
			Buffer.BlockCopy(_receivedBytes, _receivedStart, _receivedBytes, 0, _receivedLength);
		_receivedStart = 0;
		return _receivedLength < _receivedBytes.Length;
	}

	private void ResetSession()
	{
		_connection.Close();
		ClearBuffers();
		FailureReason = null;
		State = GameSessionState.Disconnected;
	}

	private void Fail(string reason)
	{
		_connection.Close();
		ClearBuffers();
		FailureReason = reason;
		State = GameSessionState.Failed;
	}

	private void ClearBuffers()
	{
		_sendChunks.Clear();
		_sendOffset = 0;
		_pendingSendBytes = 0;
		_receivedPackets.Clear();
		_framer.Clear();
		_receivedStart = 0;
		_receivedLength = 0;
		_sendCipher = null;
		_receiveCipher = null;
		_encrypted = false;
		ServerRole = GameServerRole.None;
		Welcome = null;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
