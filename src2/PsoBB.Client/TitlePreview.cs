using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Client;

/// <summary>
/// Runs the title scene and menu over a constructed client host until the window closes or a menu action leaves the title.
/// </summary>
public static class TitlePreview
{
	/// <summary>
	/// Loads the retail title archives, drives the scene and presents each frame.
	/// </summary>
	/// <param name="host">The host that supplies the renderer, input, clock and file system.</param>
	/// <param name="pump">Returns whether the host window is still open.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The data archive or a title archive is missing.</exception>
	public static void Run(ClientHost host, Func<bool> pump)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using TitleScene scene = new(files, host.Renderer);
		InputManager input = new(host.GameInput);
		long frequency = host.Clock.Frequency;
		long previous = host.Clock.Timestamp;
		while (pump() && !scene.IsPreviewComplete)
		{
			long now = host.Clock.Timestamp;
			TimeSpan elapsed = TimeSpan.FromSeconds((double)(now - previous) / frequency);
			previous = now;
			input.Update(elapsed);
			scene.Update(input);
			Render(host.Renderer, scene);
		}
	}

	private static void Render(IRenderer renderer, TitleScene scene)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		scene.ConfigureRenderState(renderer);
		renderer.Clear(ClientHost.EmptyFrameColor);
		UiDrawList draw = new();
		scene.Draw(draw);
		draw.Render(renderer);
		renderer.EndFrame();
	}
}
