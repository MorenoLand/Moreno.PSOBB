using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// A <c>fmt2</c> render-geometry table with its per-section chunks and texture-data pointer.
/// </summary>
/// <remarks>
/// The root begins with the four-byte format marker, a chunk count and a radius. Each chunk stores a section id, a placement transform, a view distance and two mesh-tree arrays. The chunk table and the mesh data are offsets into the same REL image, so this parser consumes a <see cref="RelContainer"/> whose pointer words are image-relative offsets.
/// </remarks>
public sealed class MapRenderGeometryFile
{
	private readonly MapRenderChunk[] _chunks;

	private MapRenderGeometryFile(float radius, int textureDataOffset, MapRenderChunk[] chunks)
	{
		Radius = radius;
		TextureDataOffset = textureDataOffset;
		_chunks = chunks;
	}

	/// <summary>Gets the radius that bounds the complete scene.</summary>
	public float Radius { get; }

	/// <summary>Gets the offset of the texture list the original binds to this geometry, or zero when absent.</summary>
	public int TextureDataOffset { get; }

	/// <summary>Gets the section chunks in table order.</summary>
	public IReadOnlyList<MapRenderChunk> Chunks => _chunks;

	/// <summary>
	/// Parses a relocated REL image at its root.
	/// </summary>
	/// <param name="container">The relocated image.</param>
	/// <returns>The parsed geometry.</returns>
	/// <exception cref="SceneFormatException">The marker, chunk table or any mesh tree lies outside the image.</exception>
	[Original(0x0080A124, "MapLoaderLoadNrel_0080a124")]
	public static MapRenderGeometryFile Parse(RelContainer container)
	{
		ArgumentNullException.ThrowIfNull(container);
		return Parse(container.Data.Span, container.RootOffset);
	}

	/// <summary>
	/// Parses a <c>fmt2</c> root at the given offset.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="rootOffset">Offset of the four-byte <c>fmt2</c> marker.</param>
	/// <returns>The parsed geometry.</returns>
	/// <exception cref="SceneFormatException">The marker, chunk table or any mesh tree lies outside the image.</exception>
	public static MapRenderGeometryFile Parse(ReadOnlySpan<byte> data, int rootOffset = 0)
	{
		if (rootOffset < 0 || rootOffset > data.Length - 0x18)
			throw new SceneFormatException("The render geometry header is truncated.", rootOffset);
		if (!data.Slice(rootOffset, 4).SequenceEqual("fmt2"u8))
			throw new SceneFormatException("The render geometry does not begin with the fmt2 marker.", rootOffset);
		short chunkCount = BinaryPrimitives.ReadInt16LittleEndian(data[(rootOffset + 8)..]);
		if (chunkCount < 0)
			throw new SceneFormatException($"The render geometry declares {chunkCount} chunks.", rootOffset + 8);
		float radius = BinaryPrimitives.ReadSingleLittleEndian(data[(rootOffset + 0x0C)..]);
		int chunksOffset = chunkCount == 0 ? 0 : ReadOffset(data, rootOffset + 0x10, "chunk table");
		int textureDataOffset = ReadOffset(data, rootOffset + 0x14, "texture data");
		byte[] image = data.ToArray();
		if (chunkCount == 0)
			return new MapRenderGeometryFile(radius, textureDataOffset, []);
		MapRenderGeometryFile.ValidateTable(image, chunksOffset, (uint)chunkCount, MapRenderChunk.EntrySize, "render chunk table");
		MapRenderChunk[] chunks = new MapRenderChunk[chunkCount];
		for (int index = 0; index < chunkCount; index++)
		{
			int chunkOffset = chunksOffset + index * MapRenderChunk.EntrySize;
			chunks[index] = MapRenderChunk.Parse(image, chunkOffset, index);
		}
		return new MapRenderGeometryFile(radius, textureDataOffset, chunks);
	}

	/// <summary>
	/// Reads a 32-bit image offset and rejects one outside the image.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="fieldOffset">Offset of the 32-bit field.</param>
	/// <param name="name">Field name used in the error message.</param>
	/// <returns>The stored offset.</returns>
	/// <exception cref="SceneFormatException">The offset is outside the image.</exception>
	internal static int ReadOffset(ReadOnlySpan<byte> data, int fieldOffset, string name)
	{
		if (fieldOffset < 0 || fieldOffset > data.Length - 4)
			throw new SceneFormatException($"The {name} field is truncated.", fieldOffset);
		uint value = BinaryPrimitives.ReadUInt32LittleEndian(data[fieldOffset..]);
		if (value > int.MaxValue || value > data.Length)
			throw new SceneFormatException($"The {name} offset 0x{value:X8} is outside a {data.Length}-byte image.", fieldOffset);
		return (int)value;
	}

	/// <summary>
	/// Checks that a table of fixed-size entries lies inside the image.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Table start.</param>
	/// <param name="count">Entry count.</param>
	/// <param name="entrySize">Bytes per entry.</param>
	/// <param name="name">Table name used in the error message.</param>
	/// <exception cref="SceneFormatException">The table extends past the image.</exception>
	internal static void ValidateTable(ReadOnlySpan<byte> data, int offset, uint count, int entrySize, string name)
	{
		if (count > int.MaxValue / entrySize)
			throw new SceneFormatException($"The {name} count {count} exceeds the readable range.", offset);
		long length = (long)count * entrySize;
		if (offset < 0 || offset > data.Length || length > data.Length - offset)
			throw new SceneFormatException($"The {name} at 0x{offset:X} with {count} entries does not fit the image.", offset);
	}
}
