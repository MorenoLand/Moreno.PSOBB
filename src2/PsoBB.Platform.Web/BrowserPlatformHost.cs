using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The JavaScript entry points that drive the browser platform.
/// </summary>
[SupportedOSPlatform("browser")]
public static partial class BrowserPlatformHost
{
	private static BrowserPlatform? _platform;

	/// <summary>
	/// Gets the connected platform, or <see langword="null"/> before <see cref="Create"/>.
	/// </summary>
	public static BrowserPlatform? Current => _platform;

	/// <summary>
	/// Creates the platform once and loads the registered data root.
	/// </summary>
	[JSExport]
	public static void Create() => _platform ??= BrowserPlatform.Create();

	/// <summary>
	/// Runs queued callbacks and due timers for one frame.
	/// </summary>
	[JSExport]
	public static void Pump() => _platform?.Pump();

	/// <summary>
	/// Reads pending browser input into the current keyboard and mouse state.
	/// </summary>
	[JSExport]
	public static void PollInput() => _platform?.Input.Poll();

	/// <summary>
	/// Queues a keyboard scan-code change.
	/// </summary>
	/// <param name="scanCode">The DirectInput scan code.</param>
	/// <param name="down">Whether the key is held.</param>
	[JSExport]
	public static void PushKey(int scanCode, bool down) => _platform?.Input.Push(BrowserInputEvent.Key(scanCode, down));

	/// <summary>
	/// Queues a pointer move.
	/// </summary>
	/// <param name="x">The horizontal client-area position.</param>
	/// <param name="y">The vertical client-area position.</param>
	/// <param name="deltaX">The horizontal movement.</param>
	/// <param name="deltaY">The vertical movement.</param>
	[JSExport]
	public static void PushPointerMove(int x, int y, int deltaX, int deltaY) => _platform?.Input.Push(BrowserInputEvent.PointerMove(x, y, deltaX, deltaY));

	/// <summary>
	/// Queues the set of held pointer buttons.
	/// </summary>
	/// <param name="buttons">The button flags held after the change.</param>
	[JSExport]
	public static void PushPointerButtons(int buttons) => _platform?.Input.Push(BrowserInputEvent.PointerButtons((MouseButtons)buttons));

	/// <summary>
	/// Queues wheel movement in 120-unit notches.
	/// </summary>
	/// <param name="delta">The wheel movement.</param>
	[JSExport]
	public static void PushWheel(int delta) => _platform?.Input.Push(BrowserInputEvent.Wheel(delta));

	/// <summary>
	/// Queues a release of every held key and button.
	/// </summary>
	[JSExport]
	public static void NotifyFocusLost() => _platform?.Input.Push(BrowserInputEvent.FocusLost());

	/// <summary>
	/// Adds a file to the loaded data root.
	/// </summary>
	/// <param name="path">The forward-slash file path.</param>
	/// <param name="content">The file bytes.</param>
	[JSExport]
	public static void AddFile(string path, [JSMarshalAs<JSType.Array<JSType.Number>>] byte[] content) => GetPlatform().Files.AddFile(GamePath.Parse(path), content);

	/// <summary>
	/// Adds a directory to the loaded data root.
	/// </summary>
	/// <param name="path">The forward-slash directory path.</param>
	[JSExport]
	public static void AddDirectory(string path) => GetPlatform().Files.AddDirectory(GamePath.Parse(path));

	/// <summary>
	/// Runs the browser platform self-check and returns one result per line.
	/// </summary>
	/// <returns>The tab-separated self-check report.</returns>
	[JSExport]
	public static string RunSelfCheck() => BrowserSelfCheck.Run(_platform);

	/// <summary>
	/// Releases the platform reference so a later <see cref="Create"/> builds a new one.
	/// </summary>
	[JSExport]
	public static void DisposePlatform() => _platform = null;

	private static BrowserPlatform GetPlatform() => _platform ?? throw new InvalidOperationException("The browser platform has not been created.");
}
