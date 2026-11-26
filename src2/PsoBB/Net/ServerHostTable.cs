namespace PsoBB.Net;

/// <summary>
/// The seven host strings the original client selects from its data image.
/// </summary>
/// <remarks>
/// The image region that holds these strings is host-patched, so the port never embeds a host name and every slot is supplied by the host. See <c>docs/server-endpoints.md</c> for the image slot each property represents.
/// </remarks>
public sealed class ServerHostTable
{
	/// <summary>
	/// Creates the table from all seven host slots.
	/// </summary>
	/// <param name="patchService">The mode-1 host for the patch selectors.</param>
	/// <param name="patchAlternate">The mode-3 host for the patch selectors.</param>
	/// <param name="patchFallback">The host the patch selectors use for every other mode.</param>
	/// <param name="loginService">The mode-1 host for the login selectors.</param>
	/// <param name="loginAlternate">The mode-3 host for the login selectors.</param>
	/// <param name="loginFallback">The host the first login selector uses for every other mode.</param>
	/// <param name="loginSecondary">The host the secondary login selector uses for an alternate set or any other mode.</param>
	public ServerHostTable(
		string patchService,
		string patchAlternate,
		string patchFallback,
		string loginService,
		string loginAlternate,
		string loginFallback,
		string loginSecondary)
	{
		ArgumentNullException.ThrowIfNull(patchService);
		ArgumentNullException.ThrowIfNull(patchAlternate);
		ArgumentNullException.ThrowIfNull(patchFallback);
		ArgumentNullException.ThrowIfNull(loginService);
		ArgumentNullException.ThrowIfNull(loginAlternate);
		ArgumentNullException.ThrowIfNull(loginFallback);
		ArgumentNullException.ThrowIfNull(loginSecondary);
		PatchService = patchService;
		PatchAlternate = patchAlternate;
		PatchFallback = patchFallback;
		LoginService = loginService;
		LoginAlternate = loginAlternate;
		LoginFallback = loginFallback;
		LoginSecondary = loginSecondary;
	}

	/// <summary>Gets the mode-1 host for the patch selectors.</summary>
	public string PatchService { get; }

	/// <summary>Gets the mode-3 host for the patch selectors.</summary>
	public string PatchAlternate { get; }

	/// <summary>Gets the host the patch selectors use for every other mode.</summary>
	public string PatchFallback { get; }

	/// <summary>Gets the mode-1 host for the login selectors.</summary>
	public string LoginService { get; }

	/// <summary>Gets the mode-3 host for the login selectors.</summary>
	public string LoginAlternate { get; }

	/// <summary>Gets the host the first login selector uses for every other mode.</summary>
	public string LoginFallback { get; }

	/// <summary>Gets the host the secondary login selector uses for an alternate set or any other mode.</summary>
	public string LoginSecondary { get; }
}
