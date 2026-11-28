using System.Buffers.Binary;
using System.Text;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic NJCM, NMDM, NJTL, PAE, BML and REL data so model tests never depend on game files.
/// </summary>
internal static class ModelTestData
{
	internal const int RootOffset = 0x00;
	internal const int ChildOffset = 0x34;
	internal const int MeshOffset = 0x68;
	internal const int VertexDescriptorOffset = 0x84;
	internal const int IndexDescriptorOffset = 0x94;
	internal const int RenderStateOffset = 0xA8;
	internal const int VertexDataOffset = 0xB8;
	internal const int IndexDataOffset = 0xF8;
	internal const int CoreLength = 0x100;

	internal static readonly int[] ModelPointerOffsets = [0x04, 0x2C, 0x6C, 0x74, 0x88, 0x94, 0x9C];
	internal static readonly int[] AlphaPointerOffsets = [0x04, 0x44, 0x4C, 0x54, 0x64, 0x70, 0x78, 0x84, 0x8C];

	/// <summary>
	/// Creates a two-node NJCM body with one two-vertex mesh, one opaque strip and one texture command.
	/// </summary>
	/// <param name="childFlags">Evaluation flags for the child node.</param>
	/// <returns>The model body.</returns>
	internal static byte[] ModelCore(uint childFlags = 0)
	{
		byte[] body = new byte[CoreLength];
		WriteUInt32(body, RootOffset, 0);
		WriteUInt32(body, RootOffset + 4, MeshOffset);
		WriteVector(body, RootOffset + 8, 1, 2, 3);
		WriteInt32(body, RootOffset + 20, 0x1000);
		WriteInt32(body, RootOffset + 24, 0x2000);
		WriteInt32(body, RootOffset + 28, 0x3000);
		WriteVector(body, RootOffset + 32, 1, 1, 1);
		WriteUInt32(body, RootOffset + 44, ChildOffset);
		WriteUInt32(body, RootOffset + 48, 0);
		WriteUInt32(body, ChildOffset, childFlags);
		WriteUInt32(body, ChildOffset + 4, 0);
		WriteVector(body, ChildOffset + 8, 4, 5, 6);
		WriteInt32(body, ChildOffset + 20, 0);
		WriteInt32(body, ChildOffset + 24, 0);
		WriteInt32(body, ChildOffset + 28, 0);
		WriteVector(body, ChildOffset + 32, 1, 1, 1);
		WriteUInt32(body, ChildOffset + 44, 0);
		WriteUInt32(body, ChildOffset + 48, 0);
		WriteUInt32(body, MeshOffset, 0);
		WriteUInt32(body, MeshOffset + 4, VertexDescriptorOffset);
		WriteUInt32(body, MeshOffset + 8, 1);
		WriteUInt32(body, MeshOffset + 12, IndexDescriptorOffset);
		WriteUInt32(body, MeshOffset + 16, 1);
		WriteUInt32(body, MeshOffset + 20, 0);
		WriteUInt32(body, MeshOffset + 24, 0);
		WriteUInt32(body, VertexDescriptorOffset, 3);
		WriteUInt32(body, VertexDescriptorOffset + 4, VertexDataOffset);
		WriteInt32(body, VertexDescriptorOffset + 8, 32);
		WriteInt32(body, VertexDescriptorOffset + 12, 2);
		WriteUInt32(body, IndexDescriptorOffset, RenderStateOffset);
		WriteUInt32(body, IndexDescriptorOffset + 4, 1);
		WriteUInt32(body, IndexDescriptorOffset + 8, IndexDataOffset);
		WriteUInt32(body, IndexDescriptorOffset + 12, 3);
		WriteInt32(body, IndexDescriptorOffset + 16, 0);
		WriteUInt32(body, RenderStateOffset, 3);
		WriteUInt32(body, RenderStateOffset + 4, 0);
		WriteUInt32(body, RenderStateOffset + 8, 0);
		WriteUInt32(body, RenderStateOffset + 12, 0);
		int vertexOffset = VertexDataOffset;
		WriteVector(body, vertexOffset, 1, 2, 3);
		WriteVector(body, vertexOffset + 12, 0, 1, 0);
		WriteSingle(body, vertexOffset + 24, 0.25f);
		WriteSingle(body, vertexOffset + 28, 0.5f);
		vertexOffset += 32;
		WriteVector(body, vertexOffset, 4, 5, 6);
		WriteVector(body, vertexOffset + 12, 0, 0, 1);
		WriteSingle(body, vertexOffset + 24, 0.75f);
		WriteSingle(body, vertexOffset + 28, 1);
		WriteUInt16(body, IndexDataOffset, 0);
		WriteUInt16(body, IndexDataOffset + 2, 1);
		WriteUInt16(body, IndexDataOffset + 4, 0);
		return body;
	}

