using PsoBB.Imaging;

namespace PsoBB.Graphics.Textures;

/// <summary>
/// The client's texture registry, keyed by global texture index and backed by a fixed request table.
/// </summary>
/// <remarks>
/// The original keeps a 1024-entry request table and a 1024-entry texture table in process memory.
/// This cache keeps one retained <see cref="TextureImage"/> per index, so a released GPU texture can
/// be uploaded again without reopening its archive. The cache owns the GPU textures it creates, but
/// not the renderer that creates them.
/// </remarks>
public sealed class TextureCache : IDisposable
{
	/// <summary>Gets the number of request slots in the table.</summary>
	public const int Capacity = 1024;

	/// <summary>Gets the marker the original uses for an empty texture record.</summary>
	public const uint EmptyIndex = 0xFFFFFFEF;

	private readonly IRenderer _renderer;
	private readonly TextureCacheEntry[] _entries = new TextureCacheEntry[Capacity];
	private readonly Dictionary<uint, TextureRecord> _records = [];
	private long _useClock;
	private bool _disposed;

	/// <summary>
	/// Creates a cache and its fixed request table for the given renderer.
	/// </summary>
	/// <param name="renderer">The renderer that uploads and disposes GPU textures.</param>
	[Original(0x0082AC64)]
	public TextureCache(IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		_renderer = renderer;
		for (int index = 0; index < Capacity; index++)
			_entries[index] = new TextureCacheEntry();
	}

	/// <summary>Gets the number of request slots that hold a cached index.</summary>
	public int Count { get; private set; }

	/// <summary>Gets the number of cached indices whose GPU texture is uploaded.</summary>
	public int LoadedCount
	{
		get
		{
			int count = 0;
			foreach (TextureCacheEntry entry in _entries)
				if (entry.Texture is not null)
					count++;
			return count;
		}
	}

	/// <summary>
	/// Registers every texture in a PVM archive.
	/// </summary>
	/// <param name="archive">The parsed archive.</param>
	/// <returns>The number of textures newly registered.</returns>
	public int Register(PvmArchive archive)
	{
		ArgumentNullException.ThrowIfNull(archive);
		ObjectDisposedException.ThrowIf(_disposed, this);
		int registered = 0;
		foreach (PvmTexture texture in archive.Textures)
			if (Register(texture))
				registered++;
		return registered;
	}

	/// <summary>
	/// Registers decoded XVM textures for index lookup.
	/// </summary>
	/// <param name="textures">The decoded textures.</param>
	/// <returns>The number of textures newly registered.</returns>
	public int Register(IEnumerable<XvmTexture> textures)
	{
		ArgumentNullException.ThrowIfNull(textures);
		ObjectDisposedException.ThrowIf(_disposed, this);
		int registered = 0;
		foreach (XvmTexture texture in textures)
			if (Register(texture))
				registered++;
		return registered;
	}

	/// <summary>
	/// Retains a PVM texture's decoded image for lookup by its global index.
	/// </summary>
	/// <param name="texture">The archive texture.</param>
	/// <returns>True when the index was not registered before.</returns>
	public bool Register(PvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		return Register(texture.GlobalIndex, texture.Image);
	}

	/// <summary>
	/// Retains an XVM texture's decoded image for lookup by its global index.
	/// </summary>
	/// <param name="texture">The decoded archive texture.</param>
	/// <returns>True when the index was not registered before.</returns>
	public bool Register(XvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		return Register(texture.GlobalIndex, texture.Image);
	}

	/// <summary>
	/// Retains one decoded image for a global index; the first image for an index wins.
	/// </summary>
	/// <param name="globalIndex">The global texture index.</param>
	/// <param name="image">The decoded image.</param>
	/// <returns>True when the index was not registered before.</returns>
	internal bool Register(uint globalIndex, TextureImage image)
	{
		ArgumentNullException.ThrowIfNull(image);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (globalIndex == 0 || globalIndex == EmptyIndex)
			return false;
		if (_records.ContainsKey(globalIndex))
			return false;
		_records.Add(globalIndex, new TextureRecord(globalIndex, image));
		return true;
	}

