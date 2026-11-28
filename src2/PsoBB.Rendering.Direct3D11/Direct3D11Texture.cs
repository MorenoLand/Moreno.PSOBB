using PsoBB.Graphics;
using Vortice.Direct3D11;
using Vortice.DXGI;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// A BGRA texture owned by the Direct3D 11 renderer that retains its pixels so it can survive a device loss.
/// </summary>
public sealed class Direct3D11Texture : ITexture
{
	private readonly Action<Direct3D11Texture> _onDispose;
	private ID3D11Device _device;
	private ID3D11DeviceContext _context;
	private ID3D11Texture2D _texture = null!;
	private ID3D11ShaderResourceView _view = null!;
	private byte[] _pixels;
	private int _stride;
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
	/// <param name="onDispose">Called once when the texture is released.</param>
	internal Direct3D11Texture(ID3D11Device device, ID3D11DeviceContext context, int width, int height, ReadOnlySpan<byte> pixels, int stride, Action<Direct3D11Texture> onDispose)
	{
		ArgumentNullException.ThrowIfNull(device);
		ArgumentNullException.ThrowIfNull(context);
		ArgumentNullException.ThrowIfNull(onDispose);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		_device = device;
		_context = context;
		_onDispose = onDispose;
		Width = width;
		Height = height;
		_pixels = pixels.IsEmpty ? [] : pixels.ToArray();
		_stride = pixels.IsEmpty ? width * 4 : stride;
		ValidatePixels(pixels, stride);
		CreateResources();
		if (_pixels.Length != 0)
			Upload();
	}

	/// <inheritdoc/>
	public int Width { get; }

	/// <inheritdoc/>
	public int Height { get; }

	/// <summary>Gets the shader resource view the renderer binds.</summary>
	internal ID3D11ShaderResourceView View => _view;

	/// <inheritdoc/>
	public void Update(ReadOnlySpan<byte> pixels, int stride)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (pixels.IsEmpty)
			return;
		ValidatePixels(pixels, stride);
		_pixels = pixels.ToArray();
		_stride = stride;
		Upload();
	}

	/// <summary>Recreates the GPU resources on a new device after a device loss.</summary>
	/// <param name="device">The replacement device.</param>
	/// <param name="context">The replacement immediate context.</param>
	internal void Recover(ID3D11Device device, ID3D11DeviceContext context)
	{
		if (_disposed)
			return;
		ReleaseResources();
		_device = device;
		_context = context;
		CreateResources();
		if (_pixels.Length != 0)
			Upload();
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		ReleaseResources();
		_onDispose(this);
	}

	private void ValidatePixels(ReadOnlySpan<byte> pixels, int stride)
	{
		if (pixels.IsEmpty)
			return;
		if (stride < Width * 4)
			throw new ArgumentOutOfRangeException(nameof(stride), stride, $"A {Width}-pixel BGRA row needs at least {Width * 4} bytes.");
		if (pixels.Length < stride * Height)
			throw new ArgumentException($"The texture needs {stride * Height} bytes but only {pixels.Length} were supplied.", nameof(pixels));
	}

	private void CreateResources()
	{
		_texture = _device.CreateTexture2D(new Texture2DDescription
		{
			Width = (uint)Width,
			Height = (uint)Height,
			MipLevels = 1,
			ArraySize = 1,
			Format = Format.B8G8R8A8_UNorm,
			SampleDescription = new SampleDescription(1, 0),
			Usage = ResourceUsage.Default,
			BindFlags = BindFlags.ShaderResource,
			CPUAccessFlags = CpuAccessFlags.None,
			MiscFlags = ResourceOptionFlags.None,
		});
		_view = _device.CreateShaderResourceView(_texture);
	}

	private void ReleaseResources()
	{
		_view.Dispose();
		_texture.Dispose();
	}

	private void Upload()
	{
		int tightStride = Width * 4;
		if (_stride == tightStride)
		{
			unsafe
			{
				fixed (byte* source = _pixels)
					_context.UpdateSubresource(_texture, 0, null, (nint)source, (uint)tightStride, 0);
			}
			return;
		}
		byte[] packed = new byte[tightStride * Height];
		for (int row = 0; row < Height; row++)
			_pixels.AsSpan(row * _stride, tightStride).CopyTo(packed.AsSpan(row * tightStride, tightStride));
		unsafe
		{
			fixed (byte* source = packed)
				_context.UpdateSubresource(_texture, 0, null, (nint)source, (uint)tightStride, 0);
		}
	}
}
