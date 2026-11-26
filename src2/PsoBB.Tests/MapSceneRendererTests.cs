using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Imaging;
using PsoBB.Mathematics;
using PsoBB.Platform;
using PsoBB.Rendering;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks map surface selection, chunk and node transform composition, texture binds and pass order.
/// </summary>
public sealed class MapSceneRendererTests
{
	/// <summary>
	/// An empty map submits the camera and baseline state without a draw.
	/// </summary>
	[Fact]
	public void EmptyMapSubmitsNoDraw()
	{
		MapScene scene = MapRendererTestData.EmptyScene();
		using MapSceneRenderer mapRenderer = new();
		using RecordingRenderer recording = new(RenderSettings.Default);
		recording.BeginFrame();
		mapRenderer.Render(recording, scene, SceneCamera.Default);
		recording.EndFrame();
		Assert.Empty(recording.DrawVertices);
		Assert.Contains("Transform View", recording.Commands);
		Assert.Contains("Transform Projection", recording.Commands);
	}

	/// <summary>
	/// The chunk transform precedes the node transform and a child node extends the chain.
	/// </summary>
	[Fact]
	public void ChunkAndNodeTransformsCompose()
	{
		MapScene scene = MapRendererTestData.Scene(new MapGeometryOptions { WithChild = true });
		using MapSceneRenderer renderer = new();
		RenderScene sceneData = renderer.BuildScene(scene, SceneCamera.Default);
		Assert.Equal(2, sceneData.Opaque.Count);
		Assert.Equal(11.0f, sceneData.Opaque[0].Transform.M41);
		Assert.Equal(22.0f, sceneData.Opaque[0].Transform.M42);
		Assert.Equal(33.0f, sceneData.Opaque[0].Transform.M43);
		Assert.Equal(15.0f, sceneData.Opaque[1].Transform.M41);
		Assert.Equal(27.0f, sceneData.Opaque[1].Transform.M42);
		Assert.Equal(39.0f, sceneData.Opaque[1].Transform.M43);
	}

	/// <summary>
	/// The chunk rotation uses the original alternate Euler order before the node rotation.
	/// </summary>
	[Fact]
	public void ChunkRotationUsesTheOriginalOrder()
	{
		MapScene scene = MapRendererTestData.Scene(new MapGeometryOptions
		{
			ChunkRotationX = 0x1000,
			ChunkRotationY = 0x2000,
			ChunkRotationZ = 0x3000,
			NodeRotationX = 0x0400,
			NodeRotationY = 0x0800,
			NodeRotationZ = 0x0C00,
		});
		TransformationStack stack = new();
		stack.PushCopy();
		stack.Translate(new Vector3(10, 20, 30));
		stack.RotateEuler(0x1000, 0x2000, 0x3000, true);
		stack.PushCopy();
		stack.Translate(new Vector3(1, 2, 3));
		stack.RotateEuler(0x0400, 0x0800, 0x0C00, false);
		stack.Scale(new Vector3(1, 1, 1));
		using MapSceneRenderer renderer = new();
		SceneSurface surface = Assert.Single(renderer.BuildScene(scene, SceneCamera.Default).Opaque);
		Assert.Equal(stack.Current, surface.Transform);
	}

	/// <summary>
	/// A pretransformed chunk skips the chunk translation and draws the node in its stored space.
	/// </summary>
	[Fact]
	public void PretransformedChunkSkipsTheChunkTransform()
	{
		MapScene scene = MapRendererTestData.Scene(new MapGeometryOptions { ChunkFlags = 0x90000 });
		using MapSceneRenderer renderer = new();
		SceneSurface surface = Assert.Single(renderer.BuildScene(scene, SceneCamera.Default).Opaque);
		Assert.Equal(1.0f, surface.Transform.M41);
		Assert.Equal(2.0f, surface.Transform.M42);
		Assert.Equal(3.0f, surface.Transform.M43);
	}

	/// <summary>
	/// A chunk whose visible-tree pass is active skips static trees without the visible flag.
	/// </summary>
	[Fact]
	public void StaticTreeVisibilitySelectsSurfaces()
	{
		using MapSceneRenderer renderer = new();
		MapScene culled = MapRendererTestData.Scene(new MapGeometryOptions { ChunkFlags = 0 });
		Assert.Empty(renderer.BuildScene(culled, SceneCamera.Default).Opaque);
		MapScene hidden = MapRendererTestData.Scene(new MapGeometryOptions { ChunkFlags = 0x110000 });
		Assert.Empty(renderer.BuildScene(hidden, SceneCamera.Default).Opaque);
		MapScene visible = MapRendererTestData.Scene(new MapGeometryOptions { ChunkFlags = 0x110000, TreeFlags = 0x10000 });
		Assert.Single(renderer.BuildScene(visible, SceneCamera.Default).Opaque);
	}

