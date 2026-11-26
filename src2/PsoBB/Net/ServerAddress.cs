namespace PsoBB.Net;

/// <summary>
/// One server host name and TCP port selected by the client's endpoint tables.
/// </summary>
public readonly record struct ServerAddress
{
	/// <summary>
	/// Creates an address from a host and port.
	/// </summary>
	/// <param name="host">The host name or numeric address; the original allows an empty string.</param>
	/// <param name="port">The TCP port.</param>
	public ServerAddress(string host, ushort port)
	{
		ArgumentNullException.ThrowIfNull(host);
		Host = host;
		Port = port;
	}

	/// <summary>Gets the host name or numeric address.</summary>
	public string Host { get; }

	/// <summary>Gets the TCP port.</summary>
	public ushort Port { get; }
}
