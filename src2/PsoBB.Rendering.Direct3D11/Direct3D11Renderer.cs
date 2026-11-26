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
/// <remarks>
/// The fixed-function pipeline supports eight lights, four texture stages, packed and non-indexed
/// vertex blending against a 256-matrix palette, texture-coordinate generation and transforms,
/// per-vertex and table fog, and resource recovery after a device loss or resize. Retained textures
/// keep a CPU copy of their pixels so they can be recreated on the replacement device.
/// </remarks>
public sealed class Direct3D11Renderer : IFixedFunctionRenderer, IResizableRenderer
{
	private const int TextureStageCount = 4;
	private const int LightCount = 8;
	private const int WorldMatrixCount = 256;
	private const int SwapChainBufferCount = 2;

	private readonly nint _windowHandle;
	private readonly RenderStateValues _states = new();
	private readonly TextureStageValues _stages = new();
	private readonly List<Direct3D11Texture> _textures = [];
	private readonly ID3D11ShaderResourceView?[] _textureViews = new ID3D11ShaderResourceView?[TextureStageCount];
	private readonly Direct3D11Texture?[] _stageTextures = new Direct3D11Texture?[TextureStageCount];
	private readonly bool[] _textureBound = new bool[TextureStageCount];
	private readonly Matrix4x4[] _textureTransforms = [Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity];
	private readonly Matrix4x4[] _worldMatrices = CreateWorldMatrices();
	private readonly Light[] _lights = CreateLights();
	private readonly bool[] _lightEnabled = new bool[LightCount];
	private readonly LightConstant[] _lightConstants = new LightConstant[LightCount];
	private readonly ID3D11SamplerState[] _samplers = new ID3D11SamplerState[TextureStageCount];
	private readonly bool[] _samplerDirty = [true, true, true, true];
	private ID3D11Device _device = null!;
	private ID3D11DeviceContext _context = null!;
	private IDXGISwapChain1 _swapChain = null!;
	private ID3D11Texture2D _backBuffer = null!;
	private ID3D11RenderTargetView _backBufferView = null!;
	private ID3D11Texture2D _depthTexture = null!;
	private ID3D11DepthStencilView _depthView = null!;
	private ID3D11Texture2D? _multisampleTexture;
	private ID3D11RenderTargetView _renderTargetView = null!;
	private ShaderPipeline _shaders = null!;
	private ID3D11Texture2D _whiteTexture = null!;
	private ID3D11ShaderResourceView _whiteView = null!;
	private ID3D11Buffer _sceneBuffer = null!;
	private ID3D11Buffer _lightStateBuffer = null!;
	private ID3D11Buffer _lightDataBuffer = null!;
	private ID3D11Buffer _paletteBuffer = null!;
	private ID3D11BlendState _blendState = null!;
	private ID3D11RasterizerState _rasterizerState = null!;
	private ID3D11DepthStencilState _depthStencilState = null!;
	private ID3D11Buffer? _vertexBuffer;
	private int _vertexBufferCapacity;
	private ID3D11Buffer? _indexBuffer;
	private int _indexBufferCapacity;
	private Material _material = Material.Default;
	private Matrix4x4 _view = Matrix4x4.Identity;
	private Matrix4x4 _projection = Matrix4x4.Identity;
	private bool _pipelineDirty = true;
	private bool _constantsDirty = true;
	private bool _lightDataDirty = true;
	private bool _paletteDirty = true;
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
		_windowHandle = windowHandle;
		CreateDeviceAndSwapChain(settings);
		CreateSizedResources();
		CreateDeviceResources();
	}

	/// <inheritdoc/>
	public RenderSettings Settings { get; private set; }

	/// <inheritdoc/>
	public void BeginFrame()
	{
		ThrowIfDisposed();
		EnsureDevice();
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
		EnsureDevice();
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
				_worldMatrices[0] = transform;
				_paletteDirty = true;
				break;
			case TransformKind.World1:
				_worldMatrices[1] = transform;
				_paletteDirty = true;
				break;
			case TransformKind.World2:
				_worldMatrices[2] = transform;
				_paletteDirty = true;
				break;
			case TransformKind.World3:
				_worldMatrices[3] = transform;
				_paletteDirty = true;
				break;
			case TransformKind.View:
				_view = transform;
				_constantsDirty = true;
				_lightDataDirty = true;
				break;
			case TransformKind.Projection:
				_projection = transform;
				_constantsDirty = true;
				break;
			case TransformKind.Texture0:
				_textureTransforms[0] = transform;
				_constantsDirty = true;
				break;
			case TransformKind.Texture1:
				_textureTransforms[1] = transform;
				_constantsDirty = true;
				break;
			case TransformKind.Texture2:
				_textureTransforms[2] = transform;
				_constantsDirty = true;
				break;
			case TransformKind.Texture3:
				_textureTransforms[3] = transform;
				_constantsDirty = true;
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(kind), kind, "Unknown transform slot.");
		}
	}

	/// <inheritdoc/>
	public void SetWorldMatrix(int index, in Matrix4x4 transform)
	{
		ThrowIfDisposed();
		if (index is < 0 or >= WorldMatrixCount)
			throw new ArgumentOutOfRangeException(nameof(index), index, $"World matrices run from zero to {WorldMatrixCount - 1}.");
		_worldMatrices[index] = transform;
		_paletteDirty = true;
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
	public void SetMaterial(in Material material)
	{
		ThrowIfDisposed();
		_material = material;
		_constantsDirty = true;
	}

	/// <inheritdoc/>
	public void SetLight(int index, in Light light)
	{
		ThrowIfDisposed();
		if (index is < 0 or >= LightCount)
			throw new ArgumentOutOfRangeException(nameof(index), index, $"Lights run from zero to {LightCount - 1}.");
		_lights[index] = light;
		_lightDataDirty = true;
	}

	/// <inheritdoc/>
	public void SetLightEnabled(int index, bool enabled)
	{
		ThrowIfDisposed();
		if (index is < 0 or >= LightCount)
			throw new ArgumentOutOfRangeException(nameof(index), index, $"Lights run from zero to {LightCount - 1}.");
		_lightEnabled[index] = enabled;
		_lightDataDirty = true;
	}

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture)
	{
		ThrowIfDisposed();
		if (stage is < 0 or >= TextureStageCount)
			throw new ArgumentOutOfRangeException(nameof(stage), stage, $"Texture stages run from zero to {TextureStageCount - 1}.");
		ID3D11ShaderResourceView view = texture switch
		{
			null => _whiteView,
			Direct3D11Texture direct3D11Texture => direct3D11Texture.View,
			_ => throw new ArgumentException("The texture is not a Direct3D 11 texture.", nameof(texture)),
		};
		_stageTextures[stage] = texture as Direct3D11Texture;
		_textureViews[stage] = texture is null ? null : view;
		_textureBound[stage] = texture is not null;
		_context.PSSetShaderResource((uint)stage, view);
		_constantsDirty = true;
	}

	/// <inheritdoc/>
	public void SetTextureStageState(int stage, uint state, uint value)
	{
		ThrowIfDisposed();
		if (stage is < 0 or >= TextureStageCount)
			throw new ArgumentOutOfRangeException(nameof(stage), stage, $"Texture stages run from zero to {TextureStageCount - 1}.");
		if (state is 0 or > Direct3D8TextureStageState.ResultArgument)
			throw new ArgumentOutOfRangeException(nameof(state), state, "Unknown texture-stage state.");
		_stages.Set(stage, state, value);
		_samplerDirty[stage] = true;
		_constantsDirty = true;
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
		EnsureDevice();
		ShaderPipeline.VertexPipeline pipeline = _shaders.Get(vertexFormat, format);
		ApplyPipelineState();
		UpdateConstants();
		UpdateLightData();
		UpdatePalette();
		_context.IASetInputLayout(pipeline.Layout);
		_context.VSSetShader(pipeline.Shader);
		_context.PSSetShader(_shaders.PixelShader);
		_context.VSSetConstantBuffer(0, _sceneBuffer);
		_context.VSSetConstantBuffer(1, _lightStateBuffer);
		_context.VSSetConstantBuffer(2, _paletteBuffer);
		_context.VSSetConstantBuffer(3, _lightDataBuffer);
		_context.PSSetConstantBuffer(0, _sceneBuffer);
		_context.PSSetConstantBuffer(1, _lightStateBuffer);
		for (int stage = 0; stage < TextureStageCount; stage++)
		{
			_context.PSSetShaderResource((uint)stage, _textureViews[stage] ?? _whiteView);
			_context.PSSetSampler((uint)stage, _samplers[stage]);
		}
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
		if (EnsureDevice())
			_context.ClearRenderTargetView(_renderTargetView, new Color4(0, 0, 0, 1));
		if (_multisampleTexture is not null)
			_context.ResolveSubresource(_backBuffer, 0, _multisampleTexture, 0, Format.B8G8R8A8_UNorm);
		Result result = _swapChain.Present((uint)(Settings.VSync ? 1 : 0), PresentFlags.None);
		if (result.Failure)
		{
			if (!_device.DeviceRemovedReason.Failure)
				result.CheckError();
			Recover();
			_context.ClearRenderTargetView(_renderTargetView, new Color4(0, 0, 0, 1));
			if (_multisampleTexture is not null)
				_context.ResolveSubresource(_backBuffer, 0, _multisampleTexture, 0, Format.B8G8R8A8_UNorm);
			_swapChain.Present((uint)(Settings.VSync ? 1 : 0), PresentFlags.None).CheckError();
		}
	}

	/// <inheritdoc/>
	public void Resize(int width, int height)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		if (width == Settings.Width && height == Settings.Height)
			return;
		EnsureDevice();
		_context.OMSetRenderTargets(Array.Empty<ID3D11RenderTargetView>(), null);
		ReleaseSizedResources();
		_swapChain.ResizeBuffers(SwapChainBufferCount, (uint)width, (uint)height, Format.B8G8R8A8_UNorm, Settings.Windowed ? SwapChainFlags.None : SwapChainFlags.AllowModeSwitch).CheckError();
		Settings = new RenderSettings(width, height, Settings.Windowed, Settings.MultisampleCount, Settings.VSync);
		CreateSizedResources();
		_pipelineDirty = true;
	}

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ThrowIfDisposed();
		EnsureDevice();
		Direct3D11Texture texture = new(_device, _context, width, height, pixels, stride, RemoveTexture);
		_textures.Add(texture);
		return texture;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		DisposeDeviceResources();
		_textures.Clear();
	}

	/// <summary>Recreates the device and every renderer-owned or retained resource, for the device-loss test.</summary>
	internal void RecoverFromDeviceLoss()
	{
		ThrowIfDisposed();
		Recover();
	}

	/// <summary>Copies the current render target to a staging texture and returns its BGRA bytes, for tests.</summary>
	internal byte[] CaptureBackBuffer()
	{
		ThrowIfDisposed();
		EnsureDevice();
		int width = Settings.Width;
		int height = Settings.Height;
		using ID3D11Texture2D staging = CreateStagingTexture(width, height);
		_context.OMSetRenderTargets(Array.Empty<ID3D11RenderTargetView>(), null);
		if (_multisampleTexture is not null)
		{
			using ID3D11Texture2D resolved = CreateResolveTexture(width, height);
			_context.ResolveSubresource(resolved, 0, _multisampleTexture, 0, Format.B8G8R8A8_UNorm);
			_context.CopyResource(staging, resolved);
		}
		else
		{
			_context.CopyResource(staging, _backBuffer);
		}
		MappedSubresource mapped = _context.Map(staging, 0, MapMode.Read, Vortice.Direct3D11.MapFlags.None);
		byte[] pixels = new byte[width * height * 4];
		unsafe
		{
			for (int row = 0; row < height; row++)
				new ReadOnlySpan<byte>((void*)(mapped.DataPointer + row * (int)mapped.RowPitch), width * 4).CopyTo(pixels.AsSpan(row * width * 4, width * 4));
		}
		_context.Unmap(staging, 0);
		return pixels;
	}

	private static Matrix4x4[] CreateWorldMatrices()
	{
		Matrix4x4[] matrices = new Matrix4x4[WorldMatrixCount];
		for (int index = 0; index < matrices.Length; index++)
			matrices[index] = Matrix4x4.Identity;
		return matrices;
	}

	private static Light[] CreateLights()
	{
		Light[] lights = new Light[LightCount];
		for (int index = 0; index < lights.Length; index++)
			lights[index] = Light.Default;
		return lights;
	}

	private void CreateDeviceAndSwapChain(RenderSettings settings)
	{
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
			Width = (uint)Settings.Width,
			Height = (uint)Settings.Height,
			Format = Format.B8G8R8A8_UNorm,
			Stereo = false,
			SampleDescription = new SampleDescription(1, 0),
			BufferUsage = Usage.RenderTargetOutput,
			BufferCount = SwapChainBufferCount,
			Scaling = Scaling.Stretch,
			SwapEffect = SwapEffect.FlipDiscard,
			AlphaMode = AlphaMode.Ignore,
			Flags = Settings.Windowed ? SwapChainFlags.None : SwapChainFlags.AllowModeSwitch,
		};
		_swapChain = factory.CreateSwapChainForHwnd(_device, _windowHandle, swapChainDescription, null, null);
		if (!Settings.Windowed)
			_swapChain.SetFullscreenState(true, null).CheckError();
	}

	private void CreateSizedResources()
	{
		_backBuffer = _swapChain.GetBuffer<ID3D11Texture2D>(0);
		_backBufferView = _device.CreateRenderTargetView(_backBuffer);
		if (Settings.MultisampleCount > 0)
		{
			_multisampleTexture = _device.CreateTexture2D(new Texture2DDescription
			{
				Width = (uint)Settings.Width,
				Height = (uint)Settings.Height,
				MipLevels = 1,
				ArraySize = 1,
				Format = Format.B8G8R8A8_UNorm,
				SampleDescription = new SampleDescription((uint)Settings.MultisampleCount, 0),
				Usage = ResourceUsage.Default,
				BindFlags = BindFlags.RenderTarget,
				CPUAccessFlags = CpuAccessFlags.None,
				MiscFlags = ResourceOptionFlags.None,
			});
			_renderTargetView = _device.CreateRenderTargetView(_multisampleTexture);
		}
		else
		{
			_renderTargetView = _backBufferView;
		}
		_depthTexture = CreateDepthTexture(_device, Settings.Width, Settings.Height, Math.Max(Settings.MultisampleCount, 1));
		_depthView = _device.CreateDepthStencilView(_depthTexture);
	}

	private void ReleaseSizedResources()
	{
		_depthView.Dispose();
		_depthTexture.Dispose();
		if (_multisampleTexture is not null)
		{
			_renderTargetView.Dispose();
			_multisampleTexture.Dispose();
			_multisampleTexture = null;
		}
		_backBufferView.Dispose();
		_backBuffer.Dispose();
	}

	private void CreateDeviceResources()
	{
		_shaders = new ShaderPipeline(_device);
		for (int index = 0; index < TextureStageCount; index++)
			_samplers[index] = _device.CreateSamplerState(_stages.CreateSamplerDescription(index));
		_whiteTexture = _device.CreateTexture2D([255, 255, 255, 255], Format.B8G8R8A8_UNorm, 1, 1, 1, 1, BindFlags.ShaderResource, ResourceOptionFlags.None, ResourceUsage.Immutable, CpuAccessFlags.None);
		_whiteView = _device.CreateShaderResourceView(_whiteTexture);
		_sceneBuffer = _device.CreateBuffer((uint)Marshal.SizeOf<SceneConstants>(), BindFlags.ConstantBuffer, ResourceUsage.Default, CpuAccessFlags.None, ResourceOptionFlags.None, 0);
		_lightStateBuffer = _device.CreateBuffer((uint)Marshal.SizeOf<LightStateConstants>(), BindFlags.ConstantBuffer, ResourceUsage.Default, CpuAccessFlags.None, ResourceOptionFlags.None, 0);
		_lightDataBuffer = _device.CreateBuffer((uint)(Marshal.SizeOf<LightConstant>() * LightCount), BindFlags.ConstantBuffer, ResourceUsage.Default, CpuAccessFlags.None, ResourceOptionFlags.None, 0);
		_paletteBuffer = _device.CreateBuffer((uint)(Marshal.SizeOf<Matrix4x4>() * WorldMatrixCount), BindFlags.ConstantBuffer, ResourceUsage.Default, CpuAccessFlags.None, ResourceOptionFlags.None, 0);
		_blendState = _device.CreateBlendState(_states.CreateBlendDescription());
		_rasterizerState = _device.CreateRasterizerState(_states.CreateRasterizerDescription(Settings.MultisampleCount > 0));
		_depthStencilState = _device.CreateDepthStencilState(_states.CreateDepthStencilDescription());
		_context.OMSetBlendState(_blendState, new Color4(1, 1, 1, 1), uint.MaxValue);
		_context.OMSetDepthStencilState(_depthStencilState, _states.Get(RenderStateId.StencilReference, 0));
		_context.RSSetState(_rasterizerState);
		for (int stage = 0; stage < TextureStageCount; stage++)
		{
			_textureViews[stage] = null;
			_samplerDirty[stage] = false;
			_context.PSSetShaderResource((uint)stage, _whiteView);
			_context.PSSetSampler((uint)stage, _samplers[stage]);
		}
		_pipelineDirty = true;
		_constantsDirty = true;
		_lightDataDirty = true;
		_paletteDirty = true;
	}

	private void DisposeDeviceResources()
	{
		_context.ClearState();
		_context.Flush();
		_shaders.Dispose();
		for (int index = 0; index < TextureStageCount; index++)
			_samplers[index].Dispose();
		_whiteView.Dispose();
		_whiteTexture.Dispose();
		_sceneBuffer.Dispose();
		_lightStateBuffer.Dispose();
		_lightDataBuffer.Dispose();
		_paletteBuffer.Dispose();
		_blendState.Dispose();
		_rasterizerState.Dispose();
		_depthStencilState.Dispose();
		_vertexBuffer?.Dispose();
		_indexBuffer?.Dispose();
		_vertexBuffer = null;
		_indexBuffer = null;
		_vertexBufferCapacity = 0;
		_indexBufferCapacity = 0;
		ReleaseSizedResources();
		_swapChain.SetFullscreenState(false, null);
		_swapChain.Dispose();
		_context.Dispose();
		_device.Dispose();
	}

	private void Recover()
	{
		DisposeDeviceResources();
		CreateDeviceAndSwapChain(Settings);
		CreateSizedResources();
		CreateDeviceResources();
		foreach (Direct3D11Texture texture in _textures)
			texture.Recover(_device, _context);
		for (int stage = 0; stage < TextureStageCount; stage++)
		{
			_textureViews[stage] = _stageTextures[stage]?.View;
			_context.PSSetShaderResource((uint)stage, _textureViews[stage] ?? _whiteView);
		}
	}

	private bool EnsureDevice()
	{
		if (!_device.DeviceRemovedReason.Failure)
			return false;
		Recover();
		return true;
	}

	private void ApplyPipelineState()
	{
		if (_pipelineDirty)
		{
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
		for (int stage = 0; stage < TextureStageCount; stage++)
		{
			if (!_samplerDirty[stage])
				continue;
			_samplerDirty[stage] = false;
			_samplers[stage].Dispose();
			_samplers[stage] = _device.CreateSamplerState(_stages.CreateSamplerDescription(stage));
		}
	}

	private void UpdateConstants()
	{
		if (!_constantsDirty)
			return;
		_constantsDirty = false;
		Vector4 fogColor = _states.GetColor(RenderStateId.FogColor, Vector4.Zero);
		uint tableMode = _states.Get(RenderStateId.FogTableMode, 0);
		SceneConstants constants = new()
		{
			View = _view,
			Projection = _projection,
			TextureTransform0 = _textureTransforms[0],
			TextureTransform1 = _textureTransforms[1],
			TextureTransform2 = _textureTransforms[2],
			TextureTransform3 = _textureTransforms[3],
			FogColor = new Vector4(fogColor.X, fogColor.Y, fogColor.Z, 1),
			FogParameters = new Vector4(
				_states.GetSingle(RenderStateId.FogStart, 0),
				_states.GetSingle(RenderStateId.FogEnd, 1),
				_states.GetSingle(RenderStateId.FogDensity, 1),
				_states.GetFogMode()),
			AlphaTest = new Vector4(_states.GetAlphaReference(), _states.GetAlphaFunction(), _states.IsAlphaTestEnabled() ? 1 : 0, 0),
			ScreenSize = new Vector4(Settings.Width, Settings.Height, 1.0f / Settings.Width, 1.0f / Settings.Height),
			FogFlags = new Vector4(
				_states.GetBool(RenderStateId.RangeFogEnable, false) ? 1 : 0,
				tableMode != 0 ? 1 : 0,
				IsAffineProjection(_projection) ? 1 : 0,
				0),
		};
		_context.UpdateSubresource(in constants, _sceneBuffer, 0, 0, 0, null);
		LightStateConstants lightState = new()
		{
			MaterialDiffuse = _material.Diffuse,
			MaterialAmbient = _material.Ambient,
			MaterialSpecular = _material.Specular,
			MaterialEmissive = _material.Emissive,
			MaterialPower = new Vector4(_material.Power, 0, 0, 0),
			LightingFlags = new Vector4(
				_states.GetBool(RenderStateId.Lighting, true) ? 1 : 0,
				_states.GetBool(RenderStateId.SpecularEnable, false) ? 1 : 0,
				_states.GetBool(RenderStateId.ColorVertex, true) ? 1 : 0,
				_states.GetBool(RenderStateId.LocalViewer, true) ? 1 : 0),
			MaterialSources = new Vector4(
				_states.Get(RenderStateId.AmbientMaterialSource, RenderStateId.MaterialColorMaterial),
				_states.Get(RenderStateId.DiffuseMaterialSource, RenderStateId.MaterialColorDiffuse),
				_states.Get(RenderStateId.SpecularMaterialSource, RenderStateId.MaterialColorSpecular),
				_states.Get(RenderStateId.EmissiveMaterialSource, RenderStateId.MaterialColorMaterial)),
			VertexBlend = new Vector4(
				_states.Get(RenderStateId.VertexBlend, RenderStateId.VertexBlendDisable),
				_states.GetSingle(RenderStateId.TweenFactor, 0),
				_states.GetBool(RenderStateId.IndexedVertexBlendEnable, false) ? 1 : 0,
				_states.GetBool(RenderStateId.NormalizeNormals, false) ? 1 : 0),
			GlobalAmbient = _states.GetColor(RenderStateId.Ambient, Vector4.Zero),
			TextureFactor = _states.GetColor(RenderStateId.TextureFactor, Vector4.One),
			StageColor0 = GetStageColor(0),
			StageColor1 = GetStageColor(1),
			StageColor2 = GetStageColor(2),
			StageColor3 = GetStageColor(3),
			StageAlpha0 = GetStageAlpha(0),
			StageAlpha1 = GetStageAlpha(1),
			StageAlpha2 = GetStageAlpha(2),
			StageAlpha3 = GetStageAlpha(3),
			StageFlags0 = GetStageFlags(0),
			StageFlags1 = GetStageFlags(1),
			StageFlags2 = GetStageFlags(2),
			StageFlags3 = GetStageFlags(3),
		};
		_context.UpdateSubresource(in lightState, _lightStateBuffer, 0, 0, 0, null);
	}

	private void UpdateLightData()
	{
		if (!_lightDataDirty)
			return;
		_lightDataDirty = false;
		for (int index = 0; index < LightCount; index++)
		{
			Light light = _lights[index];
			bool enabled = _lightEnabled[index] && light.Type is LightType.Point or LightType.Spot or LightType.Directional;
			uint type = enabled ? (uint)light.Type : 0;
			Vector3 position = Vector3.Transform(light.Position, _view);
			Vector3 direction = Vector3.TransformNormal(light.Direction, _view);
			_lightConstants[index] = new LightConstant
			{
				Type = new Vector4(type, 0, 0, 0),
				Diffuse = light.Diffuse,
				Specular = light.Specular,
				Ambient = light.Ambient,
				Position = new Vector4(position, light.Range),
				Direction = new Vector4(direction, 0),
				Attenuation = new Vector4(light.Attenuation0, light.Attenuation1, light.Attenuation2, MathF.Cos(light.Theta / 2)),
				Spot = new Vector4(MathF.Cos(light.Phi / 2), light.Falloff, light.Theta, light.Phi),
			};
		}
		unsafe
		{
			fixed (LightConstant* lights = _lightConstants)
				_context.UpdateSubresource(_lightDataBuffer, 0, null, (nint)lights, 0, 0);
		}
	}

	private void UpdatePalette()
	{
		if (!_paletteDirty)
			return;
		_paletteDirty = false;
		unsafe
		{
			fixed (Matrix4x4* matrices = _worldMatrices)
				_context.UpdateSubresource(_paletteBuffer, 0, null, (nint)matrices, 0, 0);
		}
	}

	private Vector4 GetStageColor(int stage) => new(
		_stages.Get(stage, Direct3D8TextureStageState.ColorOp),
		_stages.Get(stage, Direct3D8TextureStageState.ColorArgument1),
		_stages.Get(stage, Direct3D8TextureStageState.ColorArgument2),
		_stages.Get(stage, Direct3D8TextureStageState.ColorArgument0));

	private Vector4 GetStageAlpha(int stage) => new(
		_stages.Get(stage, Direct3D8TextureStageState.AlphaOp),
		_stages.Get(stage, Direct3D8TextureStageState.AlphaArgument1),
		_stages.Get(stage, Direct3D8TextureStageState.AlphaArgument2),
		_stages.Get(stage, Direct3D8TextureStageState.AlphaArgument0));

	private Vector4 GetStageFlags(int stage) => new(
		_stages.Get(stage, Direct3D8TextureStageState.TextureTransformFlags),
		_stages.Get(stage, Direct3D8TextureStageState.TextureCoordinateIndex),
		_stages.Get(stage, Direct3D8TextureStageState.ResultArgument),
		_textureBound[stage] ? 1 : 0);

	private static bool IsAffineProjection(in Matrix4x4 projection) => projection.M14 == 0 && projection.M24 == 0 && projection.M34 == 0 && projection.M44 == 1;

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

	private ID3D11Texture2D CreateStagingTexture(int width, int height) => _device.CreateTexture2D(new Texture2DDescription
	{
		Width = (uint)width,
		Height = (uint)height,
		MipLevels = 1,
		ArraySize = 1,
		Format = Format.B8G8R8A8_UNorm,
		SampleDescription = new SampleDescription(1, 0),
		Usage = ResourceUsage.Staging,
		BindFlags = BindFlags.None,
		CPUAccessFlags = CpuAccessFlags.Read,
		MiscFlags = ResourceOptionFlags.None,
	});

	private ID3D11Texture2D CreateResolveTexture(int width, int height) => _device.CreateTexture2D(new Texture2DDescription
	{
		Width = (uint)width,
		Height = (uint)height,
		MipLevels = 1,
		ArraySize = 1,
		Format = Format.B8G8R8A8_UNorm,
		SampleDescription = new SampleDescription(1, 0),
		Usage = ResourceUsage.Default,
		BindFlags = BindFlags.None,
		CPUAccessFlags = CpuAccessFlags.None,
		MiscFlags = ResourceOptionFlags.None,
	});

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

	private void RemoveTexture(Direct3D11Texture texture) => _textures.Remove(texture);

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	[StructLayout(LayoutKind.Sequential)]
	private struct SceneConstants
	{
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
		public Vector4 FogFlags;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct LightStateConstants
	{
		public Vector4 MaterialDiffuse;
		public Vector4 MaterialAmbient;
		public Vector4 MaterialSpecular;
		public Vector4 MaterialEmissive;
		public Vector4 MaterialPower;
		public Vector4 LightingFlags;
		public Vector4 MaterialSources;
		public Vector4 VertexBlend;
		public Vector4 GlobalAmbient;
		public Vector4 TextureFactor;
		public Vector4 StageColor0;
		public Vector4 StageColor1;
		public Vector4 StageColor2;
		public Vector4 StageColor3;
		public Vector4 StageAlpha0;
		public Vector4 StageAlpha1;
		public Vector4 StageAlpha2;
		public Vector4 StageAlpha3;
		public Vector4 StageFlags0;
		public Vector4 StageFlags1;
		public Vector4 StageFlags2;
		public Vector4 StageFlags3;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct LightConstant
	{
		public Vector4 Type;
		public Vector4 Diffuse;
		public Vector4 Specular;
		public Vector4 Ambient;
		public Vector4 Position;
		public Vector4 Direction;
		public Vector4 Attenuation;
		public Vector4 Spot;
	}
}
