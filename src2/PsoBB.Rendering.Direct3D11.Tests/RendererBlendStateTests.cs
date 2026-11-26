using PsoBB.Graphics;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Checks that the Direct3D 11 state mapping accepts the colour blend factors the map draw submits.
/// </summary>
public sealed class RendererBlendStateTests
{
	/// <summary>
	/// A source-colour and destination-alpha pair becomes a valid blend state and draws.
	/// </summary>
	[Fact]
	public void MapAlphaBlendFactorsCreateABlendState()
	{
		using HiddenWindow window = new();
		Direct3D11Renderer renderer;
		try
		{
			renderer = new Direct3D11Renderer(window.Handle, new RenderSettings(8, 8, true, 0, false));
		}
		catch (Direct3D11UnavailableException exception)
		{
			throw Xunit.Sdk.SkipException.ForSkip(exception.Message);
		}
		using (renderer)
		{
			renderer.BeginFrame();
			renderer.Clear(0xFF000000);
			renderer.SetRenderState(RenderStateId.SourceBlend, 4);
			renderer.SetRenderState(RenderStateId.DestinationBlend, 5);
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
			renderer.Draw(PrimitiveType.TriangleList, 1, new byte[3 * 24], 24, 0x142);
			renderer.EndFrame();
		}
	}
}
