using System.Runtime.Versioning;
using PsoBB.Graphics;

namespace PsoBB.Rendering.WebGL;

/// <summary>
/// A BGRA texture owned by the WebGL renderer.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed class WebGLTexture : ITexture
{
	private readonly WebGLRenderer _renderer;
	private bool _disposed;

	internal WebGLTexture(WebGLRenderer renderer, int handle, int width, int height)
	{
		_renderer = renderer;
		Handle = handle;
		Width = width;
		Height = height;
	}

	/// <inheritdoc/>
	public int Width { get; }

	/// <inheritdoc/>
	public int Height { get; }

	/// <summary>Gets the JavaScript texture handle.</summary>
	internal int Handle { get; }

	/// <inheritdoc/>
	public void Update(ReadOnlySpan<byte> pixels, int stride)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (pixels.IsEmpty)
			return;
		if (stride < Width * 4)
			throw new ArgumentOutOfRangeException(nameof(stride), stride, $"A {Width}-pixel BGRA row needs at least {Width * 4} bytes.");
		if (pixels.Length < stride * Height)
			throw new ArgumentException($"The texture needs {stride * Height} bytes but only {pixels.Length} were supplied.", nameof(pixels));
		_renderer.UpdateTexture(Handle, pixels, stride);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_renderer.DisposeTexture(Handle);
	}
}
