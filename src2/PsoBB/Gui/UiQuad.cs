using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Gui;

/// <summary>
/// A screen-space rectangle with a texture rectangle and a diffuse colour.
/// </summary>
/// <param name="Position">The top-left client-area position.</param>
/// <param name="Size">The width and height in pixels.</param>
/// <param name="TextureCoordinates">The left, top, right and bottom texture coordinates.</param>
/// <param name="Texture">The texture, or <see langword="null"/> for a solid fill.</param>
/// <param name="Color">The diffuse colour in 0xAARRGGBB form.</param>
public readonly record struct UiQuad(Vector2 Position, Vector2 Size, Vector4 TextureCoordinates, ITexture? Texture, uint Color)
{
	/// <summary>Gets a value indicating whether the quad has no area.</summary>
	public bool IsEmpty => Size.X <= 0f || Size.Y <= 0f;

	/// <summary>
	/// Intersects the quad and its texture coordinates with a clipping rectangle.
	/// </summary>
	/// <param name="clip">The left, top, right and bottom clip edges, or <see langword="null"/> for no clipping.</param>
	/// <returns>The clipped quad, or an empty quad when the rectangles do not overlap.</returns>
	public UiQuad Clip(Vector4? clip)
	{
		if (clip is null || IsEmpty)
			return this;
		Vector4 bounds = clip.Value;
		float left = MathF.Max(Position.X, MathF.Min(bounds.X, bounds.Z));
		float top = MathF.Max(Position.Y, MathF.Min(bounds.Y, bounds.W));
		float right = MathF.Min(Position.X + Size.X, MathF.Max(bounds.X, bounds.Z));
		float bottom = MathF.Min(Position.Y + Size.Y, MathF.Max(bounds.Y, bounds.W));
		if (right <= left || bottom <= top)
			return new UiQuad(Position, Vector2.Zero, TextureCoordinates, Texture, Color);
		float leftFraction = (left - Position.X) / Size.X;
		float topFraction = (top - Position.Y) / Size.Y;
		float rightFraction = (right - Position.X) / Size.X;
		float bottomFraction = (bottom - Position.Y) / Size.Y;
		Vector4 uv = TextureCoordinates;
		Vector4 texture = new(
			uv.X + (uv.Z - uv.X) * leftFraction,
			uv.Y + (uv.W - uv.Y) * topFraction,
			uv.X + (uv.Z - uv.X) * rightFraction,
			uv.Y + (uv.W - uv.Y) * bottomFraction);
		return new UiQuad(new Vector2(left, top), new Vector2(right - left, bottom - top), texture, Texture, Color);
	}
}
