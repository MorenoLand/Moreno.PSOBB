using PsoBB.Graphics;
using Vortice.Direct3D11;
using Vortice.DXGI;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// A BGRA texture owned by the Direct3D 11 renderer.
/// </summary>
public sealed class Direct3D11Texture : ITexture
{
	private readonly ID3D11DeviceContext _context;
	private bool _disposed;

	/// <summary>
	/// Creates a texture and uploads the supplied pixels.
	/// </summary>
	/// <param name="device">The device that owns the texture.</param>
	/// <param name="context">The immediate context used for uploads.</param>
	/// <param name="width">Texture width in pixels.</param>
	/// <param name="height">Texture height in pixels.</param>
	/// <param name="pixels">The BGRA pixel bytes, or an empty span for uninitialised storage.</param>
	/// <param name="stride">The number of bytes per row.</param>
	internal Direct3D11Texture(ID3D11Device device, ID3D11DeviceContext context, int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ArgumentNullException.ThrowIfNull(device);
		ArgumentNullException.ThrowIfNull(context);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		_context = context;
		Width = width;
		Height = height;
		Texture = device.CreateTexture2D(new Texture2DDescription
		{
			Width = (uint)width,
			Height = (uint)height,
			MipLevels = 1,
			ArraySize = 1,
			Format = Format.B8G8R8A8_UNorm,
			SampleDescription = new SampleDescription(1, 0),
			Usage = ResourceUsage.Default,
			BindFlags = BindFlags.ShaderResource,
			CPUAccessFlags = CpuAccessFlags.None,
			MiscFlags = ResourceOptionFlags.None,
		});
		View = device.CreateShaderResourceView(Texture);
		Update(pixels, stride);
	}

	/// <inheritdoc/>
	public int Width { get; }

	/// <inheritdoc/>
	public int Height { get; }

	/// <summary>Gets the shader resource view the renderer binds.</summary>
	internal ID3D11ShaderResourceView View { get; }

	/// <summary>Gets the underlying texture resource.</summary>
	internal ID3D11Texture2D Texture { get; }

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
		if (stride == tightStride)
		{
			unsafe
			{
				fixed (byte* source = pixels)
					_context.UpdateSubresource(Texture, 0, null, (nint)source, (uint)tightStride, 0);
			}
			return;
		}
		byte[] packed = new byte[tightStride * Height];
		for (int row = 0; row < Height; row++)
			pixels.Slice(row * stride, tightStride).CopyTo(packed.AsSpan(row * tightStride, tightStride));
		unsafe
		{
			fixed (byte* source = packed)
				_context.UpdateSubresource(Texture, 0, null, (nint)source, (uint)tightStride, 0);
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		View.Dispose();
		Texture.Dispose();
	}
}
