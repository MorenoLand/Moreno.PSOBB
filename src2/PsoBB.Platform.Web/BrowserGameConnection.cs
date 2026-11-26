using PsoBB.Platform;

namespace PsoBB.Platform.Web;

/// <summary>
/// The disabled connection for browser builds.
/// </summary>
/// <remarks>
/// A page can only open a WebSocket, which carries whole messages rather than the raw TCP byte stream the Blue Burst protocol needs. A host that runs a WebSocket-to-TCP relay provides its own <see cref="IGameConnection"/> instead of using this type.
/// </remarks>
public sealed class BrowserGameConnection : IGameConnection
{
	private const string UnsupportedReason = "A browser page cannot open the raw TCP byte stream used by the Blue Burst protocol. Provide an IGameConnection backed by a host relay.";

	/// <inheritdoc/>
	public GameConnectionState State => GameConnectionState.Disconnected;

	/// <summary>
	/// Refuses to open a raw TCP stream from a browser page.
	/// </summary>
	/// <param name="host">The host name or numeric address.</param>
	/// <param name="port">The TCP port.</param>
	/// <returns>This method never returns.</returns>
	/// <exception cref="NotSupportedException">A browser page cannot open a raw TCP stream.</exception>
	public bool Connect(string host, int port) => throw new NotSupportedException(UnsupportedReason);

	/// <summary>
	/// Refuses to send because no transport can be opened.
	/// </summary>
	/// <param name="data">The bytes that would be sent.</param>
	/// <returns>This method never returns.</returns>
	/// <exception cref="NotSupportedException">A browser page cannot open a raw TCP stream.</exception>
	public int Send(ReadOnlySpan<byte> data) => throw new NotSupportedException(UnsupportedReason);

	/// <summary>
	/// Refuses to receive because no transport can be opened.
	/// </summary>
	/// <param name="destination">The buffer that would receive bytes.</param>
	/// <returns>This method never returns.</returns>
	/// <exception cref="NotSupportedException">A browser page cannot open a raw TCP stream.</exception>
	public int Receive(Span<byte> destination) => throw new NotSupportedException(UnsupportedReason);

	/// <summary>
	/// Does nothing because no transport can be opened.
	/// </summary>
	public void Close()
	{
	}

	/// <summary>
	/// Does nothing because no transport can be opened.
	/// </summary>
	public void Dispose()
	{
	}
}
