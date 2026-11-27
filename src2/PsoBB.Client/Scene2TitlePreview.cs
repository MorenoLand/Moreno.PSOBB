using System.Buffers.Binary;
using PsoBB.Compression;
using PsoBB.Core;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Net.Patch;
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
	public static void Run(ClientHost host, Func<bool> pump, IUiTextSurface? textSurface = null, GameTextLocale locale = GameTextLocale.English, bool showMenu = false, Action<int>? capture = null, bool startGameDiagnostic = false, SceneNetworkOptions? network = null)
	{
		ArgumentNullException.ThrowIfNull(host);
		ArgumentNullException.ThrowIfNull(pump);
		using DataFileRegistry files = new(host.FileSystem, DataArchiveSource.Gsl("data/data.gsl"));
		using Scene2TitleArt art = new(files, host.Renderer);
		using LoginDialog? dialog = CreateDialog(files, host.Renderer, textSurface, locale);
		using Scene2TitleMenu? menu = dialog is null ? null : new Scene2TitleMenu(dialog);
		Scene2StartGameScreen? startScreen = null;
		Scene2StartGameModeMachine? machine = null;
		TitleExitConfirm? confirm = null;
		TitleRegisterDialog? register = null;
		PatchDownloadFlow? patch = null;
		ControllerButtonState? controller = null;
		bool startGame = false;
		bool machineStopped = false;
		SceneDirectory? directory = null;
		ISceneScreen? online = null;
		bool confirmEdge = false;
		bool characterRequested = false;
		bool lobbyRequested = false;
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
			if (confirm is not null)
			{
				confirm.Update(input);
				if (confirm.Confirmed)
				{
					confirm.Dispose();
					return;
				}
				if (confirm.Cancelled)
				{
					confirm.Dispose();
					confirm = null;
					menu?.Dialog.ClearRequest();
				}
			}
			else if (register is not null)
			{
				register.Update(input);
				if (register.Confirmed)
				{
					ApplyCredentials(network, register);
					register.Dispose();
					register = null;
					menu?.Dialog.ClearRequest();
				}
				else if (register.Cancelled)
				{
					register.Dispose();
					register = null;
					menu?.Dialog.ClearRequest();
				}
			}
			else if (patch is not null)
			{
				patch.Update();
				if (input.WasActionPressed(InputAction.Cancel))
				{
					patch.Dispose();
					patch = null;
					menu?.Dialog.ClearRequest();
				}
			}
			else if (menuVisible && menu is not null)
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
			if (action == LoginDialogAction.ExitGame && confirm is null && menu is not null && textSurface is not null)
			{
				confirm = new TitleExitConfirm(menu.Dialog.Text, textSurface);
				menu.Dialog.ClearRequest();
			}
			if (action == LoginDialogAction.RegisterUserId && register is null && menu is not null && textSurface is not null)
			{
				LoginDialogFrame? registerFrame = null;
				if (menu.Dialog.Frame?.PanelTexture is { } panelTexture)
				{
					registerFrame = new LoginDialogFrame
					{
						PanelTexture = panelTexture,
						Position = TitleRegisterDialog.PanelPosition,
						Size = TitleRegisterDialog.PanelSize,
						PanelHeaderWidth = 200f,
						OwnsTextures = false,
					};
				}
				register = new TitleRegisterDialog(menu.Dialog.Text, textSurface, registerFrame);
				menu.Dialog.ClearRequest();
			}
			if (action == LoginDialogAction.PatchDownload && patch is null && network is not null && textSurface is not null)
			{
				ServerEndpoints endpoints = new(network.Hosts);
				PatchLogin patchLogin = new()
				{
					Username = network.LoginRequest.Username,
					Password = network.LoginRequest.Password,
				};
				PatchDownloadFlow flow = new(network.ConnectionFactory(), host.FileSystem, patchLogin);
				flow.Start(endpoints.GetPatchHost(network.ClientMode), endpoints.GetPatchPort(network.ClientMode));
				patch = flow;
				menu?.Dialog.ClearRequest();
			}
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
				bool confirmPress = input.WasActionPressed(InputAction.Confirm) || (startGameDiagnostic && frame == 10);
				machine.Controller = controller;
				machine.GameEvent = () => confirmEdge ? 0xF : 0;
				controller.Buttons = confirmPress ? 0x101u : 0u;
				if (!machineStopped)
				{
					try { machine.Advance(); } catch (NotSupportedException) { machineStopped = true; }
				}
				confirmEdge = confirmPress;
				if (machine.Mode == 23 && machine.EntryState == 0)
				{
					Scene2.SelectLobbyScreenState();
					directory ??= new SceneDirectory(files, host.Renderer, network);
					online ??= directory.Create(OnlineScene.SceneNumber);
				}
			}
			if (online is not null)
			{
				online.Update(input);
				if (startGameDiagnostic && !characterRequested && directory?.OnlineScene?.LoginFlow is { State: LoginFlowState.CharacterSelect, SystemFileCreated: true })
					characterRequested = directory.OnlineScene.SelectCharacter(0);
				if (startGameDiagnostic && !lobbyRequested && directory?.OnlineScene?.GameServerFlow?.World is { Menu: { Count: > 0 } serverMenu } lobbyWorld)
				{
					MenuItemRecord entry = serverMenu.Records.FirstOrDefault(record => record.ItemId == MenuSelectionPacket.GoToLobbyItem);
					if (entry.ItemId == MenuSelectionPacket.GoToLobbyItem)
						lobbyRequested = lobbyWorld.SelectMenuItem(entry.MenuId, entry.ItemId);
				}
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
			Render(host.Renderer, art, menuVisible ? menu?.Dialog : null, confirm, register, patch, textSurface, menuVisible, hidden, frame, capture);
			frame++;
		}
		patch?.Dispose();
		register?.Dispose();
		confirm?.Dispose();
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
				RowColor = LoginDialogFrame.SkinColor,
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

	private static void ApplyCredentials(SceneNetworkOptions? network, TitleRegisterDialog dialog)
	{
		if (network is null)
			return;
		ClientLoginPacket current = network.LoginRequest;
		network.LoginRequest = new ClientLoginPacket
		{
			Username = ByteString.FromText(dialog.UserId) ?? ByteString.Empty,
			Password = ByteString.FromText(dialog.Password) ?? ByteString.Empty,
			HardwareId = current.HardwareId,
			ClientConfig = current.ClientConfig,
		};
	}

	private static void Render(IRenderer renderer, Scene2TitleArt art, LoginDialog? dialog, TitleExitConfirm? confirm, TitleRegisterDialog? register, PatchDownloadFlow? patch, IUiTextSurface? textSurface, bool menuVisible, bool hidden, int frame, Action<int>? capture)
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
		if (!hidden && (dialog is not null || confirm is not null || register is not null || patch is not null))
		{
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
			renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
			renderer.SetRenderState(RenderStateId.DestinationBlend, RenderStateId.BlendInverseSourceAlpha);
			renderer.SetRenderState(RenderStateId.Lighting, 0);
			UiDrawList ui = new() { DefaultBlendMode = UiBlendMode.Alpha };
			if (register is null)
				dialog?.Draw(ui);
			confirm?.Draw(ui);
			register?.Draw(ui);
			if (patch is not null && textSurface is not null)
				patch.Draw(ui, textSurface);
			ui.Render(renderer);
		}
		capture?.Invoke(frame);
		renderer.EndFrame();
	}
}









