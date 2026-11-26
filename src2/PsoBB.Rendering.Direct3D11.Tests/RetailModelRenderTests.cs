using System.Buffers.Binary;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Imaging;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Rendering;
using Xunit.Abstractions;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Builds and renders retail chunk-model archives through the scene surface path when the retail data folder is configured.
/// </summary>
public sealed class RetailModelRenderTests
{
	private const int RenderSize = 128;
	private readonly ITestOutputHelper _output;

	public RetailModelRenderTests(ITestOutputHelper output) => _output = output;

	/// <summary>
	/// Parses <c>bm_ene_astark.bml</c> and verifies that its chunk strips become drawable scene surfaces.
	/// </summary>
	[Fact]
	public void RetailChunkModelBuildsGeometry()
	{
		string? folder = Environment.GetEnvironmentVariable("PSOBB_RETAIL_DATA");
		if (string.IsNullOrWhiteSpace(folder))
			return;
		string path = Path.Combine(folder, "data", "bm_ene_astark.bml");
		if (!File.Exists(path))
			return;
		BmlArchive archive = BmlArchive.Parse(File.ReadAllBytes(path));
		NinjaModel model = archive.Files.Select(file => file.Model).First(candidate => candidate is not null)!;
		using ModelRenderer models = new();
		SceneCamera camera = new(new Vector3(0f, 40f, 180f), new Vector3(0f, 30f, 0f), new Vector3(0f, 1f, 0f), SceneCamera.DefaultFieldOfViewAngle, SceneCamera.DefaultFieldOfViewAspect, 1f, 21000f);
		RenderScene scene = models.BuildScene(model, Matrix4x4.Identity, camera);
		SceneSurface[] surfaces = [.. scene.Opaque, .. scene.AlphaTested, .. scene.Transparent];
		Assert.NotEmpty(surfaces);
		Assert.All(surfaces, surface =>
		{
			Assert.Equal(0x152u, surface.VertexFormat);
			Assert.Equal(36, surface.Stride);
			Assert.True(surface.Indices.Length > 0);
		});
	}

	/// <summary>
	/// The retail astark chunk model binds its NJTL texture, keeps its translucent strips and renders non-black pixels.
	/// </summary>
	[Fact]
	public void RetailAstarkRendersNonBlackPixels()
	{
		string? folder = Environment.GetEnvironmentVariable("PSOBB_RETAIL_DATA");
		if (string.IsNullOrWhiteSpace(folder))
			return;
		string path = Path.Combine(folder, "data", "bm_ene_astark.bml");
		if (!File.Exists(path))
			return;
		BmlFile file = BmlArchive.Parse(File.ReadAllBytes(path)).Files.First(candidate => candidate.Model is not null);
		using HiddenWindow window = new();
		Direct3D11Renderer renderer = CreateRenderer(window);
		using (renderer)
		using (TextureCache cache = new(renderer))
		{
			foreach (XvmTexture texture in file.Textures)
				cache.Register(texture);
			using ModelRenderer models = new(cache);
			IReadOnlyList<ModelSurface> built = models.Build(file.Model!, Matrix4x4.Identity);
			RenderScene scene = models.BuildScene(file.Model!, Matrix4x4.Identity, Frame(built), null, 0.0f, References(file));
			Assert.Equal(238, built.Count);
			Assert.Empty(scene.Opaque);
			Assert.Empty(scene.AlphaTested);
			Assert.Equal(238, scene.Transparent.Count);
			Assert.All(scene.Transparent, surface => Assert.NotNull(surface.Texture));
			int painted = Render(renderer, scene);
			_output.WriteLine($"astark opaque={scene.Opaque.Count} alpha={scene.AlphaTested.Count} transparent={scene.Transparent.Count} painted={painted}");
			Assert.True(painted > 500, $"opaque={scene.Opaque.Count} alpha={scene.AlphaTested.Count} transparent={scene.Transparent.Count} painted={painted}");
		}
	}

	/// <summary>
	/// The retail plAbdy00 player body splits into opaque and blended strips and renders non-black pixels.
	/// </summary>
	[Fact]
	public void RetailPlayerBodyRendersNonBlackPixels()
	{
		string? folder = Environment.GetEnvironmentVariable("PSOBB_RETAIL_DATA");
		if (string.IsNullOrWhiteSpace(folder))
			return;
		string path = Path.Combine(folder, "data", "plAnj.bml");
		if (!File.Exists(path))
			return;
		BmlFile? file = BmlArchive.Parse(File.ReadAllBytes(path)).Files.FirstOrDefault(candidate => candidate.Name == "plAbdy00.nj" && candidate.Model is not null);
		if (file is null)
			return;
		using HiddenWindow window = new();
		Direct3D11Renderer renderer = CreateRenderer(window);
		using (renderer)
		using (TextureCache cache = new(renderer))
		{
			using ModelRenderer models = new(cache);
			IReadOnlyList<ModelSurface> built = models.Build(file.Model!, Matrix4x4.Identity);
			RenderScene scene = models.BuildScene(file.Model!, Matrix4x4.Identity, Frame(built), null, 0.0f, References(file));
			Assert.Equal(142, built.Count);
			Assert.Equal(141, scene.Opaque.Count);
			Assert.Empty(scene.AlphaTested);
			Assert.Single(scene.Transparent);
			int painted = Render(renderer, scene);
			_output.WriteLine($"plAbdy00 opaque={scene.Opaque.Count} alpha={scene.AlphaTested.Count} transparent={scene.Transparent.Count} painted={painted}");
			Assert.True(painted > 1000, $"opaque={scene.Opaque.Count} alpha={scene.AlphaTested.Count} transparent={scene.Transparent.Count} painted={painted}");
		}
	}

