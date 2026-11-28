using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One collision section: a placed mesh with a bounding sphere and collision flags.
/// </summary>
public sealed class MapCollisionSection
{
	/// <summary>The fixed width of one section record.</summary>
	public const int EntrySize = 0x18;

	private MapCollisionSection(MapCollisionMesh? mesh, Vector3 position, float radius, uint flags)
	{
		Mesh = mesh;
		Position = position;
		Radius = radius;
		Flags = flags;
	}

	/// <summary>Gets the section mesh, or <see langword="null"/> for a terminator.</summary>
	public MapCollisionMesh? Mesh { get; }

	/// <summary>Gets the section centre.</summary>
	public Vector3 Position { get; }

	/// <summary>Gets the bounding-sphere radius.</summary>
	public float Radius { get; }

	/// <summary>Gets the collision flags the section responds to.</summary>
	public uint Flags { get; }

	/// <summary>
	/// Parses one collision section.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="index">Section index used in error messages.</param>
	/// <returns>The parsed section.</returns>
	/// <exception cref="SceneFormatException">The record or its mesh lies outside the image.</exception>
	internal static MapCollisionSection Parse(byte[] data, int offset, int index)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"Collision section {index} is truncated.", offset);
		int meshOffset = MapRenderGeometryFile.ReadOffset(image, offset, $"collision section {index} mesh");
		Vector3 position = new(
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 4)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 8)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x0C)..]));
		float radius = BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x10)..]);
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x14)..]);
		MapCollisionMesh? mesh = meshOffset == 0 ? null : MapCollisionMesh.Parse(data, meshOffset, $"collision section {index}");
		return new MapCollisionSection(mesh, position, radius, flags);
	}
}
