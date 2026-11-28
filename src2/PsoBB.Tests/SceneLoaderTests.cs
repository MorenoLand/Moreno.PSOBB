using PsoBB.Data;
using PsoBB.Platform;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks scene loading through the named data-file surface.
/// </summary>
public sealed class SceneLoaderTests
{
	/// <summary>
	/// A complete floor resolves geometry, collision, rooms, events, objects and lighting.
	/// </summary>
	[Fact]
	public void LoadsACompleteFloor()
	{
		MemoryFileSystem files = new();
		AddScene(files);
		using DataFileRegistry registry = new(files);
		SceneLoader loader = new(registry);
		MapSceneFiles names = MapSceneFiles.ForFloor("map_test", "map_test_00");
		MapScene scene = loader.Load(names);
		Assert.Equal(names, scene.Files);
		Assert.Single(scene.Geometry.Chunks);
		Assert.Single(scene.Collision.Sections);
		Assert.Equal(2, scene.Rooms.Sections.Count);
		Assert.NotNull(scene.Events);
		Assert.Single(scene.Events.Events);
		Assert.NotNull(scene.Objects);
		Assert.Equal(2, scene.Objects.Objects.Count);
		Assert.NotNull(scene.Lighting);
		Assert.Equal(1, scene.Lighting.Count);
	}

	/// <summary>
	/// Event, object and light tables are optional.
	/// </summary>
	[Fact]
	public void AllowsMissingOptionalTables()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "scene/map_testn.rel", SceneSamples.RenderGeometry());
		SceneSamples.AddFile(files, "scene/map_testc.rel", SceneSamples.Collision());
		SceneSamples.AddFile(files, "scene/map_testbm.bin", SceneSamples.RoomGraph());
		using DataFileRegistry registry = new(files);
		MapScene scene = new SceneLoader(registry).Load(MapSceneFiles.ForFloor("map_test", "map_test_00"));
		Assert.Null(scene.Events);
		Assert.Null(scene.Objects);
		Assert.Null(scene.Lighting);
	}

	/// <summary>
	/// A missing required file surfaces as a missing data file.
	/// </summary>
	[Fact]
	public void RejectsAMissingRequiredFile()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "scene/map_testn.rel", SceneSamples.RenderGeometry());
		using DataFileRegistry registry = new(files);
		SceneLoader loader = new(registry);
		Assert.Throws<FileNotFoundException>(() => loader.Load(MapSceneFiles.ForFloor("map_test", "map_test_00")));
	}

	/// <summary>
	/// A model archive loads through the same data-file surface.
	/// </summary>
	[Fact]
	public void LoadsAModelArchive()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "model.bml", SceneSamples.ModelArchive());
		using DataFileRegistry registry = new(files);
		BmlArchive archive = new SceneLoader(registry).LoadModelArchive("model.bml");
		Assert.Single(archive.Entries);
	}

	/// <summary>
	/// The floor factory uses the scene directory and the data-root event and object suffixes.
	/// </summary>
	[Fact]
	public void BuildsFloorFileNames()
	{
		MapSceneFiles names = MapSceneFiles.ForFloor("map_forest01", "map_forest01_00");
		Assert.Equal("scene/map_forest01n.rel", names.RenderGeometry);
		Assert.Equal("scene/map_forest01c.rel", names.Collision);
		Assert.Equal("scene/map_forest01bm.bin", names.RoomGraph);
		Assert.Equal("map_forest01_00.evt", names.Events);
		Assert.Equal("map_forest01_00o.dat", names.Objects);
		Assert.Equal("lightentry.bin", names.LightEntries);
	}

	private static void AddScene(MemoryFileSystem files)
	{
		SceneSamples.AddFile(files, "scene/map_testn.rel", SceneSamples.RenderGeometry());
		SceneSamples.AddFile(files, "scene/map_testc.rel", SceneSamples.Collision());
		SceneSamples.AddFile(files, "scene/map_testbm.bin", SceneSamples.RoomGraph());
		SceneSamples.AddFile(files, "map_test_00.evt", SceneSamples.Events());
		SceneSamples.AddFile(files, "map_test_00o.dat", SceneSamples.Objects());
		SceneSamples.AddFile(files, "lightentry.bin", SceneSamples.Lights());
	}
}
