using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Input;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// Runs the ported NowLoading surface over a constructed client host.
/// </summary>
public static class NowLoadingPreview
{
	/// <summary>
	/// Loads NowLoading.prs and presents the rotating surface until the window closes or the frame
	/// limit is reached.
	/// </summary>
	/// <param name="host">The host that supplies the renderer, input, clock and file system.</param>
	/// <param name="pump">Returns whether the host window is still open.</param>
	/// <param name="frames">The number of frames to present, or null to run until the window closes.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The loading archive is missing.</exception>
	public static void Run(ClientHost host, Func<bool> pump, int? frames = null)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		Scene1.EnableTitleDrawing();
		try
		{
			using NowLoadingScreen loading = new(files, host.Renderer);
			InputManager input = new(host.GameInput);
			long frequency = host.Clock.Frequency;
			long previous = host.Clock.Timestamp;
			int presented = 0;
			while (pump() && (frames is null || presented < frames))
			{
				long now = host.Clock.Timestamp;
				TimeSpan elapsed = TimeSpan.FromSeconds((double)(now - previous) / frequency);
				previous = now;
				input.Update(elapsed);
				Render(host.Renderer, loading);
				presented++;
			}
		}
		finally
		{
			Scene1.DisableTitleDrawing();
		}
	}

	private static void Render(IRenderer renderer, NowLoadingScreen loading)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		renderer.SetRenderState(RenderStateId.ZEnable, 0);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.SetRenderState(RenderStateId.DiffuseMaterialSource, RenderStateId.MaterialColorDiffuse);
		renderer.Clear(ClientHost.EmptyFrameColor);
		TitleArtDrawList draw = new();
		loading.Draw(draw);
		draw.Render(renderer);
		renderer.EndFrame();
	}
}
