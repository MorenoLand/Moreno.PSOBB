using System.Numerics;

namespace PsoBB.Graphics;

/// <summary>
/// The drawing operations the client needs from a host renderer, independent of the graphics API.
/// </summary>
public interface IRenderer : IDisposable
{
	/// <summary>Gets the settings the renderer was created with.</summary>
	RenderSettings Settings { get; }

	/// <summary>Starts a frame and makes the backbuffer the render target.</summary>
	void BeginFrame();

	/// <summary>Sets the viewport in backbuffer pixels.</summary>
	/// <param name="x">Left edge.</param>
	/// <param name="y">Top edge.</param>
	/// <param name="width">Viewport width.</param>
	/// <param name="height">Viewport height.</param>
	void SetViewport(int x, int y, int width, int height);

	/// <summary>Clears the current render target.</summary>
	/// <param name="color">The clear color in 0xAARRGGBB form.</param>
	void Clear(uint color);

	/// <summary>Sets a transform slot.</summary>
	/// <param name="kind">The slot to update.</param>
	/// <param name="transform">The row-major transform.</param>
	void SetTransform(TransformKind kind, in Matrix4x4 transform);

	/// <summary>Sets a render state by its original identifier.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="value">The state value.</param>
	void SetRenderState(uint state, uint value);

	/// <summary>Binds a texture to a texture stage.</summary>
	/// <param name="stage">The texture stage, starting at zero.</param>
	/// <param name="texture">The texture, or <see langword="null"/> to unbind.</param>
	void SetTexture(int stage, ITexture? texture);

	/// <summary>Draws vertices from client memory.</summary>
	/// <param name="primitive">The primitive shape.</param>
	/// <param name="primitiveCount">The number of primitives.</param>
	/// <param name="vertices">The vertex bytes.</param>
	/// <param name="stride">The number of bytes per vertex.</param>
	/// <param name="vertexFormat">The original flexible vertex format code.</param>
	void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat);

	/// <summary>Ends the frame and presents it.</summary>
	void EndFrame();

	/// <summary>Creates a texture from pixel bytes.</summary>
	/// <param name="width">Texture width in pixels.</param>
	/// <param name="height">Texture height in pixels.</param>
	/// <param name="pixels">The pixel bytes.</param>
	/// <param name="stride">The number of bytes per row.</param>
	/// <returns>The created texture.</returns>
	ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride);
}
