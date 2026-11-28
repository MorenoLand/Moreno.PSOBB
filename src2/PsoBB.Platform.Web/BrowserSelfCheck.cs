using System.Runtime.Versioning;
using System.Text;

namespace PsoBB.Platform.Web;

/// <summary>
/// Exercises every browser platform contract and reports one tab-separated line per check.
/// </summary>
[SupportedOSPlatform("browser")]
public static class BrowserSelfCheck
{
	private static readonly TimeSpan MaximumLocalOffset = TimeSpan.FromHours(14);

	/// <summary>
	/// Runs the self-check against a connected platform.
	/// </summary>
	/// <param name="platform">The platform to check, or <see langword="null"/> when it was not created.</param>
	/// <returns>One <c>pass</c> or <c>fail</c> line per contract.</returns>
	public static string Run(BrowserPlatform? platform)
	{
		if (platform is null)
			return "fail\tplatform\tCreate was not called.";
		StringBuilder report = new();
		Run(report, "clock", () => CheckClock(platform.Clock));
		Run(report, "settings", () => CheckSettings(platform.Settings));
		Run(report, "input", () => CheckInput(platform));
		Run(report, "files", () => CheckFiles(platform.Files));
		Run(report, "audio", () => CheckAudio(platform.Audio));
		Run(report, "dispatcher", () => CheckDispatcher(platform));
		return report.ToString().TrimEnd('\n');
	}

	private static void CheckClock(BrowserGameClock clock)
	{
		long first = clock.Timestamp;
		DateTimeOffset utc = clock.UtcNow;
		TimeSpan offset = clock.LocalNow.Offset;
		Require(clock.Frequency == TimeSpan.TicksPerSecond, "frequency");
		Require(first >= 0 && clock.Timestamp >= first, "monotonic time");
		Require(utc.Year >= 2020, "wall clock");
		Require(offset >= -MaximumLocalOffset && offset <= MaximumLocalOffset, "local offset");
	}

	private static void CheckSettings(BrowserGameSettings settings)
	{
		const string textName = "selfcheck.text";
		const string intName = "selfcheck.number";
		const string binaryName = "selfcheck.binary";
		settings.Remove(textName);
		settings.Remove(intName);
		settings.Remove(binaryName);
		try
		{
			settings.SetString(textName, "héllo");
			settings.SetInt32(intName, -12345);
			settings.SetBinary(binaryName, [0, 1, 254, 255]);
			Require(settings.TryGetString("SELFCHECK.TEXT", out string? text) && text == "héllo", "string round trip");
			Require(settings.TryGetInt32("SelfCheck.Number", out int number) && number == -12345, "integer round trip");
			Require(settings.TryGetBinary("SELFCHECK.BINARY", out byte[]? binary) && binary.AsSpan().SequenceEqual(new byte[] { 0, 1, 254, 255 }), "binary round trip");
			Require(!settings.TryGetInt32(textName, out _), "typed values do not convert");
			Require(settings.GetNames().Contains(textName, StringComparer.OrdinalIgnoreCase), "name enumeration");
			Require(settings.Remove(textName) && !settings.TryGetString(textName, out _), "remove");
		}
		finally
		{
			settings.Remove(textName);
			settings.Remove(intName);
			settings.Remove(binaryName);
		}
	}

	private static void CheckInput(BrowserPlatform platform)
	{
		BrowserGameInput input = new(new SilentPointerHost());
		input.Push(BrowserInputEvent.Key((int)GameKey.Return, true));
		Require(!input.Keyboard.IsKeyDown(GameKey.Return), "input waits for the poll");
		input.Poll();
		Require(input.Keyboard.IsKeyDown(GameKey.Return), "key down");
		input.Push(BrowserInputEvent.PointerMove(10, 20, 3, -2));
		input.Push(BrowserInputEvent.PointerButtons(MouseButtons.Left));
		input.Push(BrowserInputEvent.Wheel(120));
		input.Poll();
		MouseState mouse = input.Mouse;
		Require(mouse.X == 10 && mouse.Y == 20, "pointer position");
		Require(mouse.DeltaX == 3 && mouse.DeltaY == -2, "pointer movement");
		Require(mouse.WheelDelta == 120 && mouse.Buttons == MouseButtons.Left, "wheel and buttons");
		input.Push(BrowserInputEvent.FocusLost());
		input.Poll();
		Require(!input.Keyboard.IsKeyDown(GameKey.Return) && input.Mouse.Buttons == MouseButtons.None, "focus loss releases input");
		platform.Input.Poll();
		Require(platform.Input.Keyboard.IsKeyDown(GameKey.NumpadEnter), "page keyboard event");
		Require(platform.Input.Mouse.X == 64 && platform.Input.Mouse.Y == 32, "page pointer event");
		Require(platform.Input.Mouse.IsButtonDown(MouseButtons.Left), "page pointer button");
		Require(platform.Input.Mouse.WheelDelta == 120, "page wheel event");
		platform.Input.Push(BrowserInputEvent.FocusLost());
		platform.Input.Poll();
		Require(!platform.Input.Keyboard.IsKeyDown(GameKey.NumpadEnter) && platform.Input.Mouse.Buttons == MouseButtons.None, "page focus loss");
	}

