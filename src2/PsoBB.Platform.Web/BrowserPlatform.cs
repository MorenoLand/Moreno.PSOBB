using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The browser implementations of the client's platform contracts.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed class BrowserPlatform
{
	private BrowserPlatform(BrowserGameFileSystem files, BrowserGameSettings settings, BrowserGameClock clock, BrowserGameInput input, BrowserAudioDevice audio, BrowserGameDispatcher dispatcher)
	{
		Files = files;
		Settings = settings;
		Clock = clock;
		Input = input;
		Audio = audio;
		Dispatcher = dispatcher;
	}

	/// <summary>
	/// Gets the preloaded memory data root.
	/// </summary>
	public BrowserGameFileSystem Files { get; }

	/// <summary>
	/// Gets the settings stored in <c>localStorage</c>.
	/// </summary>
	public BrowserGameSettings Settings { get; }

	/// <summary>
	/// Gets the browser clock.
	/// </summary>
	public BrowserGameClock Clock { get; }

	/// <summary>
	/// Gets the browser input device.
	/// </summary>
	public BrowserGameInput Input { get; }

	/// <summary>
	/// Gets the Web Audio device.
	/// </summary>
	public BrowserAudioDevice Audio { get; }

	/// <summary>
	/// Gets the cooperative dispatcher.
	/// </summary>
	public BrowserGameDispatcher Dispatcher { get; }

	/// <summary>
	/// Creates the browser platform and loads the data root registered by the host.
	/// </summary>
	/// <returns>The connected platform.</returns>
	public static BrowserPlatform Create()
	{
		BrowserGameFileSystem files = new();
		files.LoadFrom(new BrowserDataHost());
		BrowserGameClock clock = new(new BrowserClockSource());
		return new BrowserPlatform(
			files,
			new BrowserGameSettings(new BrowserLocalStorage()),
			clock,
			new BrowserGameInput(new BrowserInputHost()),
			new BrowserAudioDevice(new BrowserAudioBackend()),
			new BrowserGameDispatcher(clock));
	}

	/// <summary>
	/// Runs queued callbacks and due timers without blocking.
	/// </summary>
	public void Pump() => Dispatcher.Pump();
}
