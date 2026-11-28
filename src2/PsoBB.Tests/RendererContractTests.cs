using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the renderer contract and the render-settings validation without a graphics device.
/// </summary>
public sealed class RendererContractTests
{
	/// <summary>
	/// The default settings describe a valid 1024x768 window.
	/// </summary>
	[Fact]
	public void DefaultSettingsAreValid()
	{
		RenderSettings settings = RenderSettings.Default;
		Assert.Equal(1024, settings.Width);
		Assert.Equal(768, settings.Height);
		Assert.True(settings.Windowed);
		Assert.Equal(0, settings.MultisampleCount);
		Assert.True(settings.VSync);
	}

	/// <summary>
	/// Invalid sizes and sample counts are rejected at construction.
	/// </summary>
	[Theory]
	[InlineData(0, 768, 0)]
	[InlineData(-1, 768, 0)]
	[InlineData(1024, 0, 0)]
	[InlineData(1024, 768, 3)]
	[InlineData(1024, 768, 16)]
	public void InvalidSettingsAreRejected(int width, int height, int samples)
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => new RenderSettings(width, height, true, samples, true));
	}

	/// <summary>
	/// Lighting, texture-stage, world-matrix and resize commands reach the renderer through the contract.
	/// </summary>
	[Fact]
	public void ExtendedFrameCommandsReachTheRenderer()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		renderer.BeginFrame();
		renderer.SetWorldMatrix(3, Matrix4x4.Identity);
		renderer.SetMaterial(Material.Default);
		renderer.SetLight(2, Light.Default);
		renderer.SetLightEnabled(2, true);
		renderer.SetTextureStageState(1, 1, 4);
		renderer.Resize(800, 600);
		renderer.EndFrame();
		Assert.Equal(
		[
			"BeginFrame",
			"WorldMatrix 3",
			"Material",
			"Light 2:Point",
			"LightEnabled 2:True",
			"TextureStage 1:1:4",
			"Resize 800x600",
			"EndFrame",
		], renderer.Commands);
		Assert.Equal(800, renderer.Settings.Width);
		Assert.Equal(600, renderer.Settings.Height);
	}

	/// <summary>
	/// A frame's commands reach the renderer in order and a texture keeps its dimensions.
	/// </summary>
	[Fact]
	public void FrameCommandsReachTheRenderer()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ITexture texture = renderer.CreateTexture(8, 4, ReadOnlySpan<byte>.Empty, 0);
		ReadOnlySpan<byte> vertices = stackalloc byte[12];

		renderer.BeginFrame();
		renderer.SetViewport(0, 0, 1024, 768);
		renderer.Clear(0xFF000000);
		renderer.SetTransform(TransformKind.World, Matrix4x4.Identity);
		renderer.SetRenderState(0x15, 1);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 12, 0x112);
		renderer.EndFrame();

		Assert.Equal(8, texture.Width);
		Assert.Equal(4, texture.Height);
		Assert.Equal(
		[
			"BeginFrame",
			"Viewport 0,0 1024x768",
			"Clear FF000000",
			"Transform World",
			"State 21:1",
			"Texture 0:8x4",
			"Draw TriangleList 1 12 112",
			"EndFrame",
		], renderer.Commands);
	}
}
