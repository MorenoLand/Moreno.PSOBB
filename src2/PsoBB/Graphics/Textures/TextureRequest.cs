using PsoBB.Imaging;

namespace PsoBB.Graphics.Textures;

/// <summary>
/// A live reference to a cached texture; disposing it returns the reference.
/// </summary>
public sealed class TextureRequest : IDisposable
{
	private readonly TextureCache _cache;
	private TextureCacheEntry? _entry;

	internal TextureRequest(TextureCache cache, TextureCacheEntry entry)
	{
		_cache = cache;
		_entry = entry;
	}

	/// <summary>Gets the global texture index.</summary>
	public uint GlobalIndex => Entry.GlobalIndex;

	/// <summary>Gets the request-table slot that holds this reference.</summary>
	/// <exception cref="ObjectDisposedException">The request was already released.</exception>
	public TextureCacheEntry Entry => _entry ?? throw new ObjectDisposedException(nameof(TextureRequest));

	/// <summary>Gets the uploaded GPU texture.</summary>
	/// <exception cref="ObjectDisposedException">The request was already released.</exception>
	public ITexture Texture => Entry.Texture ?? throw new InvalidOperationException("The texture is not uploaded.");

	/// <summary>Gets the decoded image retained by the cache.</summary>
	/// <exception cref="ObjectDisposedException">The request was already released.</exception>
	public TextureImage Image => Entry.Image ?? throw new InvalidOperationException("The texture record is not loaded.");

	/// <summary>
	/// Returns this reference to the cache. Releasing twice has no further effect.
	/// </summary>
	public void Dispose()
	{
		TextureCacheEntry? entry = _entry;
		if (entry is null)
			return;
		_entry = null;
		_cache.Release(entry);
	}
}
