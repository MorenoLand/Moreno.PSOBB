using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Gui;

/// <summary>
/// Collects interface quads and submits them to a renderer as pre-transformed triangles.
/// </summary>
/// <remarks>
/// Vertices use the original's transformed position, diffuse colour and one texture-coordinate
/// layout. The flexible vertex format code is passed through unchanged to the host renderer.
/// </remarks>
public sealed class UiDrawList
{
	/// <summary>The original transformed, coloured, single-texture vertex format.</summary>
	public const uint VertexFormat = 0x144;

	/// <summary>The number of bytes per interface vertex.</summary>
	public const int VertexStride = 28;

	private readonly List<UiQuad> _quads = [];

	/// <summary>Gets the collected quads in submission order.</summary>
	public IReadOnlyList<UiQuad> Quads => _quads;

	/// <summary>Gets or sets the blend state used by quads that inherit their blend state.</summary>
	public UiBlendMode DefaultBlendMode { get; set; }

	/// <summary>
	/// Adds a quad.
	/// </summary>
	/// <param name="quad">The quad to add.</param>
	public void Add(UiQuad quad)
	{
		if (!quad.IsEmpty)
			_quads.Add(quad);
	}

	/// <summary>Gets the number of collected quads.</summary>
	public int Count => _quads.Count;

	/// <summary>
	/// Replaces each quad from an index onward with the mapped quad.
	/// </summary>
	/// <param name="start">The index of the first quad to map.</param>
	/// <param name="map">The function that returns the replacement quad.</param>
	public void Transform(int start, Func<UiQuad, UiQuad> map)
	{
		ArgumentNullException.ThrowIfNull(map);
		for (int index = Math.Max(0, start); index < _quads.Count; index++)
			_quads[index] = map(_quads[index]);
	}

	/// <summary>
	/// Removes every collected quad.
	/// </summary>
	public void Clear() => _quads.Clear();

	/// <summary>
	/// Submits the collected quads to a renderer in order.
	/// </summary>
	/// <param name="renderer">The renderer that receives the texture binds and draw calls.</param>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	public void Render(IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		Span<byte> vertices = stackalloc byte[VertexStride * 6];
		UiBlendMode? currentBlendMode = null;
		foreach (UiQuad quad in _quads)
		{
			UiBlendMode blendMode = quad.BlendMode == UiBlendMode.Inherit ? DefaultBlendMode : quad.BlendMode;
			if (blendMode != UiBlendMode.Inherit && currentBlendMode != blendMode)
			{
				SetBlend(renderer, blendMode);
				currentBlendMode = blendMode;
			}
			renderer.SetTexture(0, quad.Texture);
			WriteQuad(vertices, quad);
			renderer.Draw(PrimitiveType.TriangleList, 2, vertices, VertexStride, VertexFormat);
		}
		if (currentBlendMode is not null && DefaultBlendMode != UiBlendMode.Inherit && currentBlendMode != DefaultBlendMode)
			SetBlend(renderer, DefaultBlendMode);
	}

	private static void SetBlend(IRenderer renderer, UiBlendMode blendMode)
	{
		renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
		renderer.SetRenderState(RenderStateId.SourceBlend, RenderStateId.BlendSourceAlpha);
		renderer.SetRenderState(RenderStateId.DestinationBlend, blendMode == UiBlendMode.AdditiveAlpha ? RenderStateId.BlendOne : RenderStateId.BlendInverseSourceAlpha);
	}

	private static void WriteQuad(Span<byte> vertices, UiQuad quad)
	{
		float left = quad.Position.X;
		float top = quad.Position.Y;
		float right = left + quad.Size.X;
		float bottom = top + quad.Size.Y;
		Vector4 uv = quad.TextureCoordinates;
		WriteVertex(vertices[..VertexStride], left, top, uv.X, uv.Y, quad.Color);
		WriteVertex(vertices[VertexStride..(VertexStride * 2)], right, top, uv.Z, uv.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 2)..(VertexStride * 3)], left, bottom, uv.X, uv.W, quad.Color);
		WriteVertex(vertices[(VertexStride * 3)..(VertexStride * 4)], right, top, uv.Z, uv.Y, quad.Color);
		WriteVertex(vertices[(VertexStride * 4)..(VertexStride * 5)], right, bottom, uv.Z, uv.W, quad.Color);
		WriteVertex(vertices[(VertexStride * 5)..], left, bottom, uv.X, uv.W, quad.Color);
	}

	private static void WriteVertex(Span<byte> destination, float x, float y, float u, float v, uint color)
	{
		BinaryPrimitives.WriteSingleLittleEndian(destination, x);
		BinaryPrimitives.WriteSingleLittleEndian(destination[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(destination[8..], 0f);
		BinaryPrimitives.WriteSingleLittleEndian(destination[12..], 1f);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[16..], color);
		BinaryPrimitives.WriteSingleLittleEndian(destination[20..], u);
		BinaryPrimitives.WriteSingleLittleEndian(destination[24..], v);
	}
}
