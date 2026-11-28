namespace PsoBB.Platform.Web;

/// <summary>
/// The host-side data root that a browser preloads.
/// </summary>
public interface IBrowserDataHost
{
	/// <summary>
	/// Returns the data root manifest, one <c>D path</c> or <c>F path</c> line per directory or file.
	/// </summary>
	/// <returns>The manifest text.</returns>
	string GetManifest();

	/// <summary>
	/// Reads one file from the preloaded data root.
	/// </summary>
	/// <param name="path">The forward-slash path.</param>
	/// <returns>The file bytes, or <see langword="null"/> when the path is not loaded.</returns>
	byte[]? Read(string path);
}
