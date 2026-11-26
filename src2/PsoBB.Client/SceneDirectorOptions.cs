namespace PsoBB.Client;

/// <summary>
/// The optional scene-director inputs the host supplies at creation.
/// </summary>
public sealed class SceneDirectorOptions
{
	/// <summary>Gets or sets the online endpoint and login inputs, or <see langword="null"/> for no connection.</summary>
	public SceneNetworkOptions? Network { get; init; }

	/// <summary>Gets or sets whether scene 1 selects the cinematic logo descriptor.</summary>
	public bool CinematicLogo { get; init; }
}