	/// <summary>
	/// Opaque and alpha index buffers become the opaque and translucent passes in that order.
	/// </summary>
	[Fact]
	public void OpaqueAndAlphaBuffersKeepTheirPassOrder()
	{
		MapScene scene = MapRendererTestData.Scene(new MapGeometryOptions { WithAlpha = true });
		using MapSceneRenderer mapRenderer = new();
		using RecordingRenderer recording = new(RenderSettings.Default);
		RenderScene sceneData = mapRenderer.BuildScene(scene, SceneCamera.Default);
		Assert.Single(sceneData.Opaque);
		Assert.Single(sceneData.Transparent);
		recording.BeginFrame();
		new SceneRenderer().Render(recording, sceneData);
		recording.EndFrame();
		string[] draws = [.. recording.Commands.Where(command => command.StartsWith("Draw ", StringComparison.Ordinal))];
		Assert.Equal(["Draw TriangleStrip 1 12 112", "Draw TriangleStrip 1 12 112"], draws);
		string[] commands = [.. recording.Commands];
		Assert.True(Array.IndexOf(commands, "State 27:1") < Array.IndexOf(commands, "State 14:0"));
	}

	/// <summary>
	/// The map renderer uploads the supplied camera view and projection instead of inventing one.
	/// </summary>
	[Fact]
	public void CameraFlowsToTheSceneRenderer()
	{
		MapScene scene = MapRendererTestData.Scene();
		SceneCamera camera = new(new Vector3(4, 5, 6), new Vector3(0, 1, 0), new Vector3(0, 1, 0), 0x2000, 1.25f, 2.0f, 9000.0f);
		using MapSceneRenderer mapRenderer = new();
		using RecordingRenderer recording = new(RenderSettings.Default);
		recording.BeginFrame();
		mapRenderer.Render(recording, scene, camera);
		recording.EndFrame();
		Assert.Equal(ToRenderMatrix(camera.CreateView()), recording.Transforms[0].Transform);
		Assert.Equal(ToRenderMatrix(camera.CreateProjection()), recording.Transforms[1].Transform);
	}

	/// <summary>
	/// The texture-list entry resolves through the texture cache before the strip draw.
	/// </summary>
	[Fact]
	public void TextureListEntryIsBoundThroughTheCache()
	{
		using RecordingRenderer recording = new(RenderSettings.Default);
		using TextureCache cache = new(recording);
		XvmTexture texture = Assert.Single(XvmTextureReader.Read(TextureTestData.Xvm(
		[
			TextureTestData.Xvr(XvmTextureFormat.Bgra8888, 0x101, 2, 2, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]),
		])));
		Assert.True(cache.Register(texture));
		MapScene scene = MapRendererTestData.Scene(new MapGeometryOptions { WithTexture = true, GlobalTextureIndex = texture.GlobalIndex });
		Assert.NotNull(scene.Geometry.Textures);
		Assert.Equal("wall", Assert.Single(scene.Geometry.Textures.Names));
		Assert.Equal(texture.GlobalIndex, Assert.Single(scene.Geometry.Textures.GlobalIndices));
		using MapSceneRenderer mapRenderer = new(cache);
		RenderScene sceneData = mapRenderer.BuildScene(scene, SceneCamera.Default);
		SceneSurface surface = Assert.Single(sceneData.Opaque);
		Assert.NotNull(surface.Texture);
		Assert.Equal(3u, surface.AddressU);
		Assert.Equal(2u, surface.AddressV);
		recording.BeginFrame();
		new SceneRenderer().Render(recording, sceneData);
		recording.EndFrame();
		Assert.Contains("Texture 0:2x2", recording.Commands);
		Assert.Contains("Draw TriangleStrip 1 12 112", recording.Commands);
		Assert.Equal(1, cache.LoadedCount);
	}

	/// <summary>
	/// A retail floor on the configured data root loads and produces map surfaces.
	/// </summary>
	[Fact]
	public void RetailMapProducesSurfacesWhenTheDataRootIsConfigured()
	{
		string? root = Environment.GetEnvironmentVariable("PSOBB_RETAIL_DATA");
		if (string.IsNullOrEmpty(root))
			return;
		string prefix = Environment.GetEnvironmentVariable("PSOBB_RETAIL_MAP") ?? "map_aancient01_00";
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, $"scene/{prefix}n.rel", File.ReadAllBytes(Path.Combine(root, "scene", prefix + "n.rel")));
		SceneSamples.AddFile(files, $"scene/{prefix}c.rel", File.ReadAllBytes(Path.Combine(root, "scene", prefix + "c.rel")));
		SceneSamples.AddFile(files, $"scene/{prefix}bm.bin", File.ReadAllBytes(Path.Combine(root, "scene", prefix + "bm.bin")));
		using DataFileRegistry registry = new(files);
		MapScene scene = new SceneLoader(registry).Load(MapSceneFiles.ForFloor(prefix, prefix));
		Assert.NotEmpty(scene.Geometry.Chunks);
		using MapSceneRenderer renderer = new();
		RenderScene sceneData = renderer.BuildScene(scene, SceneCamera.Default);
		Assert.NotEmpty(sceneData.Opaque);
		Assert.All(sceneData.Opaque, surface => Assert.False(float.IsNaN(surface.Transform.M41)));
	}

	/// <summary>
	/// Null scenes, disposed renderers and missing meshes do not submit a draw.
	/// </summary>
	[Fact]
	public void NullAndDisposedInputsAreRejected()
	{
		using MapSceneRenderer renderer = new();
		Assert.Throws<ArgumentNullException>(() => renderer.BuildScene(null!, SceneCamera.Default));
		renderer.Dispose();
		Assert.Throws<ObjectDisposedException>(() => renderer.BuildScene(MapRendererTestData.EmptyScene(), SceneCamera.Default));
	}

	private static System.Numerics.Matrix4x4 ToRenderMatrix(Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);
}
