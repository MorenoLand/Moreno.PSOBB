using System.Numerics;
using System.Runtime.InteropServices;
using PsoBB.Graphics;
using SharpGen.Runtime;
using Vortice.Direct3D;
using Vortice.Direct3D11;
using Vortice.DXGI;
using Vortice.Mathematics;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// A Direct3D 11 implementation of the client renderer.
/// </summary>
public sealed class Direct3D11Renderer : IRenderer
{
	private const int TextureStageCount = 8;

	private readonly ID3D11Device _device;
	private readonly ID3D11DeviceContext _context;
	private readonly IDXGISwapChain1 _swapChain;
	private readonly ID3D11Texture2D _backBuffer;
	private readonly ID3D11RenderTargetView _backBufferView;
	private readonly ID3D11Texture2D _depthTexture;
	private readonly ID3D11DepthStencilView _depthView;
	private readonly ID3D11Texture2D? _multisampleTexture;
	private readonly ID3D11RenderTargetView _renderTargetView;
	private readonly ShaderPipeline _shaders;
	private readonly ID3D11SamplerState _sampler;
	private readonly ID3D11Texture2D _whiteTexture;
	private readonly ID3D11ShaderResourceView _whiteView;
	private readonly ID3D11Buffer _constantBuffer;
	private readonly RenderStateValues _states = new();
	private readonly ID3D11ShaderResourceView?[] _textureViews = new ID3D11ShaderResourceView?[TextureStageCount];
	private readonly Matrix4x4[] _textureTransforms = [Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity];
	private ID3D11BlendState _blendState;
	private ID3D11RasterizerState _rasterizerState;
	private ID3D11DepthStencilState _depthStencilState;
	private ID3D11Buffer? _vertexBuffer;
	private int _vertexBufferCapacity;
	private ID3D11Buffer? _indexBuffer;
	private int _indexBufferCapacity;
	private Matrix4x4 _world = Matrix4x4.Identity;
	private Matrix4x4 _view = Matrix4x4.Identity;
	private Matrix4x4 _projection = Matrix4x4.Identity;
	private bool _pipelineDirty = true;
	private bool _constantsDirty = true;
	private bool _disposed;

	/// <summary>
	/// Creates the device, swap chain, backbuffer and render-target view for a window.
	/// </summary>
	/// <param name="windowHandle">The native window handle the swap chain presents to.</param>
	/// <param name="settings">The requested resolution, presentation and multisampling.</param>
	/// <exception cref="Direct3D11UnavailableException">No hardware or WARP device could be created.</exception>
	public Direct3D11Renderer(nint windowHandle, RenderSettings settings)
	{
		if (windowHandle == 0)
			throw new ArgumentException("A window handle is required.", nameof(windowHandle));
		FeatureLevel[] featureLevels = [FeatureLevel.Level_11_0, FeatureLevel.Level_10_1, FeatureLevel.Level_10_0];
		Result result = D3D11.D3D11CreateDevice(nint.Zero, DriverType.Hardware, DeviceCreationFlags.BgraSupport, featureLevels, out ID3D11Device device, out _, out ID3D11DeviceContext context);
		if (result.Failure)
			result = D3D11.D3D11CreateDevice(nint.Zero, DriverType.Warp, DeviceCreationFlags.BgraSupport, featureLevels, out device, out _, out context);
		if (result.Failure)
			throw new Direct3D11UnavailableException($"A Direct3D 11 hardware or WARP device could not be created: {result.Description}");
		_device = device;
		_context = context;
		int sampleCount = ResolveSampleCount(_device, settings.MultisampleCount);
		Settings = new RenderSettings(settings.Width, settings.Height, settings.Windowed, sampleCount, settings.VSync);
		using IDXGIDevice dxgiDevice = _device.QueryInterface<IDXGIDevice>();
		using IDXGIAdapter adapter = dxgiDevice.GetAdapter();
		using IDXGIFactory2 factory = adapter.GetParent<IDXGIFactory2>();
		SwapChainDescription1 swapChainDescription = new()
		{
			Width = (uint)settings.Width,
			Height = (uint)settings.Height,
			Format = Format.B8G8R8A8_UNorm,
			Stereo = false,
			SampleDescription = new SampleDescription(1, 0),
			BufferUsage = Usage.RenderTargetOutput,
			BufferCount = 2,
			Scaling = Scaling.Stretch,
			SwapEffect = SwapEffect.FlipDiscard,
			AlphaMode = AlphaMode.Ignore,
			Flags = settings.Windowed ? SwapChainFlags.None : SwapChainFlags.AllowModeSwitch,
		};
		_swapChain = factory.CreateSwapChainForHwnd(_device, windowHandle, swapChainDescription, null, null);
		if (!settings.Windowed)
			_swapChain.SetFullscreenState(true, null).CheckError();
		_backBuffer = _swapChain.GetBuffer<ID3D11Texture2D>(0);
		_backBufferView = _device.CreateRenderTargetView(_backBuffer);
		if (sampleCount > 0)
		{
			_multisampleTexture = _device.CreateTexture2DMultisample(Format.B8G8R8A8_UNorm, (uint)settings.Width, (uint)settings.Height, (uint)sampleCount, 1, BindFlags.RenderTarget, ResourceOptionFlags.None);
			_renderTargetView = _device.CreateRenderTargetView(_multisampleTexture);
		}
		else
		{
			_renderTargetView = _backBufferView;
		}
		_depthTexture = CreateDepthTexture(_device, settings.Width, settings.Height, Math.Max(sampleCount, 1));
		_depthView = _device.CreateDepthStencilView(_depthTexture);
		_shaders = new ShaderPipeline(_device);
		_sampler = _device.CreateSamplerState(SamplerDescription.LinearWrap);
		_whiteTexture = _device.CreateTexture2D([255, 255, 255, 255], Format.B8G8R8A8_UNorm, 1, 1, 1, 1, BindFlags.ShaderResource, ResourceOptionFlags.None, ResourceUsage.Immutable, CpuAccessFlags.None);
		_whiteView = _device.CreateShaderResourceView(_whiteTexture);
		_textureViews[0] = _whiteView;
		_constantBuffer = _device.CreateBuffer((uint)Marshal.SizeOf<SceneConstants>(), BindFlags.ConstantBuffer, ResourceUsage.Default, CpuAccessFlags.None, ResourceOptionFlags.None, 0);
		_blendState = _device.CreateBlendState(_states.CreateBlendDescription());
		_rasterizerState = _device.CreateRasterizerState(_states.CreateRasterizerDescription(sampleCount > 0));
		_depthStencilState = _device.CreateDepthStencilState(_states.CreateDepthStencilDescription());
		_context.PSSetSampler(0, _sampler);
		_context.PSSetShaderResource(0, _whiteView);
		_context.VSSetConstantBuffer(0, _constantBuffer);
		_context.PSSetConstantBuffer(0, _constantBuffer);
	}

