using System.Buffers.Binary;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
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
		using LoginDialog? dialog = CreateDialog(files, host.Renderer, textSurface, locale);
		using TitleAudio? audio = TitleAudio.TryCreate(host, files);
		InputManager input = new(host.GameInput);
		long frequency = host.Clock.Frequency;
		long previous = host.Clock.Timestamp;
		double accumulator = 0;
		int frame = 0;
		int selection = dialog?.Menu.SelectedIndex ?? -1;
		LoginDialogAction? previousAction = null;
		bool wasClosed = false;
		bool menuVisible = showMenu;
		uint fade = TitleFade.Initial;
		while (pump())
		{
			long now = host.Clock.Timestamp;
			accumulator += (double)(now - previous) / frequency;
			previous = now;
			audio?.Pump();
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
				if (dialog.Menu.SelectedIndex != selection)
					audio?.Play(TitleAudio.SelectionSound);
				if (action != previousAction)
					audio?.Play(TitleAudio.ConfirmSound);
				else if (dialog.IsClosed && !wasClosed)
					audio?.Play(TitleAudio.CancelSound);
				selection = dialog.Menu.SelectedIndex;
				previousAction = action;
				wasClosed = dialog.IsClosed;
			}
			else if (input.WasActionPressed(InputAction.Confirm))
			{
				menuVisible = true;
				fade = TitleFade.Initial;
			}
			if (action == LoginDialogAction.ExitGame)
				return;
			Render(host.Renderer, art, menuVisible ? dialog : null, menuVisible, hidden, frame, capture);
			frame++;
		}
	}

	private static LoginDialog? CreateDialog(IDataFiles files, IRenderer renderer, IUiTextSurface? textSurface, GameTextLocale locale)
	{
		if (textSurface is null || !files.TryRead(GameText.GetUnitxtFileName(locale), out ReadOnlyMemory<byte> data))
			return null;
		UnitxtTable table = UnitxtTable.OpenCompressed(data.Span);
		LoginDialog dialog = new(new GameText(table), LoginDialog.DefaultHint, textSurface);
		if (TryLoadSkin(files, renderer, out ITexture? panel, out ITexture? rows))
		{
			dialog.Frame = new LoginDialogFrame
			{
				PanelTexture = panel,
				RowTexture = rows,
			};
		}
		return dialog;
	}

	private static bool TryLoadSkin(IDataFiles files, IRenderer renderer, out ITexture? panel, out ITexture? rows)
	{
		panel = null;
		rows = null;
		if (!files.TryRead("f256_hyoujismall.prs", out ReadOnlyMemory<byte> stored))
			return false;
		ReadOnlyMemory<byte> data = stored;
		if (stored.Length < 4 || BinaryPrimitives.ReadUInt32LittleEndian(stored.Span) != 0x484D5658)
		{
			int capacity = Math.Max(0x10000, stored.Length * 4);
			while (capacity <= 0x4000000)
			{
				byte[] destination = new byte[capacity];
				try
				{
					int written = PrsDecompressor.Decompress(stored.Span, destination);
					data = destination.AsMemory(0, written);
					break;
				}
				catch (ArgumentException)
				{
					capacity *= 2;
				}
			}
		}
		IReadOnlyList<XvmTexture> textures = XvmArchive.Read(data.Span);
		if (textures.Count < 3)
			return false;
		ITexture[] created = new ITexture[2];
		try
		{
			for (int index = 0; index < created.Length; index++)
				created[index] = renderer.CreateTexture(textures[index + 1].Width, textures[index + 1].Height, textures[index + 1].Image.Pixels.Span, textures[index + 1].Image.Stride);
			panel = created[0];
			rows = created[1];
			return true;
		}
		catch
		{
			foreach (ITexture texture in created)
				texture?.Dispose();
			throw;
		}
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
