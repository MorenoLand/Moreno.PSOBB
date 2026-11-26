using System.Buffers.Binary;
using PsoBB.Mathematics;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks collision section placement, inferred vertices and face data.
/// </summary>
public sealed class MapCollisionTests
{
	/// <summary>
	/// One section produces one mesh with three vertices and one flagged face.
	/// </summary>
	[Fact]
	public void ParsesSectionsMeshesVerticesAndFaces()
	{
		MapCollisionFile collision = MapCollisionFile.Parse(SceneSamples.CollisionBody());
		MapCollisionSection section = Assert.Single(collision.Sections);
		Assert.Equal(new Vector3(5, 6, 7), section.Position);
		Assert.Equal(8.0f, section.Radius);
		Assert.Equal(0x921u, section.Flags);
		MapCollisionMesh mesh = Assert.IsType<MapCollisionMesh>(section.Mesh);
		Assert.Equal(3, mesh.Vertices.Count);
		Assert.Equal(new Vector3(1, 2, 3), mesh.Vertices[0].Position);
		MapCollisionFace face = Assert.Single(mesh.Faces);
		Assert.Equal(0, face.Vertex0);
		Assert.Equal(1, face.Vertex1);
		Assert.Equal(2, face.Vertex2);
		Assert.Equal(0x0101, face.Flags);
		Assert.Equal(new Vector3(0, 1, 0), face.Normal);
		Assert.Equal(new Vector3(4.5f, 5.5f, 6.5f), face.Position);
		Assert.Equal(7.5f, face.Radius);
	}

	/// <summary>
	/// An array without a zero-mesh terminator is rejected.
	/// </summary>
	[Fact]
	public void RejectsAMissingTerminator()
	{
		byte[] body = SceneSamples.CollisionBody();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(4), 0x20);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x1C), 0x20);
		Assert.Throws<SceneFormatException>(() => MapCollisionFile.Parse(body));
	}

	/// <summary>
	/// A face table outside the image is rejected.
	/// </summary>
	[Fact]
	public void RejectsAFaceTableOutsideTheImage()
	{
		byte[] body = SceneSamples.CollisionBody();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x2C), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => MapCollisionFile.Parse(body));
	}

	/// <summary>
	/// A negative face count is rejected.
	/// </summary>
	[Fact]
	public void RejectsANegativeFaceCount()
	{
		byte[] body = SceneSamples.CollisionBody();
		BinaryPrimitives.WriteInt32LittleEndian(body.AsSpan(0x28), -1);
		Assert.Throws<SceneFormatException>(() => MapCollisionFile.Parse(body));
	}
}
