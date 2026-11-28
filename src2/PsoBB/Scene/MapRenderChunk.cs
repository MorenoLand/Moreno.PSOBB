using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One placeable section of a <c>fmt2</c> scene, with its transform and mesh trees.
/// </summary>
public sealed class MapRenderChunk
{
	/// <summary>The fixed width of one chunk record.</summary>
	public const int EntrySize = 0x34;

	private readonly MapMeshTree[] _staticMeshTrees;
	private readonly MapAnimatedMeshTree[] _animatedMeshTrees;

	private MapRenderChunk(
		uint id,
		Vector3 position,
		int rotationX,
		int rotationY,
		int rotationZ,
		float viewDistance,
		uint flags,
		MapMeshTree[] staticMeshTrees,
		MapAnimatedMeshTree[] animatedMeshTrees)
	{
		Id = id;
		Position = position;
		RotationX = rotationX;
		RotationY = rotationY;
		RotationZ = rotationZ;
		ViewDistance = viewDistance;
		Flags = flags;
		_staticMeshTrees = staticMeshTrees;
		_animatedMeshTrees = animatedMeshTrees;
	}

	/// <summary>Gets the section identifier used by placement and event records.</summary>
	public uint Id { get; }

	/// <summary>Gets the section origin.</summary>
	public Vector3 Position { get; }

	/// <summary>Gets the X rotation in the client's angle units.</summary>
	public int RotationX { get; }

	/// <summary>Gets the Y rotation in the client's angle units.</summary>
	public int RotationY { get; }

	/// <summary>Gets the Z rotation in the client's angle units.</summary>
	public int RotationZ { get; }

	/// <summary>Gets the distance at which the section may be culled.</summary>
	public float ViewDistance { get; }

	/// <summary>Gets the section flags.</summary>
	public uint Flags { get; }

	/// <summary>Gets the static mesh trees in file order.</summary>
	public IReadOnlyList<MapMeshTree> StaticMeshTrees => _staticMeshTrees;

	/// <summary>Gets the animated mesh trees in file order.</summary>
	public IReadOnlyList<MapAnimatedMeshTree> AnimatedMeshTrees => _animatedMeshTrees;

	/// <summary>
	/// Parses one chunk record and its mesh-tree tables.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="index">Chunk index used in error messages.</param>
	/// <returns>The parsed chunk.</returns>
	/// <exception cref="SceneFormatException">The record or one of its tables lies outside the image.</exception>
	internal static MapRenderChunk Parse(byte[] data, int offset, int index)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"Render chunk {index} is truncated.", offset);
		uint id = BinaryPrimitives.ReadUInt32LittleEndian(image[offset..]);
		Vector3 position = new(
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 4)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 8)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x0C)..]));
		int rotationX = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x10)..]);
		int rotationY = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x14)..]);
		int rotationZ = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x18)..]);
		float viewDistance = BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x1C)..]);
		int staticTreesOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x20, $"render chunk {index} static trees");
		int animatedTreesOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x24, $"render chunk {index} animated trees");
		uint staticTreeCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x28)..]);
		uint animatedTreeCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x2C)..]);
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x30)..]);
		MapRenderGeometryFile.ValidateTable(image, staticTreesOffset, staticTreeCount, MapMeshTree.EntrySize, $"render chunk {index} static trees");
		MapRenderGeometryFile.ValidateTable(image, animatedTreesOffset, animatedTreeCount, MapAnimatedMeshTree.EntrySize, $"render chunk {index} animated trees");
		MapMeshTree[] staticTrees = new MapMeshTree[(int)staticTreeCount];
		for (int treeIndex = 0; treeIndex < staticTrees.Length; treeIndex++)
			staticTrees[treeIndex] = MapMeshTree.Parse(data, staticTreesOffset + treeIndex * MapMeshTree.EntrySize, index, treeIndex);
		MapAnimatedMeshTree[] animatedTrees = new MapAnimatedMeshTree[(int)animatedTreeCount];
		for (int treeIndex = 0; treeIndex < animatedTrees.Length; treeIndex++)
			animatedTrees[treeIndex] = MapAnimatedMeshTree.Parse(data, animatedTreesOffset + treeIndex * MapAnimatedMeshTree.EntrySize, index, treeIndex);
		return new MapRenderChunk(id, position, rotationX, rotationY, rotationZ, viewDistance, flags, staticTrees, animatedTrees);
	}
}
