using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One node of a map mesh tree, with its transform, mesh and sibling links.
/// </summary>
public sealed class MapMeshNode
{
	/// <summary>The fixed width of one node record.</summary>
	public const int EntrySize = 0x34;

	private MapMeshNode(uint evaluationFlags, MapMesh? mesh, Vector3 position, int rotationX, int rotationY, int rotationZ, Vector3 scale, MapMeshNode? child, MapMeshNode? next)
	{
		EvaluationFlags = evaluationFlags;
		Mesh = mesh;
		Position = position;
		RotationX = rotationX;
		RotationY = rotationY;
		RotationZ = rotationZ;
		Scale = scale;
		Child = child;
		Next = next;
	}

	/// <summary>Gets the node evaluation flags.</summary>
	public uint EvaluationFlags { get; }

	/// <summary>Gets the mesh this node draws, or <see langword="null"/> when it is a transform-only node.</summary>
	public MapMesh? Mesh { get; }

	/// <summary>Gets the node translation.</summary>
	public Vector3 Position { get; }

	/// <summary>Gets the X rotation in the client's angle units.</summary>
	public int RotationX { get; }

	/// <summary>Gets the Y rotation in the client's angle units.</summary>
	public int RotationY { get; }

	/// <summary>Gets the Z rotation in the client's angle units.</summary>
	public int RotationZ { get; }

	/// <summary>Gets the node scale factors.</summary>
	public Vector3 Scale { get; }

	/// <summary>Gets the first child node.</summary>
	public MapMeshNode? Child { get; }

	/// <summary>Gets the next sibling node.</summary>
	public MapMeshNode? Next { get; }

	/// <summary>
	/// Resolves a tree root, honouring the indirection flag, and parses its node chain.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="rootOffset">Stored tree root.</param>
	/// <param name="flags">Tree flags.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The first node, or <see langword="null"/> when the root is zero.</returns>
	/// <exception cref="SceneFormatException">The root or any node lies outside the image or repeats in a chain.</exception>
	internal static MapMeshNode? ParseTree(byte[] data, int rootOffset, uint flags, string context)
	{
		if (rootOffset == 0)
			return null;
		if ((flags & MapMeshTree.IndirectRootFlag) != 0)
		{
			ReadOnlySpan<byte> image = data;
			if (rootOffset > image.Length - 4)
				throw new SceneFormatException($"The indirect root of {context} is truncated.", rootOffset);
			rootOffset = MapRenderGeometryFile.ReadOffset(image, rootOffset, $"{context} indirect root");
			if (rootOffset == 0)
				return null;
		}
		return ParseNode(data, rootOffset, context, 0, []);
	}

	/// <summary>
	/// Parses one node chain and its children.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Node offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <param name="depth">Current recursion depth.</param>
	/// <param name="active">Nodes currently on the recursion path.</param>
	/// <returns>The parsed node.</returns>
	/// <exception cref="SceneFormatException">The node is truncated or a chain revisits a node.</exception>
	private static MapMeshNode ParseNode(byte[] data, int offset, string context, int depth, HashSet<int> active)
	{
		if (depth > 0x1000)
			throw new SceneFormatException($"The node chain of {context} is deeper than the supported limit.", offset);
		if (!active.Add(offset))
			throw new SceneFormatException($"The node chain of {context} repeats node 0x{offset:X}.", offset);
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"A node of {context} is truncated.", offset);
		uint evaluationFlags = BinaryPrimitives.ReadUInt32LittleEndian(image[offset..]);
		int meshOffset = MapRenderGeometryFile.ReadOffset(image, offset + 4, $"{context} node mesh");
		Vector3 position = new(
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 8)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x0C)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x10)..]));
		int rotationX = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x14)..]);
		int rotationY = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x18)..]);
		int rotationZ = BinaryPrimitives.ReadInt32LittleEndian(image[(offset + 0x1C)..]);
		Vector3 scale = new(
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x20)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x24)..]),
			BinaryPrimitives.ReadSingleLittleEndian(image[(offset + 0x28)..]));
		int childOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x2C, $"{context} node child");
		int nextOffset = MapRenderGeometryFile.ReadOffset(image, offset + 0x30, $"{context} node next");
		MapMesh? mesh = meshOffset == 0 ? null : MapMesh.Parse(data, meshOffset, context);
		MapMeshNode? child = childOffset == 0 ? null : ParseNode(data, childOffset, context, depth + 1, active);
		MapMeshNode? next = nextOffset == 0 ? null : ParseNode(data, nextOffset, context, depth + 1, active);
		active.Remove(offset);
		return new MapMeshNode(evaluationFlags, mesh, position, rotationX, rotationY, rotationZ, scale, child, next);
	}
}
