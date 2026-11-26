using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One collision triangle with its surface flags, plane normal, centre and radius.
/// </summary>
/// <param name="Vertex0">First vertex index.</param>
/// <param name="Vertex1">Second vertex index.</param>
/// <param name="Vertex2">Third vertex index.</param>
/// <param name="Flags">Collision flags the face responds to.</param>
/// <param name="Normal">The face normal.</param>
/// <param name="Position">The face centre.</param>
/// <param name="Radius">The face bounding radius.</param>
public readonly record struct MapCollisionFace(
	ushort Vertex0,
	ushort Vertex1,
	ushort Vertex2,
	ushort Flags,
	Vector3 Normal,
	Vector3 Position,
	float Radius)
{
	/// <summary>The fixed width of one face.</summary>
	public const int EntrySize = 0x24;

	/// <summary>
	/// Parses one face record.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The parsed face.</returns>
	/// <exception cref="SceneFormatException">The record is truncated.</exception>
	internal static MapCollisionFace Parse(ReadOnlySpan<byte> data, int offset, string context)
	{
		if (offset < 0 || offset > data.Length - EntrySize)
			throw new SceneFormatException($"A collision face of {context} is truncated.", offset);
		return new MapCollisionFace(
			BinaryPrimitives.ReadUInt16LittleEndian(data[offset..]),
			BinaryPrimitives.ReadUInt16LittleEndian(data[(offset + 2)..]),
			BinaryPrimitives.ReadUInt16LittleEndian(data[(offset + 4)..]),
			BinaryPrimitives.ReadUInt16LittleEndian(data[(offset + 6)..]),
			new Vector3(
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 8)..]),
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x0C)..]),
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x10)..])),
			new Vector3(
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x14)..]),
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x18)..]),
				BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x1C)..])),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x20)..]));
	}
}
