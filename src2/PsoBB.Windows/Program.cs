using System.Numerics;
using System.Net.NetworkInformation;
using System.Runtime.InteropServices;
using PsoBB.Client;
using PsoBB.Compression;
using PsoBB.Core;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Net;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Platform.Windows;
using PsoBB.Rendering.Direct3D11;
using PsoBB.Text;

namespace PsoBB.Windows;

/// <summary>
/// The Windows program: creates the window and platform services and runs the client host.
/// </summary>
internal static class Program
{
	private const int WindowWidth = 640;
	private const int WindowHeight = 480;
	private const int PreviewDecompressionLimit = 16 * 1024 * 1024;
	private const string DefaultLoginHost = "127.0.0.1";
	private const ushort DefaultLoginPort = 12000;

	/// <summary>
	/// Runs the Windows client until the window closes.
	/// </summary>
	/// <param name="args">Optional data folder; <c>--preview &lt;entry&gt;</c> draws a retail XVM texture instead of the client loop.</param>
	/// <returns>Zero on a clean exit, one when the client could not start.</returns>
	[STAThread]
	private static int Main(string[] args)
	{
		string dataFolder = Environment.GetEnvironmentVariable("PSOBB_DATA") ?? AppContext.BaseDirectory;
		string? previewEntry = null;
		bool scene1 = false;
		bool scene2 = false;
		bool nowLoading = false;
		bool title = false;
		bool menu = false;
		bool startGame = false;
		for (int index = 0; index < args.Length; index++)
		{
			if (args[index] == "--preview" && index + 1 < args.Length)
				previewEntry = args[++index];
			else if (args[index] == "--scene1")
				scene1 = true;
			else if (args[index] == "--scene2")
				scene2 = true;
			else if (args[index] == "--nowloading")
				nowLoading = true;
			else if (args[index] == "--title")
				title = true;
			else if (args[index] == "--menu")
				menu = true;
			else if (args[index] == "--startgame")
				startGame = true;
			else if (!args[index].StartsWith("--", StringComparison.Ordinal))
				dataFolder = args[index];
		}
		dataFolder = dataFolder.Trim().Trim('"');
		if (dataFolder.Length == 0)
			dataFolder = AppContext.BaseDirectory;
		if (!Directory.Exists(dataFolder))
		{
			MessageBox(0, $"The game folder does not exist:\n{dataFolder}\n\nPass the folder that contains data\\data.gsl as the first argument, or set PSOBB_DATA.", "Phantasy Star Online Blue Burst", 0x10);
			return 1;
		}
		GameWindow? window = null;
		try
		{
			window = new GameWindow("Phantasy Star Online Blue Burst", WindowWidth, WindowHeight);
			if (previewEntry is not null)
				RunPreview(window, dataFolder, previewEntry);
			else if (scene1)
				RunScene1(window, dataFolder);
			else if (scene2)
				RunScene2(window, dataFolder);
			else if (nowLoading)
				RunNowLoading(window, dataFolder);
			else if (title)
				RunTitle(window, dataFolder, false);
			else if (menu)
				RunTitle(window, dataFolder, true);
			else
				RunClient(window, dataFolder, startGame);
			return 0;
		}
		catch (Exception exception) when (exception is not OutOfMemoryException)
		{
			MessageBox(0, exception.Message, "Phantasy Star Online Blue Burst", 0x10);
			return 1;
		}
		finally
		{
			window?.Dispose();
		}
	}

	private static void RunClient(GameWindow window, string dataFolder, bool startGame = false)
	{
		WindowsFileSystem files = new(dataFolder);
		WindowsGameClock clock = new();
		using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
		using WindowsGameInput input = new(window.Handle);
		WindowsDispatcher dispatcher = new(clock);
		WindowsAudioDevice audio = new();
		Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
		_ = new ClientStartup(renderer).Start();
		Scene1Preview.Run(host, window.Pump);
		NowLoadingPreview.Run(host, window.Pump, 60);
		using GdiBitmapFont font = GdiBitmapFont.Create(renderer);
		string? captureDirectory = Environment.GetEnvironmentVariable("PSOBB_CAPTURE");
		Action<int>? capture = captureDirectory is null ? null : frame =>
		{
			if (frame is not (0 or 2 or 10 or 60))
				return;
			Directory.CreateDirectory(captureDirectory);
			WriteBmp(Path.Combine(captureDirectory, $"start-{frame:D3}.bmp"), renderer.Settings.Width, renderer.Settings.Height, renderer.CaptureFrame());
		};
		Scene2TitlePreview.Run(host, window.Pump, new TextRendererSurface(font.Text), capture: capture, startGameDiagnostic: startGame, network: CreateNetworkOptions());
		host.RequestStop();
	}

