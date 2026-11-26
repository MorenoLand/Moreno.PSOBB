using System.Buffers.Binary;
using PsoBB.Mathematics;
using PsoBB.Rendering;

namespace PsoBB.Models;

/// <summary>
/// Reads the retail NJCM chunk-model mesh layout: a vlist chunk stream and a plist chunk stream.
/// </summary>
/// <remarks>
/// The model descriptor is NJS_CNK_MODEL: vlist, plist, center and radius. The vlist parser follows
/// 0x008453FC; the plist parser follows 0x008370E4; each 0x41 strip chunk is drawn by 0x00847E00,
/// which expands the index/U/V records and submits a triangle strip. Vertices are baked into the
/// pose that the node stack gives them at upload time, then drawn from a synthetic identity node.
/// </remarks>
internal static class NinjaChunkModel
{
	private const float UvScale = 1.0f / 255.0f;
	private const int MaxVertexSlots = 1 << 20;
	private const int VertexStride = 36;

	/// <summary>
	/// Returns true when the node mesh pointer addresses an unconverted NJCM chunk model.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="offset">The mesh descriptor offset.</param>
	/// <returns>True for a vlist/plist descriptor.</returns>
	internal static bool IsChunkMesh(ReadOnlySpan<byte> body, int offset)
	{
		if (offset < 0 || body.Length - offset < 0x18)
			return false;
		uint vlist = BinaryPrimitives.ReadUInt32LittleEndian(body[offset..]);
		uint plist = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 4)..]);
		if (vlist == 0)
			return plist != 0 && IsPolygonList(body, (int)plist);
		if ((vlist & 3) != 0)
			return false;
		if (plist != 0 && (plist & 3) != 0)
			return false;
		if (vlist > (uint)body.Length - 8 || (plist != 0 && plist > (uint)body.Length - 4))
			return false;
		ushort vertexHead = BinaryPrimitives.ReadUInt16LittleEndian(body[(int)vlist..]);
		byte vertexType = (byte)vertexHead;
		if (vertexType < 0x20 || vertexType > 0x3F)
			return false;
		ushort vertexSize = BinaryPrimitives.ReadUInt16LittleEndian(body[((int)vlist + 2)..]);
		if (vertexSize == 0 || vertexSize > (body.Length - (int)vlist - 4) / 4)
			return false;
		if (plist == 0)
			return true;
		return IsPolygonList(body, (int)plist);
	}

	/// <summary>
	/// Returns true when an offset starts a plist command stream that reaches its end marker.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="plist">The first polygon chunk offset.</param>
	/// <returns>True for a plausible plist.</returns>
	private static bool IsPolygonList(ReadOnlySpan<byte> body, int plist)
	{
		if (plist < 0 || plist > body.Length - 4)
			return false;
		int position = plist;
		for (int count = 0; count < 256; count++)
		{
			if (position < 0 || body.Length - position < 4)
				return false;
			ushort head = BinaryPrimitives.ReadUInt16LittleEndian(body[position..]);
			byte type = (byte)head;
			if (type == 0xFF)
				return true;
			if (type < 8)
			{
				position += 2;
				continue;
			}
			if (type == 8)
			{
				position += 4;
				continue;
			}
			ushort size = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 2)..]);
			position += 4 + size * 2;
		}
		return false;
	}

	/// <summary>
	/// Parses every chunk mesh under the supplied nodes and adds one baked strip mesh to the roots.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="descriptors">Mesh descriptor offsets and the nodes that reference them.</param>
	/// <param name="roots">The model roots that receive the synthetic strip node.</param>
	/// <param name="meshes">The model mesh list that receives the built mesh.</param>
	/// <exception cref="ModelFormatException">A chunk, vertex, strip or index range is invalid.</exception>
	internal static void Attach(ReadOnlySpan<byte> body, IReadOnlyDictionary<int, List<NinjaNode>> descriptors, List<NinjaNode> roots, List<NinjaMesh> meshes)
	{
		List<ChunkRange> ranges = [];
		List<int> descriptorOffsets = [.. descriptors.Keys];
		descriptorOffsets.Sort();
		foreach (int descriptorOffset in descriptorOffsets)
		{
			int vlist = (int)BinaryPrimitives.ReadUInt32LittleEndian(body[descriptorOffset..]);
			if (vlist != 0)
				ReadRanges(body, vlist, descriptors[descriptorOffset][0], ranges);
		}
		ranges.Sort((left, right) => left.DataOffset.CompareTo(right.DataOffset));
		int slotCount = 0;
		foreach (ChunkRange range in ranges)
			slotCount = Math.Max(slotCount, range.IndexOffset + range.Count);
		if (slotCount == 0 || slotCount > MaxVertexSlots)
			throw new ModelFormatException("The NJCM chunk-model vertex slot count is invalid.", 0);
		Slot[] slots = new Slot[slotCount];
		NinjaNode?[] owners = new NinjaNode?[slotCount];
		foreach (ChunkRange range in ranges)
			ReadRange(body, range, slots, owners);
		Dictionary<NinjaNode, Matrix4x4> worlds = [];
		TransformationStack stack = new();
		foreach (NinjaNode root in roots)
			ComputeWorld(root, stack, worlds);
		MeshBuilder builder = new();
		HashSet<int> visited = [];
		foreach (int descriptorOffset in descriptorOffsets)
		{
			int plist = (int)BinaryPrimitives.ReadUInt32LittleEndian(body[(descriptorOffset + 4)..]);
			if (plist == 0)
				continue;
			ParsePolygonList(body, plist, slots, owners, worlds, builder, visited, 0);
		}
		if (builder.VertexBuffers.Count == 0)
			return;
		NinjaMesh mesh = builder.Build();
		roots.Add(new NinjaNode(7, default, new Vector3(1.0f, 1.0f, 1.0f), 0, 0, 0, null, mesh));
		meshes.Add(mesh);
	}

	/// <summary>
	/// Walks one vlist chunk stream and records each chunk's slot range.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="vlist">The first vertex chunk offset.</param>
	/// <param name="node">The node that owns the chunks.</param>
	/// <param name="ranges">The destination ranges.</param>
	private static void ReadRanges(ReadOnlySpan<byte> body, int vlist, NinjaNode node, List<ChunkRange> ranges)
	{
		int position = vlist;
		while (true)
		{
			if (position < 0 || body.Length - position < 8)
				throw new ModelFormatException("The NJCM vertex chunk header is truncated.", position);
			ushort head = BinaryPrimitives.ReadUInt16LittleEndian(body[position..]);
			if ((head & 0xFF) == 0xFF)
				return;
			ushort size = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 2)..]);
			ushort indexOffset = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 4)..]);
			ushort count = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 6)..]);
			int stride = Stride(head, position);
			int dataLength = (size - 1) * 4;
			if (size == 0 || dataLength < count * stride)
				throw new ModelFormatException("The NJCM vertex chunk data is truncated.", position);
			int next = position + 4 + size * 4;
			if (next > body.Length)
				throw new ModelFormatException("The NJCM vertex chunk lies outside the body.", position);
			if (count != 0)
				ranges.Add(new ChunkRange(node, indexOffset, count, head, position + 8));
			position = next;
		}
	}

	/// <summary>
	/// Decodes one vertex chunk into its index-offset slots.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="range">The chunk range.</param>
	/// <param name="slots">The shared slot array.</param>
	/// <param name="owners">The slot owners.</param>
	private static void ReadRange(ReadOnlySpan<byte> body, ChunkRange range, Slot[] slots, NinjaNode?[] owners)
	{
		int stride = Stride(range.Format, range.DataOffset);
		for (int index = 0; index < range.Count; index++)
		{
			int slot = range.IndexOffset + index;
			if (slot >= slots.Length)
				throw new ModelFormatException("The NJCM vertex chunk slot lies outside the model.", range.DataOffset);
			if (slots[slot].Written)
				continue;
			ReadOnlySpan<byte> vertex = body.Slice(range.DataOffset + index * stride, stride);
			slots[slot] = DecodeVertex(vertex, range.Format, range.DataOffset + index * stride);
			owners[slot] = range.Node;
		}
	}

	/// <summary>
	/// Decodes one chunk vertex into position, normal and color.
	/// </summary>
	/// <param name="vertex">The vertex bytes.</param>
	/// <param name="format">The chunk format word.</param>
	/// <param name="offset">The vertex offset for error messages.</param>
	/// <returns>The decoded slot.</returns>
	private static Slot DecodeVertex(ReadOnlySpan<byte> vertex, int format, int offset)
	{
		Vector3 position = ReadVector(vertex, 0);
		Vector3 normal = default;
		byte red = 255;
		byte green = 255;
		byte blue = 255;
		byte alpha = 255;
		switch (format & 0xFF)
		{
			case 0x21:
				normal = ReadVector(vertex, 16);
				break;
			case 0x22:
				break;
			case 0x23:
				ReadColor(vertex, 12, out red, out green, out blue, out alpha);
				break;
			case 0x24:
			case 0x25:
			case 0x26:
			case 0x27:
			case 0x28:
				break;
			case 0x29:
				normal = ReadVector(vertex, 12);
				break;
			case 0x2A:
				normal = ReadVector(vertex, 12);
				ReadColor(vertex, 24, out red, out green, out blue, out alpha);
				break;
			case 0x2B:
			case 0x2C:
				normal = ReadVector(vertex, 12);
				break;
			case 0x2D:
			case 0x2E:
			case 0x2F:
				normal = ReadVector(vertex, 12);
				break;
			default:
				throw new ModelFormatException($"The NJCM chunk vertex format 0x{format:X4} is unsupported.", offset);
		}
		return new Slot(position, normal, red, green, blue, alpha);
	}

	/// <summary>
	/// Returns the stored byte stride for one chunk vertex format.
	/// </summary>
	/// <param name="format">The chunk format word.</param>
	/// <param name="offset">The chunk offset for error messages.</param>
	/// <returns>The vertex stride.</returns>
	private static int Stride(int format, int offset) => (format & 0xFF) switch
	{
		0x21 => 32,
		0x22 => 12,
		0x23 => 16,
		0x24 => 16,
		0x25 => 16,
		0x26 => 16,
		0x27 => 16,
		0x28 => 16,
		0x29 => 24,
		0x2A => 28,
		0x2B => 28,
		0x2C => 28,
		0x2D => 28,
		0x2E => 28,
		0x2F => 28,
		_ => throw new ModelFormatException($"The NJCM chunk vertex format 0x{format:X4} is unsupported.", offset),
	};

	/// <summary>
	/// Computes the model-space matrix of every node exactly as the static draw walker composes it.
	/// </summary>
	/// <param name="node">The node to visit.</param>
	/// <param name="stack">The shared transform stack.</param>
	/// <param name="worlds">The destination matrix map.</param>
	private static void ComputeWorld(NinjaNode node, TransformationStack stack, Dictionary<NinjaNode, Matrix4x4> worlds)
	{
		if ((node.EvaluationFlags & 7) == 7)
		{
			worlds[node] = stack.Current;
			foreach (NinjaNode child in node.Children)
				ComputeWorld(child, stack, worlds);
			return;
		}
		stack.PushCopy();
		if ((node.EvaluationFlags & 0x1) == 0)
			stack.Translate(node.Position);
		if ((node.EvaluationFlags & 0x2) == 0)
		{
			if (node.Quaternion is { } quaternion)
				stack.RotateQuaternion(quaternion);
			else
				stack.RotateEuler(node.RotationX, node.RotationY, node.RotationZ, (node.EvaluationFlags & 0x20) != 0);
		}
		if ((node.EvaluationFlags & 0x4) == 0)
			stack.Scale(node.Scale);
		worlds[node] = stack.Current;
		foreach (NinjaNode child in node.Children)
			ComputeWorld(child, stack, worlds);
		stack.Pop();
	}

	/// <summary>
	/// Parses one plist chunk stream and adds each strip to the baked mesh builder.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="plist">The first polygon chunk offset.</param>
	/// <param name="slots">The shared slot array.</param>
	/// <param name="owners">The slot owners.</param>
	/// <param name="worlds">The node world matrices.</param>
	/// <param name="builder">The baked mesh builder.</param>
	/// <param name="visited">The cached-list recursion guard.</param>
	/// <param name="depth">The current cache recursion depth.</param>
	private static void ParsePolygonList(ReadOnlySpan<byte> body, int plist, Slot[] slots, NinjaNode?[] owners, Dictionary<NinjaNode, Matrix4x4> worlds, MeshBuilder builder, HashSet<int> visited, int depth)
	{
		if (depth > 8 || !visited.Add(plist))
			throw new ModelFormatException("The NJCM polygon list contains a cycle.", plist);
		int textureIndex = -1;
		uint blendSource = 1;
		uint blendDestination = 0;
		uint addressU = 1;
		uint addressV = 1;
		Dictionary<int, int> cached = [];
		int position = plist;
		while (true)
		{
			if (position < 0 || body.Length - position < 4)
				throw new ModelFormatException("The NJCM polygon chunk header is truncated.", position);
			ushort head = BinaryPrimitives.ReadUInt16LittleEndian(body[position..]);
			byte type = (byte)head;
			if (type == 0xFF)
				break;
			if (type < 8)
			{
				if (type == 4)
					cached[head >> 8] = position + 2;
				else if (type == 5 && cached.TryGetValue(head >> 8, out int cachedOffset))
					ParsePolygonList(body, cachedOffset, slots, owners, worlds, builder, visited, depth + 1);
				position += 2;
				continue;
			}
			if (type == 8)
			{
				textureIndex = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 2)..]) & 0x1FFF;
				position += 4;
				continue;
			}
			ushort size = BinaryPrimitives.ReadUInt16LittleEndian(body[(position + 2)..]);
			int payload = position + 4;
			int end = payload + size * 2;
			if (size > (body.Length - payload) / 2 || end > body.Length)
				throw new ModelFormatException("The NJCM polygon chunk lies outside the body.", position);
			if (type == 1)
			{
				blendSource = (uint)((head >> 11) & 7) + 1;
				blendDestination = (uint)((head >> 8) & 7) + 1;
			}
			else if (type == 0x41)
			{
				ReadStripChunk(body, head, payload, end, slots, owners, worlds, builder, textureIndex, blendSource, blendDestination, addressU, addressV);
			}
			position = end;
		}
		visited.Remove(plist);
	}

	/// <summary>
	/// Reads every triangle strip in one 0x41 strip chunk.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="head">The strip chunk head.</param>
	/// <param name="payload">The first payload word.</param>
	/// <param name="end">The payload end.</param>
	/// <param name="slots">The shared slot array.</param>
	/// <param name="owners">The slot owners.</param>
	/// <param name="worlds">The node world matrices.</param>
	/// <param name="builder">The baked mesh builder.</param>
	/// <param name="textureIndex">The selected texture-list index.</param>
	/// <param name="blendSource">The source blend factor.</param>
	/// <param name="blendDestination">The destination blend factor.</param>
	/// <param name="addressU">The horizontal address mode.</param>
	/// <param name="addressV">The vertical address mode.</param>
	private static void ReadStripChunk(ReadOnlySpan<byte> body, ushort head, int payload, int end, Slot[] slots, NinjaNode?[] owners, Dictionary<NinjaNode, Matrix4x4> worlds, MeshBuilder builder, int textureIndex, uint blendSource, uint blendDestination, uint addressU, uint addressV)
	{
		if (end - payload < 2)
			throw new ModelFormatException("The NJCM strip chunk is truncated.", payload);
		ushort info = BinaryPrimitives.ReadUInt16LittleEndian(body[payload..]);
		int stripCount = info & 0x3FFF;
		int userOffset = info >> 14;
		int position = payload + 2;
		for (int strip = 0; strip < stripCount; strip++)
		{
			if (end - position < 2)
				throw new ModelFormatException("The NJCM strip count is truncated.", position);
			short signedCount = BinaryPrimitives.ReadInt16LittleEndian(body[position..]);
			int count = Math.Abs((int)signedCount);
			int stride = 3 + userOffset;
			int bytes = count * stride * 2;
			if (count > (end - position - 2) / (stride * 2))
				throw new ModelFormatException("The NJCM strip vertex list is truncated.", position);
			position += 2;
			if (count >= 3)
				BuildStrip(body, head, position, count, stride, slots, owners, worlds, builder, textureIndex, blendSource, blendDestination, addressU, addressV);
			position += bytes;
		}
		if (position > end)
			throw new ModelFormatException("The NJCM strip chunk exceeds its declared size.", payload);
	}

	/// <summary>
	/// Expands one strip's index/U/V records into a baked vertex buffer and sequential strip indices.
	/// </summary>
	private static void BuildStrip(ReadOnlySpan<byte> body, ushort head, int records, int count, int stride, Slot[] slots, NinjaNode?[] owners, Dictionary<NinjaNode, Matrix4x4> worlds, MeshBuilder builder, int textureIndex, uint blendSource, uint blendDestination, uint addressU, uint addressV)
	{
		byte[] data = new byte[count * VertexStride];
		for (int vertex = 0; vertex < count; vertex++)
		{
			int record = records + vertex * stride * 2;
			int index = BinaryPrimitives.ReadUInt16LittleEndian(body[record..]);
			if (index >= slots.Length || !slots[index].Written)
				throw new ModelFormatException("The NJCM strip index addresses a missing vertex.", record);
			NinjaNode? owner = owners[index];
			if (owner is null || !worlds.TryGetValue(owner, out Matrix4x4 world))
				throw new ModelFormatException("The NJCM strip index has no vertex owner.", record);
			float u = BinaryPrimitives.ReadUInt16LittleEndian(body[(record + 2)..]) * UvScale;
			float v = BinaryPrimitives.ReadUInt16LittleEndian(body[(record + 4)..]) * UvScale;
			WriteVertex(data.AsSpan(vertex * VertexStride), slots[index], world, u, v);
		}
		NinjaVertexBuffer buffer = NinjaVertexBuffer.Read(data, 0, 7, VertexStride, count, records);
		ushort[] indices = new ushort[count];
		for (int index = 0; index < count; index++)
			indices[index] = (ushort)index;
		NinjaRenderStateArgument[] arguments =
		[
			new(2, blendSource, blendDestination, 0),
			new(3, (uint)textureIndex, 0, 0),
			new(4, addressU, addressV, 0),
		];
		bool alpha = (head & 0x0800) != 0;
		NinjaIndexBuffer indexBuffer = NinjaIndexBuffer.Create(indices, arguments, builder.VertexBuffers.Count, alpha);
		builder.VertexBuffers.Add(buffer);
		if (alpha)
			builder.AlphaIndexBuffers.Add(indexBuffer);
		else
			builder.IndexBuffers.Add(indexBuffer);
	}

	/// <summary>
	/// Writes one layout-7 vertex: baked position and normal, color and UV.
	/// </summary>
	private static void WriteVertex(Span<byte> destination, Slot slot, Matrix4x4 world, float u, float v)
	{
		Vector3 position = TransformPosition(world, slot.Position);
		Vector3 normal = TransformNormal(world, slot.Normal);
		BinaryPrimitives.WriteSingleLittleEndian(destination, position.X);
		BinaryPrimitives.WriteSingleLittleEndian(destination[4..], position.Y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[8..], position.Z);
		BinaryPrimitives.WriteSingleLittleEndian(destination[12..], normal.X);
		BinaryPrimitives.WriteSingleLittleEndian(destination[16..], normal.Y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[20..], normal.Z);
		destination[24] = slot.Red;
		destination[25] = slot.Green;
		destination[26] = slot.Blue;
		destination[27] = slot.Alpha;
		BinaryPrimitives.WriteSingleLittleEndian(destination[28..], u);
		BinaryPrimitives.WriteSingleLittleEndian(destination[32..], v);
	}

	/// <summary>
	/// Applies the row-vector model matrix to one position.
	/// </summary>
	private static Vector3 TransformPosition(Matrix4x4 matrix, Vector3 value) => new(
		value.X * matrix.M11 + value.Y * matrix.M21 + value.Z * matrix.M31 + matrix.M41,
		value.X * matrix.M12 + value.Y * matrix.M22 + value.Z * matrix.M32 + matrix.M42,
		value.X * matrix.M13 + value.Y * matrix.M23 + value.Z * matrix.M33 + matrix.M43);

	/// <summary>
	/// Applies the row-vector model matrix to one normal and normalizes it.
	/// </summary>
	private static Vector3 TransformNormal(Matrix4x4 matrix, Vector3 value)
	{
		Vector3 normal = new(
			value.X * matrix.M11 + value.Y * matrix.M21 + value.Z * matrix.M31,
			value.X * matrix.M12 + value.Y * matrix.M22 + value.Z * matrix.M32,
			value.X * matrix.M13 + value.Y * matrix.M23 + value.Z * matrix.M33);
		Vector3.Normalize(ref normal);
		return normal;
	}

	/// <summary>
	/// Reads one three-component float vector.
	/// </summary>
	private static Vector3 ReadVector(ReadOnlySpan<byte> data, int offset) => new(
		BinaryPrimitives.ReadSingleLittleEndian(data[offset..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 4)..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 8)..]));

	/// <summary>
	/// Reads one ARGB8888 chunk color into the port's RGBA byte order.
	/// </summary>
	private static void ReadColor(ReadOnlySpan<byte> data, int offset, out byte red, out byte green, out byte blue, out byte alpha)
	{
		uint value = BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]);
		alpha = (byte)(value >> 24);
		red = (byte)(value >> 16);
		green = (byte)(value >> 8);
		blue = (byte)value;
	}

	private readonly record struct ChunkRange(NinjaNode Node, int IndexOffset, int Count, int Format, int DataOffset);

	private struct Slot
	{
		public Vector3 Position;
		public Vector3 Normal;
		public byte Red;
		public byte Green;
		public byte Blue;
		public byte Alpha;
		public bool Written;

		public Slot(Vector3 position, Vector3 normal, byte red, byte green, byte blue, byte alpha)
		{
			Position = position;
			Normal = normal;
			Red = red;
			Green = green;
			Blue = blue;
			Alpha = alpha;
			Written = true;
		}
	}

	private sealed class MeshBuilder
	{
		internal List<NinjaVertexBuffer> VertexBuffers { get; } = [];

		internal List<NinjaIndexBuffer> IndexBuffers { get; } = [];

		internal List<NinjaIndexBuffer> AlphaIndexBuffers { get; } = [];

		internal NinjaMesh Build() => new(0, VertexBuffers.ToArray(), IndexBuffers.ToArray(), AlphaIndexBuffers.ToArray());
	}
}
