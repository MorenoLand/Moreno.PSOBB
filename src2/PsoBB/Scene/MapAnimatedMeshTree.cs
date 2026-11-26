using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// An animated mesh tree of one scene chunk, with its motion record and playback speed.
/// </summary>
public sealed class MapAnimatedMeshTree
{
	/// <summary>The fixed width of one animated mesh-tree record.</summary>
	public const int EntrySize = 0x20;

	private MapAnimatedMeshTree(MapMeshNode? rootNode, int animationOffset, float speed, uint flags)
	{
		RootNode = rootNode;
		AnimationOffset = animationOffset;
		Speed = speed;
		Flags = flags;
	}

	/// <summary>Gets the first mesh node of the tree.</summary>
	public MapMeshNode? RootNode { get; }

	/// <summary>Gets the offset of the motion record, or zero when absent.</summary>
	public int AnimationOffset { get; }

	/// <summary>Gets the playback speed stored with the tree.</summary>
	public float Speed { get; }

	/// <summary>Gets the tree flags.</summary>
	public uint Flags { get; }

	/// <summary>
	/// Parses one animated mesh-tree record.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="chunkIndex">Chunk index used in error messages.</param>
	/// <param name="treeIndex">Tree index used in error messages.</param>
	/// <returns>The parsed tree.</returns>
	/// <exception cref="SceneFormatException">The record or its node tree lies outside the image.</exception>
	internal static MapAnimatedMeshTree Parse(byte[] data, int offset, int chunkIndex, int treeIndex)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"Animated mesh tree {treeIndex} of chunk {chunkIndex} is truncated.", offset);
		int rootOffset = MapRenderGeometryFile.ReadOffset(image, offset, $"animated mesh tree {treeIndex} root");
		int animationOffset = MapRenderGeometryFile.ReadOffset(image, offset + 4, $"animated mesh tree {treeIndex} animation");
		float speed = BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x14)..]);
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x1C)..]);
		MapMeshNode? rootNode = MapMeshNode.ParseTree(data, rootOffset, flags, $"animated mesh tree {treeIndex} of chunk {chunkIndex}");
		return new MapAnimatedMeshTree(rootNode, animationOffset, speed, flags);
	}
}
