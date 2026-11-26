namespace PsoBB.Scene;

/// <summary>
/// The loaded data of one map floor: render geometry, collision, room links and optional event, object and light tables.
/// </summary>
public sealed class MapScene
{
	internal MapScene(
		MapSceneFiles files,
		MapRenderGeometryFile geometry,
		MapCollisionFile collision,
		MapRoomGraph rooms,
		MapEventFile? events,
		MapObjectPlacementFile? objects,
		MapLightTable? lighting)
	{
		Files = files;
		Geometry = geometry;
		Collision = collision;
		Rooms = rooms;
		Events = events;
		Objects = objects;
		Lighting = lighting;
	}

	/// <summary>Gets the names the scene was read from.</summary>
	public MapSceneFiles Files { get; }

	/// <summary>Gets the render geometry.</summary>
	public MapRenderGeometryFile Geometry { get; }

	/// <summary>Gets the collision sections.</summary>
	public MapCollisionFile Collision { get; }

	/// <summary>Gets the room-section visibility table.</summary>
	public MapRoomGraph Rooms { get; }

	/// <summary>Gets the event table, or <see langword="null"/> when the floor has none.</summary>
	public MapEventFile? Events { get; }

	/// <summary>Gets the object placement table, or <see langword="null"/> when the floor has none.</summary>
	public MapObjectPlacementFile? Objects { get; }

	/// <summary>Gets the light table, or <see langword="null"/> when it is absent.</summary>
	public MapLightTable? Lighting { get; }
}