	/// <summary>
	/// Creates a one-node model with one opaque and one translucent index buffer.
	/// </summary>
	/// <returns>The model body.</returns>
	internal static byte[] AlphaModelCore()
	{
		byte[] body = new byte[0x110];
		WriteUInt32(body, 0, 0);
		WriteUInt32(body, 4, 0x40);
		WriteVector(body, 32, 1, 1, 1);
		WriteUInt32(body, 0x40, 0);
		WriteUInt32(body, 0x44, 0x60);
		WriteUInt32(body, 0x48, 1);
		WriteUInt32(body, 0x4C, 0x70);
		WriteUInt32(body, 0x50, 1);
		WriteUInt32(body, 0x54, 0x84);
		WriteUInt32(body, 0x58, 1);
		WriteUInt32(body, 0x60, 3);
		WriteUInt32(body, 0x64, 0xC0);
		WriteInt32(body, 0x68, 32);
		WriteInt32(body, 0x6C, 2);
		WriteIndexBuffer(body, 0x70, 0x98, 0x100);
		WriteIndexBuffer(body, 0x84, 0xA8, 0x108);
		WriteUInt32(body, 0x98, 3);
		WriteUInt32(body, 0x9C, 0);
		WriteUInt32(body, 0xA0, 0);
		WriteUInt32(body, 0xA4, 0);
		WriteUInt32(body, 0xA8, 3);
		WriteUInt32(body, 0xAC, 0);
		WriteUInt32(body, 0xB0, 0);
		WriteUInt32(body, 0xB4, 0);
		WriteVector(body, 0xC0, 1, 2, 3);
		WriteVector(body, 0xCC, 0, 1, 0);
		WriteSingle(body, 0xD8, 0.25f);
		WriteSingle(body, 0xDC, 0.5f);
		WriteVector(body, 0xE0, 4, 5, 6);
		WriteVector(body, 0xEC, 0, 0, 1);
		WriteSingle(body, 0xF8, 0.75f);
		WriteSingle(body, 0xFC, 1);
		WriteUInt16(body, 0x100, 0);
		WriteUInt16(body, 0x102, 1);
		WriteUInt16(body, 0x104, 0);
		WriteUInt16(body, 0x108, 1);
		WriteUInt16(body, 0x10A, 0);
		WriteUInt16(body, 0x10C, 1);
		return body;
	}

	/// <summary>
	/// Writes one index-buffer descriptor.
	/// </summary>
	private static void WriteIndexBuffer(byte[] body, int offset, int arguments, int indices)
	{
		WriteUInt32(body, offset, (uint)arguments);
		WriteUInt32(body, offset + 4, 1);
		WriteUInt32(body, offset + 8, (uint)indices);
		WriteUInt32(body, offset + 12, 3);
		WriteInt32(body, offset + 16, 0);
	}

