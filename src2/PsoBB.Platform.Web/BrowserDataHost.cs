using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The preloaded data root registered by the page before the platform starts.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed partial class BrowserDataHost : IBrowserDataHost
{
	/// <inheritdoc/>
	public string GetManifest() => ReadManifest();

	/// <inheritdoc/>
	public byte[]? Read(string path) => ReadFile(path);

	[JSImport("data.manifest", "psobb.platform")]
	private static partial string ReadManifest();

	[JSImport("data.read", "psobb.platform")]
	private static partial byte[]? ReadFile(string path);
}
