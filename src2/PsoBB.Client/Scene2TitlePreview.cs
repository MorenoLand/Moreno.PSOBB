using System.Buffers.Binary;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Input;
using PsoBB.Save;
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
	public static void Run(ClientHost host, Func<bool> pump, IUiTextSurface? textSurface = null, GameTextLocale locale = GameTextLocale.English, bool showMenu = false, Action<int>? capture = null, bool startGameDiagnostic = false)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using Scene2TitleArt art = new(files, host.Renderer);
		using LoginDialog? dialog = CreateDialog(files, host.Renderer, textSurface, locale);
		using Scene2TitleMenu? menu = dialog is null ? null : new Scene2TitleMenu(dialog);
		Scene2StartGameScreen? startScreen = null;
		Scene2StartGameModeMachine? machine = null;
		ControllerButtonState? controller = null;
		bool startGame = false;
		bool machineStopped = false;
		SceneDirectory? directory = null;
		ISceneScreen? online = null;
		bool confirmEdge = false;
		using TitleAudio? audio = TitleAudio.TryCreate(host, files);
		InputManager input = new(host.GameInput);
		long frequency = host.Clock.Frequency;
		long previous = host.Clock.Timestamp;
		double accumulator = 0;
		int frame = 0;
		int selection = menu?.Menu.SelectedIndex ?? -1;
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
			if (menuVisible && menu is not null)
			{
				menu.Update(input);
				action = menu.RequestedAction;
				if (menu.Menu.SelectedIndex != selection)
					audio?.Play(TitleAudio.SelectionSound);
				if (action != previousAction)
					audio?.Play(TitleAudio.ConfirmSound);
				else if (menu.IsClosed && !wasClosed)
					audio?.Play(TitleAudio.CancelSound);
				selection = menu.Menu.SelectedIndex;
				previousAction = action;
				wasClosed = menu.IsClosed;
			}
			else if (input.WasActionPressed(InputAction.Confirm))
			{
				menuVisible = true;
				fade = TitleFade.Initial;
			}
			if (action == LoginDialogAction.ExitGame)
				return;
			if (action == LoginDialogAction.StartGame || (startGameDiagnostic && frame == 3 && !startGame))
			{
				if (startGameDiagnostic && !startGame)
					Scene2.SelectStartGame();
				startGame = true;
				if (startScreen is null && textSurface is not null && files.TryRead("PSO_CHARACTER", out ReadOnlyMemory<byte> saveData) && CharacterSaveCodec.TryParse(saveData.Span, out CharacterSave? save))
				{
					startScreen = Scene2StartGameScreenFactory.CreateScreen(CreateRowsText(files, locale), save);
					if (startScreen is not null)
						startScreen.TextSurface = textSurface;
				}
				if (machine is null)
				{
					SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
					CharacterSaveLoad.Attach(
						new byte[CharacterSaveLoad.PlayerChunkLength],
						new byte[CharacterSaveLoad.SystemChunkLength],
						new byte[CharacterSaveLoad.SaveLength],
						new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
					GuildSave.Attach(new byte[4096], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
					machine = new Scene2StartGameModeMachine(files) { PumpSave = SystemSave.Pump, TextSurface = textSurface };
				}
				controller ??= new ControllerButtonState();
			}
			if (startGame && machine is not null && controller is not null)
			{
				bool confirm = input.WasActionPressed(InputAction.Confirm) || (startGameDiagnostic && frame == 10);
				machine.Controller = controller;
				machine.GameEvent = () => confirmEdge ? 0xF : 0;
				controller.Buttons = confirm ? 0x101u : 0u;
				if (!machineStopped)
				{
					try { machine.Advance(); } catch (NotSupportedException) { machineStopped = true; }
				}
				confirmEdge = confirm;
				if (machine.Mode == 23 && machine.EntryState == 0)
				{
					Scene2.SelectLobbyScreenState();
					directory ??= new SceneDirectory(files, host.Renderer);
					online ??= directory.Create(OnlineScene.SceneNumber);
				}
			}
			if (online is not null)
			{
				online.Update(input);
				UiDrawList ui = new();
				online.Draw(ui);
				if (textSurface is not null)
					directory?.OnlineScene?.DrawStatus(textSurface, ui);
				RenderRows(host.Renderer, ui, frame, capture);
				frame++;
				continue;
			}
			if (startGame && startScreen is not null)
			{
				UiDrawList rows = new();
				startScreen.Draw(rows);
				RenderRows(host.Renderer, rows, frame, capture);
				frame++;
				continue;
			}
			Render(host.Renderer, art, menuVisible ? menu?.Dialog : null, menuVisible, hidden, frame, capture);
			frame++;
		}
		directory?.Dispose();
	}

	private static void RenderRows(IRenderer renderer, UiDrawList rows, int frame, Action<int>? capture)
	{
		renderer.BeginFrame();
		renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
		renderer.SetRenderState(RenderStateId.ZEnable, 0);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		renderer.SetRenderState(RenderStateId.Lighting, 0);
		renderer.Clear(ClientHost.EmptyFrameColor);
		renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
		renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
		renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
		rows.Render(renderer);
		capture?.Invoke(frame);
		renderer.EndFrame();
	}

	private static GameText? CreateRowsText(IDataFiles files, GameTextLocale locale)
	{
		if (!files.TryRead(GameText.GetUnitxtFileName(locale), out ReadOnlyMemory<byte> data))
			return null;
		return new GameText(UnitxtTable.OpenCompressed(data.Span));
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