	/// <summary>
	/// Creates a one-node, one-vertex model with the requested vertex layout.
	/// </summary>
	/// <param name="format">The vertex format word.</param>
	/// <param name="stride">The stored vertex stride.</param>
	/// <returns>The model body.</returns>
	internal static byte[] VertexFormatCore(uint format, int stride)
	{
		byte[] body = new byte[CoreLength];
		WriteUInt32(body, RootOffset, 0);
		WriteUInt32(body, RootOffset + 4, MeshOffset);
		WriteVector(body, RootOffset + 32, 1, 1, 1);
		WriteUInt32(body, MeshOffset + 4, VertexDescriptorOffset);
		WriteUInt32(body, MeshOffset + 8, 1);
		WriteUInt32(body, MeshOffset + 12, IndexDescriptorOffset);
		WriteUInt32(body, MeshOffset + 16, 1);
		WriteUInt32(body, VertexDescriptorOffset, format);
		WriteUInt32(body, VertexDescriptorOffset + 4, VertexDataOffset);
		WriteInt32(body, VertexDescriptorOffset + 8, stride);
		WriteInt32(body, VertexDescriptorOffset + 12, 1);
		WriteUInt32(body, IndexDescriptorOffset, RenderStateOffset);
		WriteUInt32(body, IndexDescriptorOffset + 4, 1);
		WriteUInt32(body, IndexDescriptorOffset + 8, IndexDataOffset);
		WriteUInt32(body, IndexDescriptorOffset + 12, 3);
		WriteInt32(body, IndexDescriptorOffset + 16, 0);
		WriteUInt32(body, RenderStateOffset, 3);
		WriteUInt32(body, IndexDataOffset, 0);
		return body;
	}