	private static SceneNetworkOptions CreateNetworkOptions()
	{
		ServerHostTable hosts = new(DefaultLoginHost, DefaultLoginHost, DefaultLoginHost, DefaultLoginHost, DefaultLoginHost, DefaultLoginHost, DefaultLoginHost);
		ClientLoginPacket login = new()
		{
			Username = ByteString.Empty,
			Password = ByteString.Empty,
			HardwareId = CreateHardwareId(),
			ClientConfig = CreateClientConfig(),
		};
		return new SceneNetworkOptions(hosts, login, () => new WindowsGameConnection())
		{
			ClientMode = 1,
			RuntimeHost = DefaultLoginHost,
			RuntimePort = DefaultLoginPort,
		};
	}

	private static ulong CreateHardwareId()
	{
		foreach (NetworkInterface adapter in NetworkInterface.GetAllNetworkInterfaces())
		{
			if (adapter.NetworkInterfaceType is NetworkInterfaceType.Loopback or NetworkInterfaceType.Tunnel)
				continue;
			byte[] address = adapter.GetPhysicalAddress().GetAddressBytes();
			if (address.Length != 6 || address.All(value => value == 0))
				continue;
			ulong value = 0;
			foreach (byte part in address)
				value = (value << 8) | part;
			return value;
		}
		return 0;
	}

	private static byte[] CreateClientConfig()
	{
		byte[] config = new byte[ClientLoginPacket.ClientConfigLength];
		System.Text.Encoding.ASCII.GetBytes("! DLL ERROR !").CopyTo(config, 0);
		return config;
	}

	private static void RunNowLoading(GameWindow window, string dataFolder)
	{
		WindowsFileSystem files = new(dataFolder);
		WindowsGameClock clock = new();
		using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
		using WindowsGameInput input = new(window.Handle);
		WindowsDispatcher dispatcher = new(clock);
		WindowsAudioDevice audio = new();
		Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
		string? captureDirectory = Environment.GetEnvironmentVariable("PSOBB_CAPTURE");
		Action<int>? capture = captureDirectory is null ? null : frame =>
		{
			if (frame != 10)
				return;
			Directory.CreateDirectory(captureDirectory);
			WriteBmp(Path.Combine(captureDirectory, "nowloading-010.bmp"), renderer.Settings.Width, renderer.Settings.Height, renderer.CaptureFrame());
		};
		NowLoadingPreview.Run(host, window.Pump, null, capture);
		host.RequestStop();
	}

	private static void RunTitle(GameWindow window, string dataFolder, bool menu)
	{
		WindowsFileSystem files = new(dataFolder);
		WindowsGameClock clock = new();
		using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
		using WindowsGameInput input = new(window.Handle);
		WindowsDispatcher dispatcher = new(clock);
		WindowsAudioDevice audio = new();
		Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
		using GdiBitmapFont font = GdiBitmapFont.Create(renderer);
		string? captureDirectory = Environment.GetEnvironmentVariable("PSOBB_CAPTURE");
		Action<int>? capture = captureDirectory is null ? null : frame =>
		{
			if (frame is not (0 or 2 or 10 or 60))
				return;
			Directory.CreateDirectory(captureDirectory);
			WriteBmp(Path.Combine(captureDirectory, $"{(menu ? "menu" : "title")}-{frame:D3}.bmp"), renderer.Settings.Width, renderer.Settings.Height, renderer.CaptureFrame());
		};
		Scene2TitlePreview.Run(host, window.Pump, new TextRendererSurface(font.Text), GameTextLocale.English, menu, capture);
		host.RequestStop();
	}

	private static void RunScene2(GameWindow window, string dataFolder)
	{
		WindowsFileSystem files = new(dataFolder);
		WindowsGameClock clock = new();
		using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
		using WindowsGameInput input = new(window.Handle);
		WindowsDispatcher dispatcher = new(clock);
		WindowsAudioDevice audio = new();
		Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
		using GdiBitmapFont font = GdiBitmapFont.Create(renderer);
		Scene2TitlePreview.Run(host, window.Pump, new TextRendererSurface(font.Text), GameTextLocale.English, true);
		host.RequestStop();
	}