	/// <inheritdoc/>
	public RenderSettings Settings { get; }

	/// <inheritdoc/>
	public void BeginFrame()
	{
		ThrowIfDisposed();
		_context.OMSetRenderTargets(_renderTargetView, _depthView);
		_context.ClearDepthStencilView(_depthView, DepthStencilClearFlags.Depth | DepthStencilClearFlags.Stencil, 1, 0);
		SetViewport(0, 0, Settings.Width, Settings.Height);
	}

	/// <inheritdoc/>
	public void SetViewport(int x, int y, int width, int height)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegative(width);
		ArgumentOutOfRangeException.ThrowIfNegative(height);
		_context.RSSetViewport(x, y, width, height, 0, 1);
		_context.RSSetScissorRect(x, y, x + width, y + height);
	}

	/// <inheritdoc/>
	public void Clear(uint color)
	{
		ThrowIfDisposed();
		float alpha = (color >> 24) & 0xFF;
		float red = (color >> 16) & 0xFF;
		float green = (color >> 8) & 0xFF;
		float blue = color & 0xFF;
		_context.ClearRenderTargetView(_renderTargetView, new Color4(red / 255.0f, green / 255.0f, blue / 255.0f, alpha / 255.0f));
	}

	/// <inheritdoc/>
	public void SetTransform(TransformKind kind, in Matrix4x4 transform)
	{
		ThrowIfDisposed();
		switch (kind)
		{
			case TransformKind.World:
				_world = transform;
				break;
			case TransformKind.View:
				_view = transform;
				break;
			case TransformKind.Projection:
				_projection = transform;
				break;
			case TransformKind.Texture0:
				_textureTransforms[0] = transform;
				break;
			case TransformKind.Texture1:
				_textureTransforms[1] = transform;
				break;
			case TransformKind.Texture2:
				_textureTransforms[2] = transform;
				break;
			case TransformKind.Texture3:
				_textureTransforms[3] = transform;
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(kind), kind, "Unknown transform slot.");
		}
		_constantsDirty = true;
	}

	/// <inheritdoc/>
	public void SetRenderState(uint state, uint value)
	{
		ThrowIfDisposed();
		_states.Set(state, value);
		_pipelineDirty = true;
		_constantsDirty = true;
	}

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture)
	{
		ThrowIfDisposed();
		if (stage is < 0 or >= TextureStageCount)
			throw new ArgumentOutOfRangeException(nameof(stage), stage, $"Texture stages run from zero to {TextureStageCount - 1}.");
		ID3D11ShaderResourceView? view = texture switch
		{
			null => stage == 0 ? _whiteView : null,
			Direct3D11Texture direct3D11Texture => direct3D11Texture.View,
			_ => throw new ArgumentException("The texture was not created by this renderer.", nameof(texture)),
		};
		_textureViews[stage] = view;
		_context.PSSetShaderResource((uint)stage, view!);
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
		ShaderPipeline.VertexPipeline pipeline = _shaders.Get(vertexFormat, format);
		ApplyPipelineState();
		UpdateConstants();
		_context.IASetInputLayout(pipeline.Layout);
		_context.VSSetShader(pipeline.Shader);
		_context.PSSetShader(_shaders.PixelShader);
		_context.PSSetSampler(0, _sampler);
		_context.VSSetConstantBuffer(0, _constantBuffer);
		_context.PSSetConstantBuffer(0, _constantBuffer);
		ID3D11Buffer vertexBuffer = UploadVertices(vertices[..requiredBytes]);
		_context.IASetVertexBuffer(0, vertexBuffer, (uint)stride, 0);
		if (primitive == PrimitiveType.TriangleFan)
		{
			UploadFanIndices(primitiveCount);
			_context.IASetPrimitiveTopology(PrimitiveTopology.TriangleList);
			_context.IASetIndexBuffer(_indexBuffer, Format.R32_UInt, 0);
			_context.DrawIndexed((uint)(primitiveCount * 3), 0, 0);
			return;
		}
		_context.IASetPrimitiveTopology(ToTopology(primitive));
		_context.Draw((uint)vertexCount, 0);
	}

	/// <inheritdoc/>
	public void EndFrame()
	{
		ThrowIfDisposed();
		if (_multisampleTexture is not null)
			_context.ResolveSubresource(_backBuffer, 0, _multisampleTexture, 0, Format.B8G8R8A8_UNorm);
		_swapChain.Present((uint)(Settings.VSync ? 1 : 0), PresentFlags.None).CheckError();
	}

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ThrowIfDisposed();
		return new Direct3D11Texture(_device, _context, width, height, pixels, stride);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_swapChain.SetFullscreenState(false, null);
		_context.ClearState();
		_context.Flush();
		_shaders.Dispose();
		_sampler.Dispose();
		_whiteView.Dispose();
		_whiteTexture.Dispose();
		_constantBuffer.Dispose();
		_blendState.Dispose();
		_rasterizerState.Dispose();
		_depthStencilState.Dispose();
		_vertexBuffer?.Dispose();
		_indexBuffer?.Dispose();
		_depthView.Dispose();
		_depthTexture.Dispose();
		if (_multisampleTexture is not null)
			_renderTargetView.Dispose();
		_multisampleTexture?.Dispose();
		_backBufferView.Dispose();
		_backBuffer.Dispose();
		_swapChain.Dispose();
		_context.Dispose();
		_device.Dispose();
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

	private static PrimitiveTopology ToTopology(PrimitiveType primitive) => primitive switch
	{
		PrimitiveType.PointList => PrimitiveTopology.PointList,
		PrimitiveType.LineList => PrimitiveTopology.LineList,
		PrimitiveType.LineStrip => PrimitiveTopology.LineStrip,
		PrimitiveType.TriangleList => PrimitiveTopology.TriangleList,
		PrimitiveType.TriangleStrip => PrimitiveTopology.TriangleStrip,
		_ => throw new ArgumentOutOfRangeException(nameof(primitive), primitive, "The primitive type has no Direct3D 11 topology."),
	};

	private static int ResolveSampleCount(ID3D11Device device, int requested)
	{
		int samples = requested;
		while (samples > 1)
		{
			if (device.CheckMultisampleQualityLevels(Format.B8G8R8A8_UNorm, (uint)samples) > 0)
				return samples;
			samples >>= 1;
		}
		return 0;
	}

	private static ID3D11Texture2D CreateDepthTexture(ID3D11Device device, int width, int height, int samples) => device.CreateTexture2D(new Texture2DDescription
	{
		Width = (uint)width,
		Height = (uint)height,
		MipLevels = 1,
		ArraySize = 1,
		Format = Format.D24_UNorm_S8_UInt,
		SampleDescription = new SampleDescription((uint)samples, 0),
		Usage = ResourceUsage.Default,
		BindFlags = BindFlags.DepthStencil,
		CPUAccessFlags = CpuAccessFlags.None,
		MiscFlags = ResourceOptionFlags.None,
	});

	private void ApplyPipelineState()
	{
		if (!_pipelineDirty)
			return;
		_pipelineDirty = false;
		_blendState.Dispose();
		_rasterizerState.Dispose();
		_depthStencilState.Dispose();
		_blendState = _device.CreateBlendState(_states.CreateBlendDescription());
		_rasterizerState = _device.CreateRasterizerState(_states.CreateRasterizerDescription(Settings.MultisampleCount > 0));
		_depthStencilState = _device.CreateDepthStencilState(_states.CreateDepthStencilDescription());
		_context.OMSetBlendState(_blendState, new Color4(1, 1, 1, 1), uint.MaxValue);
		_context.OMSetDepthStencilState(_depthStencilState, _states.Get(RenderStateId.StencilReference, 0));
		_context.RSSetState(_rasterizerState);
	}

	private void UpdateConstants()
	{
		if (!_constantsDirty)
			return;
		_constantsDirty = false;
		uint fogColor = _states.Get(RenderStateId.FogColor, 0);
		Vector3 color = new(((fogColor >> 16) & 0xFF) / 255.0f, ((fogColor >> 8) & 0xFF) / 255.0f, (fogColor & 0xFF) / 255.0f);
		SceneConstants constants = new()
		{
			World = _world,
			View = _view,
			Projection = _projection,
			TextureTransform0 = _textureTransforms[0],
			TextureTransform1 = _textureTransforms[1],
			TextureTransform2 = _textureTransforms[2],
			TextureTransform3 = _textureTransforms[3],
			FogColor = new Vector4(color, 1),
			FogParameters = new Vector4(
				BitConverter.Int32BitsToSingle((int)_states.Get(RenderStateId.FogStart, 0)),
				BitConverter.Int32BitsToSingle((int)_states.Get(RenderStateId.FogEnd, 0x3F800000)),
				BitConverter.Int32BitsToSingle((int)_states.Get(RenderStateId.FogDensity, 0x3F800000)),
				_states.GetFogMode()),
			AlphaTest = new Vector4(_states.GetAlphaReference(), _states.GetAlphaFunction(), _states.IsAlphaTestEnabled() ? 1 : 0, 0),
			ScreenSize = new Vector4(Settings.Width, Settings.Height, 1.0f / Settings.Width, 1.0f / Settings.Height),
			FogRange = new Vector4(_states.Get(RenderStateId.RangeFogEnable, 0) != 0 ? 1 : 0, 0, 0, 0),
		};
		_context.UpdateSubresource(in constants, _constantBuffer, 0, 0, 0, null);
	}

	private ID3D11Buffer UploadVertices(ReadOnlySpan<byte> vertices)
	{
		int capacity = Math.Max(256, (vertices.Length + 255) & ~255);
		if (_vertexBuffer is null || _vertexBufferCapacity < capacity)
		{
			_vertexBuffer?.Dispose();
			_vertexBuffer = _device.CreateBuffer((uint)capacity, BindFlags.VertexBuffer, ResourceUsage.Dynamic, CpuAccessFlags.Write, ResourceOptionFlags.None, 0);
			_vertexBufferCapacity = capacity;
		}
		MappedSubresource mapped = _context.Map(_vertexBuffer, 0, MapMode.WriteDiscard, Vortice.Direct3D11.MapFlags.None);
		unsafe
		{
			vertices.CopyTo(new Span<byte>((void*)mapped.DataPointer, vertices.Length));
		}
		_context.Unmap(_vertexBuffer, 0);
		return _vertexBuffer;
	}

	private void UploadFanIndices(int primitiveCount)
	{
		int indexCount = primitiveCount * 3;
		int capacity = Math.Max(256, (indexCount + 255) & ~255);
		if (_indexBuffer is null || _indexBufferCapacity < capacity)
		{
			_indexBuffer?.Dispose();
			_indexBuffer = _device.CreateBuffer((uint)(capacity * sizeof(uint)), BindFlags.IndexBuffer, ResourceUsage.Dynamic, CpuAccessFlags.Write, ResourceOptionFlags.None, 0);
			_indexBufferCapacity = capacity;
		}
		MappedSubresource mapped = _context.Map(_indexBuffer, 0, MapMode.WriteDiscard, Vortice.Direct3D11.MapFlags.None);
		unsafe
		{
			uint* indices = (uint*)mapped.DataPointer;
			for (int index = 0; index < primitiveCount; index++)
			{
				indices[index * 3] = 0;
				indices[index * 3 + 1] = (uint)(index + 1);
				indices[index * 3 + 2] = (uint)(index + 2);
			}
		}
		_context.Unmap(_indexBuffer, 0);
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	[StructLayout(LayoutKind.Sequential)]
	private struct SceneConstants
	{
		public Matrix4x4 World;
		public Matrix4x4 View;
		public Matrix4x4 Projection;
		public Matrix4x4 TextureTransform0;
		public Matrix4x4 TextureTransform1;
		public Matrix4x4 TextureTransform2;
		public Matrix4x4 TextureTransform3;
		public Vector4 FogColor;
		public Vector4 FogParameters;
		public Vector4 AlphaTest;
		public Vector4 ScreenSize;
		public Vector4 FogRange;
	}
}
