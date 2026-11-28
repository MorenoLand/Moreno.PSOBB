using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// Parses NJCM model bodies into node trees, meshes and texture names.
/// </summary>
public static class NinjaModelReader
{
	private const int MaxNodeDepth = 256;

	/// <summary>
	/// Parses one NJCM body, or an IFF chunk stream that contains NJCM and NJTL chunks.
	/// </summary>
	/// <param name="body">The model body or chunk stream.</param>
	/// <returns>The parsed model.</returns>
	/// <exception cref="ModelFormatException">A node, mesh, buffer or chunk range is invalid.</exception>
	public static NinjaModel Read(ReadOnlyMemory<byte> body)
	{
		if (IsChunkStream(body.Span))
			return Read(NinjaChunkReader.ReadAll(body.Span));
		return ReadBodies([body], null);
	}

	/// <summary>
	/// Parses every NJCM chunk and attaches the first NJTL texture list.
	/// </summary>
	/// <param name="chunks">The chunks from one model file.</param>
	/// <returns>The parsed model.</returns>
	/// <exception cref="ModelFormatException">A node, mesh, buffer or list range is invalid.</exception>
	public static NinjaModel Read(IReadOnlyList<NinjaChunk> chunks)
	{
		List<ReadOnlyMemory<byte>> bodies = [];
		NinjaTextureList? textures = null;
		foreach (NinjaChunk chunk in chunks)
		{
			if (chunk.Type == NinjaChunkType.TextureList)
			{
				textures ??= NinjaTextureList.Parse(chunk.Body.Span, chunk.Offset + 8);
			}
			else if (chunk.Type == NinjaChunkType.Model)
			{
				bodies.Add(chunk.Body);
			}
		}
		if (bodies.Count == 0)
			throw new ModelFormatException("The model file has no NJCM chunk.", 0);
		return ReadBodies(bodies, textures);
	}

	/// <summary>
	/// Counts the nodes the draw walker visits: hidden nodes are skipped and their children are
	/// skipped when the break flag is set.
	/// </summary>
	/// <param name="model">The model to count.</param>
	/// <returns>The visible node count.</returns>
	[Original(0x00782A88, "CountModelObjectNodes_00782a88")]
	public static int CountVisibleNodes(NinjaModel model)
	{
		int count = 0;
		foreach (NinjaNode root in model.RootNodes)
			count += CountNode(root);
		return count;
	}

	/// <summary>
	/// Counts one node and its visible descendants.
	/// </summary>
	/// <param name="node">The current node.</param>
	/// <returns>The visible node count.</returns>
	private static int CountNode(NinjaNode node)
	{
		int count = node.IsHidden ? 0 : 1;
		if (node.SkipsChildren)
			return count;
		foreach (NinjaNode child in node.Children)
			count += CountNode(child);
		return count;
	}

	/// <summary>
	/// Parses a list of model bodies and merges their roots, nodes and meshes.
	/// </summary>
	/// <param name="bodies">The NJCM bodies.</param>
	/// <param name="textures">The optional texture list.</param>
	/// <returns>The merged model.</returns>
	private static NinjaModel ReadBodies(List<ReadOnlyMemory<byte>> bodies, NinjaTextureList? textures)
	{
		List<NinjaNode> roots = [];
		List<NinjaNode> nodes = [];
		List<NinjaMesh> meshes = [];
		foreach (ReadOnlyMemory<byte> body in bodies)
		{
			BodyReader reader = new(body);
			roots.AddRange(reader.ReadRoots());
			nodes.AddRange(reader.Nodes);
			meshes.AddRange(reader.Meshes);
		}
		return new NinjaModel(roots.ToArray(), nodes.ToArray(), meshes.ToArray(), textures);
	}

	/// <summary>
	/// Returns true when the body starts with a Ninja chunk header.
	/// </summary>
	/// <param name="body">The body bytes.</param>
	/// <returns>True for a chunk stream.</returns>
	private static bool IsChunkStream(ReadOnlySpan<byte> body)
	{
		if (body.Length < 8)
			return false;
		uint tag = BinaryPrimitives.ReadUInt32BigEndian(body);
		return tag is 0x4E4A434D or 0x4E4A544C or 0x4E4D444D or 0x504F4630 or 0x4E4A494E or 0x4E4A4C49 or 0x4E4A4341 or 0x4E53534D;
	}

	/// <summary>
	/// Reads one NJCM body into node, node-list and mesh caches.
	/// </summary>
	private sealed class BodyReader
	{
		private readonly ReadOnlyMemory<byte> _body;
		private readonly Dictionary<int, NinjaNode> _nodeCache = [];
		private readonly Dictionary<int, NinjaMesh> _meshCache = [];
		private readonly Dictionary<int, List<NinjaNode>> _chunkNodes = [];
		private readonly List<NinjaNode> _nodes = [];
		private readonly List<NinjaMesh> _meshes = [];

		internal BodyReader(ReadOnlyMemory<byte> body) => _body = body;

		internal IReadOnlyList<NinjaNode> Nodes => _nodes;

		internal IReadOnlyList<NinjaMesh> Meshes => _meshes;

		/// <summary>
		/// Reads the top-level sibling chain.
		/// </summary>
		/// <returns>The root nodes.</returns>
		internal List<NinjaNode> ReadRoots()
		{
			if (_body.Length < 0x34)
				throw new ModelFormatException("The NJCM model body is truncated.", 0);
			List<NinjaNode> roots = ReadSiblings(0, 0, true);
			Flatten(roots);
			if (_chunkNodes.Count != 0)
				NinjaChunkModel.Attach(_body.Span, _chunkNodes, roots, _meshes);
			return roots;
		}

