namespace PsoBB.Scene;

/// <summary>
/// One named entry in a BML model archive.
/// </summary>
public sealed class BmlEntry
{
	internal BmlEntry(string name, int geometryOffset, int compressedSize, int uncompressedSize, int textureOffset, int textureCompressedSize, int textureUncompressedSize)
	{
		Name = name;
		GeometryOffset = geometryOffset;
		CompressedSize = compressedSize;
		UncompressedSize = uncompressedSize;
		TextureOffset = textureOffset;
		TextureCompressedSize = textureCompressedSize;
		TextureUncompressedSize = textureUncompressedSize;
	}

	/// <summary>Gets the entry name, including its .nj, .xj or .njm extension.</summary>
	public string Name { get; }

	/// <summary>Gets the stored geometry size.</summary>
	public int CompressedSize { get; }

	/// <summary>Gets the geometry size after decompression.</summary>
	public int UncompressedSize { get; }

	/// <summary>Gets whether the entry carries a texture stream.</summary>
	public bool HasTextures => TextureCompressedSize > 0;

	/// <summary>Gets the stored texture-stream size.</summary>
	public int TextureCompressedSize { get; }

	/// <summary>Gets the texture-stream size after decompression.</summary>
	public int TextureUncompressedSize { get; }

	/// <summary>Gets the geometry-stream offset in the archive.</summary>
	internal int GeometryOffset { get; }

	/// <summary>Gets the texture-stream offset in the archive, or zero when absent.</summary>
	internal int TextureOffset { get; }
}
