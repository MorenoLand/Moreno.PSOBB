using System.Buffers.Binary;
using System.Numerics;
using System.Runtime.InteropServices;
using PsoBB.Graphics;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Checks the fixed-function lighting, texture-stage, vertex-blending, fog, resize and device-loss paths on a real device.
/// </summary>
public sealed class RendererPipelineTests
{
	private const uint FvfXyzNormal = 0x0012;
	private const uint FvfXyzTex1 = 0x0102;
	private const uint FvfXyzBlend3 = 0x000A;
	private const uint FvfXyzBlend4Indices = 0x100C;
	private const uint FvfXyzRhwDiffuse = 0x0044;

	/// <summary>
	/// A cleared frame can be read back in the renderer's BGRA order.
	/// </summary>
	[Fact]
	public void RendererClearCanBeReadBack()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		renderer.BeginFrame();
		renderer.Clear(0xFF336699);
		byte[] pixels = renderer.CaptureBackBuffer();
		renderer.EndFrame();
		Color color = Center(pixels, 8, 8);
		Assert.InRange((int)color.Red, 0x30, 0x36);
		Assert.InRange((int)color.Green, 0x63, 0x69);
		Assert.InRange((int)color.Blue, 0x96, 0x9C);
		Assert.Equal(0xFF, color.Alpha);
	}

	/// <summary>
	/// Directional, point and spot lights each illuminate a normal-facing surface and a disabled light does not.
	/// </summary>
	[Fact]
	public void RendererLightingUsesAllLightTypes()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		renderer.SetRenderState(Direct3D8RenderState.Lighting, 1);
		renderer.SetRenderState(Direct3D8RenderState.SpecularEnable, 0);
		renderer.SetRenderState(Direct3D8RenderState.DiffuseMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.AmbientMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.SpecularMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.EmissiveMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetMaterial(new Material(new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, Vector4.Zero, 0));
		byte[] vertices = Vertices(3, 24, (vertex, index) =>
		{
			float x = index == 0 ? -0.4f : index == 1 ? 0.4f : 0;
			float y = index == 0 ? -0.4f : index == 1 ? -0.4f : 0.4f;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0);
			Write(vertex, 16, 0);
			Write(vertex, 20, -1);
		});
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));

		renderer.SetLight(0, new Light(LightType.Directional, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, Vector3.Zero, new Vector3(0, 0, 1), 0, 0, 0, 0, 0, 0, 0));
		renderer.SetLightEnabled(0, true);
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Color directional = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsWhite(directional), directional.ToString());

		renderer.SetLightEnabled(0, false);
		renderer.SetLight(1, new Light(LightType.Point, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, new Vector3(0, 0, -1), Vector3.Zero, 1, 0, 1, 0, 0, 0, 0));
		renderer.SetLightEnabled(1, true);
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));
		renderer.SetLight(1, new Light(LightType.Point, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, new Vector3(0, 0, -1), Vector3.Zero, 2, 0, 1, 0, 0, 0, 0));
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Color point = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsWhite(point), point.ToString());

		renderer.SetLightEnabled(1, false);
		renderer.SetLight(2, new Light(LightType.Spot, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, new Vector3(0, 0, -1), new Vector3(0, 0, -1), 2, 1, 1, 0, 0, 1, 1));
		renderer.SetLightEnabled(2, true);
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));
		renderer.SetLight(2, new Light(LightType.Spot, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, new Vector3(0, 0, -1), new Vector3(0, 0, 1), 2, 1, 1, 0, 0, 1, 1));
		Draw(renderer, vertices, 24, FvfXyzNormal);
		Color spot = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsWhite(spot), spot.ToString());
	}

	/// <summary>
	/// Specular highlights and normal normalization alter the lit vertex color.
	/// </summary>
	[Fact]
	public void RendererLightingAddsSpecularAndNormalizes()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		renderer.SetRenderState(Direct3D8RenderState.Lighting, 1);
		renderer.SetRenderState(Direct3D8RenderState.DiffuseMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.AmbientMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.SpecularMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.EmissiveMaterialSource, Direct3D8RenderState.MaterialColorMaterial);
		renderer.SetRenderState(Direct3D8RenderState.LocalViewer, 1);
		renderer.SetLight(0, new Light(LightType.Directional, Vector4.Zero, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector3.Zero, new Vector3(0, 0, 1), 0, 0, 0, 0, 0, 0, 0));
		renderer.SetLightEnabled(0, true);
		byte[] bytes = NormalVertices(-1);
		renderer.SetMaterial(new Material(Vector4.Zero, Vector4.Zero, new Vector4(1, 1, 1, 1), Vector4.Zero, 8));
		renderer.SetRenderState(Direct3D8RenderState.SpecularEnable, 1);
		Draw(renderer, bytes, 24, FvfXyzNormal);
		Color specular = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(specular.Red > 100, specular.ToString());
		renderer.SetRenderState(Direct3D8RenderState.SpecularEnable, 0);
		Draw(renderer, bytes, 24, FvfXyzNormal);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));

		renderer.SetRenderState(Direct3D8RenderState.SpecularEnable, 0);
		renderer.SetMaterial(new Material(new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, Vector4.Zero, 0));
		renderer.SetLight(0, new Light(LightType.Directional, new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, Vector3.Zero, new Vector3(0, 0, 1), 0, 0, 0, 0, 0, 0, 0));
		bytes = NormalVertices(-0.5f);
		renderer.SetRenderState(Direct3D8RenderState.NormalizeNormals, 0);
		Draw(renderer, bytes, 24, FvfXyzNormal);
		Color shortened = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.InRange((int)shortened.Red, 120, 136);
		renderer.SetRenderState(Direct3D8RenderState.NormalizeNormals, 1);
		Draw(renderer, bytes, 24, FvfXyzNormal);
		Color normalized = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsWhite(normalized), normalized.ToString());
	}

	/// <summary>
	/// Texture stages one through three bind their textures, apply color operations and honour sampler and transform states.
	/// </summary>
	[Fact]
	public void RendererTextureStagesBlendAndTransform()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		using ITexture red = renderer.CreateTexture(1, 1, [0, 0, 255, 255], 4);
		using ITexture blue = renderer.CreateTexture(1, 1, [255, 0, 0, 255], 4);
		using ITexture green = renderer.CreateTexture(1, 1, [0, 255, 0, 255], 4);
		using ITexture white = renderer.CreateTexture(1, 1, [255, 255, 255, 255], 4);
		byte[] vertices = Vertices(3, 20, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0.5f);
			Write(vertex, 16, 0.5f);
		});
		renderer.SetTexture(0, red);
		renderer.SetTexture(1, blue);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpAdd);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorArgument1, Direct3D8TextureStageState.ArgumentTexture);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorArgument2, Direct3D8TextureStageState.ArgumentCurrent);
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Color magenta = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(magenta.Red > 200 && magenta.Blue > 200 && magenta.Green < 40, magenta.ToString());

		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpSelectArgument1);
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Color onlyBlue = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(onlyBlue.Blue > 200 && onlyBlue.Red < 40, onlyBlue.ToString());

		renderer.SetTexture(2, green);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpAdd);
		renderer.SetTextureStageState(2, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpAdd);
		renderer.SetTextureStageState(2, Direct3D8TextureStageState.ColorArgument1, Direct3D8TextureStageState.ArgumentTexture);
		renderer.SetTextureStageState(2, Direct3D8TextureStageState.ColorArgument2, Direct3D8TextureStageState.ArgumentCurrent);
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Color whiteColor = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(whiteColor.Red > 200 && whiteColor.Green > 200 && whiteColor.Blue > 200, whiteColor.ToString());

		renderer.SetTexture(3, white);
		renderer.SetTextureStageState(3, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpSelectArgument1);
		renderer.SetTextureStageState(3, Direct3D8TextureStageState.ColorArgument1, Direct3D8TextureStageState.ArgumentTexture);
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Assert.True(IsWhite(Center(renderer.CaptureBackBuffer(), 8, 8)));

		using ITexture gradient = renderer.CreateTexture(2, 1, [0, 0, 255, 255, 255, 0, 0, 255], 8);
		renderer.SetTexture(0, gradient);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpDisable);
		renderer.SetTextureStageState(2, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpDisable);
		renderer.SetTextureStageState(3, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpDisable);
		byte[] transformedVertices = Vertices(3, 20, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0.3f);
			Write(vertex, 16, 0.5f);
		});
		Draw(renderer, transformedVertices, 20, FvfXyzTex1);
		Color untransformed = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(untransformed.Red > 200, untransformed.ToString());
		renderer.SetTransform(TransformKind.Texture0, Matrix4x4.CreateScale(2, 1, 1));
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.TextureTransformFlags, Direct3D8TextureStageState.TransformCount2);
		Draw(renderer, transformedVertices, 20, FvfXyzTex1);
		Color transformed = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(transformed.Blue > 200, transformed.ToString());

		renderer.SetTextureStageState(0, Direct3D8TextureStageState.TextureTransformFlags, Direct3D8TextureStageState.TransformDisable);
		byte[] wrappedVertices = Vertices(3, 20, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 1.3f);
			Write(vertex, 16, 0.5f);
		});
		Draw(renderer, wrappedVertices, 20, FvfXyzTex1);
		Assert.True(Center(renderer.CaptureBackBuffer(), 8, 8).Red > 200);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.AddressU, Direct3D8TextureStageState.AddressClamp);
		Draw(renderer, wrappedVertices, 20, FvfXyzTex1);
		Assert.True(Center(renderer.CaptureBackBuffer(), 8, 8).Blue > 200);

		renderer.SetTextureStageState(0, Direct3D8TextureStageState.AddressU, Direct3D8TextureStageState.AddressWrap);
		byte[] filteredVertices = Vertices(3, 20, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0.5f);
			Write(vertex, 16, 0.5f);
		});
		Draw(renderer, filteredVertices, 20, FvfXyzTex1);
		Color pointSample = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(pointSample.Red < 40 || pointSample.Blue < 40, pointSample.ToString());
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.MinificationFilter, Direct3D8TextureStageState.FilterLinear);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.MagnificationFilter, Direct3D8TextureStageState.FilterLinear);
		Draw(renderer, filteredVertices, 20, FvfXyzTex1);
		Color linearSample = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(linearSample.Red > 80 && linearSample.Blue > 80, linearSample.ToString());

		using ITexture gray = renderer.CreateTexture(1, 1, [128, 128, 128, 255], 4);
		renderer.SetTexture(1, gray);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.AddressU, Direct3D8TextureStageState.AddressWrap);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpPremodulate);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.ColorArgument1, Direct3D8TextureStageState.ArgumentDiffuse);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpSelectArgument1);
		renderer.SetTextureStageState(1, Direct3D8TextureStageState.ColorArgument1, Direct3D8TextureStageState.ArgumentCurrent);
		Draw(renderer, wrappedVertices, 20, FvfXyzTex1);
		Color premultiplied = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.InRange((int)premultiplied.Red, 120, 136);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.ColorOp, Direct3D8TextureStageState.ColorOpSelectArgument1);
		Draw(renderer, wrappedVertices, 20, FvfXyzTex1);
		Assert.True(IsWhite(Center(renderer.CaptureBackBuffer(), 8, 8)));
	}

	/// <summary>
	/// A multisampled offscreen target can be resolved and read back.
	/// </summary>
	[Fact]
	public void RendererReadsBackMultisampledFrame()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 4, false));
		if (renderer.Settings.MultisampleCount == 0)
			throw Xunit.Sdk.SkipException.ForSkip("The device does not support four-sample BGRA multisampling.");
		renderer.BeginFrame();
		renderer.Clear(0xFF336699);
		byte[] pixels = renderer.CaptureBackBuffer();
		renderer.EndFrame();
		Color color = Center(pixels, 8, 8);
		Assert.InRange((int)color.Red, 0x30, 0x36);
		Assert.InRange((int)color.Green, 0x63, 0x69);
		Assert.InRange((int)color.Blue, 0x96, 0x9C);
	}

	/// <summary>
	/// Alpha stage operations reach the blend unit.
	/// </summary>
	[Fact]
	public void RendererTextureAlphaOperationsBlend()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		using ITexture halfWhite = renderer.CreateTexture(1, 1, [255, 255, 255, 128], 4);
		renderer.SetTexture(0, halfWhite);
		renderer.SetRenderState(Direct3D8RenderState.AlphaBlendEnable, 1);
		renderer.SetRenderState(Direct3D8RenderState.SourceBlend, 5);
		renderer.SetRenderState(Direct3D8RenderState.DestinationBlend, 6);
		byte[] vertices = FullScreenTextureVertices();
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Color blended = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.InRange((int)blended.Red, 120, 136);
		renderer.SetTextureStageState(0, Direct3D8TextureStageState.AlphaArgument1, Direct3D8TextureStageState.ArgumentDiffuse);
		Draw(renderer, vertices, 20, FvfXyzTex1);
		Assert.True(IsWhite(Center(renderer.CaptureBackBuffer(), 8, 8)));
	}

	/// <summary>
	/// Weighted matrices, indexed matrices and tweening all move the same triangle.
	/// </summary>
	[Fact]
	public void RendererVertexBlendingUsesAllWorldMatrices()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		renderer.SetTransform(TransformKind.World, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.World1, Matrix4x4.CreateTranslation(2, 0, 0));
		renderer.SetTransform(TransformKind.World2, Matrix4x4.CreateTranslation(2, 0, 0));
		renderer.SetTransform(TransformKind.World3, Matrix4x4.CreateTranslation(2, 0, 0));
		renderer.SetWorldMatrix(5, Matrix4x4.CreateTranslation(2, 0, 0));
		renderer.SetRenderState(Direct3D8RenderState.VertexBlend, Direct3D8RenderState.VertexBlendThreeWeights);
		byte[] weighted = Vertices(3, 24, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 1);
			Write(vertex, 16, 0);
			Write(vertex, 20, 0);
		});
		Draw(renderer, weighted, 24, FvfXyzBlend3);
		Assert.True(IsWhite(Center(renderer.CaptureBackBuffer(), 8, 8)));
		byte[] secondMatrix = Vertices(3, 24, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0);
			Write(vertex, 16, 1);
			Write(vertex, 20, 0);
		});
		Draw(renderer, secondMatrix, 24, FvfXyzBlend3);
		Color second = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsBlack(second), second.ToString());
		Draw(renderer, WeightedVertices(0, 0, 1), 24, FvfXyzBlend3);
		Color third = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsBlack(third), third.ToString());
		Draw(renderer, WeightedVertices(0, 0, 0), 24, FvfXyzBlend3);
		Color fourth = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(IsBlack(fourth), fourth.ToString());

		renderer.SetRenderState(Direct3D8RenderState.IndexedVertexBlendEnable, 1);
		byte[] indexed = Vertices(3, 28, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0);
			Write(vertex, 16, 0);
			Write(vertex, 20, 0);
			BinaryPrimitives.WriteUInt32LittleEndian(vertex[24..], 0x01000000);
		});
		Draw(renderer, indexed, 28, FvfXyzBlend4Indices);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));
		byte[] paletteIndex = Vertices(3, 28, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0);
			Write(vertex, 16, 0);
			Write(vertex, 20, 0);
			BinaryPrimitives.WriteUInt32LittleEndian(vertex[24..], 0x05000000);
		});
		Draw(renderer, paletteIndex, 28, FvfXyzBlend4Indices);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));
		byte[] firstIndex = Vertices(3, 28, (vertex, index) =>
		{
			float x = index == 0 ? -1 : index == 1 ? 3 : -1;
			float y = index == 0 ? -1 : index == 1 ? -1 : 3;
			Write(vertex, 0, x);
			Write(vertex, 4, y);
			Write(vertex, 8, 0.5f);
			Write(vertex, 12, 0);
			Write(vertex, 16, 0);
			Write(vertex, 20, 0);
			BinaryPrimitives.WriteUInt32LittleEndian(vertex[24..], 0);
		});
		Draw(renderer, firstIndex, 28, FvfXyzBlend4Indices);
		Assert.True(IsWhite(Center(renderer.CaptureBackBuffer(), 8, 8)));

		renderer.SetRenderState(Direct3D8RenderState.IndexedVertexBlendEnable, 0);
		renderer.SetRenderState(Direct3D8RenderState.VertexBlend, Direct3D8RenderState.VertexBlendTweening);
		renderer.SetRenderState(Direct3D8RenderState.TweenFactor, BitConverter.SingleToUInt32Bits(1));
		Draw(renderer, weighted, 24, FvfXyzBlend3);
		Assert.True(IsBlack(Center(renderer.CaptureBackBuffer(), 8, 8)));
	}

	/// <summary>
	/// Transformed vertices derive their fog depth from the reciprocal RHW and vertex fog uses the same factor.
	/// </summary>
	[Fact]
	public void RendererFogUsesReciprocalRhw()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		renderer.SetRenderState(Direct3D8RenderState.FogEnable, 1);
		renderer.SetRenderState(Direct3D8RenderState.FogColor, 0xFFFF0000);
		renderer.SetRenderState(Direct3D8RenderState.FogTableMode, 3);
		renderer.SetRenderState(Direct3D8RenderState.FogStart, BitConverter.SingleToUInt32Bits(0));
		renderer.SetRenderState(Direct3D8RenderState.FogEnd, BitConverter.SingleToUInt32Bits(2));
		Draw(renderer, RhwVertices(1), 20, FvfXyzRhwDiffuse);
		Color halfFog = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.InRange((int)halfFog.Red, 120, 136);
		Assert.InRange((int)halfFog.Green, 120, 136);
		Draw(renderer, RhwVertices(0.5f), 20, FvfXyzRhwDiffuse);
		Color farFog = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.True(farFog.Red > 200, farFog.ToString());
		renderer.SetRenderState(Direct3D8RenderState.FogTableMode, 0);
		renderer.SetRenderState(Direct3D8RenderState.FogVertexMode, 3);
		Draw(renderer, RhwVertices(1), 20, FvfXyzRhwDiffuse);
		Color vertexFog = Center(renderer.CaptureBackBuffer(), 8, 8);
		Assert.InRange((int)vertexFog.Red, 120, 136);
		Assert.InRange((int)vertexFog.Green, 120, 136);
	}

	/// <summary>
	/// Resizing rebuilds the swap-chain buffers, depth buffer and multisampled target.
	/// </summary>
	[Fact]
	public void RendererResizeRebuildsTargets()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 4, false));
		renderer.BeginFrame();
		renderer.Clear(0xFFFF0000);
		Assert.True(Center(renderer.CaptureBackBuffer(), 8, 8).Red > 200);
		renderer.EndFrame();
		renderer.Resize(16, 12);
		Assert.Equal(16, renderer.Settings.Width);
		Assert.Equal(12, renderer.Settings.Height);
		renderer.BeginFrame();
		renderer.Clear(0xFF00FF00);
		byte[] pixels = renderer.CaptureBackBuffer();
		renderer.EndFrame();
		Assert.True(Center(pixels, 16, 12).Green > 200);
	}

	/// <summary>
	/// A device recovery recreates the renderer-owned targets and every retained texture.
	/// </summary>
	[Fact]
	public void RendererRecoversFromDeviceLoss()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		ConfigureUnlit(renderer);
		using ITexture red = renderer.CreateTexture(1, 1, [0, 0, 255, 255], 4);
		renderer.SetTexture(0, red);
		Draw(renderer, FullScreenTextureVertices(), 20, FvfXyzTex1);
		Assert.True(Center(renderer.CaptureBackBuffer(), 8, 8).Red > 200);
		renderer.RecoverFromDeviceLoss();
		renderer.BeginFrame();
		renderer.Clear(0xFF000000);
		renderer.Draw(PrimitiveType.TriangleList, 1, FullScreenTextureVertices(), 20, FvfXyzTex1);
		byte[] pixels = renderer.CaptureBackBuffer();
		renderer.EndFrame();
		Assert.True(Center(pixels, 8, 8).Red > 200);
		Assert.Equal(8, renderer.Settings.Width);
	}

	/// <summary>
	/// Out-of-range stages, matrices and lights are rejected at the renderer boundary.
	/// </summary>
	[Fact]
	public void RendererRejectsOutOfRangeState()
	{
		using HiddenWindow window = new();
		using Direct3D11Renderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 0, false));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetTexture(4, null));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetTextureStageState(4, Direct3D8TextureStageState.ColorOp, 4));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetTextureStageState(0, 99, 4));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetWorldMatrix(256, Matrix4x4.Identity));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetLight(8, Light.Default));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.SetLightEnabled(-1, true));
		Assert.Throws<ArgumentOutOfRangeException>(() => renderer.Resize(0, 8));
	}

	private static Direct3D11Renderer CreateRenderer(HiddenWindow window, RenderSettings settings)
	{
		try
		{
			return new Direct3D11Renderer(window.Handle, settings);
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
	}

	private static void ConfigureUnlit(Direct3D11Renderer renderer)
	{
		renderer.SetRenderState(Direct3D8RenderState.CullMode, Direct3D8RenderState.CullNone);
		renderer.SetRenderState(Direct3D8RenderState.ZEnable, 0);
		renderer.SetRenderState(Direct3D8RenderState.Lighting, 0);
		renderer.SetMaterial(new Material(new Vector4(1, 1, 1, 1), Vector4.Zero, Vector4.Zero, Vector4.Zero, 0));
	}

	private static void Draw(Direct3D11Renderer renderer, byte[] vertices, int stride, uint format)
	{
		renderer.BeginFrame();
		renderer.Clear(0xFF000000);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, stride, format);
	}

	private static byte[] WeightedVertices(float weight0, float weight1, float weight2) => Vertices(3, 24, (vertex, index) =>
	{
		float x = index == 0 ? -1 : index == 1 ? 3 : -1;
		float y = index == 0 ? -1 : index == 1 ? -1 : 3;
		Write(vertex, 0, x);
		Write(vertex, 4, y);
		Write(vertex, 8, 0.5f);
		Write(vertex, 12, weight0);
		Write(vertex, 16, weight1);
		Write(vertex, 20, weight2);
	});

	private static byte[] NormalVertices(float normalZ) => Vertices(3, 24, (vertex, index) =>
	{
		float x = index == 0 ? -0.4f : index == 1 ? 0.4f : 0;
		float y = index == 0 ? -0.4f : index == 1 ? -0.4f : 0.4f;
		Write(vertex, 0, x);
		Write(vertex, 4, y);
		Write(vertex, 8, 0.5f);
		Write(vertex, 12, 0);
		Write(vertex, 16, 0);
		Write(vertex, 20, normalZ);
	});

	private static byte[] FullScreenTextureVertices() => Vertices(3, 20, (vertex, index) =>
	{
		float x = index == 0 ? -1 : index == 1 ? 3 : -1;
		float y = index == 0 ? -1 : index == 1 ? -1 : 3;
		Write(vertex, 0, x);
		Write(vertex, 4, y);
		Write(vertex, 8, 0.5f);
		Write(vertex, 12, 0.5f);
		Write(vertex, 16, 0.5f);
	});

	private static byte[] RhwVertices(float reciprocalW) => Vertices(3, 20, (vertex, index) =>
	{
		float x = index == 0 ? -1 : index == 1 ? 17 : -1;
		float y = index == 0 ? -1 : index == 1 ? -1 : 17;
		Write(vertex, 0, x);
		Write(vertex, 4, y);
		Write(vertex, 8, 0.5f);
		Write(vertex, 12, reciprocalW);
		BinaryPrimitives.WriteUInt32LittleEndian(vertex[16..], 0xFF00FF00);
	});

	private static byte[] Vertices(int count, int stride, Action<Span<byte>, int> write)
	{
		byte[] data = new byte[count * stride];
		for (int index = 0; index < count; index++)
			write(data.AsSpan(index * stride, stride), index);
		return data;
	}

	private static void Write(Span<byte> vertex, int offset, float value) => MemoryMarshal.Write(vertex[offset..], in value);

	private static Color Center(byte[] pixels, int width, int height)
	{
		int offset = ((height / 2) * width + width / 2) * 4;
		return new Color(pixels[offset + 2], pixels[offset + 1], pixels[offset], pixels[offset + 3]);
	}

	private static bool IsBlack(Color color) => color.Red < 20 && color.Green < 20 && color.Blue < 20;

	private static bool IsWhite(Color color) => color.Red > 230 && color.Green > 230 && color.Blue > 230;

	private readonly record struct Color(byte Red, byte Green, byte Blue, byte Alpha);
}
