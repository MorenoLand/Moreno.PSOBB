using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The browser <c>localStorage</c> store.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed partial class BrowserLocalStorage : IBrowserStorage
{
	private const char KeySeparator = '\u001f';

	/// <inheritdoc/>
	public string? Get(string key) => GetItem(key);

	/// <inheritdoc/>
	public void Set(string key, string value) => SetItem(key, value);

	/// <inheritdoc/>
	public void Remove(string key) => RemoveItem(key);

	/// <inheritdoc/>
	public IReadOnlyList<string> GetKeys()
	{
		string joined = ReadKeys();
		return joined.Length == 0 ? [] : joined.Split(KeySeparator);
	}

	[JSImport("storage.getItem", "psobb.platform")]
	private static partial string? GetItem(string key);

	[JSImport("storage.setItem", "psobb.platform")]
	private static partial void SetItem(string key, string value);

	[JSImport("storage.removeItem", "psobb.platform")]
	private static partial void RemoveItem(string key);

	[JSImport("storage.keys", "psobb.platform")]
	private static partial string ReadKeys();
}
