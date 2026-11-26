namespace PsoBB.Net;

/// <summary>
/// Selects the patch, download, login and game endpoints from the client's hard-coded tables.
/// </summary>
/// <remarks>
/// The client-mode value, the alternate endpoint set flag and the configuration test result are inputs because their producers are process state or an unported configuration check; the original forces the test result for mode 3 and for an alternate set. The host strings come from <see cref="ServerHostTable"/> because the image region that holds them is host-patched; the branches and port values are the original ones.
/// </remarks>
public sealed class ServerEndpoints
{
	/// <summary>The port the mode-1 patch selector and the mode-1 or mode-3 download selector return.</summary>
	public const ushort PatchServicePort = 11000;

	/// <summary>The download port returned when the alternate endpoint set is active.</summary>
	public const ushort AlternateEndpointPort = 11200;

	/// <summary>The patch port for every mode other than 1.</summary>
	public const ushort PatchDefaultPort = 13000;

	/// <summary>The download port for every other mode when the alternate endpoint set is inactive.</summary>
	public const ushort DownloadDefaultPort = 11100;

	/// <summary>The fixed game port both game-port selectors return.</summary>
	public const ushort GamePort = 12000;

	/// <summary>The login port when the configuration test result is zero.</summary>
	public const ushort LoginDefaultPort = 14000;

	private readonly ServerHostTable _hosts;

	/// <summary>
	/// Creates the selector over a runtime-provided host table.
	/// </summary>
	/// <param name="hosts">The seven host slots the original reads from its data image.</param>
	public ServerEndpoints(ServerHostTable hosts)
	{
		ArgumentNullException.ThrowIfNull(hosts);
		_hosts = hosts;
	}

	/// <summary>Gets the host table the selectors read.</summary>
	public ServerHostTable Hosts => _hosts;

	/// <summary>
	/// Selects the patch host for a client mode.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns; only 1 and 3 differ.</param>
	[Original(0x007082DC)]
	public string GetPatchHost(uint clientMode) => clientMode switch
	{
		1 => _hosts.PatchService,
		3 => _hosts.PatchAlternate,
		_ => _hosts.PatchFallback,
	};

	/// <summary>
	/// Selects the patch port for a client mode.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	[Original(0x00708300)]
	public ushort GetPatchPort(uint clientMode) => clientMode == 1 ? PatchServicePort : PatchDefaultPort;

	/// <summary>
	/// Selects the download host for a client mode and alternate endpoint set.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	[Original(0x00708318)]
	public string GetDownloadHost(uint clientMode, bool alternateEndpointSet)
	{
		if (alternateEndpointSet)
			return string.Empty;
		return clientMode switch
		{
			1 => _hosts.PatchService,
			3 => _hosts.PatchAlternate,
			_ => string.Empty,
		};
	}

	/// <summary>
	/// Selects the download port for a client mode and alternate endpoint set.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	[Original(0x00708348)]
	public ushort GetDownloadPort(uint clientMode, bool alternateEndpointSet)
	{
		if (alternateEndpointSet)
			return AlternateEndpointPort;
		return clientMode switch
		{
			1 => PatchServicePort,
			3 => PatchServicePort,
			_ => DownloadDefaultPort,
		};
	}

	/// <summary>
	/// Selects the login connection host, including the runtime host for mode 1.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	/// <param name="useSecondaryEndpoints">Whether the configuration test result is nonzero.</param>
	/// <param name="configuredHost">The runtime host the original copies for mode 1.</param>
	[Original(0x007084A4)]
	public string GetLoginConnectionHost(uint clientMode, bool alternateEndpointSet, bool useSecondaryEndpoints, string configuredHost)
	{
		ArgumentNullException.ThrowIfNull(configuredHost);
		if (clientMode == 1)
			return configuredHost;
		return useSecondaryEndpoints
			? GetSecondaryLoginHost(clientMode, alternateEndpointSet)
			: GetLoginHost(clientMode);
	}

	/// <summary>
	/// Selects the first login host for a client mode.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	[Original(0x007085D0)]
	public string GetLoginHost(uint clientMode) => clientMode switch
	{
		1 => _hosts.LoginService,
		3 => _hosts.LoginAlternate,
		_ => _hosts.LoginFallback,
	};

	/// <summary>
	/// Selects the secondary login host for a client mode and alternate endpoint set.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	[Original(0x007085F4)]
	public string GetSecondaryLoginHost(uint clientMode, bool alternateEndpointSet)
	{
		if (alternateEndpointSet)
			return _hosts.LoginSecondary;
		return clientMode switch
		{
			1 => _hosts.LoginService,
			3 => _hosts.LoginAlternate,
			_ => _hosts.LoginSecondary,
		};
	}

	/// <summary>
	/// Selects the login port, including the runtime port for mode 1.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	/// <param name="useSecondaryEndpoints">Whether the configuration test result is nonzero.</param>
	/// <param name="configuredPort">The runtime port the original reads for mode 1, truncated to 16 bits.</param>
	[Original(0x00708624)]
	public ushort GetLoginPort(uint clientMode, bool alternateEndpointSet, bool useSecondaryEndpoints, ushort configuredPort)
	{
		if (clientMode == 1)
			return configuredPort;
		if (useSecondaryEndpoints)
		{
			GetAlternateGamePort(alternateEndpointSet);
			return GamePort;
		}
		GetGamePort(clientMode);
		return LoginDefaultPort;
	}

	/// <summary>
	/// Returns the fixed game port the original selects for a client mode.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	[Original(0x00708658)]
	public ushort GetGamePort(uint clientMode) => GamePort;

	/// <summary>
	/// Returns the fixed game port the original selects for an alternate endpoint set.
	/// </summary>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	[Original(0x00708670)]
	public ushort GetAlternateGamePort(bool alternateEndpointSet) => GamePort;

	/// <summary>
	/// Selects the patch or download endpoint used for the initial connection.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	/// <param name="useSecondaryEndpoints">Whether the configuration test result is nonzero.</param>
	/// <param name="runtimeEndpoint">The runtime host and port the original uses for mode 1.</param>
	public ServerAddress SelectPatchEndpoint(uint clientMode, bool alternateEndpointSet, bool useSecondaryEndpoints, ServerAddress runtimeEndpoint)
	{
		if (clientMode == 1)
			return runtimeEndpoint;
		if (useSecondaryEndpoints)
			return new ServerAddress(GetDownloadHost(clientMode, alternateEndpointSet), GetDownloadPort(clientMode, alternateEndpointSet));
		return new ServerAddress(GetPatchHost(clientMode), GetPatchPort(clientMode));
	}

	/// <summary>
	/// Selects the login endpoint used for the initial connection.
	/// </summary>
	/// <param name="clientMode">The mode value the client-mode selector returns.</param>
	/// <param name="alternateEndpointSet">Whether the alternate endpoint set flag is nonzero.</param>
	/// <param name="useSecondaryEndpoints">Whether the configuration test result is nonzero.</param>
	/// <param name="runtimeEndpoint">The runtime host and port the original uses for mode 1.</param>
	public ServerAddress SelectLoginEndpoint(uint clientMode, bool alternateEndpointSet, bool useSecondaryEndpoints, ServerAddress runtimeEndpoint)
	{
		string host = GetLoginConnectionHost(clientMode, alternateEndpointSet, useSecondaryEndpoints, runtimeEndpoint.Host);
		ushort port = GetLoginPort(clientMode, alternateEndpointSet, useSecondaryEndpoints, runtimeEndpoint.Port);
		return new ServerAddress(host, port);
	}
}
