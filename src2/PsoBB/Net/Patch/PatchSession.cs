using System.Buffers.Binary;
using System.Text;
using PsoBB.Compression;
using PsoBB.Core;
using PsoBB.Net.Crypto;
using PsoBB.Platform;

namespace PsoBB.Net.Patch;

/// <summary>
/// One connection to the Blue Burst patch server, from the welcome through checksum exchange and file application.
/// </summary>
/// <remarks>
/// The original title menu sends command 0x04 credentials after the 0x02 welcome, answers the server's checksum list with
/// CRC-32 and length, then receives 0x06/0x07/0x08 file groups. Encryption is the PC 57-word stream. The server owns
/// version comparison; this session only reports local checksums and applies the files the server selects. The original
/// build ignores the 0x07 chunk checksum; this port verifies it and rejects a mismatch. The original also has no
/// signature field in this protocol, so no signature check is invented here.
/// </remarks>
public sealed class PatchSession : IDisposable
{
	private const int MaxPacketLength = 0x7F00;
	private static readonly byte[] Copyright = BuildCopyright();
	private readonly IGameConnection _connection;
	private readonly IGameFileSystem _files;
	private readonly PatchLogin _login;
	private readonly Queue<byte[]> _sendChunks = new();
	private readonly List<PatchChecksum> _checksums = [];
	private byte[] _receive = new byte[MaxPacketLength * 2];
	private int _receiveLength;
	private int _sendOffset;
	private int _pendingSendBytes;
	private PsoV2Cipher? _sendCipher;
	private PsoV2Cipher? _receiveCipher;
	private bool _encrypted;
	private bool _headerDecrypted;
	private int _frameLength;
	private byte _frameCommand;
	private byte _frameFlags;
	private GamePath _directory = GamePath.Root;
	private GamePath _currentTarget;
	private GamePath _currentTemp;
	private string? _currentFileName;
	private uint _currentLength;
	private uint _currentBytes;
	private uint _currentPercent;
	private uint _totalBytes;
	private uint _receivedBytes;
	private uint _percent;
	private uint _totalFiles;
	private uint _fileNumber;
	private bool _currentCompressed;
	private bool _hasCurrentFile;
	private bool _disposed;

	/// <summary>
	/// Creates a session over a host connection and file system.
	/// </summary>
	/// <param name="connection">The host transport; the session takes ownership of it.</param>
	/// <param name="files">The data-root file system; the session does not own it.</param>
	/// <param name="login">The account fields sent in command 0x04.</param>
	public PatchSession(IGameConnection connection, IGameFileSystem files, PatchLogin login)
	{
		ArgumentNullException.ThrowIfNull(connection);
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(login);
		_connection = connection;
		_files = files;
		_login = login;
	}

	/// <summary>Gets the current flow state.</summary>
	public PatchSessionState State { get; private set; }

	/// <summary>Gets whether the welcome enabled encryption.</summary>
	public bool IsEncrypted => _encrypted;

	/// <summary>Gets the reason the session failed, or <see langword="null"/> while it has not failed.</summary>
	public string? FailureReason { get; private set; }

	/// <summary>Gets the number of queued bytes not yet accepted by the transport.</summary>
	public int PendingSendBytes => _pendingSendBytes;

	/// <summary>Gets the host of the last 0x14 redirect, or <see langword="null"/> when none was received.</summary>
	public string? RedirectHost { get; private set; }

	/// <summary>Gets the port of the last 0x14 redirect.</summary>
	public int RedirectPort { get; private set; }

	/// <summary>Gets the checksum answers collected since the last 0x0B.</summary>
	public IReadOnlyList<PatchChecksum> Checksums => _checksums;

	/// <summary>Gets the counters captured after the last state change.</summary>
	public PatchProgress Progress => new(
		_totalBytes,
		_receivedBytes,
		_percent,
		_totalFiles,
		_fileNumber,
		_currentFileName,
		_currentLength,
		_currentBytes,
		_currentPercent);

	/// <summary>Raised after a counter changes.</summary>
	public event Action<PatchProgress>? ProgressChanged;

	/// <summary>Raised for each checksum answer the client records.</summary>
	public event Action<PatchChecksum>? ChecksumRecorded;

