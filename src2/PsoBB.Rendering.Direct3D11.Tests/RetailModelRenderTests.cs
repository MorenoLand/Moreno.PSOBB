using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Rendering;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Builds a retail chunk-model archive through the scene surface path when the retail data folder is configured.
/// </summary>
public sealed class RetailModelRenderTests
{
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
			Assert.NotEmpty(surface.Indices);
		});
	}
}
