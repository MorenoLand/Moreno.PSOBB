using PsoBB.Graphics;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Checks that the renderer creates, clears, presents and releases a real device.
/// </summary>
public sealed class RendererSmokeTests
{
	/// <summary>
	/// Creates a hidden window, renders one cleared frame and disposes the renderer.
	/// </summary>
	[Fact]
	public void RendererClearsAndPresents()
	{
		using HiddenWindow window = new();
		Direct3D11Renderer renderer;
		try
		{
			renderer = new Direct3D11Renderer(window.Handle, new RenderSettings(1, 1, true, 0, false));
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
		using (renderer)
		{
			renderer.BeginFrame();
			renderer.Clear(0xFF102030);
			renderer.EndFrame();
			Assert.Equal(1, renderer.Settings.Width);
			Assert.Equal(1, renderer.Settings.Height);
			Assert.Equal(0, renderer.Settings.MultisampleCount);
		}
	}

	/// <summary>
	/// Renders through an offscreen multisampled target and resolves it to the backbuffer.
	/// </summary>
	[Fact]
	public void RendererPresentsMultisampledFrame()
	{
		using HiddenWindow window = new();
		Direct3D11Renderer renderer;
		try
		{
			renderer = new Direct3D11Renderer(window.Handle, new RenderSettings(8, 8, true, 4, false));
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
		using (renderer)
		{
			if (renderer.Settings.MultisampleCount == 0)
				throw Xunit.Sdk.SkipException.ForSkip("The device does not support four-sample BGRA multisampling.");
			renderer.BeginFrame();
			renderer.Clear(0xFF203040);
			renderer.EndFrame();
			Assert.Equal(4, renderer.Settings.MultisampleCount);
		}
	}

	/// <summary>
	/// Creates, updates and binds a texture and submits a triangle from client vertex bytes.
	/// </summary>
	[Fact]
	public void RendererDrawsVertexBytes()
	{
		using HiddenWindow window = new();
		Direct3D11Renderer renderer;
		try
		{
			renderer = new Direct3D11Renderer(window.Handle, new RenderSettings(1, 1, true, 0, false));
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
		using (renderer)
		using (ITexture texture = renderer.CreateTexture(1, 1, [255, 255, 255, 255], 4))
		{
			byte[] vertices = new byte[3 * 24];
			renderer.BeginFrame();
			renderer.SetViewport(0, 0, 1, 1);
			renderer.Clear(0xFF000000);
			renderer.SetTexture(0, texture);
			texture.Update([255, 255, 255, 255], 4);
			renderer.Draw(PrimitiveType.TriangleList, 1, vertices, 24, 0x142);
			renderer.EndFrame();
		}
	}
}
