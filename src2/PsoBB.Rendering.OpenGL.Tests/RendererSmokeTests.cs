using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Graphics;
using static PsoBB.Rendering.OpenGL.Direct3D8RenderState;

namespace PsoBB.Rendering.OpenGL.Tests;

/// <summary>
/// Checks that the renderer creates, clears, presents and releases a real OpenGL context.
/// </summary>
public sealed class RendererSmokeTests
{
	/// <summary>
	/// Creates a hidden SDL window, renders one cleared frame and disposes the renderer.
	/// </summary>
	[OpenGLFact]
	public void RendererClearsAndPresents()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(1, 1, true, 0, false));
		renderer.BeginFrame();
		renderer.Clear(0xFF102030);
		Assert.Equal(0xFF102030u, renderer.ReadBackbufferPixel(0, 0));
		renderer.EndFrame();
		Assert.Equal(1, renderer.Settings.Width);
		Assert.Equal(1, renderer.Settings.Height);
		Assert.Equal(0, renderer.Settings.MultisampleCount);
	}

	/// <summary>
	/// Renders through an offscreen multisampled target and resolves it to the backbuffer.
	/// </summary>
	[OpenGLFact]
	public void RendererPresentsMultisampledFrame()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(8, 8, true, 4, false));
		if (renderer.Settings.MultisampleCount == 0)
			throw Xunit.Sdk.SkipException.ForSkip("The OpenGL context does not support four-sample RGBA multisampling.");
		renderer.BeginFrame();
		renderer.Clear(0xFF203040);
		renderer.EndFrame();
		Assert.Equal(0xFF203040u, renderer.ReadBackbufferPixel(4, 4));
		Assert.Equal(4, renderer.Settings.MultisampleCount);
	}

	/// <summary>
	/// Creates, updates and binds a padded texture and submits triangle lists and fans from client vertex bytes.
	/// </summary>
	[OpenGLFact]
	public void RendererDrawsVertexBytes()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(16, 16, true, 0, false));
		byte[] pixels = new byte[2 * 12 * 2];
		for (int row = 0; row < 2; row++)
			for (int column = 0; column < 2; column++)
				BinaryPrimitives.WriteUInt32LittleEndian(pixels.AsSpan(row * 12 + column * 4), 0xFFFFFFFF);
		using ITexture texture = renderer.CreateTexture(2, 2, pixels, 12);
		texture.Update(pixels, 12);
		renderer.SetTransform(TransformKind.World, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.View, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Projection, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Texture0, Matrix4x4.Identity);
		renderer.SetRenderState(AlphaBlendEnable, 1);
		renderer.SetRenderState(SourceBlend, BlendSourceAlpha);
		renderer.SetRenderState(DestinationBlend, BlendInverseSourceAlpha);
		renderer.SetRenderState(CullMode, CullCounterClockwise);
		renderer.SetRenderState(ZEnable, 1);
		renderer.SetRenderState(ZWriteEnable, 1);
		renderer.SetRenderState(ZFunction, ComparisonLessEqual);
		renderer.SetRenderState(AlphaTestEnable, 0);
		byte[] vertices = new byte[3 * 24];
		WriteVertex(vertices.AsSpan(0, 24), -1, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(24, 24), 3, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(48, 24), -1, 3, 0.5f, 0xFF203040, 0.5f, 0.5f);
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, 16, 16);
		renderer.Clear(0xFF000000);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 24, 0x142);
		renderer.Draw(PrimitiveType.TriangleFan, 1, vertices, 24, 0x142);
		Assert.Equal(0xFF203040u, renderer.ReadBackbufferPixel(8, 8));
		renderer.SetTexture(0, null);
		renderer.EndFrame();
	}

	/// <summary>
	/// Samples the first texture row at the top of the screen, matching the Direct3D texture coordinate convention.
	/// </summary>
	[OpenGLFact]
	public void RendererSamplesTextureRowsInDirect3DOrder()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(16, 16, true, 0, false));
		byte[] pixels = new byte[16 * 4];
		for (int row = 0; row < 8; row++)
			BinaryPrimitives.WriteUInt32LittleEndian(pixels.AsSpan(row * 4), 0xFF0000FF);
		for (int row = 8; row < 16; row++)
			BinaryPrimitives.WriteUInt32LittleEndian(pixels.AsSpan(row * 4), 0xFFFF0000);
		using ITexture texture = renderer.CreateTexture(1, 16, pixels, 4);
		renderer.SetTransform(TransformKind.World, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.View, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Projection, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Texture0, Matrix4x4.Identity);
		renderer.SetRenderState(AlphaBlendEnable, 0);
		renderer.SetRenderState(CullMode, CullNone);
		renderer.SetRenderState(ZEnable, 0);
		byte[] vertices = new byte[6 * 24];
		WriteVertex(vertices.AsSpan(0, 24), -1, 1, 0.5f, 0xFFFFFFFF, 0, 0);
		WriteVertex(vertices.AsSpan(24, 24), -1, -1, 0.5f, 0xFFFFFFFF, 0, 1);
		WriteVertex(vertices.AsSpan(48, 24), 1, 1, 0.5f, 0xFFFFFFFF, 1, 0);
		WriteVertex(vertices.AsSpan(72, 24), 1, 1, 0.5f, 0xFFFFFFFF, 1, 0);
		WriteVertex(vertices.AsSpan(96, 24), -1, -1, 0.5f, 0xFFFFFFFF, 0, 1);
		WriteVertex(vertices.AsSpan(120, 24), 1, -1, 0.5f, 0xFFFFFFFF, 1, 1);
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, 16, 16);
		renderer.Clear(0xFF000000);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 2, vertices, 24, 0x142);
		Assert.Equal(0xFF0000FFu, renderer.ReadBackbufferPixel(8, 14));
		Assert.Equal(0xFFFF0000u, renderer.ReadBackbufferPixel(8, 1));
		renderer.EndFrame();
	}

	/// <summary>
	/// Applies a row-major world translation to client vertices before rasterising them.
	/// </summary>
	[OpenGLFact]
	public void RendererAppliesRowMajorTransforms()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(16, 16, true, 0, false));
		using ITexture texture = renderer.CreateTexture(1, 1, [255, 255, 255, 255], 4);
		renderer.SetTransform(TransformKind.World, Matrix4x4.CreateTranslation(0.5f, 0, 0));
		renderer.SetTransform(TransformKind.View, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Projection, Matrix4x4.Identity);
		renderer.SetTransform(TransformKind.Texture0, Matrix4x4.Identity);
		renderer.SetRenderState(AlphaBlendEnable, 0);
		renderer.SetRenderState(CullMode, CullNone);
		renderer.SetRenderState(ZEnable, 0);
		byte[] vertices = new byte[3 * 24];
		WriteVertex(vertices.AsSpan(0, 24), -1, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(24, 24), 0, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(48, 24), 0, 1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		renderer.BeginFrame();
		renderer.Clear(0xFF000000);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 24, 0x142);
		Assert.Equal(0xFF000000u, renderer.ReadBackbufferPixel(2, 8));
		Assert.Equal(0xFF203040u, renderer.ReadBackbufferPixel(8, 8));
		Assert.Equal(0xFF000000u, renderer.ReadBackbufferPixel(14, 8));
		renderer.EndFrame();
	}

	/// <summary>
	/// Places pre-transformed screen-space vertices with the Direct3D top-left origin.
	/// </summary>
	[OpenGLFact]
	public void RendererDrawsPreTransformedVertices()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(16, 16, true, 0, false));
		using ITexture texture = renderer.CreateTexture(1, 1, [255, 255, 255, 255], 4);
		renderer.SetRenderState(AlphaBlendEnable, 0);
		renderer.SetRenderState(CullMode, CullNone);
		renderer.SetRenderState(ZEnable, 0);
		byte[] vertices = new byte[3 * 28];
		WritePreTransformedVertex(vertices.AsSpan(0, 28), 0, 0, 0xFF203040, 0, 0);
		WritePreTransformedVertex(vertices.AsSpan(28, 28), 0, 16, 0xFF203040, 0, 1);
		WritePreTransformedVertex(vertices.AsSpan(56, 28), 16, 0, 0xFF203040, 1, 0);
		renderer.BeginFrame();
		renderer.Clear(0xFF000000);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 28, 0x144);
		Assert.Equal(0xFF203040u, renderer.ReadBackbufferPixel(2, 13));
		Assert.Equal(0xFF000000u, renderer.ReadBackbufferPixel(13, 2));
		renderer.EndFrame();
	}

	/// <summary>
	/// Applies the viewport and scissor in Direct3D's top-left coordinates while clearing the whole target.
	/// </summary>
	[OpenGLFact]
	public void RendererViewportAndScissorUseTheTopLeftOrigin()
	{
		using SdlHiddenWindow window = CreateWindow();
		using OpenGLRenderer renderer = CreateRenderer(window, new RenderSettings(16, 16, true, 0, false));
		using ITexture texture = renderer.CreateTexture(1, 1, [255, 255, 255, 255], 4);
		renderer.SetRenderState(AlphaBlendEnable, 0);
		renderer.SetRenderState(CullMode, CullNone);
		renderer.SetRenderState(ZEnable, 0);
		renderer.SetRenderState(ScissorTestEnable, 1);
		byte[] vertices = new byte[3 * 24];
		WriteVertex(vertices.AsSpan(0, 24), -1, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(24, 24), 3, -1, 0.5f, 0xFF203040, 0.5f, 0.5f);
		WriteVertex(vertices.AsSpan(48, 24), -1, 3, 0.5f, 0xFF203040, 0.5f, 0.5f);
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, 8, 8);
		renderer.Clear(0xFF000000);
		renderer.SetTexture(0, texture);
		renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 24, 0x142);
		Assert.Equal(0xFF203040u, renderer.ReadBackbufferPixel(2, 13));
		Assert.Equal(0xFF000000u, renderer.ReadBackbufferPixel(13, 2));
		renderer.Clear(0xFF102030);
		Assert.Equal(0xFF102030u, renderer.ReadBackbufferPixel(13, 2));
		renderer.EndFrame();
	}

	private static void WriteVertex(Span<byte> destination, float x, float y, float z, uint color, float u, float v)
	{
		BinaryPrimitives.WriteSingleLittleEndian(destination, x);
		BinaryPrimitives.WriteSingleLittleEndian(destination[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[8..], z);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[12..], color);
		BinaryPrimitives.WriteSingleLittleEndian(destination[16..], u);
		BinaryPrimitives.WriteSingleLittleEndian(destination[20..], v);
	}

	private static void WritePreTransformedVertex(Span<byte> destination, float x, float y, uint color, float u, float v)
	{
		BinaryPrimitives.WriteSingleLittleEndian(destination, x);
		BinaryPrimitives.WriteSingleLittleEndian(destination[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[8..], 0.5f);
		BinaryPrimitives.WriteSingleLittleEndian(destination[12..], 1);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[16..], color);
		BinaryPrimitives.WriteSingleLittleEndian(destination[20..], u);
		BinaryPrimitives.WriteSingleLittleEndian(destination[24..], v);
	}

	private static SdlHiddenWindow CreateWindow()
	{
		if (!SdlHiddenWindow.TryCreate(out SdlHiddenWindow? window, out string? reason))
			throw new InvalidOperationException($"The OpenGL smoke test window is unavailable despite the discovery probe: {reason}");
		return window;
	}

	private static OpenGLRenderer CreateRenderer(SdlHiddenWindow window, RenderSettings settings) => new(window.Handle, settings);
}
