using System.Buffers.Binary;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Checks the global texture registry against synthetic archives and a recording renderer.
/// </summary>
public sealed class TextureCacheTests
{
	/// <summary>
	/// A PVM texture uploads its decoded pixels at the image's width, height and stride.
	/// </summary>
	[Fact]
	public void PvmTextureUploadsDecodedPixelsAtTheirStride()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		PvmTexture source = PvmTexture(0x101, 2, 2, [0xF800, 0x07E0, 0x001F, 0xFFFF]);
		using TextureRequest request = Assert.IsType<TextureRequest>(cache.Acquire(source));
		RecordingRenderer.TextureUpload upload = Assert.Single(renderer.TextureUploads);
		Assert.Equal(2, upload.Width);
		Assert.Equal(2, upload.Height);
		Assert.Equal(8, upload.Stride);
		Assert.Equal(source.Image.Pixels.ToArray(), upload.Pixels.ToArray());
		Assert.Same(upload.Texture, request.Texture);
		Assert.Equal(TextureTestData.Bgra(0, 0, 255, 255), TextureTestData.Pixel(source.Image, 0, 0));
	}

	/// <summary>
	/// A PAE archive's XVM textures enter the same registry under their global indices.
	/// </summary>
	[Fact]
	public void PaeTextureEntersTheRegistryByGlobalIndex()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Bgra8888, 0x202, 2, 2, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16])]);
		PaeContainer container = PaeContainer.Parse(TextureTestData.Pae([], [], xvm));
		XvmTexture source = Assert.Single(container.Textures);
		Assert.Equal(1, cache.Register(container.Textures));
		using TextureRequest request = Assert.IsType<TextureRequest>(cache.Acquire(source));
		Assert.Equal(0x202u, request.GlobalIndex);
		Assert.NotNull(cache.Find(source));
		Assert.Equal(2, request.Texture.Width);
		Assert.Equal(2, request.Texture.Height);
		Assert.Equal(4, request.Image.Width * request.Image.Height);
		Assert.Single(renderer.TextureUploads);
	}

	/// <summary>
	/// A second acquire of a live index reuses the uploaded texture and counts references.
	/// </summary>
	[Fact]
	public void CacheHitReusesTextureAndCountsReferences()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		PvmTexture source = PvmTexture(0x303, 2, 2, [0xF800, 0x07E0, 0x001F, 0xFFFF]);
		Assert.True(cache.Register(source));
		TextureRequest first = Assert.IsType<TextureRequest>(cache.Acquire(0x303));
		TextureRequest second = Assert.IsType<TextureRequest>(cache.Acquire(0x303));
		TextureCacheEntry entry = first.Entry;
		Assert.Same(entry, second.Entry);
		Assert.Same(first.Texture, second.Texture);
		Assert.Equal(2, entry.ReferenceCount);
		Assert.Single(renderer.TextureUploads);
		first.Dispose();
		Assert.Equal(1, entry.ReferenceCount);
		Assert.Equal(0, renderer.DisposedTextureCount);
		second.Dispose();
		Assert.Equal(0, entry.ReferenceCount);
		Assert.Equal(1, renderer.DisposedTextureCount);
		second.Dispose();
		Assert.Equal(1, renderer.DisposedTextureCount);
	}

	/// <summary>
	/// A duplicate global index keeps the first decoded image.
	/// </summary>
	[Fact]
	public void DuplicateGlobalIndexKeepsFirstSource()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		PvmTexture first = PvmTexture(0x404, 2, 2, [0xF800, 0x07E0, 0x001F, 0xFFFF]);
		PvmTexture second = PvmTexture(0x404, 1, 1, [0xF800]);
		Assert.True(cache.Register(first));
		Assert.False(cache.Register(second));
		using TextureRequest firstRequest = Assert.IsType<TextureRequest>(cache.Acquire(first));
		using TextureRequest secondRequest = Assert.IsType<TextureRequest>(cache.Acquire(second));
		Assert.Same(firstRequest.Entry, secondRequest.Entry);
		Assert.Equal(2, secondRequest.Image.Width);
		Assert.Single(renderer.TextureUploads);
	}

	/// <summary>
	/// Releasing the last reference disposes the GPU texture and an acquire uploads it again.
	/// </summary>
	[Fact]
	public void ReleaseDisposesTextureAndAcquireReloadsIt()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		PvmTexture source = PvmTexture(0x505, 2, 2, [0xF800, 0x07E0, 0x001F, 0xFFFF]);
		TextureRequest first = Assert.IsType<TextureRequest>(cache.Acquire(source));
		ITexture firstTexture = first.Texture;
		first.Dispose();
		Assert.Equal(1, renderer.DisposedTextureCount);
		TextureCacheEntry entry = Assert.IsType<TextureCacheEntry>(cache.Find(0x505));
		Assert.Equal(0, entry.ReferenceCount);
		Assert.Null(entry.Texture);
		using TextureRequest reloaded = Assert.IsType<TextureRequest>(cache.Acquire(0x505));
		Assert.Same(entry, reloaded.Entry);
		Assert.NotSame(firstTexture, reloaded.Texture);
		Assert.Equal(2, renderer.TextureUploads.Count);
	}

	/// <summary>
	/// A full table evicts the oldest unreferenced index and can reload it from the retained image.
	/// </summary>
	[Fact]
	public void FullRequestTableEvictsAndReloads()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		for (uint index = 1; index <= TextureCache.Capacity; index++)
		{
			Assert.True(cache.Register(index, new TextureImage(1, 1, [(byte)index, 0, 0, 255])));
			using TextureRequest request = Assert.IsType<TextureRequest>(cache.Acquire(index));
		}
		Assert.Equal(TextureCache.Capacity, cache.Count);
		Assert.Equal(TextureCache.Capacity, renderer.TextureUploads.Count);
		Assert.True(cache.Register(1025, new TextureImage(1, 1, [1, 2, 3, 4])));
		TextureRequest newest = Assert.IsType<TextureRequest>(cache.Acquire(1025));
		Assert.Equal(TextureCache.Capacity, cache.Count);
		Assert.Null(cache.Find(1));
		Assert.NotNull(cache.Find(1025));
		newest.Dispose();
		using TextureRequest reloaded = Assert.IsType<TextureRequest>(cache.Acquire(1));
		Assert.Equal(TextureCache.Capacity, cache.Count);
		Assert.NotNull(cache.Find(1));
		Assert.Null(cache.Find(2));
		Assert.Equal(TextureCache.Capacity + 2, renderer.TextureUploads.Count);
	}

	/// <summary>
	/// Every slot being referenced leaves no eviction candidate, so a new index is not loaded.
	/// </summary>
	[Fact]
	public void FullTableOfLiveRequestsRefusesAnotherIndex()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		List<TextureRequest> requests = [];
		for (uint index = 1; index <= TextureCache.Capacity; index++)
		{
			Assert.True(cache.Register(index, new TextureImage(1, 1, [(byte)index, 0, 0, 255])));
			requests.Add(Assert.IsType<TextureRequest>(cache.Acquire(index)));
		}
		Assert.True(cache.Register(1025, new TextureImage(1, 1, [1, 2, 3, 4])));
		Assert.Null(cache.Acquire(1025));
		Assert.Equal(TextureCache.Capacity, cache.Count);
		Assert.Equal(TextureCache.Capacity, renderer.TextureUploads.Count);
		foreach (TextureRequest request in requests)
			request.Dispose();
	}

	/// <summary>
	/// An unregistered index and the reserved empty index produce no request.
	/// </summary>
	[Fact]
	public void MissingIndexReturnsNoRequest()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache cache = new(renderer);
		Assert.Null(cache.Acquire(0x606));
		Assert.Null(cache.Acquire(0));
		Assert.Null(cache.Acquire(TextureCache.EmptyIndex));
		PvmTexture zero = PvmTexture(0, 1, 1, [0xF800]);
		Assert.False(cache.Register(zero));
		Assert.Null(cache.Acquire(zero));
		Assert.Null(cache.Find(0x606));
		Assert.Empty(renderer.TextureUploads);
	}

	/// <summary>
	/// Disposing the cache releases every uploaded texture once and rejects later work.
	/// </summary>
	[Fact]
	public void DisposeReleasesUploadedTexturesOnce()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		TextureCache cache = new(renderer);
		Assert.True(cache.Register(0x707, new TextureImage(1, 1, [1, 2, 3, 4])));
		Assert.True(cache.Register(0x708, new TextureImage(1, 1, [5, 6, 7, 8])));
		TextureRequest first = Assert.IsType<TextureRequest>(cache.Acquire(0x707));
		TextureRequest second = Assert.IsType<TextureRequest>(cache.Acquire(0x708));
		cache.Dispose();
		Assert.Equal(2, renderer.DisposedTextureCount);
		Assert.Null(first.Entry.Texture);
		Assert.Null(second.Entry.Texture);
		cache.Dispose();
		first.Dispose();
		second.Dispose();
		Assert.Equal(2, renderer.DisposedTextureCount);
		Assert.Equal(0, renderer.DisposeCount);
		Assert.Throws<ObjectDisposedException>(() => cache.Acquire(0x707));
	}

	private static PvmTexture PvmTexture(uint globalIndex, int width, int height, ushort[] colors)
	{
		byte[] pixels = new byte[colors.Length * 2];
		for (int index = 0; index < colors.Length; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(pixels.AsSpan(index * 2), colors[index]);
		byte[] chunk = TextureTestData.Pvr(PvrDataFormat.Rectangle, PvrPixelFormat.Rgb565, width, height, pixels);
		byte[] archive = TextureTestData.Pvm(PvmArchiveFlags.GlobalIndices, [(0, string.Empty, 0, 0, globalIndex)], [chunk]);
		return PvmArchive.Parse(archive).Textures[0];
	}
}
