using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Imaging;

namespace PsoBB.Scene;

/// <summary>
/// The map texture archive loader behind <c>0x00800BC0</c>: read the named XVM or PRS-XVM file
/// and return every texture in archive order.
/// </summary>
public static class MapTextureArchive
{
	/// <summary>
	/// Tries to read the named map texture archive.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="name">The archive name.</param>
	/// <param name="textures">The textures in archive order, or an empty list when the file is absent.</param>
	/// <returns><see langword="true"/> when the file was read.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed.</exception>
	[Original(0x00800BC0, "MapTextureArchive_Load_00800bc0")]
	public static bool TryLoad(IDataFiles files, string name, out IReadOnlyList<XvmTexture> textures)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(name);
		if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
		{
			textures = [];
			return false;
		}
		ReadOnlyMemory<byte> xvm = data;
		if (data.Length < 4 || System.Buffers.Binary.BinaryPrimitives.ReadUInt32LittleEndian(data.Span) != XvmTextureReader.Magic)
			xvm = Decompress(data, name);
		textures = XvmArchive.Read(xvm.Span);
		return true;
	}

	private static ReadOnlyMemory<byte> Decompress(ReadOnlyMemory<byte> data, string name)
	{
		int capacity = Math.Max(0x10000, data.Length * 4);
		while (capacity <= 0x4000000)
		{
			byte[] destination = new byte[capacity];
			try
			{
				int written = PrsDecompressor.Decompress(data.Span, destination);
				return destination.AsMemory(0, written);
			}
			catch (ArgumentException)
			{
				capacity *= 2;
			}
		}
		throw new TextureFormatException($"The map texture archive '{name}' is neither XVM nor a supported PRS stream.", 0);
	}
}