	/// <summary>
	/// Finds a cached texture by its global index.
	/// </summary>
	/// <param name="globalIndex">The global texture index.</param>
	/// <returns>The cached slot, or null when the index is absent.</returns>
	[Original(0x00829DA8)]
	public TextureCacheEntry? Find(uint globalIndex)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (globalIndex == 0 || globalIndex == EmptyIndex)
			return null;
		foreach (TextureCacheEntry entry in _entries)
			if (entry.IsUsed && entry.GlobalIndex == globalIndex)
				return entry;
		return null;
	}

	/// <summary>
	/// Finds the cached slot for a PVM texture's global index.
	/// </summary>
	/// <param name="texture">The archive texture.</param>
	/// <returns>The cached slot, or null when the index is absent.</returns>
	public TextureCacheEntry? Find(PvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		return Find(texture.GlobalIndex);
	}

	/// <summary>
	/// Finds the cached slot for an XVM texture's global index.
	/// </summary>
	/// <param name="texture">The decoded archive texture.</param>
	/// <returns>The cached slot, or null when the index is absent.</returns>
	public TextureCacheEntry? Find(XvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		return Find(texture.GlobalIndex);
	}

	/// <summary>
	/// Finds the uploaded texture for a global index.
	/// </summary>
	/// <param name="globalIndex">The global texture index.</param>
	/// <returns>The uploaded texture, or null when the index is absent or released.</returns>
	public ITexture? FindTexture(uint globalIndex) => Find(globalIndex)?.Texture;

	/// <summary>
	/// Loads a texture by global index and adds a reference.
	/// </summary>
	/// <param name="globalIndex">The global texture index.</param>
	/// <returns>The request, or null when the index is missing or the table has no evictable slot.</returns>
	[Original(0x00829E74)]
	public TextureRequest? Acquire(uint globalIndex)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (globalIndex == 0 || globalIndex == EmptyIndex)
			return null;
		if (!_records.TryGetValue(globalIndex, out TextureRecord? record))
			return null;
		TextureCacheEntry? entry = Find(globalIndex);
		if (entry is null)
		{
			entry = RentEntry(globalIndex, record);
			if (entry is null)
				return null;
		}
		if (record.Texture is null)
			Upload(record);
		entry.ReferenceCount++;
		record.ReferenceCount++;
		entry.LastUse = ++_useClock;
		return new TextureRequest(this, entry);
	}

	/// <summary>
	/// Registers a PVM texture when needed and loads it by its global index.
	/// </summary>
	/// <param name="texture">The archive texture.</param>
	/// <returns>The request, or null when the index is missing or the table is full.</returns>
	public TextureRequest? Acquire(PvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		Register(texture);
		return Acquire(texture.GlobalIndex);
	}

	/// <summary>
	/// Registers an XVM texture when needed and loads it by its global index.
	/// </summary>
	/// <param name="texture">The decoded archive texture.</param>
	/// <returns>The request, or null when the index is missing or the table is full.</returns>
	public TextureRequest? Acquire(XvmTexture texture)
	{
		ArgumentNullException.ThrowIfNull(texture);
		Register(texture);
		return Acquire(texture.GlobalIndex);
	}

	/// <summary>
	/// Uploads the decoded image through the renderer and attaches it to the record.
	/// </summary>
	/// <param name="record">The record to upload.</param>
	[Original(0x0082A3E0)]
	private void Upload(TextureRecord record)
	{
		TextureImage image = record.Image;
		record.Texture = _renderer.CreateTexture(image.Width, image.Height, image.Pixels.Span, image.Stride);
	}

	/// <summary>
	/// Releases one reference and frees the GPU texture when the last one goes away.
	/// </summary>
	/// <param name="entry">The request slot being released.</param>
	[Original(0x00829DE0)]
	internal void Release(TextureCacheEntry entry)
	{
		if (_disposed || entry.ReferenceCount == 0)
			return;
		entry.ReferenceCount--;
		entry.LastUse = ++_useClock;
		TextureRecord? record = entry.Record;
		if (record is null)
			return;
		if (record.ReferenceCount > 0)
			record.ReferenceCount--;
		if (entry.ReferenceCount != 0)
			return;
		ITexture? texture = record.Texture;
		record.Texture = null;
		texture?.Dispose();
	}

	/// <summary>
	/// Finds a free slot or evicts the least recently used cached index that has no live request.
	/// </summary>
	/// <param name="globalIndex">The index to place.</param>
	/// <param name="record">The record backing the index.</param>
	/// <returns>The slot, or null when every slot has a live request.</returns>
	private TextureCacheEntry? RentEntry(uint globalIndex, TextureRecord record)
	{
		TextureCacheEntry? free = null;
		foreach (TextureCacheEntry entry in _entries)
			if (!entry.IsUsed)
			{
				free = entry;
				break;
			}
		if (free is null)
		{
			long oldest = long.MaxValue;
			foreach (TextureCacheEntry entry in _entries)
				if (entry.ReferenceCount == 0 && entry.LastUse < oldest)
				{
					oldest = entry.LastUse;
					free = entry;
				}
			if (free is null)
				return null;
			free.Reset();
			Count--;
		}
		free.Assign(globalIndex, record);
		Count++;
		return free;
	}

	/// <summary>
	/// Disposes every uploaded texture and clears the registry.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (TextureRecord record in _records.Values)
		{
			ITexture? texture = record.Texture;
			record.Texture = null;
			texture?.Dispose();
			record.Reset();
		}
		_records.Clear();
		foreach (TextureCacheEntry entry in _entries)
			entry.Reset();
		Count = 0;
		_useClock = 0;
	}
}
