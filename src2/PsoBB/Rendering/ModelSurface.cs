using PsoBB.Graphics;
using PsoBB.Mathematics;
using PsoBB.Models;

namespace PsoBB.Rendering;

/// <summary>
/// One NJCM index buffer ready for submission with its node transform, original vertex layout and
/// accumulated material state.
/// </summary>
public sealed class ModelSurface
{
	internal ModelSurface(NinjaNode node, NinjaMesh mesh, NinjaIndexBuffer indexBuffer, NinjaMaterial material, in Matrix4x4 transform)
	{
		Node = node;
		Mesh = mesh;
		IndexBuffer = indexBuffer;
		Material = material;
		VertexBuffer = mesh.VertexBuffers[indexBuffer.VertexBufferIndex];
		Transform = transform;
		Indices = indexBuffer.Indices.ToArray();
	}

	/// <summary>Gets the node that supplies this surface's world transform.</summary>
	public NinjaNode Node { get; }

	/// <summary>Gets the mesh that owns the vertex and index buffers.</summary>
	public NinjaMesh Mesh { get; }

	/// <summary>Gets the index buffer and triangle strip.</summary>
	public NinjaIndexBuffer IndexBuffer { get; }

	/// <summary>Gets the render state accumulated up to this index buffer.</summary>
	public NinjaMaterial Material { get; }

	/// <summary>Gets the vertex buffer that the indices address.</summary>
	public NinjaVertexBuffer VertexBuffer { get; }

	/// <summary>Gets the row-vector world transform for this surface.</summary>
	public Matrix4x4 Transform { get; }

	/// <summary>Gets the triangle strip indices.</summary>
	public ReadOnlyMemory<ushort> Indices { get; }

	/// <summary>Gets the Direct3D flexible vertex format code for the vertex layout.</summary>
	public uint VertexFormat => VertexBuffer.FlexibleVertexFormat;

	/// <summary>Gets a value indicating whether the surface belongs to the translucent pass.</summary>
	public bool IsAlpha => IndexBuffer.IsAlpha;

	/// <summary>
	/// Creates the scene surface that the scene renderer draws.
	/// </summary>
	/// <param name="texture">The base texture, or null when the texture list did not resolve.</param>
	/// <returns>The scene surface.</returns>
	public SceneSurface CreateSceneSurface(ITexture? texture) => new()
	{
		Vertices = VertexBuffer.Data,
		Stride = VertexBuffer.Stride,
		VertexFormat = VertexFormat,
		Primitive = PrimitiveType.TriangleStrip,
		Indices = Indices,
		Transform = Transform,
		Texture = texture,
		CullMode = SceneCullMode.None,
		SourceBlend = Material.BlendSource,
		DestinationBlend = Material.BlendDestination,
		AddressU = Material.AddressU,
		AddressV = Material.AddressV,
	};
}
