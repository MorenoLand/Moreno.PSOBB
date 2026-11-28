using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// A static mesh tree of one scene chunk: a root node, optional texture animation and tree flags.
/// </summary>
public sealed class MapMeshTree
{
	/// <summary>The fixed width of one static mesh-tree record.</summary>
	public const int EntrySize = 0x10;

	/// <summary>The tree flag that makes the root node a level of indirection.</summary>
	public const uint IndirectRootFlag = 0x200;

	private MapMeshTree(MapMeshNode? rootNode, int textureAnimationOffset, uint flags)
	{
		RootNode = rootNode;
		TextureAnimationOffset = textureAnimationOffset;
		Flags = flags;
	}

	/// <summary>Gets the first mesh node of the tree.</summary>
	public MapMeshNode? RootNode { get; }

	/// <summary>Gets the offset of the texture-animation record, or zero when absent.</summary>
	public int TextureAnimationOffset { get; }

	/// <summary>Gets the tree flags.</summary>
	public uint Flags { get; }

	/// <summary>
	/// Parses one static mesh-tree record.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="chunkIndex">Chunk index used in error messages.</param>
	/// <param name="treeIndex">Tree index used in error messages.</param>
	/// <returns>The parsed tree.</returns>
	/// <exception cref="SceneFormatException">The record or its node tree lies outside the image.</exception>
	internal static MapMeshTree Parse(byte[] data, int offset, int chunkIndex, int treeIndex)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"Static mesh tree {treeIndex} of chunk {chunkIndex} is truncated.", offset);
		int rootOffset = MapRenderGeometryFile.ReadOffset(image, offset, $"static mesh tree {treeIndex} root");
		int textureAnimationOffset = MapRenderGeometryFile.ReadOffset(image, offset + 8, $"static mesh tree {treeIndex} animation");
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x0C)..]);
		MapMeshNode? rootNode = MapMeshNode.ParseTree(data, rootOffset, flags, $"static mesh tree {treeIndex} of chunk {chunkIndex}");
		return new MapMeshTree(rootNode, textureAnimationOffset, flags);
	}
}
