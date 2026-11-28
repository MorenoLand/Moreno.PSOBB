namespace PsoBB.Graphics;

/// <summary>
/// A texture the renderer can bind to a texture stage.
/// </summary>
public interface ITexture : IDisposable
{
	/// <summary>Gets the texture width in pixels.</summary>
	int Width { get; }

	/// <summary>Gets the texture height in pixels.</summary>
	int Height { get; }

	/// <summary>
	/// Replaces the texture pixels.
	/// </summary>
	/// <param name="pixels">The pixel bytes in the renderer's texture format.</param>
	/// <param name="stride">The number of bytes per row.</param>
	void Update(ReadOnlySpan<byte> pixels, int stride);
}
