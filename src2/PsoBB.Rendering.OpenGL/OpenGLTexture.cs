using PsoBB.Graphics;
using Silk.NET.OpenGL;

namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// A BGRA texture owned by the OpenGL renderer.
/// </summary>
public sealed unsafe class OpenGLTexture : ITexture
{
	private readonly GL _gl;
	private bool _disposed;

	/// <summary>
	/// Creates a texture and uploads the supplied pixels.
	/// </summary>
	/// <param name="gl">The context that owns the texture.</param>
	/// <param name="width">Texture width in pixels.</param>
	/// <param name="height">Texture height in pixels.</param>
	/// <param name="pixels">The BGRA pixel bytes, or an empty span for uninitialised storage.</param>
	/// <param name="stride">The number of bytes per row.</param>
	internal OpenGLTexture(GL gl, int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ArgumentNullException.ThrowIfNull(gl);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		_gl = gl;
		Width = width;
		Height = height;
		Handle = gl.GenTexture();
		gl.BindTexture(TextureTarget.Texture2D, Handle);
		gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMinFilter, (int)TextureMinFilter.Linear);
		gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMagFilter, (int)TextureMagFilter.Linear);
		gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapS, (int)TextureWrapMode.Repeat);
		gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapT, (int)TextureWrapMode.Repeat);
		gl.TexImage2D(TextureTarget.Texture2D, 0, InternalFormat.Rgba8, (uint)width, (uint)height, 0, PixelFormat.Bgra, PixelType.UnsignedByte, null);
		Update(pixels, stride);
	}

	/// <inheritdoc/>
	public int Width { get; }

	/// <inheritdoc/>
	public int Height { get; }

	/// <summary>Gets the OpenGL texture name the renderer binds.</summary>
	internal uint Handle { get; }

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
		int tightStride = Width * 4;
		byte[] packed;
		ReadOnlySpan<byte> source = pixels;
		if (stride != tightStride)
		{
			packed = new byte[tightStride * Height];
			for (int row = 0; row < Height; row++)
				pixels.Slice(row * stride, tightStride).CopyTo(packed.AsSpan(row * tightStride, tightStride));
			source = packed;
		}
		_gl.BindTexture(TextureTarget.Texture2D, Handle);
		unsafe
		{
			fixed (byte* pointer = source)
				_gl.TexSubImage2D(TextureTarget.Texture2D, 0, 0, 0, (uint)Width, (uint)Height, PixelFormat.Bgra, PixelType.UnsignedByte, pointer);
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_gl.DeleteTexture(Handle);
	}
}
