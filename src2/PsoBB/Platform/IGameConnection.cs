namespace PsoBB.Platform;

/// <summary>
/// A non-blocking byte stream to one game server, implemented once per host.
/// </summary>
/// <remarks>
/// Connect may block for the host's connect timeout, but sends and receives never wait for the network. A send or receive moves at most the requested bytes; zero means the transport is full or has no data. Transport failure raises <see cref="IOException"/> and sets <see cref="State"/> to <see cref="GameConnectionState.Failed"/>; an orderly remote close sets it to <see cref="GameConnectionState.Disconnected"/>. Calls are not thread-safe.
/// </remarks>
public interface IGameConnection : IDisposable
{
	/// <summary>Gets the transport state.</summary>
	GameConnectionState State { get; }

	/// <summary>
	/// Opens the transport to a host and port.
	/// </summary>
	/// <param name="host">The host name or numeric address.</param>
	/// <param name="port">The TCP port.</param>
	/// <returns><see langword="true"/> when the transport is connected.</returns>
	/// <exception cref="InvalidOperationException">The transport is already connected.</exception>
	bool Connect(string host, int port);

	/// <summary>
	/// Sends bytes without waiting for the network.
	/// </summary>
	/// <param name="data">The bytes to send.</param>
	/// <returns>The number of bytes accepted, which may be fewer than requested.</returns>
	/// <exception cref="IOException">The transport failed.</exception>
	int Send(ReadOnlySpan<byte> data);

	/// <summary>
	/// Receives available bytes without waiting for the network.
	/// </summary>
	/// <param name="destination">The buffer that receives the bytes.</param>
	/// <returns>The number of bytes read; zero when no data is available or the remote host closed.</returns>
	/// <exception cref="IOException">The transport failed.</exception>
	int Receive(Span<byte> destination);

	/// <summary>
	/// Closes the transport; calling it again has no effect.
	/// </summary>
	void Close();
}
