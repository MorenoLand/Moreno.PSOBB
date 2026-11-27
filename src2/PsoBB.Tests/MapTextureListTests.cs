using System.Buffers.Binary;
using PsoBB.Imaging;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x0081A7D8 archive-order fill of a scene texture list.
/// </summary>
public sealed class MapTextureListTests
{
	[Fact]
	public void FillCopiesTheArchiveGlobalIndicesInOrder()
	{
		MapTextureList list = MapTextureList.Parse(Image(), 0x10);
		Assert.Equal(["tex1", "tex2"], list.Names);
		Assert.All(list.GlobalIndices, index => Assert.Equal(0u, index));

		MapTextureList filled = list.Fill([
			Texture(123),
			Texture(456),
		]);

		Assert.Equal(["tex1", "tex2"], filled.Names);
		Assert.Equal([123u, 456u], filled.GlobalIndices);
	}

	[Fact]
	public void FillLeavesMissingArchiveSlotsAtZero()
	{
		MapTextureList list = MapTextureList.Parse(Image(), 0x10);

		MapTextureList filled = list.Fill([Texture(9)]);

		Assert.Equal([9u, 0u], filled.GlobalIndices);
	}

	[Fact]
	public void TheArchiveLoaderReadsTheNamedXvm()
	{
		Files files = new();
		files.Add("m.xvm", TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Bgra8888, 77, 1, 1, [1, 2, 3, 4])]));

		Assert.True(MapTextureArchive.TryLoad(files, "m.xvm", out IReadOnlyList<XvmTexture> textures));
		XvmTexture texture = Assert.Single(textures);
		Assert.Equal(77u, texture.GlobalIndex);
		Assert.False(MapTextureArchive.TryLoad(files, "missing.xvm", out _));
	}

	private static XvmTexture Texture(uint globalIndex) =>
		new(globalIndex, XvmTextureFormat.Bgra8888, 1, 1, 0, new TextureImage(1, 1, new byte[4]));

	private static byte[] Image()
	{
		byte[] image = new byte[0x100];
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x10), 0x20);
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x14), 2);
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x20), 0x40);
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x2C), 0x50);
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x28), 0);
		BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(0x34), 0);
		"tex1\0"u8.CopyTo(image.AsSpan(0x40));
		"tex2\0"u8.CopyTo(image.AsSpan(0x50));
		return image;
	}

	private sealed class Files : PsoBB.Data.IDataFiles
	{
		private readonly Dictionary<string, byte[]> _files = new(StringComparer.OrdinalIgnoreCase);

		public void Add(string name, byte[] data) => _files[name] = data;

		public bool Exists(string name) => _files.ContainsKey(name);

		public int GetLength(string name) => _files.TryGetValue(name, out byte[]? data) ? data.Length : throw new FileNotFoundException(name);

		public ReadOnlyMemory<byte> Read(string name) => _files.TryGetValue(name, out byte[]? data) ? data : throw new FileNotFoundException(name);

		public bool TryRead(string name, out ReadOnlyMemory<byte> data)
		{
			bool found = _files.TryGetValue(name, out byte[]? stored);
			data = found ? stored : ReadOnlyMemory<byte>.Empty;
			return found;
		}
	}
}
