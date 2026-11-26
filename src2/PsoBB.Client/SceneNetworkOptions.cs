using PsoBB.Net;
using PsoBB.Platform;

namespace PsoBB.Client;

/// <summary>
/// The host table and login inputs the director uses to connect the online scene.
/// </summary>
public sealed class SceneNetworkOptions
{
	/// <summary>
	/// Creates the endpoint and login inputs.
	/// </summary>
	/// <param name="hosts">The seven host slots the endpoint selectors read.</param>
	/// <param name="loginRequest">The client login packet sent after the welcome.</param>
	/// <param name="connectionFactory">Creates the transport the login session owns.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public SceneNetworkOptions(ServerHostTable hosts, ClientLoginPacket loginRequest, Func<IGameConnection> connectionFactory)
	{
		ArgumentNullException.ThrowIfNull(hosts);
		ArgumentNullException.ThrowIfNull(loginRequest);
		ArgumentNullException.ThrowIfNull(connectionFactory);
		Hosts = hosts;
		LoginRequest = loginRequest;
		ConnectionFactory = connectionFactory;
	}

	/// <summary>Gets the seven host slots.</summary>
	public ServerHostTable Hosts { get; }

	/// <summary>Gets the client login packet.</summary>
	public ClientLoginPacket LoginRequest { get; }

	/// <summary>Gets the transport factory.</summary>
	public Func<IGameConnection> ConnectionFactory { get; }

	/// <summary>Gets or sets the client mode the endpoint selectors read.</summary>
	public uint ClientMode { get; init; }

	/// <summary>Gets or sets whether the alternate endpoint set is active.</summary>
	public bool AlternateEndpointSet { get; init; }

	/// <summary>Gets or sets whether the configuration test selected the secondary login endpoints.</summary>
	public bool UseSecondaryEndpoints { get; init; }

	/// <summary>Gets or sets the runtime host the mode-1 selector returns.</summary>
	public string RuntimeHost { get; init; } = "";

	/// <summary>Gets or sets the runtime port the mode-1 selector returns.</summary>
	public ushort RuntimePort { get; init; }
}
