using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// A collision mesh: its vertex array and triangle faces.
/// </summary>
public sealed class MapCollisionMesh
{
	private readonly MapCollisionVertex[] _vertices;
	private readonly MapCollisionFace[] _faces;

	private MapCollisionMesh(MapCollisionVertex[] vertices, MapCollisionFace[] faces)
	{
		_vertices = vertices;
		_faces = faces;
	}

	/// <summary>Gets the vertices in index order.</summary>
	public IReadOnlyList<MapCollisionVertex> Vertices => _vertices;

	/// <summary>Gets the collision faces.</summary>
	public IReadOnlyList<MapCollisionFace> Faces => _faces;

	/// <summary>
	/// Parses a collision mesh and infers its vertex count from the largest face index.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Mesh offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The parsed mesh.</returns>
	/// <exception cref="SceneFormatException">The mesh, faces or vertices lie outside the image.</exception>
	internal static MapCollisionMesh Parse(byte[] data, int offset, string context)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - 0x10)
			throw new SceneFormatException($"The collision mesh of {context} is truncated.", offset);
		int verticesOffset = MapRenderGeometryFile.ReadOffset(image, offset + 4, $"{context} collision vertices");
		int faceCount = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 8)..]);
		int facesOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x0C, $"{context} collision faces");
		if (faceCount < 0)
			throw new SceneFormatException($"The collision mesh of {context} declares {faceCount} faces.", offset + 8);
		MapRenderGeometryFile.ValidateTable(image, facesOffset, (uint)faceCount, MapCollisionFace.EntrySize, $"{context} collision faces");
		MapCollisionFace[] faces = new MapCollisionFace[faceCount];
		int highestVertex = -1;
		for (int index = 0; index < faces.Length; index++)
		{
			faces[index] = MapCollisionFace.Parse(data, facesOffset + index * MapCollisionFace.EntrySize, context);
			highestVertex = Math.Max(highestVertex, Math.Max(faces[index].Vertex0, Math.Max(faces[index].Vertex1, faces[index].Vertex2)));
		}
		int vertexCount = highestVertex + 1;
		long vertexLength = (long)vertexCount * MapCollisionVertex.EntrySize;
		if (vertexLength > int.MaxValue || verticesOffset < 0 || verticesOffset > image.Length || vertexLength > image.Length - verticesOffset)
			throw new SceneFormatException($"The collision vertices of {context} at 0x{verticesOffset:X} do not fit the image.", offset + 4);
		MapCollisionVertex[] vertices = new MapCollisionVertex[vertexCount];
		for (int index = 0; index < vertices.Length; index++)
			vertices[index] = MapCollisionVertex.Parse(data, verticesOffset + index * MapCollisionVertex.EntrySize);
		return new MapCollisionMesh(vertices, faces);
	}
}