	/// <summary>Raised for the decoded text of a 0x13 message.</summary>
	public event Action<string>? MessageReceived;

	/// <summary>
	/// Opens the transport and waits for the 0x02 welcome.
	/// </summary>
	/// <param name="host">The host name or numeric address.</param>
	/// <param name="port">The TCP port.</param>
	/// <returns><see langword="true"/> when the transport opened.</returns>
	/// <exception cref="InvalidOperationException">The session is not in a rest state.</exception>
	public bool Connect(string host, int port)
	{
		ThrowIfDisposed();
		ArgumentException.ThrowIfNullOrWhiteSpace(host);
		ArgumentOutOfRangeException.ThrowIfNegative(port);
		ArgumentOutOfRangeException.ThrowIfGreaterThan(port, ushort.MaxValue);
		if (State is not (PatchSessionState.Disconnected or PatchSessionState.Failed or PatchSessionState.Completed))
			throw new InvalidOperationException($"The patch session is {State}.");
		ResetSession();
		if (!ConnectTransport(host, port))
			return false;
		State = PatchSessionState.AwaitingWelcome;
		return true;
	}

	/// <summary>
	/// Closes the transport and returns the session to its initial state.
	/// </summary>
	[Original(0x0070B304)]
	public void Disconnect()
	{
		ThrowIfDisposed();
		ResetSession();
		State = PatchSessionState.Disconnected;
	}

	/// <summary>
	/// Exchanges queued bytes, reads available packets and advances the flow.
	/// </summary>
	[Original(0x0070C40C)]
	public void Pump()
	{
		ThrowIfDisposed();
		if (State is PatchSessionState.Disconnected or PatchSessionState.Failed or PatchSessionState.Completed)
			return;
		FlushSends();
		if (State == PatchSessionState.Failed)
			return;
		if (_sendChunks.Count > 0)
			return;
		ReceiveAvailable();
		if (State is PatchSessionState.Failed or PatchSessionState.Completed)
			return;
		FlushSends();
		if (State == PatchSessionState.Failed)
			return;
		if (_connection.State == GameConnectionState.Disconnected)
		{
			Fail("The patch server closed the connection.");
			return;
		}
		if (_connection.State == GameConnectionState.Failed)
			Fail("The patch transport failed.");
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_connection.Dispose();
		State = PatchSessionState.Disconnected;
	}

	private static byte[] BuildCopyright()
	{
		byte[] value = new byte[0x40];
		Encoding.ASCII.GetBytes("Patch Server. Copyright SonicTeam, LTD. 2001", value);
		return value;
	}

	[Original(0x0070B54C)]
	private bool ConnectTransport(string host, int port)
	{
		bool connected;
		try
		{
			connected = _connection.Connect(host, port);
		}
		catch (IOException exception)
		{
			FailureReason = $"The connection to {host}:{port} failed: {exception.Message}";
			State = PatchSessionState.Failed;
			return false;
		}
		if (!connected)
		{
			FailureReason = $"The connection to {host}:{port} failed.";
			State = PatchSessionState.Failed;
			return false;
		}
		return true;
	}

