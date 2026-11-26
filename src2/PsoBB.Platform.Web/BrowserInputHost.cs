using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The browser cursor operations behind <see cref="IGameInput"/>.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed partial class BrowserInputHost : IBrowserInputHost
{
	/// <inheritdoc/>
	public void SetPointerPosition(int x, int y) => MovePointer(x, y);

	/// <inheritdoc/>
	public void SetPointerVisible(bool visible) => ShowPointer(visible);

	[JSImport("input.setPointerPosition", "psobb.platform")]
	private static partial void MovePointer(int x, int y);

	[JSImport("input.setPointerVisible", "psobb.platform")]
	private static partial void ShowPointer(bool visible);
}
