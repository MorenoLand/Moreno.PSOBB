namespace PsoBB.Platform.Web;

/// <summary>
/// A string key-value store with the synchronous behaviour of <c>localStorage</c>.
/// </summary>
public interface IBrowserStorage
{
	/// <summary>
	/// Reads a value, or <see langword="null"/> when the key is absent.
	/// </summary>
	/// <param name="key">The exact storage key.</param>
	/// <returns>The stored value or <see langword="null"/>.</returns>
	string? Get(string key);

	/// <summary>
	/// Stores a value, replacing any existing value for the key.
	/// </summary>
	/// <param name="key">The exact storage key.</param>
	/// <param name="value">The value to store.</param>
	void Set(string key, string value);

	/// <summary>
	/// Removes a key.
	/// </summary>
	/// <param name="key">The exact storage key.</param>
	void Remove(string key);

	/// <summary>
	/// Returns every key in the store.
	/// </summary>
	/// <returns>A snapshot of the keys.</returns>
	IReadOnlyList<string> GetKeys();
}