	private static void RunScene1(GameWindow window, string dataFolder)
	{
		WindowsFileSystem files = new(dataFolder);
		WindowsGameClock clock = new();
		using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
		using WindowsGameInput input = new(window.Handle);
		WindowsDispatcher dispatcher = new(clock);
		WindowsAudioDevice audio = new();
		Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
		string? captureDirectory = Environment.GetEnvironmentVariable("PSOBB_CAPTURE");
		Action<int>? capture = captureDirectory is null ? null : frame =>
		{
			if (frame is not (0 or 16 or 32 or 60 or 92 or 124))
				return;
			Directory.CreateDirectory(captureDirectory);
			WriteBmp(Path.Combine(captureDirectory, $"splash-{frame:D3}.bmp"), renderer.Settings.Width, renderer.Settings.Height, renderer.CaptureFrame());
		};
		Scene1Preview.Run(host, window.Pump, capture);
		host.RequestStop();
	}

	private static void WriteBmp(string path, int width, int height, byte[] bgra)
	{
		int row = width * 3;
		int padding = (4 - row % 4) % 4;
		int size = 54 + (row + padding) * height;
		using FileStream stream = File.Create(path);
		Span<byte> header = stackalloc byte[54];
		header[0] = (byte)'B';
		header[1] = (byte)'M';
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[2..], size);
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[10..], 54);
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[14..], 40);
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[18..], width);
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[22..], height);
		System.Buffers.Binary.BinaryPrimitives.WriteInt16LittleEndian(header[26..], 1);
		System.Buffers.Binary.BinaryPrimitives.WriteInt16LittleEndian(header[28..], 24);
		System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(header[34..], (row + padding) * height);
		stream.Write(header);
		byte[] line = new byte[row + padding];
		for (int y = height - 1; y >= 0; y--)
		{
			for (int x = 0; x < width; x++)
			{
				int source = (y * width + x) * 4;
				line[x * 3] = bgra[source];
				line[x * 3 + 1] = bgra[source + 1];
				line[x * 3 + 2] = bgra[source + 2];
			}
			stream.Write(line);
		}
	}

	private static void RunPreview(GameWindow window, string dataFolder, string entryName)
	{
		WindowsFileSystem files = new(dataFolder);
		using DataFileRegistry registry = new(files, DataArchiveSource.Gsl("data/data.gsl"));
		if (!registry.TryRead(entryName, out ReadOnlyMemory<byte> bytes))
			throw new FileNotFoundException($"The data archive has no entry named '{entryName}'.", entryName);
		if (entryName.EndsWith(".prs", StringComparison.OrdinalIgnoreCase))
		{
			byte[] decompressed = new byte[PreviewDecompressionLimit];
			int length = PrsDecompressor.Decompress(bytes.Span, decompressed);
			bytes = decompressed.AsMemory(0, length);
		}
		XvmTexture image = XvmArchive.Read(bytes.Span)[0];
		using Direct3D11Renderer renderer = new(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
		using ITexture texture = renderer.CreateTexture(image.Width, image.Height, image.Image.Pixels.Span, image.Image.Stride);
		UiDrawList draw = new();
		draw.Add(CreatePreviewQuad(texture, image.Width, image.Height, renderer.Settings.Width, renderer.Settings.Height));
		while (window.Pump())
		{
			renderer.BeginFrame();
			renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
			renderer.SetRenderState(RenderStateId.ZEnable, 0);
			renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
			renderer.SetRenderState(RenderStateId.CullMode, 1);
			renderer.SetRenderState(RenderStateId.Lighting, 0);
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 0);
			renderer.Clear(0xFF101018);
			draw.Render(renderer);
			renderer.EndFrame();
		}
	}

	private static UiQuad CreatePreviewQuad(ITexture texture, int width, int height, int screenWidth, int screenHeight)
	{
		float scale = MathF.Min((float)screenWidth / width, (float)screenHeight / height);
		float drawWidth = width * scale;
		float drawHeight = height * scale;
		return new UiQuad(new Vector2((screenWidth - drawWidth) / 2f, (screenHeight - drawHeight) / 2f), new Vector2(drawWidth, drawHeight), new Vector4(0f, 0f, 1f, 1f), texture, 0xFFFFFFFF);
	}

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern int MessageBox(nint window, string text, string caption, uint type);
}



