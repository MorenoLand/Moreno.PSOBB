using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;
using PsoBB.Client;
using PsoBB.Graphics;
using PsoBB.Platform.Web;
using PsoBB.Rendering.WebGL;

namespace PsoBB.Web;

/// <summary>
/// The browser program: it owns the canvas, connects the browser platform to the WebGL renderer and runs the client host.
/// </summary>
/// <remarks>
/// The page loads the data root through the platform JavaScript module before it calls <see cref="Start"/>.
/// The program keeps the preloaded data root only as a label for <see cref="ClientOptions"/> and diagnostics.
/// </remarks>
[SupportedOSPlatform("browser")]
public static partial class WebProgram
{
	private static ClientHost? _host;

	/// <summary>
	/// Starts the client on a canvas and returns the active renderer description.
	/// </summary>
	/// <param name="canvasId">The canvas the renderer presents through.</param>
	/// <param name="dataRoot">The data root label supplied by the page.</param>
	/// <param name="width">The backbuffer width in pixels.</param>
	/// <param name="height">The backbuffer height in pixels.</param>
	/// <param name="multisampleCount">The requested samples per pixel: 0, 2, 4 or 8.</param>
	/// <returns>The renderer settings and data root.</returns>
	/// <exception cref="ArgumentException">The canvas or data root is blank.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The size or sample count is invalid.</exception>
	/// <exception cref="WebGLUnavailableException">The browser could not create a WebGL 2 context.</exception>
	[JSExport]
	public static string Start(string canvasId, string dataRoot, int width, int height, int multisampleCount)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(canvasId);
		ArgumentException.ThrowIfNullOrWhiteSpace(dataRoot);
		Shutdown();
		BrowserPlatformHost.Create();
		BrowserPlatform platform = BrowserPlatformHost.Current ?? throw new InvalidOperationException("The browser platform did not start.");
		WebGLRenderer? renderer = null;
		try
		{
			renderer = new WebGLRenderer(canvasId, new RenderSettings(width, height, true, multisampleCount, true));
			_host = new ClientHost(new ClientOptions(dataRoot), platform.Files, platform.Clock, platform.Settings, platform.Input, platform.Dispatcher, platform.Audio, renderer);
		}
		catch
		{
			renderer?.Dispose();
			BrowserPlatformHost.DisposePlatform();
			throw;
		}
		return $"{renderer.Settings.Width}x{renderer.Settings.Height}, {renderer.Settings.MultisampleCount} samples, data root {dataRoot}";
	}

	/// <summary>
	/// Runs one animation frame and returns the number of frames presented.
	/// </summary>
	/// <returns>One after a presented frame; zero after a stop request.</returns>
	/// <exception cref="InvalidOperationException">The client has not started.</exception>
	[JSExport]
	public static int RunFrame()
	{
		ClientHost host = _host ?? throw new InvalidOperationException("The browser client has not started.");
		return host.RunFrames(1);
	}

	/// <summary>
	/// Gets the number of frames presented since the client started.
	/// </summary>
	/// <returns>The presented frame count, or zero before start-up.</returns>
	[JSExport]
	public static int GetFrameCount() => unchecked((int)(_host?.FrameCount ?? 0));

	/// <summary>
	/// Stops the client and releases the renderer and browser platform.
	/// </summary>
	[JSExport]
	public static void Shutdown()
	{
		ClientHost? host = _host;
		_host = null;
		try
		{
			host?.Dispose();
		}
		finally
		{
			BrowserPlatformHost.DisposePlatform();
		}
	}
}
