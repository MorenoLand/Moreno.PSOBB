using System.Net.Sockets;
using PsoBB.Platform;

namespace PsoBB.Platform.Windows;

/// <summary>
/// A non-blocking TCP connection implemented with <see cref="Socket"/> for the Windows client.
/// </summary>
public sealed class WindowsGameConnection : IGameConnection
{
	private Socket? _socket;
	private GameConnectionState _state = GameConnectionState.Disconnected;
	private bool _disposed;

	/// <inheritdoc/>
	public GameConnectionState State => _state;

	/// <inheritdoc/>
	public bool Connect(string host, int port)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		ArgumentException.ThrowIfNullOrWhiteSpace(host);
		ArgumentOutOfRangeException.ThrowIfNegative(port);
		ArgumentOutOfRangeException.ThrowIfGreaterThan(port, ushort.MaxValue);
		if (_state is GameConnectionState.Connected or GameConnectionState.Connecting)
			throw new InvalidOperationException("The connection is already open.");
		Close();
		_state = GameConnectionState.Connecting;
		Socket socket = new(SocketType.Stream, ProtocolType.Tcp);
		try
		{
			socket.NoDelay = true;
			socket.Connect(host, port);
			socket.Blocking = false;
			_socket = socket;
			_state = GameConnectionState.Connected;
			return true;
		}
		catch (SocketException)
		{
			socket.Dispose();
			_state = GameConnectionState.Failed;
			return false;
		}
	}

	/// <inheritdoc/>
	public int Send(ReadOnlySpan<byte> data)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		Socket socket = _socket ?? throw new InvalidOperationException("The connection is not open.");
		if (_state != GameConnectionState.Connected)
			throw new InvalidOperationException($"The connection is {_state}.");
		try
		{
			return socket.Send(data, SocketFlags.None);
		}
		catch (SocketException exception) when (exception.SocketErrorCode is SocketError.WouldBlock or SocketError.TryAgain or SocketError.NoBufferSpaceAvailable)
		{
			return 0;
		}
		catch (SocketException exception)
		{
			Fail();
			throw new IOException($"Sending to the server failed: {exception.Message}", exception);
		}
		catch (ObjectDisposedException exception)
		{
			Fail();
			throw new IOException("Sending to the server failed because the socket was closed.", exception);
		}
	}

	/// <inheritdoc/>
	public int Receive(Span<byte> destination)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		Socket socket = _socket ?? throw new InvalidOperationException("The connection is not open.");
		if (_state != GameConnectionState.Connected)
			throw new InvalidOperationException($"The connection is {_state}.");
		if (destination.IsEmpty)
			return 0;
		try
		{
			int received = socket.Receive(destination, SocketFlags.None);
			if (received == 0)
				Close();
			return received;
		}
		catch (SocketException exception) when (exception.SocketErrorCode is SocketError.WouldBlock or SocketError.TryAgain)
		{
			return 0;
		}
		catch (SocketException exception)
		{
			Fail();
			throw new IOException($"Receiving from the server failed: {exception.Message}", exception);
		}
		catch (ObjectDisposedException exception)
		{
			Fail();
			throw new IOException("Receiving from the server failed because the socket was closed.", exception);
		}
	}

	/// <inheritdoc/>
	public void Close()
	{
		Socket? socket = _socket;
		_socket = null;
		socket?.Dispose();
		_state = GameConnectionState.Disconnected;
	}

	/// <summary>
	/// Closes the connection and releases the socket.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		Close();
	}

	private void Fail()
	{
		Socket? socket = _socket;
		_socket = null;
		socket?.Dispose();
		_state = GameConnectionState.Failed;
	}
}
