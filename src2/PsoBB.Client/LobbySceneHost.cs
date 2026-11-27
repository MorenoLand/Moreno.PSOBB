using PsoBB.Game;
using PsoBB.Graphics.Textures;
using PsoBB.Models;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scene;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// The field resources a host supplies when the lobby world becomes drawable.
/// </summary>
public sealed class LobbySceneHost
{
	/// <summary>
	/// Creates the host over the scene-10 shell the host owns.
	/// </summary>
	/// <param name="offline">The initialised scene-10 shell the field scene runs over.</param>
	/// <exception cref="ArgumentNullException"><paramref name="offline"/> is null.</exception>
	public LobbySceneHost(OfflineScene offline)
	{
		ArgumentNullException.ThrowIfNull(offline);
		Offline = offline;
	}

	/// <summary>Gets the scene-10 shell the host owns and releases.</summary>
	public OfflineScene Offline { get; }

	/// <summary>Gets or sets the loaded map, or <see langword="null"/> when the host has no map.</summary>
	public MapScene? Map { get; init; }

	/// <summary>Gets or sets the host camera, or <see langword="null"/> when the host has no camera.</summary>
	public FieldCamera? Camera { get; init; }

	/// <summary>Gets or sets the texture cache that binds map texture-list entries, or <see langword="null"/>.</summary>
	public TextureCache? Textures { get; init; }

	/// <summary>Gets or sets the local player, or <see langword="null"/> when none is bound.</summary>
	public PlayerCharacter? Player { get; init; }

	/// <summary>Gets or sets the ground query the controller uses, or <see langword="null"/> when movement is not driven.</summary>
	public IGroundCollision? Ground { get; init; }

	/// <summary>Gets or sets the NJCM model drawn for the local player, or <see langword="null"/>.</summary>
	public NinjaModel? PlayerModel { get; init; }
}
