using PsoBB.Graphics;
using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// One map or model surface ready for submission: vertex bytes, an optional index list, a world transform and the per-surface draw state.
/// </summary>
/// <remarks>
/// Scene and model loaders produce these surfaces; this type does not read NJ, NJCM or map files. When
/// <see cref="Indices"/> is non-empty the renderer expands them into the non-indexed vertex span that
/// <see cref="IRenderer.Draw"/> accepts, preserving the original triangle order.
/// </remarks>
public sealed class SceneSurface
{
	/// <summary>Gets the vertex bytes in the original flexible vertex format layout.</summary>
	public required ReadOnlyMemory<byte> Vertices { get; init; }

	/// <summary>Gets the number of bytes per vertex.</summary>
	public required int Stride { get; init; }

	/// <summary>Gets the original flexible vertex format code.</summary>
	public required uint VertexFormat { get; init; }

	/// <summary>Gets the primitive shape.</summary>
	public PrimitiveType Primitive { get; init; } = PrimitiveType.TriangleList;

	/// <summary>Gets the number of primitives for a non-indexed surface; an indexed surface derives its count from <see cref="Indices"/>.</summary>
	public int PrimitiveCount { get; init; }

	/// <summary>Gets the 16-bit indices into <see cref="Vertices"/>, or an empty span when the surface is not indexed.</summary>
	public ReadOnlyMemory<ushort> Indices { get; init; }

	/// <summary>Gets the row-vector world transform applied to this surface.</summary>
	public Matrix4x4 Transform { get; init; } = Matrix4x4.Identity;

	/// <summary>Gets the base texture bound to texture stage zero.</summary>
	public ITexture? Texture { get; init; }

	/// <summary>Gets the detail or bump texture bound to texture stage one.</summary>
	public ITexture? DetailTexture { get; init; }

	/// <summary>Gets the culling mode for this surface.</summary>
	public SceneCullMode CullMode { get; init; }

	/// <summary>Gets the source blend factor for the transparent pass.</summary>
	public uint SourceBlend { get; init; } = RenderStateId.BlendSourceAlpha;

	/// <summary>Gets the destination blend factor for the transparent pass.</summary>
	public uint DestinationBlend { get; init; } = RenderStateId.BlendInverseSourceAlpha;

	/// <summary>Gets the alpha-test reference value for the alpha-tested pass.</summary>
	public uint AlphaReference { get; init; }

	/// <summary>Gets the horizontal texture address mode for texture stage zero.</summary>
	public uint AddressU { get; init; } = TextureStageStateId.AddressWrap;

	/// <summary>Gets the vertical texture address mode for texture stage zero.</summary>
	public uint AddressV { get; init; } = TextureStageStateId.AddressWrap;
}
