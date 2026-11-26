using System.Buffers.Binary;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the retail NJCM chunk-model vlist/plist parser and the strip expansion path.
/// </summary>
public sealed class NinjaChunkModelTests
{
	/// <summary>
	/// One 0x29 vertex chunk and one 0x41 strip produce a four-vertex triangle strip with UVs.
	/// </summary>
	[Fact]
	public void VertexChunkAndStripAreDecoded()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", ChunkBody(false)));
		Assert.Equal(2, model.RootNodes.Count);
		Assert.Single(model.Meshes);
		NinjaNode synthetic = model.RootNodes[1];
		Assert.Equal(7u, synthetic.EvaluationFlags);
		NinjaMesh mesh = Assert.IsType<NinjaMesh>(synthetic.Mesh);
		NinjaVertexBuffer vertices = Assert.Single(mesh.VertexBuffers);
		Assert.Equal(4, vertices.Vertices.Count);
		Assert.Equal(1f, vertices.Vertices[0].U);
		Assert.Equal(0f, vertices.Vertices[0].V);
		Assert.Equal(1f, vertices.Vertices[0].Position.X);
		Assert.Equal(2f, vertices.Vertices[0].Position.Y);
		Assert.Equal(3f, vertices.Vertices[0].Position.Z);
		Assert.Equal(1f, vertices.Vertices[0].Normal.Z);
		NinjaIndexBuffer strip = Assert.Single(mesh.IndexBuffers);
		Assert.Equal(new ushort[] { 0, 1, 2, 3 }, strip.Indices);
		Assert.Empty(mesh.AlphaIndexBuffers);
		Assert.Equal(1, Assert.Single(mesh.OpaqueMaterials).TextureIndex);
		Assert.Equal(1, mesh.TextureIndices.Single());
		IReadOnlyList<ModelSurface> surfaces = new ModelRenderer().Build(model, Matrix4x4.Identity);
		Assert.Single(surfaces);
		Assert.Equal(4, surfaces[0].Indices.Length);
	}

	/// <summary>
	/// A vlist-only child contributes slots and its node transform is baked into the strip vertices.
	/// </summary>
	[Fact]
	public void ChildVertexChunkIsBakedIntoTheStrip()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", ChunkBody(true)));
		NinjaNode synthetic = model.RootNodes[1];
		NinjaMesh mesh = Assert.IsType<NinjaMesh>(synthetic.Mesh);
		NinjaVertexBuffer vertices = Assert.Single(mesh.VertexBuffers);
		Assert.Equal(12f, vertices.Vertices[0].Position.Y);
		IReadOnlyList<ModelSurface> surfaces = new ModelRenderer().Build(model, Matrix4x4.Identity);
		Assert.Single(surfaces);
	}

	/// <summary>
	/// A strip index beyond the vlist slots is rejected.
	/// </summary>
	[Fact]
	public void StripIndexOutsideTheVertexSlotsIsRejected()
	{
		byte[] body = ChunkBody(false);
		BinaryPrimitives.WriteUInt16LittleEndian(body.AsSpan(0xC4), 99);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body)));
	}

	/// <summary>
	/// A vertex chunk whose size does not cover its vertices is rejected.
	/// </summary>
	[Fact]
	public void TruncatedVertexChunkIsRejected()
	{
		byte[] body = ChunkBody(false);
		BinaryPrimitives.WriteUInt16LittleEndian(body.AsSpan(0x4E), 2);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body)));
	}

	/// <summary>
	/// A chunk vertex format outside the implemented table is rejected.
	/// </summary>
	[Fact]
	public void UnknownVertexFormatIsRejected()
	{
		byte[] body = ChunkBody(false);
		BinaryPrimitives.WriteUInt16LittleEndian(body.AsSpan(0x4C), 0x30);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body)));
	}

	/// <summary>
	/// A strip chunk that claims more records than its declared payload is rejected.
	/// </summary>
	[Fact]
	public void TruncatedStripChunkIsRejected()
	{
		byte[] body = ChunkBody(false);
		BinaryPrimitives.WriteInt16LittleEndian(body.AsSpan(0xC2), 300);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body)));
	}

	/// <summary>
	/// A polygon list without an end marker is rejected when its size chain leaves the body.
	/// </summary>
	[Fact]
	public void UnterminatedPolygonListIsRejected()
	{
		byte[] body = ChunkBody(false);
		BinaryPrimitives.WriteUInt16LittleEndian(body.AsSpan(0xDE), 0x0000);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body)));
	}

	private static byte[] ChunkBody(bool childVertices)
	{
		byte[] body = new byte[0x180];
		WriteUInt32(body, 0, 6);
		WriteUInt32(body, 4, 0x34);
		WriteVector(body, 8, 0, 0, 0);
		WriteVector(body, 32, 1, 1, 1);
		WriteUInt32(body, 0x2C, childVertices ? 0x4C : 0);
		WriteUInt32(body, 0x34, childVertices ? 0 : 0x4C);
		WriteUInt32(body, 0x38, childVertices ? 0x108 : 0xB8);
		WriteVector(body, 0x3C, 0, 0, 0);
		WriteSingle(body, 0x48, 1);
		WriteVertexChunk(body, childVertices ? 0x98 : 0x4C);
		if (childVertices)
		{
			WriteUInt32(body, 0x4C, 6);
			WriteUInt32(body, 0x50, 0x80);
			WriteVector(body, 0x54, 0, 10, 0);
			WriteVector(body, 0x6C, 1, 1, 1);
			WriteUInt32(body, 0x80, 0x98);
			WriteUInt32(body, 0x84, 0);
			WriteVector(body, 0x8C, 0, 0, 0);
			WriteSingle(body, 0x94, 1);
		}
		WritePlist(body, childVertices ? 0x108 : 0xB8);
		return body;
	}

	private static void WritePlist(byte[] body, int offset)
	{
		WriteUInt16(body, offset, 0x0008);
		WriteUInt16(body, offset + 2, 0x0001);
		WriteUInt16(body, offset + 4, 0x0041);
		WriteUInt16(body, offset + 6, 0x000F);
		WriteUInt16(body, offset + 8, 0x0001);
		WriteInt16(body, offset + 0xA, 4);
		WriteUInt16(body, offset + 0xC, 0);
		WriteUInt16(body, offset + 0xE, 255);
		WriteUInt16(body, offset + 0x10, 0);
		WriteUInt16(body, offset + 0x12, 1);
		WriteUInt16(body, offset + 0x14, 0);
		WriteUInt16(body, offset + 0x16, 255);
		WriteUInt16(body, offset + 0x18, 2);
		WriteUInt16(body, offset + 0x1A, 128);
		WriteUInt16(body, offset + 0x1C, 64);
		WriteUInt16(body, offset + 0x1E, 3);
		WriteUInt16(body, offset + 0x20, 64);
		WriteUInt16(body, offset + 0x22, 128);
		WriteUInt16(body, offset + 0x24, 0);
		WriteUInt16(body, offset + 0x26, 0x00FF);
	}

	private static void WriteVertexChunk(byte[] body, int offset)
	{
		WriteUInt16(body, offset, 0x0029);
		WriteUInt16(body, offset + 2, 25);
		WriteUInt16(body, offset + 4, 0);
		WriteUInt16(body, offset + 6, 4);
		for (int index = 0; index < 4; index++)
		{
			int vertex = offset + 8 + index * 24;
			WriteVector(body, vertex, index == 0 ? 1 : index, index == 0 ? 2 : 0, index == 0 ? 3 : 0);
			WriteVector(body, vertex + 12, 0, 0, 1);
		}
		WriteUInt16(body, offset + 4 + 25 * 4, 0x00FF);
	}

	private static void WriteVector(byte[] data, int offset, float x, float y, float z)
	{
		WriteSingle(data, offset, x);
		WriteSingle(data, offset + 4, y);
		WriteSingle(data, offset + 8, z);
	}

	private static void WriteSingle(byte[] data, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(offset), value);

	private static void WriteUInt16(byte[] data, int offset, int value) => BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset), (ushort)value);

	private static void WriteInt16(byte[] data, int offset, short value) => BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(offset), value);

	private static void WriteUInt32(byte[] data, int offset, int value) => BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(offset), (uint)value);
}
