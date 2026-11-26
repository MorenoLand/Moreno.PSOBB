using PsoBB.Net;

namespace PsoBB.Tests;

/// <summary>
/// Checks every branch and port of the server endpoint selectors with synthetic host tables.
/// </summary>
public sealed class ServerEndpointsTests
{
	private const string PatchService = "patch-service";
	private const string PatchAlternate = "patch-alternate";
	private const string PatchFallback = "patch-fallback";
	private const string LoginService = "login-service";
	private const string LoginAlternate = "login-alternate";
	private const string LoginFallback = "login-fallback";
	private const string LoginSecondary = "login-secondary";
	private const string RuntimeHost = "runtime-configured";
	private const ushort RuntimePort = 45678;

	private static ServerHostTable Hosts() => new(
		patchService: PatchService,
		patchAlternate: PatchAlternate,
		patchFallback: PatchFallback,
		loginService: LoginService,
		loginAlternate: LoginAlternate,
		loginFallback: LoginFallback,
		loginSecondary: LoginSecondary);

	private static ServerEndpoints Endpoints() => new(Hosts());

	/// <summary>
	/// The patch host distinguishes modes 1 and 3 from every other value.
	/// </summary>
	[Fact]
	public void PatchHostSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(PatchService, endpoints.GetPatchHost(1));
		Assert.Equal(PatchAlternate, endpoints.GetPatchHost(3));
		Assert.Equal(PatchFallback, endpoints.GetPatchHost(0));
		Assert.Equal(PatchFallback, endpoints.GetPatchHost(2));
		Assert.Equal(PatchFallback, endpoints.GetPatchHost(uint.MaxValue));
	}

	/// <summary>
	/// The patch port is 11000 for mode 1 and 13000 for every other value.
	/// </summary>
	[Fact]
	public void PatchPortSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(11000, endpoints.GetPatchPort(1));
		Assert.Equal(13000, endpoints.GetPatchPort(0));
		Assert.Equal(13000, endpoints.GetPatchPort(2));
		Assert.Equal(13000, endpoints.GetPatchPort(3));
		Assert.Equal(13000, endpoints.GetPatchPort(uint.MaxValue));
	}

	/// <summary>
	/// An alternate endpoint set makes the download host empty for every mode.
	/// </summary>
	[Fact]
	public void DownloadHostIsEmptyForAlternateEndpointSet()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Empty(endpoints.GetDownloadHost(1, alternateEndpointSet: true));
		Assert.Empty(endpoints.GetDownloadHost(3, alternateEndpointSet: true));
		Assert.Empty(endpoints.GetDownloadHost(0, alternateEndpointSet: true));
	}

	/// <summary>
	/// Without an alternate endpoint set the download host uses modes 1 and 3 and is otherwise empty.
	/// </summary>
	[Fact]
	public void DownloadHostSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(PatchService, endpoints.GetDownloadHost(1, alternateEndpointSet: false));
		Assert.Equal(PatchAlternate, endpoints.GetDownloadHost(3, alternateEndpointSet: false));
		Assert.Empty(endpoints.GetDownloadHost(0, alternateEndpointSet: false));
		Assert.Empty(endpoints.GetDownloadHost(2, alternateEndpointSet: false));
		Assert.Empty(endpoints.GetDownloadHost(uint.MaxValue, alternateEndpointSet: false));
	}

	/// <summary>
	/// An alternate endpoint set fixes the download port at 11200 for every mode.
	/// </summary>
	[Fact]
	public void DownloadPortIs11200ForAlternateEndpointSet()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(11200, endpoints.GetDownloadPort(1, alternateEndpointSet: true));
		Assert.Equal(11200, endpoints.GetDownloadPort(3, alternateEndpointSet: true));
		Assert.Equal(11200, endpoints.GetDownloadPort(0, alternateEndpointSet: true));
	}

	/// <summary>
	/// Without an alternate endpoint set the download port is 11000 for modes 1 and 3 and 11100 otherwise.
	/// </summary>
	[Fact]
	public void DownloadPortSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(11000, endpoints.GetDownloadPort(1, alternateEndpointSet: false));
		Assert.Equal(11000, endpoints.GetDownloadPort(3, alternateEndpointSet: false));
		Assert.Equal(11100, endpoints.GetDownloadPort(0, alternateEndpointSet: false));
		Assert.Equal(11100, endpoints.GetDownloadPort(uint.MaxValue, alternateEndpointSet: false));
	}

	/// <summary>
	/// The first login host distinguishes modes 1 and 3 from every other value.
	/// </summary>
	[Fact]
	public void LoginHostSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(LoginService, endpoints.GetLoginHost(1));
		Assert.Equal(LoginAlternate, endpoints.GetLoginHost(3));
		Assert.Equal(LoginFallback, endpoints.GetLoginHost(0));
		Assert.Equal(LoginFallback, endpoints.GetLoginHost(uint.MaxValue));
	}

	/// <summary>
	/// An alternate endpoint set forces the secondary login host for every mode.
	/// </summary>
	[Fact]
	public void SecondaryLoginHostIsForcedByAlternateEndpointSet()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(LoginSecondary, endpoints.GetSecondaryLoginHost(1, alternateEndpointSet: true));
		Assert.Equal(LoginSecondary, endpoints.GetSecondaryLoginHost(3, alternateEndpointSet: true));
		Assert.Equal(LoginSecondary, endpoints.GetSecondaryLoginHost(0, alternateEndpointSet: true));
	}

	/// <summary>
	/// The secondary login host uses modes 1 and 3 and falls back to the secondary slot otherwise.
	/// </summary>
	[Fact]
	public void SecondaryLoginHostSelectsByMode()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(LoginService, endpoints.GetSecondaryLoginHost(1, alternateEndpointSet: false));
		Assert.Equal(LoginAlternate, endpoints.GetSecondaryLoginHost(3, alternateEndpointSet: false));
		Assert.Equal(LoginSecondary, endpoints.GetSecondaryLoginHost(0, alternateEndpointSet: false));
		Assert.Equal(LoginSecondary, endpoints.GetSecondaryLoginHost(uint.MaxValue, alternateEndpointSet: false));
	}

	/// <summary>
	/// Mode 1 returns the runtime port and ignores both flags.
	/// </summary>
	[Fact]
	public void LoginPortUsesTheRuntimePortForModeOne()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(RuntimePort, endpoints.GetLoginPort(1, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimePort));
		Assert.Equal(RuntimePort, endpoints.GetLoginPort(1, alternateEndpointSet: true, useSecondaryEndpoints: true, RuntimePort));
		Assert.Equal(0, endpoints.GetLoginPort(1, alternateEndpointSet: false, useSecondaryEndpoints: false, 0));
		Assert.Equal(ushort.MaxValue, endpoints.GetLoginPort(1, alternateEndpointSet: true, useSecondaryEndpoints: true, ushort.MaxValue));
	}

	/// <summary>
	/// A nonzero configuration test result returns the fixed 12000 game port.
	/// </summary>
	[Fact]
	public void LoginPortUses12000ForSecondaryEndpoints()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(12000, endpoints.GetLoginPort(0, alternateEndpointSet: false, useSecondaryEndpoints: true, RuntimePort));
		Assert.Equal(12000, endpoints.GetLoginPort(3, alternateEndpointSet: false, useSecondaryEndpoints: true, RuntimePort));
		Assert.Equal(12000, endpoints.GetLoginPort(0, alternateEndpointSet: true, useSecondaryEndpoints: true, RuntimePort));
		Assert.Equal(12000, endpoints.GetLoginPort(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: true, RuntimePort));
	}

	/// <summary>
	/// A zero configuration test result returns 14000 for every non-mode-1 value.
	/// </summary>
	[Fact]
	public void LoginPortUses14000ForPrimaryEndpoints()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(14000, endpoints.GetLoginPort(0, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimePort));
		Assert.Equal(14000, endpoints.GetLoginPort(3, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimePort));
		Assert.Equal(14000, endpoints.GetLoginPort(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: false, RuntimePort));
	}

	/// <summary>
	/// The first game-port selector always returns 12000.
	/// </summary>
	[Fact]
	public void GamePortIsAlways12000()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(12000, endpoints.GetGamePort(0));
		Assert.Equal(12000, endpoints.GetGamePort(1));
		Assert.Equal(12000, endpoints.GetGamePort(3));
		Assert.Equal(12000, endpoints.GetGamePort(uint.MaxValue));
	}

	/// <summary>
	/// The alternate game-port selector always returns 12000.
	/// </summary>
	[Fact]
	public void AlternateGamePortIsAlways12000()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(12000, endpoints.GetAlternateGamePort(alternateEndpointSet: false));
		Assert.Equal(12000, endpoints.GetAlternateGamePort(alternateEndpointSet: true));
	}

	/// <summary>
	/// Mode 1 copies the runtime login host and ignores the selector flags.
	/// </summary>
	[Fact]
	public void LoginConnectionHostUsesTheRuntimeHostForModeOne()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(RuntimeHost, endpoints.GetLoginConnectionHost(1, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimeHost));
		Assert.Equal(RuntimeHost, endpoints.GetLoginConnectionHost(1, alternateEndpointSet: true, useSecondaryEndpoints: true, RuntimeHost));
		Assert.Equal(string.Empty, endpoints.GetLoginConnectionHost(1, alternateEndpointSet: false, useSecondaryEndpoints: false, string.Empty));
	}

	/// <summary>
	/// A nonzero configuration test result selects the secondary login host.
	/// </summary>
	[Fact]
	public void LoginConnectionHostUsesTheSecondarySelector()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(LoginAlternate, endpoints.GetLoginConnectionHost(3, alternateEndpointSet: false, useSecondaryEndpoints: true, RuntimeHost));
		Assert.Equal(LoginSecondary, endpoints.GetLoginConnectionHost(0, alternateEndpointSet: false, useSecondaryEndpoints: true, RuntimeHost));
		Assert.Equal(LoginSecondary, endpoints.GetLoginConnectionHost(3, alternateEndpointSet: true, useSecondaryEndpoints: true, RuntimeHost));
	}

	/// <summary>
	/// A zero configuration test result selects the first login host.
	/// </summary>
	[Fact]
	public void LoginConnectionHostUsesTheFirstSelector()
	{
		ServerEndpoints endpoints = Endpoints();
		Assert.Equal(LoginAlternate, endpoints.GetLoginConnectionHost(3, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimeHost));
		Assert.Equal(LoginFallback, endpoints.GetLoginConnectionHost(0, alternateEndpointSet: false, useSecondaryEndpoints: false, RuntimeHost));
		Assert.Equal(LoginFallback, endpoints.GetLoginConnectionHost(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: false, RuntimeHost));
	}

	/// <summary>
	/// Mode 1 returns the runtime patch endpoint and ignores both flags.
	/// </summary>
	[Fact]
	public void PatchEndpointUsesTheRuntimeAddressForModeOne()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(runtime, endpoints.SelectPatchEndpoint(1, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(runtime, endpoints.SelectPatchEndpoint(1, alternateEndpointSet: true, useSecondaryEndpoints: true, runtime));
	}

	/// <summary>
	/// A nonzero configuration test result selects the download host and port.
	/// </summary>
	[Fact]
	public void PatchEndpointUsesTheDownloadSelectors()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(new ServerAddress(PatchAlternate, 11000), endpoints.SelectPatchEndpoint(3, alternateEndpointSet: false, useSecondaryEndpoints: true, runtime));
		Assert.Equal(new ServerAddress(string.Empty, 11200), endpoints.SelectPatchEndpoint(3, alternateEndpointSet: true, useSecondaryEndpoints: true, runtime));
		Assert.Equal(new ServerAddress(string.Empty, 11100), endpoints.SelectPatchEndpoint(0, alternateEndpointSet: false, useSecondaryEndpoints: true, runtime));
		Assert.Equal(new ServerAddress(string.Empty, 11200), endpoints.SelectPatchEndpoint(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: true, runtime));
	}

	/// <summary>
	/// A zero configuration test result selects the patch host and port.
	/// </summary>
	[Fact]
	public void PatchEndpointUsesThePatchSelectors()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(new ServerAddress(PatchAlternate, 13000), endpoints.SelectPatchEndpoint(3, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(new ServerAddress(PatchFallback, 13000), endpoints.SelectPatchEndpoint(0, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(new ServerAddress(PatchFallback, 13000), endpoints.SelectPatchEndpoint(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: false, runtime));
	}

	/// <summary>
	/// Mode 1 returns the runtime login endpoint.
	/// </summary>
	[Fact]
	public void LoginEndpointUsesTheRuntimeAddressForModeOne()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(runtime, endpoints.SelectLoginEndpoint(1, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(runtime, endpoints.SelectLoginEndpoint(1, alternateEndpointSet: true, useSecondaryEndpoints: true, runtime));
	}

	/// <summary>
	/// A nonzero configuration test result selects the secondary login host and the 12000 port.
	/// </summary>
	[Fact]
	public void LoginEndpointUsesTheSecondarySelectors()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(new ServerAddress(LoginAlternate, 12000), endpoints.SelectLoginEndpoint(3, alternateEndpointSet: false, useSecondaryEndpoints: true, runtime));
		Assert.Equal(new ServerAddress(LoginSecondary, 12000), endpoints.SelectLoginEndpoint(0, alternateEndpointSet: false, useSecondaryEndpoints: true, runtime));
		Assert.Equal(new ServerAddress(LoginSecondary, 12000), endpoints.SelectLoginEndpoint(3, alternateEndpointSet: true, useSecondaryEndpoints: true, runtime));
	}

	/// <summary>
	/// A zero configuration test result selects the first login host and the 14000 port.
	/// </summary>
	[Fact]
	public void LoginEndpointUsesTheFirstSelectors()
	{
		ServerEndpoints endpoints = Endpoints();
		ServerAddress runtime = new(RuntimeHost, RuntimePort);
		Assert.Equal(new ServerAddress(LoginAlternate, 14000), endpoints.SelectLoginEndpoint(3, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(new ServerAddress(LoginFallback, 14000), endpoints.SelectLoginEndpoint(0, alternateEndpointSet: false, useSecondaryEndpoints: false, runtime));
		Assert.Equal(new ServerAddress(LoginFallback, 14000), endpoints.SelectLoginEndpoint(uint.MaxValue, alternateEndpointSet: true, useSecondaryEndpoints: false, runtime));
	}

	/// <summary>
	/// Every selected host is a supplied slot or the supplied runtime host, so no name is embedded in the selectors.
	/// </summary>
	[Fact]
	public void SelectedHostsComeOnlyFromInputs()
	{
		ServerEndpoints endpoints = Endpoints();
		string[] slots = [PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary, RuntimeHost, string.Empty];
		uint[] modes = [0, 1, 2, 3, uint.MaxValue];
		foreach (uint mode in modes)
		{
			foreach (bool alternate in new[] { false, true })
			{
				Assert.Contains(endpoints.GetPatchHost(mode), slots);
				Assert.Contains(endpoints.GetDownloadHost(mode, alternate), slots);
				Assert.Contains(endpoints.GetLoginHost(mode), slots);
				Assert.Contains(endpoints.GetSecondaryLoginHost(mode, alternate), slots);
				foreach (bool secondary in new[] { false, true })
				{
					Assert.Contains(endpoints.GetLoginConnectionHost(mode, alternate, secondary, RuntimeHost), slots);
					Assert.Contains(endpoints.SelectPatchEndpoint(mode, alternate, secondary, new ServerAddress(RuntimeHost, RuntimePort)).Host, slots);
					Assert.Contains(endpoints.SelectLoginEndpoint(mode, alternate, secondary, new ServerAddress(RuntimeHost, RuntimePort)).Host, slots);
				}
			}
		}
	}

	/// <summary>
	/// Every host slot must be supplied.
	/// </summary>
	[Fact]
	public void HostTableRejectsNullSlots()
	{
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(null!, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, null!, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, PatchAlternate, null!, LoginService, LoginAlternate, LoginFallback, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, PatchAlternate, PatchFallback, null!, LoginAlternate, LoginFallback, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, PatchAlternate, PatchFallback, LoginService, null!, LoginFallback, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, null!, LoginSecondary));
		Assert.Throws<ArgumentNullException>(() => new ServerHostTable(PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, null!));
	}

	/// <summary>
	/// Empty host slots are valid and reach the selected address unchanged.
	/// </summary>
	[Fact]
	public void HostTableAllowsEmptySlots()
	{
		ServerEndpoints endpoints = new(new ServerHostTable(
			patchService: string.Empty,
			patchAlternate: string.Empty,
			patchFallback: string.Empty,
			loginService: string.Empty,
			loginAlternate: string.Empty,
			loginFallback: string.Empty,
			loginSecondary: string.Empty));
		Assert.Empty(endpoints.GetPatchHost(1));
		Assert.Empty(endpoints.GetDownloadHost(0, alternateEndpointSet: false));
		Assert.Empty(endpoints.SelectLoginEndpoint(0, alternateEndpointSet: false, useSecondaryEndpoints: true, new ServerAddress(RuntimeHost, RuntimePort)).Host);
	}

	/// <summary>
	/// The endpoint selectors require a host table.
	/// </summary>
	[Fact]
	public void EndpointsRejectNullTable()
	{
		Assert.Throws<ArgumentNullException>(() => new ServerEndpoints(null!));
	}

	/// <summary>
	/// An address requires a non-null host and keeps an empty host.
	/// </summary>
	[Fact]
	public void AddressRejectsNullHost()
	{
		Assert.Throws<ArgumentNullException>(() => new ServerAddress(null!, 12000));
		ServerAddress address = new(string.Empty, 12000);
		Assert.Empty(address.Host);
		Assert.Equal(12000, address.Port);
	}
}