	/// <summary>
	/// Appends a REL-style pointer table and trailer to a model body.
	/// </summary>
	/// <param name="body">The body whose pointers are listed.</param>
	/// <param name="pointerOffsets">The pointer field offsets, in ascending order.</param>
	/// <param name="bodyOffset">The payload offset written before the body.</param>
	/// <returns>The relocated block.</returns>
	internal static byte[] WithRelocationTable(byte[] body, int[]? pointerOffsets = null, int bodyOffset = 0)
	{
		pointerOffsets ??= ModelPointerOffsets;
		int tableOffset = bodyOffset + body.Length;
		int total = tableOffset + pointerOffsets.Length * 2 + 0x20;
		byte[] data = new byte[total];
		body.CopyTo(data, bodyOffset);
		int previous = 0;
		for (int index = 0; index < pointerOffsets.Length; index++)
		{
			int field = bodyOffset + pointerOffsets[index];
			if (bodyOffset != 0)
			{
				int value = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(field));
				BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(field), value + bodyOffset);
			}
			int delta = (field - previous) / 4;
			WriteUInt16(data, tableOffset + index * 2, (ushort)delta);
			previous = field;
		}
		WriteUInt32(data, total - 0x20, (uint)tableOffset);
		WriteUInt32(data, total - 0x1C, (uint)pointerOffsets.Length);
		WriteUInt32(data, total - 0x10, (uint)bodyOffset);
		return data;
	}

	/// <summary>
	/// Creates one NJTL body with the supplied names.
	/// </summary>
	/// <param name="names">The texture names.</param>
	/// <returns>The texture-list body.</returns>
	internal static byte[] TextureListCore(params string[] names)
	{
		int namesOffset = 8 + names.Length * 0x0C;
		int nameBytes = names.Sum(name => name.Length + 1);
		int length = Align(namesOffset + nameBytes, 4);
		byte[] body = new byte[length];
		WriteUInt32(body, 0, 8);
		WriteUInt32(body, 4, (uint)names.Length);
		int cursor = namesOffset;
		for (int index = 0; index < names.Length; index++)
		{
			WriteUInt32(body, 8 + index * 0x0C, (uint)cursor);
			WriteUInt32(body, 8 + index * 0x0C + 4, 0);
			WriteUInt32(body, 8 + index * 0x0C + 8, 0);
			byte[] name = Encoding.ASCII.GetBytes(names[index]);
			name.CopyTo(body, cursor);
			cursor += name.Length + 1;
		}
		return body;
	}

	/// <summary>
	/// Creates an NMDM body with translation, rotation and scale tracks for each bone.
	/// </summary>
	/// <param name="boneCount">The number of bone records.</param>
	/// <returns>The motion body.</returns>
	internal static byte[] MotionCore(int boneCount = 1)
	{
		int keyframesOffset = 12 + boneCount * 24;
		byte[] body = new byte[keyframesOffset + boneCount * 96];
		WriteUInt32(body, 0, 12);
		WriteUInt32(body, 4, 10);
		WriteUInt16(body, 8, 7);
		WriteUInt16(body, 10, 3);
		for (int bone = 0; bone < boneCount; bone++)
		{
			int record = 12 + bone * 24;
			int key = keyframesOffset + bone * 96;
			WriteUInt32(body, record, (uint)key);
			WriteUInt32(body, record + 4, (uint)(key + 32));
			WriteUInt32(body, record + 8, (uint)(key + 64));
			WriteUInt32(body, record + 12, 2);
			WriteUInt32(body, record + 16, 2);
			WriteUInt32(body, record + 20, 2);
			WriteKeyframe(body, key, 0, 0f, 0f, 0f);
			WriteKeyframe(body, key + 16, 10, bone == 0 ? 10f : 1f, bone == 0 ? 20f : 2f, bone == 0 ? 30f : 3f);
			WriteKeyframe(body, key + 32, 0, 0, 0, 0);
			WriteKeyframe(body, key + 48, 10, 0x2000, 0x4000, -0x2000);
			WriteKeyframe(body, key + 64, 0, 1f, 1f, 1f);
			WriteKeyframe(body, key + 80, 10, 2f, 3f, 4f);
		}
		return body;
	}

	/// <summary>
	/// Returns the NMDM pointer field offsets for the supplied bone count.
	/// </summary>
	/// <param name="boneCount">The number of bone records.</param>
	/// <returns>The ascending pointer offsets.</returns>
	internal static int[] MotionPointerOffsets(int boneCount)
	{
		int[] offsets = new int[boneCount * 3];
		for (int bone = 0; bone < boneCount; bone++)
		{
			offsets[bone * 3] = 12 + bone * 24;
			offsets[bone * 3 + 1] = 12 + bone * 24 + 4;
			offsets[bone * 3 + 2] = 12 + bone * 24 + 8;
		}
		return offsets;
	}

	/// <summary>
	/// Creates a Ninja IFF chunk.
	/// </summary>
	/// <param name="tag">The four-character tag.</param>
	/// <param name="body">The chunk body.</param>
	/// <returns>The complete chunk.</returns>
	internal static byte[] Chunk(string tag, byte[] body)
	{
		byte[] chunk = new byte[8 + body.Length];
		Encoding.ASCII.GetBytes(tag).CopyTo(chunk, 0);
		WriteUInt32(chunk, 4, (uint)body.Length);
		body.CopyTo(chunk, 8);
		return chunk;
	}

	/// <summary>
	/// Creates a POF0 chunk for the supplied body pointer offsets.
	/// </summary>
	/// <param name="pointerOffsets">The pointer field offsets, in ascending order.</param>
	/// <returns>The complete POF0 chunk.</returns>
	internal static byte[] PointerTableChunk(int[] pointerOffsets)
	{
		using MemoryStream table = new();
		int previous = 0;
		foreach (int offset in pointerOffsets)
		{
			int delta = (offset - previous) / 4;
			previous = offset;
			if (delta < 0x40)
			{
				table.WriteByte((byte)(0x40 | delta));
			}
			else if (delta < 0x4000)
			{
				table.WriteByte((byte)(0x80 | (delta >> 8)));
				table.WriteByte((byte)delta);
			}
			else
			{
				table.WriteByte((byte)(0xC0 | (delta >> 24)));
				table.WriteByte((byte)(delta >> 16));
				table.WriteByte((byte)(delta >> 8));
				table.WriteByte((byte)delta);
			}
		}
		return Chunk("POF0", table.ToArray());
	}

	/// <summary>
	/// Creates a chunk stream with a model, its POF0 table, an NJTL and its POF0 table.
	/// </summary>
	/// <param name="modelCore">The NJCM body.</param>
	/// <param name="modelPointers">The model pointer offsets.</param>
	/// <param name="textureListCore">The optional NJTL body.</param>
	/// <param name="textureListPointers">The NJTL pointer offsets.</param>
	/// <returns>The complete chunk stream.</returns>
	internal static byte[] ModelChunks(byte[]? modelCore = null, int[]? modelPointers = null, byte[]? textureListCore = null, int[]? textureListPointers = null)
	{
		modelCore ??= ModelCore();
		modelPointers ??= ModelPointerOffsets;
		using MemoryStream stream = new();
		stream.Write(Chunk("NJCM", modelCore));
		stream.Write(PointerTableChunk(modelPointers));
		if (textureListCore is not null)
		{
			stream.Write(Chunk("NJTL", textureListCore));
			stream.Write(PointerTableChunk(textureListPointers ?? TextureListPointerOffsets("tex0")));
		}
		return stream.ToArray();
	}

	/// <summary>
	/// Returns the NJTL pointer field offsets for the supplied names.
	/// </summary>
	/// <param name="names">The texture names.</param>
	/// <returns>The ascending pointer offsets.</returns>
	internal static int[] TextureListPointerOffsets(params string[] names)
	{
		List<int> offsets = [0];
		for (int index = 0; index < names.Length; index++)
			offsets.Add(8 + index * 0x0C);
		return offsets.ToArray();
	}

	/// <summary>
	/// Creates a PAE archive with a relocated model, a relocated texture list and one DXT1 texture.
	/// </summary>
	/// <param name="childFlags">Evaluation flags for the child node.</param>
	/// <param name="textureNames">The texture names.</param>
	/// <returns>The complete PAE archive.</returns>
	internal static byte[] Pae(uint childFlags = 0, params string[] textureNames)
	{
		textureNames = textureNames.Length == 0 ? ["tex0"] : textureNames;
		byte[] model = WithRelocationTable(ModelCore(childFlags));
		byte[] textureList = WithRelocationTable(TextureListCore(textureNames), TextureListPointerOffsets(textureNames));
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 0x1234, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		return TextureTestData.Pae(model, textureList, xvm);
	}

	/// <summary>
	/// Creates an uncompressed BML archive with one model file and one compressed XVM texture.
	/// </summary>
	/// <returns>The complete BML archive.</returns>
	internal static byte[] Bml()
	{
		byte[] chunks = [.. ModelChunks(ModelCore(), ModelPointerOffsets, TextureListCore("tex0"), TextureListPointerOffsets("tex0")), .. Chunk("NMDM", MotionCore(2)), .. PointerTableChunk(MotionPointerOffsets(2))];
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 0x1234, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		byte[] compressedXvm = PrsLiteral(xvm);
		int dataOffset = 0x800;
		int textureOffset = dataOffset + Align(chunks.Length, 0x20);
		byte[] archive = new byte[textureOffset + compressedXvm.Length];
		WriteUInt32(archive, 0, 0);
		WriteUInt32(archive, 4, 1);
		archive[8] = 0;
		archive[9] = 1;
		Encoding.ASCII.GetBytes("model.bml").CopyTo(archive, 0x40);
		WriteUInt32(archive, 0x40 + 0x20, (uint)chunks.Length);
		WriteUInt32(archive, 0x40 + 0x28, (uint)chunks.Length);
		WriteUInt32(archive, 0x40 + 0x2C, (uint)compressedXvm.Length);
		WriteUInt32(archive, 0x40 + 0x30, (uint)xvm.Length);
		chunks.CopyTo(archive, dataOffset);
		compressedXvm.CopyTo(archive, textureOffset);
		return archive;
	}

	/// <summary>
	/// Creates a BML archive with separate model and animation entries.
	/// </summary>
	/// <returns>The complete archive.</returns>
	internal static byte[] BmlSplit()
	{
		byte[] modelChunks = ModelChunks(ModelCore(), ModelPointerOffsets, TextureListCore("tex0"), TextureListPointerOffsets("tex0"));
		byte[] motionChunk = [.. Chunk("NMDM", MotionCore(2)), .. PointerTableChunk(MotionPointerOffsets(2))];
		int dataOffset = 0x800;
		int motionOffset = dataOffset + Align(modelChunks.Length, 0x800);
		byte[] archive = new byte[motionOffset + Align(motionChunk.Length, 0x800)];
		WriteUInt32(archive, 4, 2);
		Encoding.ASCII.GetBytes("model.bml").CopyTo(archive, 0x40);
		WriteUInt32(archive, 0x40 + 0x20, (uint)modelChunks.Length);
		WriteUInt32(archive, 0x40 + 0x28, (uint)modelChunks.Length);
		Encoding.ASCII.GetBytes("model.njm").CopyTo(archive, 0x80);
		WriteUInt32(archive, 0x80 + 0x20, (uint)motionChunk.Length);
		WriteUInt32(archive, 0x80 + 0x28, (uint)motionChunk.Length);
		modelChunks.CopyTo(archive, dataOffset);
		motionChunk.CopyTo(archive, motionOffset);
		return archive;
	}

	/// <summary>
	/// Creates the motion archive with two concatenated NMDM chunks and trailing zero padding.
	/// </summary>
	/// <returns>The complete archive.</returns>
	internal static byte[] Rlc()
	{
		byte[] chunk = Chunk("NMDM", MotionCore(1));
		byte[] archive = new byte[Align(chunk.Length * 2, 0x20)];
		chunk.CopyTo(archive, 0);
		chunk.CopyTo(archive, chunk.Length);
		return archive;
	}

	/// <summary>
	/// Encodes bytes as a valid PRS literal stream.
	/// </summary>
	/// <param name="data">The bytes to store.</param>
	/// <returns>The compressed stream.</returns>
	internal static byte[] PrsLiteral(byte[] data)
	{
		using MemoryStream stream = new();
		int position = 0;
		while (position < data.Length)
		{
			int count = Math.Min(8, data.Length - position);
			if (count == 8)
			{
				stream.WriteByte(0xFF);
				stream.Write(data, position, count);
				position += count;
				continue;
			}
			if (count == 7)
			{
				stream.WriteByte(0x7F);
				stream.Write(data, position, count);
				stream.WriteByte(0x02);
				stream.WriteByte(0);
				stream.WriteByte(0);
				return stream.ToArray();
			}
			stream.WriteByte((byte)(((1 << count) - 1) | (1 << (count + 1))));
			stream.Write(data, position, count);
			stream.WriteByte(0);
			stream.WriteByte(0);
			return stream.ToArray();
		}
		stream.WriteByte(0x02);
		stream.WriteByte(0);
		stream.WriteByte(0);
		return stream.ToArray();
	}

	/// <summary>
	/// Writes one keyframe record.
	/// </summary>
	private static void WriteKeyframe(byte[] data, int offset, uint frame, float x, float y, float z) =>
		WriteKeyframe(data, offset, frame, BitConverter.SingleToInt32Bits(x), BitConverter.SingleToInt32Bits(y), BitConverter.SingleToInt32Bits(z));

	/// <summary>
	/// Writes one keyframe record with raw components.
	/// </summary>
	private static void WriteKeyframe(byte[] data, int offset, uint frame, int x, int y, int z)
	{
		WriteUInt32(data, offset, frame);
		WriteInt32(data, offset + 4, x);
		WriteInt32(data, offset + 8, y);
		WriteInt32(data, offset + 12, z);
	}

	/// <summary>
	/// Writes a three-component float vector.
	/// </summary>
	private static void WriteVector(byte[] data, int offset, float x, float y, float z)
	{
		WriteSingle(data, offset, x);
		WriteSingle(data, offset + 4, y);
		WriteSingle(data, offset + 8, z);
	}

	/// <summary>
	/// Writes one little-endian float.
	/// </summary>
	private static void WriteSingle(byte[] data, int offset, float value) =>
		BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(offset), value);

	/// <summary>
	/// Writes one little-endian 16-bit value.
	/// </summary>
	private static void WriteUInt16(byte[] data, int offset, ushort value) =>
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset), value);

	/// <summary>
	/// Writes one little-endian 32-bit value.
	/// </summary>
	private static void WriteUInt32(byte[] data, int offset, uint value) =>
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(offset), value);

	/// <summary>
	/// Writes one little-endian signed 32-bit value.
	/// </summary>
	private static void WriteInt32(byte[] data, int offset, int value) =>
		BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(offset), value);

	/// <summary>
	/// Rounds an offset up to an alignment.
	/// </summary>
	private static int Align(int value, int alignment) => (value + alignment - 1) & ~(alignment - 1);
}
