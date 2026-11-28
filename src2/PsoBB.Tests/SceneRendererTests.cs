using PsoBB.Graphics;
using PsoBB.Mathematics;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene renderer's camera upload, pass order, state sequence, texture binds, alpha sorting and index expansion.
/// </summary>
public sealed class SceneRendererTests
{
	private static readonly string[] _frameStart =
	[
		"BeginFrame",
		"Transform View",
		"Transform Projection",
		"Transform World",
		"State 7:1",
		"State 23:4",
		"State 14:1",
		"State 15:1",
		"State 25:5",
		"State 24:0",
		"State 27:0",
		"State 22:1",
	];

	/// <summary>
	/// An empty scene uploads the camera and the opaque baseline without issuing a draw.
	/// </summary>
	[Fact]
	public void EmptySceneUploadsTheCameraAndBaselineStates()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, new RenderScene());
		renderer.EndFrame();
		Assert.Equal(3, renderer.Transforms.Count);
		Assert.Equal(ToRenderMatrix(SceneCamera.Default.CreateView()), renderer.Transforms[0].Transform);
		Assert.Equal(ToRenderMatrix(SceneCamera.Default.CreateProjection()), renderer.Transforms[1].Transform);
		Assert.Equal(TransformKind.World, renderer.Transforms[2].Kind);
		Assert.Equal(System.Numerics.Matrix4x4.Identity, renderer.Transforms[2].Transform);
		Assert.Empty(renderer.DrawVertices);
		Assert.Equal([.. _frameStart, "EndFrame"], renderer.Commands);
	}

	/// <summary>
	/// The renderer records the camera transforms with their values in the view, projection, world order.
	/// </summary>
	[Fact]
	public void CameraTransformsCarryTheOriginalMatrixValues()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneRenderer sceneRenderer = new();
		RenderScene scene = new() { Camera = new SceneCamera(new Vector3(4, 5, 6), new Vector3(0, 1, 0), new Vector3(0, 1, 0), 0x3555, 1.1333334f, 1.0f, 21000.0f) };
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, scene);
		renderer.EndFrame();
		Assert.Equal(ToRenderMatrix(scene.Camera.CreateView()), renderer.Transforms[0].Transform);
		Assert.Equal(ToRenderMatrix(scene.Camera.CreateProjection()), renderer.Transforms[1].Transform);
	}

	/// <summary>
	/// The three passes draw in the original opaque, alpha-tested, blended order and emit the original state changes.
	/// </summary>
	[Fact]
	public void ThreePassesEmitTheOriginalDrawAndStateOrder()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ITexture baseTexture = renderer.CreateTexture(8, 4, ReadOnlySpan<byte>.Empty, 0);
		using ITexture detailTexture = renderer.CreateTexture(16, 2, ReadOnlySpan<byte>.Empty, 0);
		RenderScene scene = new()
		{
			Opaque = [Surface(1, texture: baseTexture, detail: detailTexture)],
			AlphaTested = [Surface(2, cull: SceneCullMode.CounterClockwise, alphaReference: 16)],
			Transparent = [Surface(3)],
		};
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, scene);
		renderer.EndFrame();
		Assert.Equal(
		[
			.. _frameStart,
			"Transform World",
			"State 22:1",
			"Texture 0:8x4",
			"Texture 1:16x2",
			"TextureStage 0:13:1",
			"TextureStage 0:14:1",
			"Draw TriangleList 1 4 112",
			"State 27:1",
			"State 19:5",
			"State 20:6",
			"State 24:16",
			"Transform World",
			"State 22:3",
			"Texture 0:0x0",
			"Texture 1:0x0",
			"TextureStage 0:13:1",
			"TextureStage 0:14:1",
			"Draw TriangleList 2 4 112",
			"State 14:0",
			"State 24:0",
			"State 19:5",
			"State 20:6",
			"Transform World",
			"State 22:1",
			"Texture 0:0x0",
			"Texture 1:0x0",
			"TextureStage 0:13:1",
			"TextureStage 0:14:1",
			"Draw TriangleList 3 4 112",
			"State 14:1",
			"State 27:0",
			"State 24:0",
			"EndFrame",
		], renderer.Commands);
	}

	/// <summary>
	/// Opaque surfaces draw in their list order and the renderer captures each surface's texture stages.
	/// </summary>
	[Fact]
	public void OpaqueSurfacesDrawInListOrderWithTextures()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ITexture firstTexture = renderer.CreateTexture(8, 4, ReadOnlySpan<byte>.Empty, 0);
		using ITexture secondTexture = renderer.CreateTexture(16, 2, ReadOnlySpan<byte>.Empty, 0);
		RenderScene scene = new()
		{
			Opaque = [Surface(1, texture: firstTexture), Surface(2, texture: secondTexture)],
		};
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, scene);
		renderer.EndFrame();
		Assert.Equal(new[] { "Draw TriangleList 1 4 112", "Draw TriangleList 2 4 112" }, renderer.Commands.Where(command => command.StartsWith("Draw ", StringComparison.Ordinal)));
		Assert.Equal(4, renderer.Textures.Count);
		Assert.Same(firstTexture, renderer.Textures[0].Texture);
		Assert.Null(renderer.Textures[1].Texture);
		Assert.Same(secondTexture, renderer.Textures[2].Texture);
		Assert.Null(renderer.Textures[3].Texture);
	}

	/// <summary>
	/// Blended surfaces are sorted from the farthest to the nearest camera distance, with ties in list order.
	/// </summary>
	[Fact]
	public void TransparentSurfacesSortBackToFront()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RenderScene scene = new()
		{
			Transparent = [Surface(11, z: 1), Surface(33, z: 3), Surface(22, z: 2)],
		};
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, scene);
		renderer.EndFrame();
		Assert.Equal(new[] { "Draw TriangleList 33 4 112", "Draw TriangleList 22 4 112", "Draw TriangleList 11 4 112" }, renderer.Commands.Where(command => command.StartsWith("Draw ", StringComparison.Ordinal)));
	}

	/// <summary>
	/// An indexed triangle list is expanded into the vertex order the indices name.
	/// </summary>
	[Fact]
	public void IndexedSurfaceExpandsVerticesInIndexOrder()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneSurface surface = new()
		{
			Vertices = new byte[] { 0x10, 0x11, 0x20, 0x21, 0x30, 0x31 },
			Stride = 2,
			VertexFormat = 0x112,
			Primitive = PrimitiveType.TriangleList,
			Indices = new ushort[] { 2, 0, 1 },
		};
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, new RenderScene { Opaque = [surface] });
		renderer.EndFrame();
		Assert.Equal(new byte[] { 0x30, 0x31, 0x10, 0x11, 0x20, 0x21 }, renderer.DrawVertices[0]);
		Assert.Contains("Draw TriangleList 1 2 112", renderer.Commands);
	}

	/// <summary>
	/// An indexed triangle strip derives its primitive count from the index count.
	/// </summary>
	[Fact]
	public void IndexedTriangleStripDerivesThePrimitiveCount()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneSurface surface = new()
		{
			Vertices = new byte[8],
			Stride = 2,
			VertexFormat = 0x112,
			Primitive = PrimitiveType.TriangleStrip,
			Indices = new ushort[] { 0, 1, 2, 3 },
		};
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, new RenderScene { Opaque = [surface] });
		renderer.EndFrame();
		Assert.Contains("Draw TriangleStrip 2 2 112", renderer.Commands);
	}

	/// <summary>
	/// A surface's cull mode reaches the renderer as the original render-state value.
	/// </summary>
	[Fact]
	public void SurfaceCullModeReachesTheRenderer()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneRenderer sceneRenderer = new();
		renderer.BeginFrame();
		sceneRenderer.Render(renderer, new RenderScene { Opaque = [Surface(1, cull: SceneCullMode.CounterClockwise)] });
		renderer.EndFrame();
		Assert.Contains("State 22:3", renderer.Commands);
	}

	private static SceneSurface Surface(int primitiveCount, float z = 0, ITexture? texture = null, ITexture? detail = null, SceneCullMode cull = SceneCullMode.None, uint alphaReference = 0) => new()
	{
		Vertices = new byte[primitiveCount * 3 * 4],
		Stride = 4,
		VertexFormat = 0x112,
		Primitive = PrimitiveType.TriangleList,
		PrimitiveCount = primitiveCount,
		Transform = z == 0 ? Matrix4x4.Identity : new Matrix4x4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, z, 1),
		Texture = texture,
		DetailTexture = detail,
		CullMode = cull,
		AlphaReference = alphaReference,
	};

	private static System.Numerics.Matrix4x4 ToRenderMatrix(Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);
}
