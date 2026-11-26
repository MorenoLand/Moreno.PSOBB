using PsoBB.Data;

namespace PsoBB.Scene;

/// <summary>
/// Loads a map floor through the client's named data-file surface.
/// </summary>
/// <remarks>
/// Render geometry and collision are REL images, room links are the <c>vr1b</c> table and the remaining files are plain data-root tables. Geometry, collision and room links are required; event, object and light tables are optional so a floor without them still loads. The deeper Ninja model conversion is intentionally left to the model loader, which this batch does not port.
/// </remarks>
public sealed class SceneLoader
{
	private readonly IDataFiles _dataFiles;

	/// <summary>
	/// Creates a loader over a data-file surface.
	/// </summary>
	/// <param name="dataFiles">The loose files and archives the client owns.</param>
	public SceneLoader(IDataFiles dataFiles)
	{
		ArgumentNullException.ThrowIfNull(dataFiles);
		_dataFiles = dataFiles;
	}

	/// <summary>
	/// Loads the geometry, collision, room links and whichever optional tables exist for a floor.
	/// </summary>
	/// <param name="files">The logical names to read.</param>
	/// <returns>The loaded scene.</returns>
	/// <exception cref="FileNotFoundException">A required scene file is absent.</exception>
	/// <exception cref="SceneFormatException">A file does not match its format.</exception>
	[Original(0x00806FCC, "MapLoader_LoadAndSwapGeometry_00806fcc")]
	public MapScene Load(MapSceneFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		if (string.IsNullOrEmpty(files.RenderGeometry) || string.IsNullOrEmpty(files.Collision) || string.IsNullOrEmpty(files.RoomGraph))
			throw new ArgumentException("Render geometry, collision and room graph names are required.", nameof(files));
		RelContainer geometryImage = RelContainer.Parse(_dataFiles.Read(files.RenderGeometry).Span);
		RelContainer collisionImage = RelContainer.Parse(_dataFiles.Read(files.Collision).Span);
		MapRenderGeometryFile geometry = MapRenderGeometryFile.Parse(geometryImage);
		MapCollisionFile collision = MapCollisionFile.Parse(collisionImage);
		MapRoomGraph rooms = MapRoomGraph.Parse(_dataFiles.Read(files.RoomGraph).Span);
		MapEventFile? events = null;
		if (!string.IsNullOrEmpty(files.Events) && _dataFiles.TryRead(files.Events, out ReadOnlyMemory<byte> eventData))
			events = MapEventFile.Parse(eventData.Span);
		MapObjectPlacementFile? objects = null;
		if (!string.IsNullOrEmpty(files.Objects) && _dataFiles.TryRead(files.Objects, out ReadOnlyMemory<byte> objectData))
			objects = MapObjectPlacementFile.Parse(objectData.Span);
		MapLightTable? lighting = null;
		if (!string.IsNullOrEmpty(files.LightEntries) && _dataFiles.TryRead(files.LightEntries, out ReadOnlyMemory<byte> lightData))
			lighting = MapLightTable.Parse(lightData.Span);
		return new MapScene(files, geometry, collision, rooms, events, objects, lighting);
	}

	/// <summary>
	/// Loads a BML model archive from the data-file surface.
	/// </summary>
	/// <param name="name">The logical archive name.</param>
	/// <returns>The parsed model archive.</returns>
	/// <exception cref="FileNotFoundException">The archive is absent.</exception>
	/// <exception cref="SceneFormatException">The archive header or a stream is invalid.</exception>
	public BmlArchive LoadModelArchive(string name)
	{
		ArgumentException.ThrowIfNullOrEmpty(name);
		return BmlArchive.Parse(_dataFiles.Read(name).Span);
	}
}