	private void FlushSends()
	{
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

	private void ReceiveAvailable()
	{
		while (true)
		{
			int space = _receive.Length - _receiveLength;
			if (space == 0)
			{
				Fail("The patch receive buffer is full.");
				return;
			}
			int read;
			try
			{
				read = _connection.Receive(_receive.AsSpan(_receiveLength, space));
			}
			catch (IOException exception)
			{
				Fail($"Receiving failed: {exception.Message}");
				return;
			}
			if (read < 0 || read > space)
			{
				Fail($"The connection reported receiving {read} bytes into a {space}-byte request.");
				return;
			}
			if (read == 0)
				break;
			_receiveLength += read;
			while (true)
			{
				bool complete;
				byte command;
				byte flags;
				byte[] body;
				try
				{
					complete = TryReadFrame(out command, out flags, out body);
				}
				catch (InvalidDataException exception)
				{
					Fail(exception.Message);
					return;
				}
				if (!complete)
					break;
				try
				{
					HandleFrame(command, flags, body);
				}
				catch (Exception exception) when (exception is InvalidDataException or FormatException or IOException or ArgumentException)
				{
					Fail(exception.Message);
					return;
				}
				if (State is PatchSessionState.Failed or PatchSessionState.Completed)
					return;
				if (_sendChunks.Count > 0)
				{
					FlushSends();
					if (State == PatchSessionState.Failed || _sendChunks.Count > 0)
						return;
				}
			}
		}
	}

	private bool TryReadFrame(out byte command, out byte flags, out byte[] body)
	{
		command = 0;
		flags = 0;
		body = [];
		if (_receiveLength < 4)
			return false;
		if (!_headerDecrypted)
		{
			if (_encrypted)
				_receiveCipher!.Xor(_receive.AsSpan(0, 4));
			_frameLength = BinaryPrimitives.ReadUInt16LittleEndian(_receive);
			_frameCommand = _receive[2];
			_frameFlags = _receive[3];
			if (_frameLength < 4 || _frameLength > MaxPacketLength)
				throw new InvalidDataException($"The patch frame length 0x{_frameLength:X} is invalid.");
			_headerDecrypted = true;
		}
		if (_receiveLength < _frameLength)
			return false;
		if (_encrypted && _frameLength > 4)
			_receiveCipher!.Xor(_receive.AsSpan(4, _frameLength - 4));
		command = _frameCommand;
		flags = _frameFlags;
		body = _receive.AsSpan(4, _frameLength - 4).ToArray();
		int remaining = _receiveLength - _frameLength;
		if (remaining > 0)
			Buffer.BlockCopy(_receive, _frameLength, _receive, 0, remaining);
		_receiveLength = remaining;
		_headerDecrypted = false;
		_frameLength = 0;
		return true;
	}

	private void HandleFrame(byte command, byte flags, byte[] body)
	{
		int max = command switch
		{
			0x02 => 0x4C,
			0x04 or 0x05 or 0x0A or 0x0B or 0x0D or 0x12 or 0x15 => 4,
			0x06 => 0x3C,
			0x07 => 0x6010,
			0x08 => 8,
			0x09 => 0x44,
			0x0C => 0x28,
			0x11 or 0x14 => 0x0C,
			0x13 => 0x2004,
			_ => -1,
		};
		if (max < 0)
		{
			Fail($"The patch server sent unknown command 0x{command:X2}.");
			return;
		}
		if (body.Length + 4 > max)
		{
			Fail($"The patch command 0x{command:X2} is too large ({body.Length + 4} bytes).");
			return;
		}
		switch (command)
		{
			case 0x02: HandleWelcome(body); break;
			case 0x04: HandleLoginRequest(body); break;
			case 0x05: HandleDisconnect(body); break;
			case 0x06: HandleStartFile(flags, body); break;
			case 0x07: HandleFileData(body); break;
			case 0x08: HandleApply(body); break;
			case 0x09: HandleEnterDirectory(body); break;
			case 0x0A: HandleExitDirectory(body); break;
			case 0x0B: HandleStartList(body); break;
			case 0x0C: HandleChecksumRequest(body); break;
			case 0x0D: HandleChecksumListEnd(body); break;
			case 0x11: HandleTotals(body); break;
			case 0x12: HandleComplete(body); break;
			case 0x13: HandleMessage(body); break;
			case 0x14: HandleRedirect(body); break;
			case 0x15: HandleLoginFailure(body); break;
		}
	}

	[Original(0x0070B870)]
	private void HandleWelcome(byte[] body)
	{
		if (body.Length != 0x48)
			throw new InvalidDataException("The patch welcome body must contain 0x48 bytes.");
		if (!body.AsSpan(0, 0x40).SequenceEqual(Copyright))
			throw new InvalidDataException("The patch welcome copyright does not match.");
		uint serverKey = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(0x40));
		uint clientKey = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(0x44));
		_receiveCipher = new PsoV2Cipher(serverKey);
		_sendCipher = new PsoV2Cipher(clientKey);
		_encrypted = true;
		SendFrame(0x02, 0, []);
		State = PatchSessionState.AwaitingLogin;
	}

	[Original(0x0070C004)]
	private void HandleLoginRequest(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch login request must not carry a body.");
		byte[] credentials = new byte[0x6C];
		_login.WriteBody(credentials);
		SendFrame(0x04, 0, credentials);
		State = PatchSessionState.Authenticating;
	}

	[Original(0x0070B8FC)]
	private void HandleDisconnect(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch disconnect must not carry a body.");
		Fail("The patch server sent a disconnect command.");
	}

	[Original(0x0070B900)]
	private void HandleStartFile(byte flags, byte[] body)
	{
		if (body.Length != 0x38)
			throw new InvalidDataException("The patch open-file body must contain 0x38 bytes.");
		if (_hasCurrentFile)
			throw new InvalidDataException("The patch server opened a file before the previous file was applied.");
		uint size = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(4));
		string name = PacketField.ReadText(body.AsSpan(8, 0x30)).Decode();
		GamePath target = Resolve(name);
		GamePath temp = Resolve(name + ".patch");
		using (IGameFile? file = _files.Open(temp, GameFileAccess.Write, GameFileMode.Create))
		{
			if (file is null)
			{
				Fail($"The patch client could not create '{temp}'.");
				return;
			}
		}
		_currentTarget = target;
		_currentTemp = temp;
		_currentFileName = target.ToString();
		_currentLength = size;
		_currentBytes = 0;
		_currentPercent = 0;
		_currentCompressed = flags == 1;
		_hasCurrentFile = true;
		_fileNumber++;
		UpdateOverallPercent();
		State = PatchSessionState.Downloading;
		RaiseProgress();
	}

	[Original(0x0070BA70)]
	private void HandleFileData(byte[] body)
	{
		if (body.Length < 0x0C)
			throw new InvalidDataException("The patch write body is shorter than its header.");
		uint checksum = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(4));
		uint size = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(8));
		if (size > (uint)(body.Length - 0x0C))
			throw new InvalidDataException("The patch write body is shorter than the declared chunk.");
		if (!_hasCurrentFile)
			throw new InvalidDataException("The patch server wrote data without opening a file.");
		if ((ulong)_currentBytes + size > _currentLength)
			throw new InvalidDataException("The patch chunk would exceed the announced file size.");
		ReadOnlySpan<byte> data = body.AsSpan(0x0C, (int)size);
		if (PatchCrc32.Compute(data) != checksum)
			throw new InvalidDataException("The patch chunk checksum does not match.");
		using (IGameFile? file = _files.Open(_currentTemp, GameFileAccess.Write, GameFileMode.OpenOrCreate))
		{
			if (file is null)
			{
				Fail($"The patch client could not open '{_currentTemp}'.");
				return;
			}
			file.Seek(0, GameSeekOrigin.End);
			file.Write(data);
		}
		_currentBytes += size;
		_receivedBytes += size;
		UpdateOverallPercent();
		_currentPercent = PatchProgress.PercentOf(_currentBytes, _currentLength);
		RaiseProgress();
	}

	[Original(0x0070BB78)]
	private void HandleApply(byte[] body)
	{
		if (body.Length is not (0 or 4))
			throw new InvalidDataException("The patch close-file body must contain zero or four bytes.");
		if (!_hasCurrentFile)
			throw new InvalidDataException("The patch server applied a file that was not open.");
		long length;
		using (IGameFile? file = _files.Open(_currentTemp, GameFileAccess.Read, GameFileMode.Open))
		{
			if (file is null)
			{
				Fail($"The patch temp file '{_currentTemp}' is missing.");
				return;
			}
			length = file.Length;
		}
		if ((ulong)length != _currentLength)
		{
			Fail($"The patch file size {length} does not match the announced size {_currentLength}.");
			return;
		}
		if (_currentCompressed)
		{
			byte[] compressed;
			using (IGameFile? file = _files.Open(_currentTemp, GameFileAccess.Read, GameFileMode.Open))
			{
				if (file is null)
				{
					Fail($"The patch temp file '{_currentTemp}' is missing.");
					return;
				}
				if (file.Length > int.MaxValue)
					throw new InvalidDataException("The patch temp file is too large for this host.");
				compressed = new byte[(int)file.Length];
				int offset = 0;
				while (offset < compressed.Length)
				{
					int read = file.Read(compressed.AsSpan(offset));
					if (read == 0)
						break;
					offset += read;
				}
				if (offset != compressed.Length)
					throw new InvalidDataException("The patch temp file ended before its declared length.");
			}
			byte[] expanded = LzssDecompressor.Decompress(compressed);
			using IGameFile? target = _files.Open(_currentTarget, GameFileAccess.Write, GameFileMode.Create);
			if (target is null)
			{
				Fail($"The patch client could not create '{_currentTarget}'.");
				return;
			}
			target.Write(expanded);
			_files.DeleteFile(_currentTemp);
		}
		else
		{
			_files.DeleteFile(_currentTarget);
			if (!_files.MoveFile(_currentTemp, _currentTarget, false))
			{
				Fail($"The patch client could not move '{_currentTemp}' to '{_currentTarget}'.");
				return;
			}
		}
		_hasCurrentFile = false;
		_currentTarget = GamePath.Root;
		_currentTemp = GamePath.Root;
		_currentFileName = null;
		_currentCompressed = false;
		RaiseProgress();
	}

	[Original(0x0070BDEC)]
	private void HandleEnterDirectory(byte[] body)
	{
		if (body.Length != 0x40)
			throw new InvalidDataException("The patch enter-directory body must contain 0x40 bytes.");
		string name = PacketField.ReadText(body).Decode();
		if (name.Length == 0)
			return;
		GamePath target = GamePath.Combine(_directory, name.Replace('\\', '/'));
		if (!_files.DirectoryExists(target) && !_files.CreateDirectory(target))
			throw new InvalidDataException($"The patch client could not create '{target}'.");
		_directory = target;
	}

	[Original(0x0070C92C)]
	private void HandleExitDirectory(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch exit-directory must not carry a body.");
		_directory = _directory.Parent;
	}

	[Original(0x0070BEAC)]
	private void HandleStartList(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch list start must not carry a body.");
		if (_hasCurrentFile)
			throw new InvalidDataException("The patch server started a list while a file was open.");
		_directory = GamePath.Root;
		_checksums.Clear();
		State = PatchSessionState.Listing;
	}

	[Original(0x0070BE14)]
	private void HandleChecksumRequest(byte[] body)
	{
		if (body.Length != 0x24)
			throw new InvalidDataException("The patch checksum request must contain 0x24 bytes.");
		uint requestId = BinaryPrimitives.ReadUInt32LittleEndian(body);
		string name = PacketField.ReadText(body.AsSpan(4, 0x20)).Decode();
		GamePath path = string.Equals(name, "PsoBB.pat", StringComparison.OrdinalIgnoreCase)
			? GamePath.Combine(_directory, "PsoBB.exe")
			: Resolve(name);
		uint checksum = PatchCrc32.ComputeFile(_files, path, out uint size);
		PatchChecksum answer = new(requestId, checksum, size);
		_checksums.Add(answer);
		ChecksumRecorded?.Invoke(answer);
	}

	[Original(0x0070BEEC)]
	private void HandleChecksumListEnd(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch checksum list end must not carry a body.");
		foreach (PatchChecksum checksum in _checksums)
		{
			byte[] answer = new byte[0x0C];
			BinaryPrimitives.WriteUInt32LittleEndian(answer, checksum.RequestId);
			BinaryPrimitives.WriteUInt32LittleEndian(answer.AsSpan(4), checksum.Checksum);
			BinaryPrimitives.WriteUInt32LittleEndian(answer.AsSpan(8), checksum.Size);
			SendFrame(0x0F, 0, answer);
		}
		_checksums.Clear();
		SendFrame(0x10, 0, []);
		State = PatchSessionState.Comparing;
	}

	[Original(0x0070BFB0)]
	private void HandleTotals(byte[] body)
	{
		if (body.Length != 8)
			throw new InvalidDataException("The patch totals body must contain eight bytes.");
		_totalBytes = BinaryPrimitives.ReadUInt32LittleEndian(body);
		_totalFiles = BinaryPrimitives.ReadUInt32LittleEndian(body.AsSpan(4));
		_receivedBytes = 0;
		_percent = 0;
		_fileNumber = 0;
		State = PatchSessionState.Downloading;
		RaiseProgress();
	}

	[Original(0x0070BFEC)]
	private void HandleComplete(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch completion must not carry a body.");
		State = PatchSessionState.Completed;
		_connection.Close();
		RaiseProgress();
	}

	[Original(0x0070BF98)]
	private void HandleMessage(byte[] body)
	{
		int length = body.Length;
		while (length >= 2 && body[length - 1] == 0 && body[length - 2] == 0)
			length -= 2;
		if ((length & 1) != 0)
			length--;
		MessageReceived?.Invoke(Encoding.Unicode.GetString(body, 0, length));
	}

	[Original(0x0070C0D0)]
	private void HandleRedirect(byte[] body)
	{
		if (body.Length != 8)
			throw new InvalidDataException("The patch redirect body must contain eight bytes.");
		string host = $"{body[0]}.{body[1]}.{body[2]}.{body[3]}";
		int port = BinaryPrimitives.ReadUInt16BigEndian(body.AsSpan(4));
		RedirectHost = host;
		RedirectPort = port;
		_connection.Close();
		ResetProtocol();
		State = PatchSessionState.Redirected;
		if (!ConnectTransport(host, port))
			return;
		State = PatchSessionState.AwaitingWelcome;
	}

	private GamePath Resolve(string name)
	{
		if (name.Length == 0)
			throw new InvalidDataException("The patch server sent an empty file name.");
		string portable = name.Replace('\\', '/');
		return GamePath.Combine(_directory, portable);
	}

	[Original(0x0070C910)]
	private void HandleLoginFailure(byte[] body)
	{
		if (body.Length != 0)
			throw new InvalidDataException("The patch login failure must not carry a body.");
		Fail("The patch server rejected the login credentials.");
	}

	[Original(0x0070B320)]
	private void SendFrame(byte command, byte flags, ReadOnlySpan<byte> body)
	{
		int total = 4 + body.Length;
		if (total > MaxPacketLength)
			throw new ArgumentException("The patch frame is too large.", nameof(body));
		byte[] wire = new byte[total];
		BinaryPrimitives.WriteUInt16LittleEndian(wire, (ushort)total);
		wire[2] = command;
		wire[3] = flags;
		body.CopyTo(wire.AsSpan(4));
		if (_encrypted)
			_sendCipher!.Xor(wire);
		_sendChunks.Enqueue(wire);
		_pendingSendBytes += wire.Length;
	}

	private void UpdateOverallPercent() => _percent = PatchProgress.PercentOf(_receivedBytes, _totalBytes);

	private void RaiseProgress() => ProgressChanged?.Invoke(Progress);

	private void Fail(string reason)
	{
		if (State == PatchSessionState.Failed)
			return;
		FailureReason = reason;
		State = PatchSessionState.Failed;
		_sendChunks.Clear();
		_sendOffset = 0;
		_pendingSendBytes = 0;
		if (_connection.State != GameConnectionState.Disconnected)
			_connection.Close();
	}

	private void ResetProtocol()
	{
		_sendChunks.Clear();
		_sendOffset = 0;
		_pendingSendBytes = 0;
		_receiveLength = 0;
		_headerDecrypted = false;
		_frameLength = 0;
		_sendCipher = null;
		_receiveCipher = null;
		_encrypted = false;
		_hasCurrentFile = false;
		_currentTarget = GamePath.Root;
		_currentTemp = GamePath.Root;
		_currentFileName = null;
		_currentLength = 0;
		_currentBytes = 0;
		_currentPercent = 0;
		_currentCompressed = false;
	}

	private void ResetSession()
	{
		if (_connection.State != GameConnectionState.Disconnected)
			_connection.Close();
		ResetProtocol();
		_checksums.Clear();
		_directory = GamePath.Root;
		_totalBytes = 0;
		_receivedBytes = 0;
		_percent = 0;
		_totalFiles = 0;
		_fileNumber = 0;
		RedirectHost = null;
		RedirectPort = 0;
		FailureReason = null;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
