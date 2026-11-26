using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One collision vertex: a position used by triangle faces.
/// </summary>
/// <param name="Position">The vertex position.</param>
public readonly record struct MapCollisionVertex(Vector3 Position)
{
	/// <summary>The fixed width of one vertex.</summary>
	public const int EntrySize = 0x0C;

	/// <summary>
	/// Parses one vertex.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Vertex offset.</param>
	/// <returns>The parsed vertex.</returns>
	internal static MapCollisionVertex Parse(ReadOnlySpan<byte> data, int offset) => new(new Vector3(
		BinaryPrimitives.ReadSingleLittleEndian(data[offset..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 4)..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 8)..])));
}