	private static Direct3D11Renderer CreateRenderer(HiddenWindow window)
	{
		try
		{
			return new Direct3D11Renderer(window.Handle, new RenderSettings(RenderSize, RenderSize, true, 0, false));
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
	}

	private static SceneCamera Frame(IReadOnlyList<ModelSurface> surfaces)
	{
		float minX = float.MaxValue, minY = float.MaxValue, minZ = float.MaxValue;
		float maxX = float.MinValue, maxY = float.MinValue, maxZ = float.MinValue;
		foreach (ModelSurface surface in surfaces)
		{
			ReadOnlySpan<byte> data = surface.VertexBuffer.Data.Span;
			int count = surface.VertexBuffer.Vertices.Count;
			for (int index = 0; index < count; index++)
			{
				int offset = index * surface.VertexBuffer.Stride;
				Vector3 position = new(
					BinaryPrimitives.ReadSingleLittleEndian(data[offset..]),
					BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 4)..]),
					BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 8)..]));
				minX = MathF.Min(minX, position.X);
				minY = MathF.Min(minY, position.Y);
				minZ = MathF.Min(minZ, position.Z);
				maxX = MathF.Max(maxX, position.X);
				maxY = MathF.Max(maxY, position.Y);
				maxZ = MathF.Max(maxZ, position.Z);
			}
		}
		if (minX > maxX)
			return SceneCamera.Default;
		Vector3 center = new((minX + maxX) * 0.5f, (minY + maxY) * 0.5f, (minZ + maxZ) * 0.5f);
		float radius = 0.5f * new Vector3(maxX - minX, maxY - minY, maxZ - minZ).Length();
		float distance = MathF.Max(radius, 1.0f) / MathF.Tan(SceneCamera.Default.VerticalFieldOfView * 0.5f) * 1.25f;
		return new SceneCamera(
			new Vector3(center.X, center.Y, center.Z + distance),
			center,
			new Vector3(0f, 1f, 0f),
			SceneCamera.DefaultFieldOfViewAngle,
			SceneCamera.DefaultFieldOfViewAspect,
			1.0f,
			21000.0f);
	}

	private static NinjaTextureReference[] References(BmlFile file)
	{
		if (file.TextureList is null)
			return [];
		NinjaTextureReference[] references = new NinjaTextureReference[file.TextureList.Names.Count];
		for (int index = 0; index < references.Length; index++)
		{
			if (index < file.Textures.Count)
			{
				XvmTexture texture = file.Textures[index];
				references[index] = new NinjaTextureReference(file.TextureList.Names[index], texture.GlobalIndex, texture.Width, texture.Height);
			}
			else
			{
				references[index] = new NinjaTextureReference(file.TextureList.Names[index], 0, 0, 0);
			}
		}
		return references;
	}

	private static int Render(Direct3D11Renderer renderer, RenderScene scene)
	{
		renderer.BeginFrame();
		renderer.Clear(0xFF000000);
		renderer.SetRenderState(RenderStateId.Lighting, 1);
		renderer.SetRenderState(RenderStateId.SpecularEnable, 0);
		renderer.SetRenderState(RenderStateId.Ambient, 0xFFFFFFFF);
		renderer.SetRenderState(RenderStateId.DiffuseMaterialSource, RenderStateId.MaterialColorDiffuse);
		renderer.SetRenderState(RenderStateId.AmbientMaterialSource, RenderStateId.MaterialColorMaterial);
		renderer.SetMaterial(new Material(System.Numerics.Vector4.Zero, new System.Numerics.Vector4(1f, 1f, 1f, 1f), System.Numerics.Vector4.Zero, System.Numerics.Vector4.Zero, 0f));
		new SceneRenderer().Render(renderer, scene);
		byte[] pixels = renderer.CaptureBackBuffer();
		renderer.EndFrame();
		int painted = 0;
		for (int offset = 0; offset < pixels.Length; offset += 4)
		{
			if (pixels[offset] > 8 || pixels[offset + 1] > 8 || pixels[offset + 2] > 8)
				painted++;
		}
		return painted;
	}
}
