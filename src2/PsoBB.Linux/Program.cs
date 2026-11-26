using PsoBB.Client;
using PsoBB.Graphics;
using PsoBB.Platform.Linux;
using PsoBB.Rendering.OpenGL;
using Silk.NET.OpenAL;

namespace PsoBB.Linux;

/// <summary>
/// The Linux program: creates the SDL window and platform services and runs the client host.
/// </summary>
internal static class Program
{
	private const int WindowWidth = 640;
	private const int WindowHeight = 480;

	/// <summary>
	/// Runs the Linux client until the window closes.
	/// </summary>
	/// <param name="args">Optional data folder; <c>PSOBB_DATA</c> and the program folder are the fallbacks.</param>
	/// <returns>Zero on a clean exit, one when the client could not start.</returns>
	private static int Main(string[] args)
	{
		string dataFolder = Environment.GetEnvironmentVariable("PSOBB_DATA") ?? AppContext.BaseDirectory;
		bool scene2 = false;
		for (int index = 0; index < args.Length; index++)
		{
			if (args[index] == "--scene2")
				scene2 = true;
			else if (!args[index].StartsWith("--", StringComparison.Ordinal))
				dataFolder = args[index];
		}
		dataFolder = dataFolder.Trim().Trim('"');
		if (dataFolder.Length == 0)
			dataFolder = AppContext.BaseDirectory;
		if (!Directory.Exists(dataFolder))
		{
			Console.Error.WriteLine($"The game folder does not exist: {dataFolder}. Pass the folder that contains data/data.gsl or set PSOBB_DATA.");
			return 1;
		}
		SdlGameWindow? window = null;
		OpenGLRenderer? renderer = null;
		try
		{
			window = new SdlGameWindow("Phantasy Star Online Blue Burst", WindowWidth, WindowHeight);
			LinuxGameFileSystem files = new(dataFolder);
			LinuxGameClock clock = new();
			LinuxGameSettings settings = new(Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData), "PsoBBRecomp"));
			using LinuxGameInput input = new(window.Handle);
			LinuxGameDispatcher dispatcher = new(clock);
			using OpenAlAudioDevice audio = new();
			renderer = new OpenGLRenderer(window.Handle, new RenderSettings(window.ClientWidth, window.ClientHeight, true, 0, true));
			using ClientHost host = new(new ClientOptions(dataFolder), files, clock, settings, input, dispatcher, audio, renderer);
			_ = new ClientStartup(renderer).Start();
			if (!scene2)
				Scene1Preview.Run(host, window.Pump);
			Scene2TitlePreview.Run(host, window.Pump);
			host.RequestStop();
			return 0;
		}
		catch (Exception exception) when (exception is not OutOfMemoryException)
		{
			Console.Error.WriteLine($"Phantasy Star Online Blue Burst could not start: {exception.Message}");
			return 1;
		}
		finally
		{
			renderer?.Dispose();
			window?.Dispose();
		}
	}
}
