using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// Runs the ported scene 1 publisher-logo screen over a constructed client host.
/// </summary>
public static class Scene1Preview
{
	/// <summary>
	/// Loads the logo archive, runs the scene timeline and presents until it finishes or the window closes.
	/// </summary>
	/// <param name="host">The host that supplies the renderer, input, clock and file system.</param>
	/// <param name="pump">Returns whether the host window is still open.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The data archive or logo archive is missing.</exception>
	public static void Run(ClientHost host, Func<bool> pump, Action<int>? capture = null)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using TextureCache textures = new(host.Renderer);
		using Scene1 scene = new(files, host.Renderer, textures);
		InputManager input = new(host.GameInput);
		long frequency = host.Clock.Frequency;
		long previous = host.Clock.Timestamp;
		double accumulator = 0;
		int frame = 0;
		while (pump() && !scene.IsComplete)
		{
			long now = host.Clock.Timestamp;
			accumulator += (double)(now - previous) / frequency;
			previous = now;
			if (accumulator < FrameSeconds)
				continue;
			accumulator -= FrameSeconds;
			input.Update(TimeSpan.FromSeconds(FrameSeconds));
			scene.Update(input);
			Render(host.Renderer, scene, capture, frame);
			frame++;
		}
	}

	private const double FrameSeconds = 1.0 / 60.0;

	private static void Render(IRenderer renderer, Scene1 scene, Action<int>? capture, int frame)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		renderer.SetRenderState(RenderStateId.ZEnable, 0);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
		renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
		renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
		renderer.Clear(ClientHost.EmptyFrameColor);
		UiDrawList draw = new();
		scene.Draw(draw);
		draw.Render(renderer);
		capture?.Invoke(frame);
		renderer.EndFrame();
	}
}