	private static void CheckFiles(BrowserGameFileSystem files)
	{
		GamePath pageFile = GamePath.Parse("data/selfcheck.bin");
		Require(files.FileExists(pageFile), "preloaded data root");
		using (IGameFile file = files.Open(pageFile, GameFileAccess.Read, GameFileMode.Open) ?? throw new InvalidOperationException("The preloaded file did not open."))
		{
			Span<byte> buffer = stackalloc byte[4];
			Require(file.Read(buffer) == 4 && buffer[0] == 1 && buffer[1] == 2 && buffer[2] == 3 && buffer[3] == 4, "preloaded bytes");
		}
		GamePath path = GamePath.Parse("selfcheck/probe.txt");
		files.AddFile(path, [1, 2, 3, 4]);
		Require(files.FileExists(path), "file creation");
		Require(files.Find(GamePath.Parse("selfcheck"), "*.*").Any(entry => entry.Path == path), "directory search");
		Require(files.DeleteFile(path) && !files.FileExists(path), "file deletion");
		GamePath hostFile = GamePath.Parse("selfcheck/from-host.bin");
		Require(files.FileExists(hostFile), "file added by the page");
		using (IGameFile file = files.Open(hostFile, GameFileAccess.Read, GameFileMode.Open) ?? throw new InvalidOperationException("The page file did not open."))
		{
			Span<byte> buffer = stackalloc byte[4];
			Require(file.Read(buffer) == 4 && buffer[0] == 7 && buffer[1] == 8 && buffer[2] == 9 && buffer[3] == 10, "page file bytes");
		}
		Require(files.DirectoryExists(GamePath.Parse("selfcheck/host-dir")), "directory added by the page");
	}

	private static void CheckAudio(BrowserAudioDevice audio)
	{
		using IAudioOutput output = audio.OpenOutput(AudioFormat.Pcm16Stereo(44100), 4096);
		Require(output.FreeBytes == 4096, "initial free space");
		output.SetVolume(0.5f);
		output.Write(new byte[400]);
		Require(output.FreeBytes == 3696, "written bytes leave the free space");
		output.Play();
		Require(output.IsPlaying, "play");
		output.Stop();
		Require(!output.IsPlaying, "stop");
	}

	private static void CheckDispatcher(BrowserPlatform platform)
	{
		bool posted = false;
		platform.Dispatcher.Post(() => posted = true);
		platform.Pump();
		Require(posted, "posted callback");
		bool fired = false;
		using (platform.Dispatcher.Schedule(TimeSpan.Zero, () => fired = true))
			platform.Pump();
		Require(fired, "due timer");
		bool ran = false;
		using IGameThread thread = platform.Dispatcher.StartThread("selfcheck", () => ran = true);
		platform.Pump();
		Require(ran && thread.IsCompleted, "cooperative thread");
	}

	private static void Run(StringBuilder report, string name, Action check)
	{
		try
		{
			check();
			report.Append("pass\t").Append(name).Append("\tok\n");
		}
		catch (Exception exception)
		{
			report.Append("fail\t").Append(name).Append('\t').Append(Describe(exception)).Append('\n');
		}
	}

	private static void Require(bool condition, string message)
	{
		if (!condition)
			throw new InvalidOperationException(message);
	}

	private static string Describe(Exception exception) => $"{exception.GetType().Name}: {exception.Message}".Replace('\t', ' ').Replace('\r', ' ').Replace('\n', ' ');

	private sealed class SilentPointerHost : IBrowserInputHost
	{
		public void SetPointerPosition(int x, int y)
		{
		}

		public void SetPointerVisible(bool visible)
		{
		}
	}
}
