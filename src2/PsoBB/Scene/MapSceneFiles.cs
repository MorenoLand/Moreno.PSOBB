namespace PsoBB.Scene;

/// <summary>
/// The logical names a map scene loader reads through <see cref="Data.IDataFiles"/>.
/// </summary>
/// <param name="RenderGeometry">The scene-relative <c>n.rel</c> name.</param>
/// <param name="Collision">The scene-relative <c>c.rel</c> name.</param>
/// <param name="RoomGraph">The scene-relative <c>bm.bin</c> name.</param>
/// <param name="Events">The optional map-root <c>.evt</c> name.</param>
/// <param name="Objects">The optional map-root object-table name.</param>
/// <param name="LightEntries">The map-root light table name.</param>
public sealed record MapSceneFiles(
	string RenderGeometry,
	string Collision,
	string RoomGraph,
	string? Events = null,
	string? Objects = null,
	string LightEntries = "lightentry.bin")
{
	/// <summary>
	/// Builds the names of one map floor from its scene prefix and its data-file prefix.
	/// </summary>
	/// <param name="scenePrefix">The prefix of the scene assets, for example <c>map_forest01</c>.</param>
	/// <param name="dataPrefix">The prefix of the floor event and object assets, for example <c>map_forest01_00</c>.</param>
	/// <param name="sceneDirectory">The data-root directory that holds scene assets.</param>
	/// <returns>The file names for the floor.</returns>
	/// <exception cref="ArgumentException">A prefix or directory is empty.</exception>
	public static MapSceneFiles ForFloor(string scenePrefix, string dataPrefix, string sceneDirectory = "scene")
	{
		ArgumentException.ThrowIfNullOrEmpty(scenePrefix);
		ArgumentException.ThrowIfNullOrEmpty(dataPrefix);
		ArgumentException.ThrowIfNullOrEmpty(sceneDirectory);
		string directory = sceneDirectory.EndsWith('/') ? sceneDirectory : sceneDirectory + "/";
		return new MapSceneFiles(
			$"{directory}{scenePrefix}n.rel",
			$"{directory}{scenePrefix}c.rel",
			$"{directory}{scenePrefix}bm.bin",
			$"{dataPrefix}.evt",
			$"{dataPrefix}o.dat");
	}
}
