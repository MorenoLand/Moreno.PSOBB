using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// Runs the ported scene 2 title art and emblem over a constructed client host.
/// </summary>
public static class Scene2TitlePreview
{
	/// <summary>
	/// Loads the default title set and presents the strip and emblem passes until the window closes.
	/// </summary>
	/// <param name="host">The host that supplies the renderer and file system.</param>
	/// <param name="pump">Returns whether the host window is still open.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The title archive is missing.</exception>
	public static void Run(ClientHost host, Func<bool> pump)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using Scene2TitleArt art = new(files, host.Renderer);
		int frame = 0;
		while (pump())
		{
			Render(host.Renderer, art, frame++);
		}
	}

	private static void Render(IRenderer renderer, Scene2TitleArt art, int frame)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		renderer.SetRenderState(RenderStateId.ZEnable, 0);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.Clear(ClientHost.EmptyFrameColor);
		TitleArtDrawList draw = new();
		art.Draw(draw);
		art.DrawEmblem(draw, frame);
		draw.Render(renderer);
		renderer.EndFrame();
	}
}