		/// <summary>
		/// Reads a sibling chain starting at a body-relative offset.
		/// </summary>
		/// <param name="offset">The first node offset.</param>
		/// <param name="depth">The current tree depth.</param>
		/// <param name="isRoot">Whether offset zero is the first root node rather than a null link.</param>
		/// <returns>The nodes in sibling order.</returns>
		private List<NinjaNode> ReadSiblings(int offset, int depth, bool isRoot = false)
		{
			if (depth > MaxNodeDepth)
				throw new ModelFormatException("The NJCM node tree is too deep.", offset);
			List<NinjaNode> siblings = [];
			bool first = isRoot;
			while (first || offset != 0)
			{
				first = false;
				(NinjaNode node, int next) = ReadNode(offset, depth);
				siblings.Add(node);
				offset = next;
			}
			return siblings;
		}

		/// <summary>
		/// Reads one node and its children.
		/// </summary>
		/// <param name="offset">The node offset.</param>
		/// <param name="depth">The current tree depth.</param>
		/// <returns>The node and its next-sibling offset.</returns>
		private (NinjaNode Node, int Next) ReadNode(int offset, int depth)
		{
			ReadOnlySpan<byte> body = _body.Span;
			if (offset < 0 || offset > body.Length - 0x34 || (offset & 3) != 0)
				throw new ModelFormatException("The NJCM node pointer is invalid.", offset);
			if (_nodeCache.ContainsKey(offset))
				throw new ModelFormatException("The NJCM node tree contains a cycle.", offset);
			uint flags = BinaryPrimitives.ReadUInt32LittleEndian(body[offset..]);
			bool quaternion = (flags & 0x400) != 0;
			int size = quaternion ? 0x38 : 0x34;
			if (offset > body.Length - size)
				throw new ModelFormatException("The NJCM quaternion node is truncated.", offset);
			uint meshOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 4)..]);
			Vector3 position = new(
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 8)..]),
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 12)..]),
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 16)..]));
			int rotationX;
			int rotationY;
			int rotationZ;
			NinjaQuaternion? rotation = null;
			if (quaternion)
			{
				rotation = new NinjaQuaternion(
					BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 20)..]),
					BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 24)..]),
					BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 28)..]),
					BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 52)..]));
				rotationX = 0;
				rotationY = 0;
				rotationZ = 0;
			}
			else
			{
				rotationX = BinaryPrimitives.ReadInt32LittleEndian(body[(offset + 20)..]);
				rotationY = BinaryPrimitives.ReadInt32LittleEndian(body[(offset + 24)..]);
				rotationZ = BinaryPrimitives.ReadInt32LittleEndian(body[(offset + 28)..]);
			}
			Vector3 scale = new(
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 32)..]),
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 36)..]),
				BinaryPrimitives.ReadSingleLittleEndian(body[(offset + 40)..]));
			uint childOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 44)..]);
			uint nextOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 48)..]);
			NinjaMesh? mesh = null;
			bool chunkMesh = false;
			int meshOffsetValue = 0;
			if (meshOffset != 0)
			{
				if (meshOffset > int.MaxValue)
					throw new ModelFormatException("The NJCM mesh pointer is invalid.", offset + 4);
				meshOffsetValue = (int)meshOffset;
				if (NinjaChunkModel.IsChunkMesh(body, meshOffsetValue))
					chunkMesh = true;
				else
					mesh = ReadMesh(meshOffsetValue);
			}
			NinjaNode node = new(flags, position, scale, rotationX, rotationY, rotationZ, rotation, mesh);
			_nodeCache.Add(offset, node);
			if (chunkMesh)
			{
				if (!_chunkNodes.TryGetValue(meshOffsetValue, out List<NinjaNode>? nodes))
				{
					nodes = [];
					_chunkNodes.Add(meshOffsetValue, nodes);
				}
				nodes.Add(node);
			}
			if (childOffset != 0)
			{
				if (childOffset > int.MaxValue)
					throw new ModelFormatException("The NJCM child pointer is invalid.", offset + 44);
				foreach (NinjaNode child in ReadSiblings((int)childOffset, depth + 1))
					node.AddChild(child);
			}
			if (nextOffset > int.MaxValue)
				throw new ModelFormatException("The NJCM sibling pointer is invalid.", offset + 48);
			return (node, (int)nextOffset);
		}

		/// <summary>
		/// Reads a mesh once and returns the cached instance for repeated pointers.
		/// </summary>
		/// <param name="offset">The mesh offset.</param>
		/// <returns>The mesh.</returns>
		private NinjaMesh ReadMesh(int offset)
		{
			if (_meshCache.TryGetValue(offset, out NinjaMesh? cached))
				return cached;
			NinjaMesh mesh = NinjaMesh.Read(_body.Span, offset, 0);
			_meshCache.Add(offset, mesh);
			_meshes.Add(mesh);
			return mesh;
		}

		/// <summary>
		/// Flattens the tree in depth-first, first-sibling-first order.
		/// </summary>
		/// <param name="roots">The root nodes.</param>
		private void Flatten(List<NinjaNode> roots)
		{
			Stack<NinjaNode> stack = new();
			for (int index = roots.Count - 1; index >= 0; index--)
				stack.Push(roots[index]);
			while (stack.Count != 0)
			{
				NinjaNode node = stack.Pop();
				_nodes.Add(node);
				for (int index = node.Children.Count - 1; index >= 0; index--)
					stack.Push(node.Children[index]);
			}
		}
	}
}
