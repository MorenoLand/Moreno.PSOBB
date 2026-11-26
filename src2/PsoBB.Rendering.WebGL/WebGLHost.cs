using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;
using PsoBB.Graphics;

namespace PsoBB.Rendering.WebGL;

/// <summary>
/// The JavaScript entry points that drive the WebGL renderer.
/// </summary>
[SupportedOSPlatform("browser")]
public static partial class WebGLHost
{
	/// <summary>
	/// Runs the WebGL renderer self-check on a canvas.
	/// </summary>
	/// <param name="canvasId">The identifier of the canvas element.</param>
	/// <param name="width">The backbuffer width in pixels.</param>
	/// <param name="height">The backbuffer height in pixels.</param>
	/// <param name="multisampleCount">The requested samples per pixel: 0, 2, 4 or 8.</param>
	/// <returns>The tab-separated self-check report.</returns>
	[JSExport]
	public static string RunSelfCheck(string canvasId, int width, int height, int multisampleCount) => WebGLSelfCheck.Run(canvasId, new RenderSettings(width, height, true, multisampleCount, true));
}
