using System.Buffers.Binary;
using PsoBB.Graphics;
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
		NinjaMaterial material = Assert.Single(mesh.OpaqueMaterials);
		Assert.Equal(RenderStateId.BlendOne, material.BlendSource);
		Assert.Equal(RenderStateId.BlendZero, material.BlendDestination);
		Assert.Equal(1u, material.AddressU);
		Assert.Equal(1u, material.AddressV);
		Assert.True(material.Lighting);
		Assert.False(material.CameraSpaceNormals);
		IReadOnlyList<ModelSurface> surfaces = new ModelRenderer().Build(model, Matrix4x4.Identity);
		Assert.Single(surfaces);
		Assert.Equal(4, surfaces[0].Indices.Length);
	}

	/// <summary>
	/// A chunk stream without material commands keeps the device blend defaults, no texture and
	/// lighting enabled.
	/// </summary>
	[Fact]
	public void DefaultChunkMaterialUsesDeviceDefaults()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041)));
		NinjaMesh mesh = Assert.Single(model.Meshes);
		NinjaMaterial material = Assert.Single(mesh.OpaqueMaterials);
		Assert.Equal(RenderStateId.BlendOne, material.BlendSource);
		Assert.Equal(RenderStateId.BlendZero, material.BlendDestination);
		Assert.Equal(-1, material.TextureIndex);
		Assert.Equal(0u, material.DiffuseColor);
		Assert.Equal(1u, material.AddressU);
		Assert.Equal(1u, material.AddressV);
		Assert.True(material.Lighting);
		Assert.False(material.CameraSpaceNormals);
	}

	/// <summary>
	/// Blend head bits 8-13 select the Ninja blend table entries for both the type 1 command and the
	/// material commands.
	/// </summary>
	[Fact]
	public void BlendCommandsUseTheNinjaFactorTable()
	{
		NinjaMaterial blend = MaterialOf(BodyWithPlist(0x0041, (0x1601, [])));
		Assert.Equal(RenderStateId.BlendDestinationColor, blend.BlendSource);
		Assert.Equal(RenderStateId.BlendDestinationAlpha, blend.BlendDestination);
		NinjaMaterial material = MaterialOf(BodyWithPlist(0x0041, (0x1611, [0xFF112233])));
		Assert.Equal(RenderStateId.BlendDestinationColor, material.BlendSource);
		Assert.Equal(RenderStateId.BlendDestinationAlpha, material.BlendDestination);
		Assert.Equal(0xFF112233u, material.DiffuseColor);
	}

	/// <summary>
	/// Every material command stores the colour its original handler passes to the material update.
	/// </summary>
	[Fact]
	public void MaterialColourCommandsUseTheDiffuseWord()
	{
		(ushort Head, uint[] Payload, uint Expected)[] commands =
		[
			(0x2511, [0xFF112233], 0xFF112233),
			(0x2512, [0xFF445566], 0),
			(0x2513, [0xFF112233, 0xFF445566], 0xFF112233),
			(0x2514, [0xFF445566], 0xFFFFFFFF),
			(0x2515, [0xFF112233, 0xFF445566], 0xFF112233),
			(0x2516, [0xFF445566, 0xFF778899], 0xFFFFFFFF),
			(0x2517, [0xFF112233, 0xFF445566, 0xFF778899], 0xFF112233),
			(0x2518, [], 0),
			(0x2519, [], 0),
			(0x251A, [], 0),
			(0x251B, [], 0),
			(0x251C, [], 0),
			(0x251D, [], 0),
			(0x251E, [], 0),
			(0x251F, [], 0),
		];
		foreach ((ushort head, uint[] payload, uint expected) in commands)
			Assert.Equal(expected, MaterialOf(BodyWithPlist(0x0041, (head, payload))).DiffuseColor);
	}

	/// <summary>
	/// Texture commands select the texture-list index and set the address modes from the head flags.
	/// </summary>
	[Fact]
	public void TextureCommandsSelectIndexAndAddressModes()
	{
		(ushort Head, uint Index, uint AddressU, uint AddressV)[] commands =
		[
			(0x0008, 3, 1, 1),
			(0x0009, 4, 1, 1),
			(0x2008, 5, 3, 1),
			(0x1008, 6, 1, 3),
			(0x4008, 7, 1, 2),
			(0x8008, 8, 2, 1),
		];
		foreach ((ushort head, uint index, uint addressU, uint addressV) in commands)
		{
			NinjaMaterial material = MaterialOf(BodyWithPlist(0x0041, (head, [index])));
			Assert.Equal((int)index, material.TextureIndex);
			Assert.Equal(addressU, material.AddressU);
			Assert.Equal(addressV, material.AddressV);
		}
	}

	/// <summary>
	/// Strip head bit 0x800 selects the translucent pass and bit 0x100 disables lighting.
	/// </summary>
	[Fact]
	public void StripFlagsSelectAlphaAndLighting()
	{
		(ushort Head, bool Alpha, bool Lighting)[] strips =
		[
			(0x0241, false, true),
			(0x0A41, true, true),
			(0x0B41, true, false),
			(0x0F41, true, false),
		];
		foreach ((ushort head, bool alpha, bool lighting) in strips)
		{
			NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(head)));
			NinjaMesh mesh = Assert.Single(model.Meshes);
			Assert.Equal(alpha, mesh.AlphaIndexBuffers.Count == 1);
			Assert.Equal(!alpha, mesh.IndexBuffers.Count == 1);
			NinjaMaterial material = alpha ? Assert.Single(mesh.AlphaMaterials) : Assert.Single(mesh.OpaqueMaterials);
			Assert.Equal(lighting, material.Lighting);
		}
	}

	/// <summary>
	/// The active material colour is written into every baked layout-7 vertex.
	/// </summary>
	[Fact]
	public void MaterialColourIsBakedIntoTheVertexColour()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x2513, [0x80112233, 0xFF445566]))));
		NinjaVertexBuffer buffer = Assert.Single(Assert.Single(model.Meshes).VertexBuffers);
		Assert.Equal(0x11, buffer.Vertices[0].R);
		Assert.Equal(0x22, buffer.Vertices[0].G);
		Assert.Equal(0x33, buffer.Vertices[0].B);
		Assert.Equal(0x80, buffer.Vertices[0].A);
	}

	/// <summary>
	/// A material command with no handler or with a payload shorter than its handler reads is rejected.
	/// </summary>
	[Fact]
	public void MalformedMaterialCommandsAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x2513, [0xFF112233])))));
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x2517, [0xFF112233, 0xFF445566])))));
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x2510, [])))));
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x2520, [])))));
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(ModelTestData.Chunk("NJCM", BodyWithPlist(0x0041, (0x253F, [])))));
	}

	private static NinjaMaterial MaterialOf(byte[] body)
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.Chunk("NJCM", body));
		NinjaMesh mesh = Assert.Single(model.Meshes);
		return mesh.AlphaMaterials.Count != 0 ? Assert.Single(mesh.AlphaMaterials) : Assert.Single(mesh.OpaqueMaterials);
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

	private static byte[] BodyWithPlist(ushort stripHead, params (ushort Head, uint[] Payload)[] commands)
	{
		byte[] body = ChunkBody(false);
		Array.Clear(body, 0xB8, body.Length - 0xB8);
		int position = 0xB8;
		foreach ((ushort head, uint[] payload) in commands)
			position = WriteCommand(body, position, head, payload);
		position = WriteStripCommand(body, position, stripHead);
		WriteUInt16(body, position, 0xFF);
		return body;
	}

	private static int WriteCommand(byte[] body, int position, ushort head, uint[] payload)
	{
		byte type = (byte)head;
		WriteUInt16(body, position, head);
		if (type < 8)
			return position + 2;
		if (type < 0x10)
		{
			WriteUInt16(body, position + 2, payload.Length == 0 ? 0 : (int)payload[0]);
			return position + 4;
		}
		WriteUInt16(body, position + 2, payload.Length * 2);
		for (int index = 0; index < payload.Length; index++)
			WriteUInt32(body, position + 4 + index * 4, (int)payload[index]);
		return position + 4 + payload.Length * 4;
	}

	private static int WriteStripCommand(byte[] body, int position, ushort head)
	{
		const int payloadWords = 1 + 1 + 4 * 3;
		WriteUInt16(body, position, head);
		WriteUInt16(body, position + 2, payloadWords);
		WriteUInt16(body, position + 4, 1);
		WriteInt16(body, position + 6, 4);
		for (int vertex = 0; vertex < 4; vertex++)
		{
			int record = position + 8 + vertex * 6;
			WriteUInt16(body, record, vertex);
			WriteUInt16(body, record + 2, 128);
			WriteUInt16(body, record + 4, 64);
		}
		return position + 4 + payloadWords * 2;
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
