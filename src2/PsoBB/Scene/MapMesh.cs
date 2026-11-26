using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// The vertex and index buffers of one mesh node.
/// </summary>
/// <remarks>
/// The first buffer table is the geometry the client uploads; the second table is the alpha index list. Both tables hold offsets into the relocated REL image. The mesh parser keeps the vertex bytes and decodes the 16-bit index values, while render-state arguments stay as raw bytes because their setters belong to the unported render-state layer.
/// </remarks>
public sealed class MapMesh
{
	private readonly MapVertexBuffer[] _vertexBuffers;
	private readonly MapIndexBuffer[] _indexBuffers;
	private readonly MapIndexBuffer[] _alphaIndexBuffers;

	private MapMesh(MapVertexBuffer[] vertexBuffers, MapIndexBuffer[] indexBuffers, MapIndexBuffer[] alphaIndexBuffers)
	{
		_vertexBuffers = vertexBuffers;
		_indexBuffers = indexBuffers;
		_alphaIndexBuffers = alphaIndexBuffers;
	}

	/// <summary>Gets the vertex buffers in file order.</summary>
	public IReadOnlyList<MapVertexBuffer> VertexBuffers => _vertexBuffers;

	/// <summary>Gets the opaque index buffers in file order.</summary>
	public IReadOnlyList<MapIndexBuffer> IndexBuffers => _indexBuffers;

	/// <summary>Gets the alpha index buffers in file order.</summary>
	public IReadOnlyList<MapIndexBuffer> AlphaIndexBuffers => _alphaIndexBuffers;

	/// <summary>
	/// Parses one mesh record and its three buffer tables.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Mesh offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The parsed mesh.</returns>
	/// <exception cref="SceneFormatException">The mesh or one of its buffer tables lies outside the image.</exception>
	internal static MapMesh Parse(byte[] data, int offset, string context)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - 0x1C)
			throw new SceneFormatException($"The mesh of {context} is truncated.", offset);
		int vertexTableOffset = MapRenderGeometryFile.ReadOffset(image, offset + 4, $"{context} mesh vertex table");
		uint vertexCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 8)..]);
		int indexTableOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x0C, $"{context} mesh index table");
		uint indexCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x10)..]);
		int alphaTableOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x14, $"{context} mesh alpha table");
		uint alphaCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x18)..]);
		MapRenderGeometryFile.ValidateTable(image, vertexTableOffset, vertexCount, MapVertexBuffer.EntrySize, $"{context} mesh vertex table");
		MapRenderGeometryFile.ValidateTable(image, indexTableOffset, indexCount, MapIndexBuffer.EntrySize, $"{context} mesh index table");
		MapRenderGeometryFile.ValidateTable(image, alphaTableOffset, alphaCount, MapIndexBuffer.EntrySize, $"{context} mesh alpha table");
		MapVertexBuffer[] vertexBuffers = new MapVertexBuffer[(int)vertexCount];
		for (int index = 0; index < vertexBuffers.Length; index++)
			vertexBuffers[index] = MapVertexBuffer.Parse(data, vertexTableOffset + index * MapVertexBuffer.EntrySize, context);
		MapIndexBuffer[] indexBuffers = new MapIndexBuffer[(int)indexCount];
		for (int index = 0; index < indexBuffers.Length; index++)
			indexBuffers[index] = MapIndexBuffer.Parse(data, indexTableOffset + index * MapIndexBuffer.EntrySize, context);
		MapIndexBuffer[] alphaIndexBuffers = new MapIndexBuffer[(int)alphaCount];
		for (int index = 0; index < alphaIndexBuffers.Length; index++)
			alphaIndexBuffers[index] = MapIndexBuffer.Parse(data, alphaTableOffset + index * MapIndexBuffer.EntrySize, context);
		return new MapMesh(vertexBuffers, indexBuffers, alphaIndexBuffers);
	}
}
