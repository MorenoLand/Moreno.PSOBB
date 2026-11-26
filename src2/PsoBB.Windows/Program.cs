using System.Numerics;
using System.Runtime.InteropServices;
using PsoBB.Client;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Platform.Windows;
using PsoBB.Rendering.Direct3D11;

namespace PsoBB.Windows;

/// <summary>
/// The Windows program: creates the window and platform services and runs the client host.
/// </summary>
internal static class Program
{
	private const int WindowWidth = 640;
	private const int WindowHeight = 480;
	private const int PreviewDecompressionLimit = 16 * 1024 * 1024;

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
		for (int index = 0; index < args.Length; index++)
		{
			if (args[index] == "--preview" && index + 1 < args.Length)
				previewEntry = args[++index];
			else if (!args[index].StartsWith("--", StringComparison.Ordinal))
				dataFolder = args[index];
		}
		GameWindow? window = null;
		try
		{
			window = new GameWindow("Phantasy Star Online Blue Burst", WindowWidth, WindowHeight);
			if (previewEntry is not null)
				RunPreview(window, dataFolder, previewEntry);
			else
				RunClient(window, dataFolder);
			return 0;
		}
		catch (Exception exception) when (exception is FileNotFoundException or InvalidDataException or Direct3D11UnavailableException or InvalidOperationException or TextureFormatException)
		{
			MessageBox(0, exception.Message, "Phantasy Star Online Blue Burst", 0x10);
			return 1;
		}
		finally
		{
			window?.Dispose();
		}
	}

	private static void RunClient(GameWindow window, string dataFolder)
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
		TitlePreview.Run(host, window.Pump);
		host.RequestStop();
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

