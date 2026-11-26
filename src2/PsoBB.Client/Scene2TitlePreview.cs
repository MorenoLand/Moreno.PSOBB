using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Client;

/// <summary>
/// Runs the ported scene 2 title art, press-enter strip, emblem and account-panel rows over a
/// constructed client host.
/// </summary>
public static class Scene2TitlePreview
{
	private const double FrameSeconds = 1.0 / 60.0;
	/// <summary>
	/// Loads the default title set and presents the started title scene until the window closes.
	/// </summary>
	/// <param name="host">The host that supplies the renderer, input, clock and file system.</param>
	/// <param name="pump">Returns whether the host window is still open.</param>
	/// <param name="textSurface">The bitmap-font surface that draws the account rows, or null to omit them.</param>
	/// <param name="locale">The unitxt locale for the account labels.</param>
	/// <param name="showMenu">Whether the account panel is shown instead of the press-enter strip.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The title archive is missing.</exception>
	public static void Run(ClientHost host, Func<bool> pump, IUiTextSurface? textSurface = null, GameTextLocale locale = GameTextLocale.English, bool showMenu = false, Action<int>? capture = null)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using Scene2TitleArt art = new(files, host.Renderer);
		using LoginDialog? dialog = CreateDialog(files, textSurface, locale);
		InputManager input = new(host.GameInput);
		long frequency = host.Clock.Frequency;
		long previous = host.Clock.Timestamp;
		double accumulator = 0;
		int frame = 0;
		bool menuVisible = showMenu;
		uint fade = TitleFade.Initial;
		while (pump())
		{
			long now = host.Clock.Timestamp;
			accumulator += (double)(now - previous) / frequency;
			previous = now;
			if (accumulator < FrameSeconds)
				continue;
			accumulator -= FrameSeconds;
			input.Update(TimeSpan.FromSeconds(FrameSeconds));
			bool hidden = TitleFade.Advance(ref fade);
			LoginDialogAction? action = null;
			if (menuVisible && dialog is not null)
			{
				dialog.Update(input);
				action = dialog.RequestedAction;
			}
			else if (input.WasActionPressed(InputAction.Confirm))
				menuVisible = true;
			if (action == LoginDialogAction.ExitGame)
				return;
			Render(host.Renderer, art, menuVisible ? dialog : null, menuVisible, hidden, frame, capture);
			frame++;
		}
	}

	private static LoginDialog? CreateDialog(IDataFiles files, IUiTextSurface? textSurface, GameTextLocale locale)
	{
		if (textSurface is null || !files.TryRead(GameText.GetUnitxtFileName(locale), out ReadOnlyMemory<byte> data))
			return null;
		UnitxtTable table = UnitxtTable.OpenCompressed(data.Span);
		return new LoginDialog(new GameText(table), LoginDialog.DefaultHint, textSurface);
	}

	private static void Render(IRenderer renderer, Scene2TitleArt art, LoginDialog? dialog, bool menuVisible, bool hidden, int frame, Action<int>? capture)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		renderer.SetRenderState(RenderStateId.ZEnable, 0);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.Clear(ClientHost.EmptyFrameColor);
		if (!hidden)
		{
			TitleArtDrawList draw = new();
			art.Draw(draw);
			art.DrawEmblem(draw, frame);
			if (!menuVisible)
				art.DrawSelectorStrip(draw);
			draw.Render(renderer);
		}
		if (!hidden && dialog is not null)
		{
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
			renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
			renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
			renderer.SetRenderState(RenderStateId.Lighting, 0);
			UiDrawList ui = new();
			dialog.Draw(ui);
			ui.Render(renderer);
		}
		capture?.Invoke(frame);
		renderer.EndFrame();
	}
}
