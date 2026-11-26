using System.Runtime.InteropServices;
using PsoBB.Client;
using PsoBB.Graphics;
using PsoBB.Platform.Windows;
using PsoBB.Rendering.Direct3D11;

namespace PsoBB.Windows;

/// <summary>
/// The Windows program: creates the window and platform services, loads the data image and runs the client host.
/// </summary>
internal static class Program
{
	/// <summary>
	/// Runs the Windows client until the window closes.
	/// </summary>
	/// <param name="args">Optional data folder; otherwise <c>PSOBB_DATA</c> or the program folder.</param>
	/// <returns>Zero on a clean exit, one when the client could not start.</returns>
	[STAThread]
	private static int Main(string[] args)
	{
		string dataFolder = args.Length > 0 ? args[0] : Environment.GetEnvironmentVariable("PSOBB_DATA") ?? AppContext.BaseDirectory;
		try
		{
			using GameWindow window = new("Phantasy Star Online Blue Burst", 1024, 768);
			WindowsFileSystem files = new(dataFolder);
			WindowsGameClock clock = new();
			using WindowsGameSettings settings = new(@"Software\PsoBBRecomp");
			using WindowsGameInput input = new(window.Handle);
			WindowsDispatcher dispatcher = new(clock);
			WindowsAudioDevice audio = new();
			Direct3D11Renderer renderer = new(window.Handle, RenderSettings.Default);
			using ClientHost host = new(new ClientOptions(dataFolder, "image.bin"), files, clock, settings, input, dispatcher, audio, renderer);
			while (window.Pump())
				host.RunFrames(1);
			host.RequestStop();
			return 0;
		}
		catch (Exception exception) when (exception is FileNotFoundException or InvalidDataException or Direct3D11UnavailableException or InvalidOperationException)
		{
			MessageBox(0, exception.Message, "Phantasy Star Online Blue Burst", 0x10);
			return 1;
		}
	}

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern int MessageBox(nint window, string text, string caption, uint type);
}
