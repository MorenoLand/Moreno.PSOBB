using System.Buffers.Binary;
using PsoBB.Mathematics;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the fmt2 header, chunk table, mesh-tree indirection and mesh buffers.
/// </summary>
public sealed class MapRenderGeometryTests
{
	/// <summary>
	/// The marker, chunk transform and static tree produce a node with vertex and index data.
	/// </summary>
	[Fact]
	public void ParsesChunksTreesNodesAndBuffers()
	{
		MapRenderGeometryFile geometry = MapRenderGeometryFile.Parse(SceneSamples.RenderGeometryBody());
		Assert.Equal(100.0f, geometry.Radius);
		Assert.Equal(0x108, geometry.TextureDataOffset);
		MapRenderChunk chunk = Assert.Single(geometry.Chunks);
		Assert.Equal(7u, chunk.Id);
		Assert.Equal(new Vector3(10, 20, 30), chunk.Position);
		Assert.Equal(1, chunk.RotationX);
		Assert.Equal(2, chunk.RotationY);
		Assert.Equal(3, chunk.RotationZ);
		Assert.Equal(400.0f, chunk.ViewDistance);
		Assert.Equal(0x10000u, chunk.Flags);
		MapMeshTree tree = Assert.Single(chunk.StaticMeshTrees);
		Assert.Empty(chunk.AnimatedMeshTrees);
		MapMeshNode node = Assert.IsType<MapMeshNode>(tree.RootNode);
		Assert.Equal(0x16u, node.EvaluationFlags);
		Assert.Equal(new Vector3(1, 2, 3), node.Position);
		Assert.Equal(4, node.RotationX);
		Assert.Equal(5, node.RotationY);
		Assert.Equal(6, node.RotationZ);
		Assert.Equal(new Vector3(1, 1, 1), node.Scale);
		Assert.Null(node.Child);
		Assert.Null(node.Next);
		MapMesh mesh = Assert.IsType<MapMesh>(node.Mesh);
		MapVertexBuffer vertices = Assert.Single(mesh.VertexBuffers);
		Assert.Equal(5u, vertices.VertexFormat);
		Assert.Equal(0x18u, vertices.Stride);
		Assert.Equal(2u, vertices.Count);
		Assert.Equal(1.0f, BinaryPrimitives.ReadSingleLittleEndian(vertices.Data.Span));
		MapIndexBuffer indices = Assert.Single(mesh.IndexBuffers);
		Assert.Equal([0, 1, 0], indices.Indices);
		Assert.Empty(mesh.AlphaIndexBuffers);
	}

	/// <summary>
	/// The 0x200 tree flag makes the stored root a word that points at the first node.
	/// </summary>
	[Fact]
	public void FollowsTheIndirectRootFlag()
	{
		byte[] body = SceneSamples.RenderGeometryBody();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x4C), 0x10C);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x58), 0x200);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x10C), 0x5C);
		MapRenderGeometryFile geometry = MapRenderGeometryFile.Parse(body);
		Assert.NotNull(geometry.Chunks[0].StaticMeshTrees[0].RootNode);
	}

	/// <summary>
	/// A file without the fmt2 marker is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnUnknownMarker()
	{
		byte[] body = SceneSamples.RenderGeometryBody();
		"junk"u8.CopyTo(body);
		Assert.Throws<SceneFormatException>(() => MapRenderGeometryFile.Parse(body));
	}

	/// <summary>
	/// A negative chunk count is not a loop bound.
	/// </summary>
	[Fact]
	public void RejectsANegativeChunkCount()
	{
		byte[] body = SceneSamples.RenderGeometryBody();
		BinaryPrimitives.WriteInt16LittleEndian(body.AsSpan(8), -1);
		Assert.Throws<SceneFormatException>(() => MapRenderGeometryFile.Parse(body));
	}

	/// <summary>
	/// A chunk table outside the image is rejected before any record is read.
	/// </summary>
	[Fact]
	public void RejectsAChunkTableOutsideTheImage()
	{
		byte[] body = SceneSamples.RenderGeometryBody();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x10), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => MapRenderGeometryFile.Parse(body));
	}

	/// <summary>
	/// A vertex stream outside the image is rejected while the mesh is parsed.
	/// </summary>
	[Fact]
	public void RejectsAVertexStreamOutsideTheImage()
	{
		byte[] body = SceneSamples.RenderGeometryBody();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0xB0), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => MapRenderGeometryFile.Parse(body));
	}
}
