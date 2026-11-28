using System.Numerics;
using System.Runtime.Versioning;
using PsoBB.Graphics;

namespace PsoBB.Rendering.WebGL;

/// <summary>
/// A WebGL 2 implementation of the client renderer that draws through a browser canvas.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed class WebGLRenderer : IRenderer
{
	private readonly int _handle;
	private readonly HashSet<(uint Format, int Stride)> _preparedFormats = [];
	private bool _disposed;

	/// <summary>
	/// Creates a WebGL 2 context on a canvas and its render targets.
	/// </summary>
	/// <param name="canvasId">The identifier of the canvas element that receives the frames.</param>
	/// <param name="settings">The requested resolution, presentation and multisampling.</param>
	/// <exception cref="WebGLUnavailableException">The browser could not create a WebGL 2 context.</exception>
	public WebGLRenderer(string canvasId, RenderSettings settings)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(canvasId);
		int handle;
		try
		{
			handle = WebGLInterop.Create(canvasId, settings.Width, settings.Height, settings.MultisampleCount);
		}
		catch (Exception exception) when (exception is not OutOfMemoryException)
		{
			throw new WebGLUnavailableException("The browser could not create a WebGL 2 context.", exception);
		}
		if (handle <= 0)
			throw new WebGLUnavailableException("The browser returned no WebGL 2 renderer.");
		int samples;
		try
		{
			samples = WebGLInterop.GetSampleCount(handle);
		}
		catch
		{
			WebGLInterop.Dispose(handle);
			throw;
		}
		if (samples is not (0 or 2 or 4 or 8))
		{
			WebGLInterop.Dispose(handle);
			throw new InvalidOperationException($"The browser reported an unsupported {samples}-sample render target.");
		}
		_handle = handle;
		Settings = new RenderSettings(settings.Width, settings.Height, settings.Windowed, samples, settings.VSync);
	}

	/// <inheritdoc/>
	public RenderSettings Settings { get; }

	/// <inheritdoc/>
	public void BeginFrame()
	{
		ThrowIfDisposed();
		WebGLInterop.BeginFrame(_handle);
	}

	/// <inheritdoc/>
	public void SetViewport(int x, int y, int width, int height)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegative(width);
		ArgumentOutOfRangeException.ThrowIfNegative(height);
		WebGLInterop.SetViewport(_handle, x, y, width, height);
	}

	/// <inheritdoc/>
	public void Clear(uint color)
	{
		ThrowIfDisposed();
		WebGLInterop.Clear(_handle, unchecked((int)color));
	}

	/// <inheritdoc/>
	public void SetTransform(TransformKind kind, in Matrix4x4 transform)
	{
		ThrowIfDisposed();
		int slot = kind switch
		{
			TransformKind.World => 0,
			TransformKind.View => 1,
			TransformKind.Projection => 2,
			TransformKind.Texture0 => 3,
			TransformKind.Texture1 => 4,
			TransformKind.Texture2 => 5,
			TransformKind.Texture3 => 6,
			_ => throw new ArgumentOutOfRangeException(nameof(kind), kind, "Unknown transform slot."),
		};
		WebGLInterop.SetTransform(_handle, slot, ToArray(transform));
	}

	/// <inheritdoc/>
	public void SetRenderState(uint state, uint value)
	{
		ThrowIfDisposed();
		WebGLInterop.SetRenderState(_handle, unchecked((int)state), unchecked((int)value));
	}

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture)
	{
		ThrowIfDisposed();
		if (stage is < 0 or >= 8)
			throw new ArgumentOutOfRangeException(nameof(stage), stage, "Texture stages run from zero to seven.");
		int handle = texture switch
		{
			null => 0,
			WebGLTexture webGLTexture => webGLTexture.Handle,
			_ => throw new ArgumentException("The texture was not created by a WebGL renderer.", nameof(texture)),
		};
		WebGLInterop.SetTexture(_handle, stage, handle);
	}

	/// <inheritdoc/>
	public void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegative(primitiveCount);
		if (primitiveCount == 0)
			return;
		FlexibleVertexFormat format = FlexibleVertexFormat.Parse(vertexFormat, stride);
		int vertexCount = GetVertexCount(primitive, primitiveCount);
		int requiredBytes = vertexCount * stride;
		if (vertices.Length < requiredBytes)
			throw new ArgumentException($"The draw needs {requiredBytes} vertex bytes but only {vertices.Length} were supplied.", nameof(vertices));
		if (_preparedFormats.Add((vertexFormat, stride)))
			WebGLInterop.PrepareFormat(_handle, unchecked((int)vertexFormat), stride, format.PositionComponentCount, format.BlendWeightCount, format.PackedLastWeight, format.ColorOffset, format.TextureCoordinateOffset, format.TextureCoordinateSize);
		WebGLInterop.Draw(_handle, (int)primitive, primitiveCount, vertices[..requiredBytes].ToArray(), stride, unchecked((int)vertexFormat));
	}

	/// <inheritdoc/>
	public void EndFrame()
	{
		ThrowIfDisposed();
		WebGLInterop.EndFrame(_handle);
	}

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		if (!pixels.IsEmpty)
		{
			if (stride < width * 4)
				throw new ArgumentOutOfRangeException(nameof(stride), stride, $"A {width}-pixel BGRA row needs at least {width * 4} bytes.");
			if (pixels.Length < stride * height)
				throw new ArgumentException($"The texture needs {stride * height} bytes but only {pixels.Length} were supplied.", nameof(pixels));
		}
		int handle = WebGLInterop.CreateTexture(_handle, width, height, pixels.IsEmpty ? [] : pixels.ToArray(), pixels.IsEmpty ? 0 : stride);
		if (handle <= 0)
			throw new InvalidOperationException("The browser did not create the texture.");
		return new WebGLTexture(this, handle, width, height);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		WebGLInterop.Dispose(_handle);
	}

	internal void UpdateTexture(int textureHandle, ReadOnlySpan<byte> pixels, int stride)
	{
		ThrowIfDisposed();
		WebGLInterop.UpdateTexture(_handle, textureHandle, pixels.ToArray(), stride);
	}

	internal void DisposeTexture(int textureHandle)
	{
		if (_disposed)
			return;
		WebGLInterop.DisposeTexture(_handle, textureHandle);
	}

	internal string GetErrorState()
	{
		ThrowIfDisposed();
		return WebGLInterop.ErrorState(_handle);
	}

	internal uint ReadPixel(int x, int y)
	{
		ThrowIfDisposed();
		if (x < 0 || x >= Settings.Width)
			throw new ArgumentOutOfRangeException(nameof(x), x, $"The pixel column runs from zero to {Settings.Width - 1}.");
		if (y < 0 || y >= Settings.Height)
			throw new ArgumentOutOfRangeException(nameof(y), y, $"The pixel row runs from zero to {Settings.Height - 1}.");
		return (uint)WebGLInterop.ReadPixel(_handle, x, y);
	}

	private static int GetVertexCount(PrimitiveType primitive, int primitiveCount) => primitive switch
	{
		PrimitiveType.PointList => primitiveCount,
		PrimitiveType.LineList => primitiveCount * 2,
		PrimitiveType.LineStrip => primitiveCount + 1,
		PrimitiveType.TriangleList => primitiveCount * 3,
		PrimitiveType.TriangleStrip => primitiveCount + 2,
		PrimitiveType.TriangleFan => primitiveCount + 2,
		_ => throw new ArgumentOutOfRangeException(nameof(primitive), primitive, "Unknown primitive type."),
	};

	private static float[] ToArray(in Matrix4x4 matrix) =>
	[
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44,
	];

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
