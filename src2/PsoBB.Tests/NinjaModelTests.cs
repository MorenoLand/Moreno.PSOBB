using System.Buffers.Binary;
using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks NJCM node, mesh, vertex, index and render-state extraction.
/// </summary>
public sealed class NinjaModelTests
{
	/// <summary>
	/// The node hierarchy, mesh, vertex buffer and triangle strip are decoded.
	/// </summary>
	[Fact]
	public void NodeHierarchyAndMeshAreDecoded()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.ModelCore());
		Assert.Single(model.RootNodes);
		Assert.Equal(2, model.Nodes.Count);
		Assert.Equal(2, model.DrawNodes.Count);
		Assert.Equal(2, model.AnimatedNodeCount);
		Assert.Single(model.Meshes);
		NinjaNode root = model.RootNodes[0];
		Assert.Single(root.Children);
		Assert.Equal(1f, root.Position.X);
		Assert.Equal(0x1000, root.RotationX);
		NinjaMesh mesh = Assert.IsType<NinjaMesh>(root.Mesh);
		NinjaVertexBuffer buffer = Assert.Single(mesh.VertexBuffers);
		Assert.Equal(3u, buffer.Format);
		Assert.Equal(32, buffer.Stride);
		Assert.Equal(2, buffer.Vertices.Count);
		Assert.Equal(0.25f, buffer.Vertices[0].U);
		Assert.Equal(1f, buffer.Vertices[0].Normal.Y);
		Assert.Equal(6f, buffer.Vertices[1].Position.Z);
		NinjaIndexBuffer strip = Assert.Single(mesh.IndexBuffers);
		Assert.Equal(new ushort[] { 0, 1, 0 }, strip.Indices);
		Assert.Equal(0, strip.VertexBufferIndex);
		NinjaRenderStateArgument argument = Assert.Single(strip.RenderStateArguments);
		Assert.Equal(3u, argument.Type);
		Assert.Equal(0, argument.TextureIndex);
		Assert.Equal(new[] { 0 }, mesh.TextureIndices.ToArray());
		NinjaMaterial material = Assert.Single(mesh.OpaqueMaterials);
		Assert.Equal(0, material.TextureIndex);
		Assert.True(material.Lighting);
		Assert.Empty(mesh.AlphaMaterials);
	}

	/// <summary>
	/// Hidden and break-flagged child nodes are excluded from the draw order.
	/// </summary>
	[Fact]
	public void HiddenAndBrokenNodesAreNotDrawn()
	{
		NinjaModel hidden = NinjaModelReader.Read(ModelTestData.ModelCore(0x8));
		Assert.Equal(2, hidden.Nodes.Count);
		Assert.Single(hidden.DrawNodes);
		Assert.Equal(2, hidden.AnimatedNodeCount);
		Assert.Equal(1, NinjaModelReader.CountVisibleNodes(hidden));
		NinjaModel broken = NinjaModelReader.Read(ModelTestData.ModelCore(0x18));
		Assert.Single(broken.DrawNodes);
		Assert.Equal(1, NinjaModelReader.CountVisibleNodes(broken));
		NinjaModel skipped = NinjaModelReader.Read(ModelTestData.ModelCore(0x40));
		Assert.Equal(1, skipped.AnimatedNodeCount);
	}

	/// <summary>
	/// Opaque and translucent index buffers keep their separate material states.
	/// </summary>
	[Fact]
	public void AlphaIndexBuffersAreDecoded()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.AlphaModelCore());
		NinjaMesh mesh = Assert.Single(model.Meshes);
		NinjaIndexBuffer opaque = Assert.Single(mesh.IndexBuffers);
		NinjaIndexBuffer alpha = Assert.Single(mesh.AlphaIndexBuffers);
		Assert.False(opaque.IsAlpha);
		Assert.True(alpha.IsAlpha);
		Assert.Equal(new ushort[] { 0, 1, 0 }, opaque.Indices);
		Assert.Equal(new ushort[] { 1, 0, 1 }, alpha.Indices);
		Assert.Equal(0, Assert.Single(mesh.OpaqueMaterials).TextureIndex);
		Assert.Equal(0, Assert.Single(mesh.AlphaMaterials).TextureIndex);
	}

	/// <summary>
	/// Every supported vertex layout is decoded with its byte stride and channel flags.
	/// </summary>
	[Fact]
	public void EveryVertexFormatIsRead()
	{
		(int Format, int Stride, bool Normals, bool Uvs, bool Colors)[] formats =
		[
			(1, 20, false, true, false),
			(2, 24, true, false, false),
			(3, 32, true, true, false),
			(4, 16, false, false, true),
			(5, 24, false, true, true),
			(6, 28, true, false, true),
			(7, 36, true, true, true),
		];
		foreach ((int format, int stride, bool normals, bool uvs, bool colors) in formats)
		{
			NinjaModel model = NinjaModelReader.Read(ModelTestData.VertexFormatCore((uint)format, stride));
			NinjaVertexBuffer buffer = Assert.Single(model.Meshes[0].VertexBuffers);
			Assert.Equal(stride, buffer.Stride);
			Assert.Single(buffer.Vertices);
			Assert.Equal(normals, buffer.HasNormals);
			Assert.Equal(uvs, buffer.HasTextureCoordinates);
			Assert.Equal(colors, buffer.HasColors);
		}
	}

	/// <summary>
	/// A cyclic child pointer is rejected instead of recursing forever.
	/// </summary>
	[Fact]
	public void CyclicNodeTreeIsRejected()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.ChildOffset + 44), ModelTestData.ChildOffset);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(body));
	}

	/// <summary>
	/// A vertex count or format outside the model body is rejected.
	/// </summary>
	[Fact]
	public void InvalidVertexDataIsRejected()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteInt32LittleEndian(body.AsSpan(ModelTestData.VertexDescriptorOffset + 12), 1000);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(body));
		byte[] unsupported = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(unsupported.AsSpan(ModelTestData.VertexDescriptorOffset), 0);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(unsupported));
	}

	/// <summary>
	/// An index buffer that selects a missing vertex buffer is rejected.
	/// </summary>
	[Fact]
	public void InvalidIndexBufferSelectionIsRejected()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteInt32LittleEndian(body.AsSpan(ModelTestData.IndexDescriptorOffset + 16), 5);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(body));
		byte[] index = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt16LittleEndian(index.AsSpan(ModelTestData.IndexDataOffset), 5);
		Assert.Throws<ModelFormatException>(() => NinjaModelReader.Read(index));
	}
}
