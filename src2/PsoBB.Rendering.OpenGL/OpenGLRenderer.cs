using System.Numerics;
using PsoBB.Graphics;
using Silk.NET.OpenGL;
using GlPrimitiveType = Silk.NET.OpenGL.PrimitiveType;
using GraphicsPrimitiveType = PsoBB.Graphics.PrimitiveType;

namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// An OpenGL 3.3 implementation of the client renderer.
/// </summary>
/// <remarks>Transforms arrive row-major and are uploaded without transposition; the vertex shaders multiply matrix by vector, which matches the Direct3D row-vector convention.</remarks>
public sealed unsafe class OpenGLRenderer : IRenderer
{
	private const int TextureStageCount = 8;
	private readonly OpenGLContext _context;
	private readonly GL _gl;
	private readonly ShaderPipeline _shaders;
	private readonly RenderStateValues _states = new();
	private readonly uint _vertexArray;
	private readonly uint _vertexBuffer;
	private readonly uint _indexBuffer;
	private readonly uint _backbufferFramebuffer;
	private readonly uint _backbufferColor;
	private readonly uint _backbufferDepthStencil;
	private readonly uint _multisampleFramebuffer;
	private readonly uint _multisampleColor;
	private readonly uint _multisampleDepthStencil;
	private readonly uint _renderFramebuffer;
	private readonly uint _whiteTexture;
	private readonly OpenGLTexture?[] _textures = new OpenGLTexture?[TextureStageCount];
	private readonly Matrix4x4[] _textureTransforms = [Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity, Matrix4x4.Identity];
	private Matrix4x4 _world = Matrix4x4.Identity;
	private Matrix4x4 _view = Matrix4x4.Identity;
	private Matrix4x4 _projection = Matrix4x4.Identity;
	private bool _pipelineDirty = true;
	private bool _disposed;

	/// <summary>
	/// Creates the context, backbuffer, depth buffer and render targets for an SDL window.
	/// </summary>
	/// <remarks>The window must have been created with SDL's OpenGL window flag and the video subsystem initialised.</remarks>
	/// <param name="windowHandle">The <c>SDL_Window</c> pointer the renderer presents into.</param>
	/// <param name="settings">The requested resolution, presentation and multisampling.</param>
	/// <exception cref="OpenGLUnavailableException">No OpenGL 3.3 context could be created.</exception>
	public OpenGLRenderer(nint windowHandle, RenderSettings settings) : this(0, windowHandle, settings, true)
	{
	}

	/// <summary>
	/// Creates the context, backbuffer, depth buffer and render targets for an X11 window.
	/// </summary>
	/// <remarks>The window visual must match a GLX framebuffer configuration; when no display is supplied, the default display is opened.</remarks>
	/// <param name="displayHandle">The X11 <c>Display</c> pointer, or zero to open the default display.</param>
	/// <param name="windowHandle">The X11 window identifier.</param>
	/// <param name="settings">The requested resolution, presentation and multisampling.</param>
	/// <exception cref="OpenGLUnavailableException">No OpenGL 3.3 context could be created.</exception>
	public OpenGLRenderer(nint displayHandle, nint windowHandle, RenderSettings settings) : this(displayHandle, windowHandle, settings, false)
	{
	}

	private OpenGLRenderer(nint displayHandle, nint windowHandle, RenderSettings settings, bool sdlWindow)
	{
		if (windowHandle == 0)
			throw new ArgumentException("A window handle is required.", nameof(windowHandle));
		OpenGLContext context;
		try
		{
			context = sdlWindow ? OpenGLContext.CreateSdl(windowHandle, settings.VSync) : OpenGLContext.CreateX11(displayHandle, windowHandle, settings.VSync);
		}
		catch (OpenGLUnavailableException)
		{
			throw;
		}
		catch (Exception exception) when (exception is FileNotFoundException or DllNotFoundException or EntryPointNotFoundException or TypeInitializationException or BadImageFormatException or PlatformNotSupportedException)
		{
			throw new OpenGLUnavailableException($"The OpenGL runtime could not be loaded: {exception.Message}");
		}
		_context = context;
		_gl = context.Gl;
		try
		{
			RequireVersion();
			_gl.Disable(EnableCap.Dither);
			_gl.Disable(EnableCap.FramebufferSrgb);
			_gl.PixelStore(PixelStoreParameter.UnpackAlignment, 1);
			int sampleCount = 0;
			uint selectedMultisampleFramebuffer = 0;
			uint selectedMultisampleColor = 0;
			uint selectedMultisampleDepthStencil = 0;
			int maximumSamples = _gl.GetInteger((GetPName)GLEnum.MaxSamples);
			for (int samples = settings.MultisampleCount; samples >= 2; samples >>= 1)
			{
				if (samples > maximumSamples)
					continue;
				if (TryCreateMultisampleTarget(samples, settings.Width, settings.Height, out uint multisampleFramebuffer, out uint multisampleColor, out uint multisampleDepthStencil))
				{
					sampleCount = samples;
					selectedMultisampleFramebuffer = multisampleFramebuffer;
					selectedMultisampleColor = multisampleColor;
					selectedMultisampleDepthStencil = multisampleDepthStencil;
					break;
				}
			}
			CreateBackbuffer(settings.Width, settings.Height, out uint backbufferFramebuffer, out uint backbufferColor, out uint backbufferDepthStencil);
			_backbufferFramebuffer = backbufferFramebuffer;
			_backbufferColor = backbufferColor;
			_backbufferDepthStencil = backbufferDepthStencil;
			_multisampleFramebuffer = selectedMultisampleFramebuffer;
			_multisampleColor = selectedMultisampleColor;
			_multisampleDepthStencil = selectedMultisampleDepthStencil;
			_renderFramebuffer = _multisampleFramebuffer != 0 ? _multisampleFramebuffer : _backbufferFramebuffer;
			if (sampleCount > 0)
				_gl.Enable(EnableCap.Multisample);
			_vertexArray = _gl.GenVertexArray();
			_vertexBuffer = _gl.GenBuffer();
			_indexBuffer = _gl.GenBuffer();
			_whiteTexture = CreateWhiteTexture();
			_shaders = new ShaderPipeline(_gl);
			_gl.BindFramebuffer(FramebufferTarget.Framebuffer, 0);
			Settings = new RenderSettings(settings.Width, settings.Height, settings.Windowed, sampleCount, settings.VSync);
		}
		catch
		{
			_context.Dispose();
			throw;
		}
	}

	/// <inheritdoc/>
	public RenderSettings Settings { get; }

	/// <inheritdoc/>
	public void BeginFrame()
	{
		ThrowIfDisposed();
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, _renderFramebuffer);
		_gl.DepthMask(true);
		_gl.StencilMask(uint.MaxValue);
		_gl.Disable(EnableCap.ScissorTest);
		_gl.ClearDepth(1.0);
		_gl.ClearStencil(0);
		_gl.Clear(ClearBufferMask.DepthBufferBit | ClearBufferMask.StencilBufferBit);
		_pipelineDirty = true;
		SetViewport(0, 0, Settings.Width, Settings.Height);
	}

	/// <inheritdoc/>
	public void SetViewport(int x, int y, int width, int height)
	{
		ThrowIfDisposed();
		ArgumentOutOfRangeException.ThrowIfNegative(width);
		ArgumentOutOfRangeException.ThrowIfNegative(height);
		_gl.Viewport(x, Settings.Height - y - height, (uint)width, (uint)height);
		_gl.Scissor(x, Settings.Height - y - height, (uint)width, (uint)height);
	}

	/// <inheritdoc/>
	public void Clear(uint color)
	{
		ThrowIfDisposed();
		float alpha = (color >> 24) & 0xFF;
		float red = (color >> 16) & 0xFF;
		float green = (color >> 8) & 0xFF;
		float blue = color & 0xFF;
		_gl.Disable(EnableCap.ScissorTest);
		_gl.ClearColor(red / 255.0f, green / 255.0f, blue / 255.0f, alpha / 255.0f);
		_gl.Clear(ClearBufferMask.ColorBufferBit);
		_pipelineDirty = true;
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
	}

	/// <inheritdoc/>
	public void SetRenderState(uint state, uint value)
	{
		ThrowIfDisposed();
		_states.Set(state, value);
		_pipelineDirty = true;
	}

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture)
	{
		ThrowIfDisposed();
		if (stage is < 0 or >= TextureStageCount)
			throw new ArgumentOutOfRangeException(nameof(stage), stage, $"Texture stages run from zero to {TextureStageCount - 1}.");
		_textures[stage] = texture switch
		{
			null => null,
			OpenGLTexture openGLTexture => openGLTexture,
			_ => throw new ArgumentException("The texture was not created by this renderer.", nameof(texture)),
		};
	}

	/// <inheritdoc/>
	public void Draw(GraphicsPrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat)
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
		VertexPipeline pipeline = _shaders.Get(vertexFormat, format);
		ApplyPipelineState();
		UploadVertices(vertices[..requiredBytes]);
		_gl.UseProgram(pipeline.Program);
		UpdateConstants(pipeline);
		BindVertexLayout(pipeline, stride);
		BindTextures();
		if (primitive == GraphicsPrimitiveType.TriangleFan)
		{
			UploadFanIndices(primitiveCount);
			_gl.DrawElements(GlPrimitiveType.Triangles, (uint)(primitiveCount * 3), DrawElementsType.UnsignedInt, null);
			return;
		}
		_gl.DrawArrays(ToPrimitive(primitive), 0, (uint)vertexCount);
	}

	/// <inheritdoc/>
	public void EndFrame()
	{
		ThrowIfDisposed();
		int width = Settings.Width;
		int height = Settings.Height;
		if (_multisampleFramebuffer != 0)
		{
			_gl.BindFramebuffer(FramebufferTarget.ReadFramebuffer, _multisampleFramebuffer);
			_gl.BindFramebuffer(FramebufferTarget.DrawFramebuffer, _backbufferFramebuffer);
			_gl.BlitFramebuffer(0, 0, width, height, 0, 0, width, height, ClearBufferMask.ColorBufferBit, BlitFramebufferFilter.Nearest);
		}
		(int drawableWidth, int drawableHeight) = _context.GetDrawableSize();
		if (drawableWidth <= 0 || drawableHeight <= 0)
		{
			drawableWidth = width;
			drawableHeight = height;
		}
		_gl.Disable(EnableCap.ScissorTest);
		_gl.BindFramebuffer(FramebufferTarget.ReadFramebuffer, _backbufferFramebuffer);
		_gl.BindFramebuffer(FramebufferTarget.DrawFramebuffer, 0);
		_gl.BlitFramebuffer(0, 0, width, height, 0, 0, drawableWidth, drawableHeight, ClearBufferMask.ColorBufferBit, BlitFramebufferFilter.Nearest);
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, _renderFramebuffer);
		_pipelineDirty = true;
		_context.SwapBuffers();
	}

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		ThrowIfDisposed();
		return new OpenGLTexture(_gl, width, height, pixels, stride);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_shaders.Dispose();
		_gl.DeleteTexture(_whiteTexture);
		_gl.DeleteBuffer(_indexBuffer);
		_gl.DeleteBuffer(_vertexBuffer);
		_gl.DeleteVertexArray(_vertexArray);
		_gl.DeleteFramebuffer(_backbufferFramebuffer);
		_gl.DeleteRenderbuffer(_backbufferDepthStencil);
		_gl.DeleteTexture(_backbufferColor);
		if (_multisampleFramebuffer != 0)
		{
			_gl.DeleteFramebuffer(_multisampleFramebuffer);
			_gl.DeleteRenderbuffer(_multisampleDepthStencil);
			_gl.DeleteRenderbuffer(_multisampleColor);
		}
		_context.Dispose();
	}

	/// <summary>
	/// Reads one pixel from the single-sample backbuffer, for the smoke test.
	/// </summary>
	/// <param name="x">Pixel column.</param>
	/// <param name="y">Pixel row, with zero at the bottom.</param>
	/// <returns>The pixel in 0xAARRGGBB form.</returns>
	internal uint ReadBackbufferPixel(int x, int y)
	{
		ThrowIfDisposed();
		uint pixel = 0;
		_gl.BindFramebuffer(FramebufferTarget.ReadFramebuffer, _backbufferFramebuffer);
		_gl.ReadPixels(x, y, 1, 1, PixelFormat.Bgra, PixelType.UnsignedByte, &pixel);
		_gl.BindFramebuffer(FramebufferTarget.ReadFramebuffer, 0);
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, _renderFramebuffer);
		return pixel;
	}

	private static int GetVertexCount(GraphicsPrimitiveType primitive, int primitiveCount) => primitive switch
	{
		GraphicsPrimitiveType.PointList => primitiveCount,
		GraphicsPrimitiveType.LineList => primitiveCount * 2,
		GraphicsPrimitiveType.LineStrip => primitiveCount + 1,
		GraphicsPrimitiveType.TriangleList => primitiveCount * 3,
		GraphicsPrimitiveType.TriangleStrip => primitiveCount + 2,
		GraphicsPrimitiveType.TriangleFan => primitiveCount + 2,
		_ => throw new ArgumentOutOfRangeException(nameof(primitive), primitive, "Unknown primitive type."),
	};

	private static GlPrimitiveType ToPrimitive(GraphicsPrimitiveType primitive) => primitive switch
	{
		GraphicsPrimitiveType.PointList => GlPrimitiveType.Points,
		GraphicsPrimitiveType.LineList => GlPrimitiveType.Lines,
		GraphicsPrimitiveType.LineStrip => GlPrimitiveType.LineStrip,
		GraphicsPrimitiveType.TriangleList => GlPrimitiveType.Triangles,
		GraphicsPrimitiveType.TriangleStrip => GlPrimitiveType.TriangleStrip,
		_ => throw new ArgumentOutOfRangeException(nameof(primitive), primitive, "The primitive type has no OpenGL topology."),
	};

	private void RequireVersion()
	{
		int major = _gl.GetInteger(GetPName.MajorVersion);
		int minor = _gl.GetInteger(GetPName.MinorVersion);
		if (major < 3 || (major == 3 && minor < 3))
			throw new OpenGLUnavailableException($"The OpenGL context reports version {_gl.GetStringS(StringName.Version)}; version 3.3 or later is required.");
	}

	private bool TryCreateMultisampleTarget(int samples, int width, int height, out uint framebuffer, out uint color, out uint depthStencil)
	{
		framebuffer = _gl.GenFramebuffer();
		color = _gl.GenRenderbuffer();
		depthStencil = _gl.GenRenderbuffer();
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, framebuffer);
		_gl.BindRenderbuffer(RenderbufferTarget.Renderbuffer, color);
		_gl.RenderbufferStorageMultisample(RenderbufferTarget.Renderbuffer, (uint)samples, InternalFormat.Rgba8, (uint)width, (uint)height);
		_gl.FramebufferRenderbuffer(FramebufferTarget.Framebuffer, FramebufferAttachment.ColorAttachment0, RenderbufferTarget.Renderbuffer, color);
		_gl.BindRenderbuffer(RenderbufferTarget.Renderbuffer, depthStencil);
		_gl.RenderbufferStorageMultisample(RenderbufferTarget.Renderbuffer, (uint)samples, InternalFormat.Depth24Stencil8, (uint)width, (uint)height);
		_gl.FramebufferRenderbuffer(FramebufferTarget.Framebuffer, FramebufferAttachment.DepthStencilAttachment, RenderbufferTarget.Renderbuffer, depthStencil);
		bool complete = _gl.CheckFramebufferStatus(FramebufferTarget.Framebuffer) == GLEnum.FramebufferComplete;
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, 0);
		if (complete)
			return true;
		_gl.DeleteFramebuffer(framebuffer);
		_gl.DeleteRenderbuffer(depthStencil);
		_gl.DeleteRenderbuffer(color);
		framebuffer = 0;
		color = 0;
		depthStencil = 0;
		return false;
	}

	private void CreateBackbuffer(int width, int height, out uint framebuffer, out uint color, out uint depthStencil)
	{
		color = _gl.GenTexture();
		_gl.BindTexture(TextureTarget.Texture2D, color);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMinFilter, (int)TextureMinFilter.Nearest);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMagFilter, (int)TextureMagFilter.Nearest);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapS, (int)TextureWrapMode.ClampToEdge);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapT, (int)TextureWrapMode.ClampToEdge);
		_gl.TexImage2D(TextureTarget.Texture2D, 0, InternalFormat.Rgba8, (uint)width, (uint)height, 0, PixelFormat.Bgra, PixelType.UnsignedByte, null);
		framebuffer = _gl.GenFramebuffer();
		_gl.BindFramebuffer(FramebufferTarget.Framebuffer, framebuffer);
		_gl.FramebufferTexture2D(FramebufferTarget.Framebuffer, FramebufferAttachment.ColorAttachment0, TextureTarget.Texture2D, color, 0);
		depthStencil = _gl.GenRenderbuffer();
		_gl.BindRenderbuffer(RenderbufferTarget.Renderbuffer, depthStencil);
		_gl.RenderbufferStorage(RenderbufferTarget.Renderbuffer, InternalFormat.Depth24Stencil8, (uint)width, (uint)height);
		_gl.FramebufferRenderbuffer(FramebufferTarget.Framebuffer, FramebufferAttachment.DepthStencilAttachment, RenderbufferTarget.Renderbuffer, depthStencil);
		if (_gl.CheckFramebufferStatus(FramebufferTarget.Framebuffer) != GLEnum.FramebufferComplete)
			throw new InvalidOperationException($"The OpenGL backbuffer framebuffer could not be created at {width}x{height}.");
	}

	private uint CreateWhiteTexture()
	{
		uint texture = _gl.GenTexture();
		_gl.BindTexture(TextureTarget.Texture2D, texture);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMinFilter, (int)TextureMinFilter.Linear);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMagFilter, (int)TextureMagFilter.Linear);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapS, (int)TextureWrapMode.Repeat);
		_gl.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureWrapT, (int)TextureWrapMode.Repeat);
		byte[] white = [255, 255, 255, 255];
		unsafe
		{
			fixed (byte* pointer = white)
				_gl.TexImage2D(TextureTarget.Texture2D, 0, InternalFormat.Rgba8, 1, 1, 0, PixelFormat.Bgra, PixelType.UnsignedByte, pointer);
		}
		return texture;
	}

	private void ApplyPipelineState()
	{
		if (!_pipelineDirty)
			return;
		_pipelineDirty = false;
		if (_states.BlendEnabled)
		{
			_gl.Enable(EnableCap.Blend);
			_gl.BlendFuncSeparate(
				_states.SourceBlend,
				_states.DestinationBlend,
				_states.SeparateAlphaBlendEnabled ? _states.SourceBlendAlpha : _states.SourceBlend,
				_states.SeparateAlphaBlendEnabled ? _states.DestinationBlendAlpha : _states.DestinationBlend);
			_gl.BlendEquationSeparate(_states.BlendOperation, _states.SeparateAlphaBlendEnabled ? _states.BlendOperationAlpha : _states.BlendOperation);
			_gl.BlendColor(1, 1, 1, 1);
		}
		else
		{
			_gl.Disable(EnableCap.Blend);
		}
		if (_states.DepthEnabled)
		{
			_gl.Enable(EnableCap.DepthTest);
			_gl.DepthFunc(_states.DepthFunction);
		}
		else
		{
			_gl.Disable(EnableCap.DepthTest);
		}
		_gl.DepthMask(_states.DepthEnabled && _states.DepthWriteEnabled);
		if (_states.StencilEnabled)
		{
			_gl.Enable(EnableCap.StencilTest);
			_gl.StencilFunc(_states.StencilFunction, _states.StencilReference, _states.StencilReadMask);
			_gl.StencilMask(_states.StencilWriteMask);
			_gl.StencilOp(_states.StencilFail, _states.StencilDepthFail, _states.StencilPass);
		}
		else
		{
			_gl.Disable(EnableCap.StencilTest);
			_gl.StencilMask(_states.StencilWriteMask);
		}
		if (_states.CullMode == RenderStateId.CullNone)
		{
			_gl.Disable(EnableCap.CullFace);
		}
		else
		{
			_gl.Enable(EnableCap.CullFace);
			_gl.CullFace(_states.CullMode == RenderStateId.CullClockwise ? TriangleFace.Front : TriangleFace.Back);
		}
		_gl.FrontFace(FrontFaceDirection.Ccw);
		_gl.PolygonMode(TriangleFace.FrontAndBack, _states.Wireframe ? PolygonMode.Line : PolygonMode.Fill);
		if (_states.ScissorEnabled)
			_gl.Enable(EnableCap.ScissorTest);
		else
			_gl.Disable(EnableCap.ScissorTest);
		uint colorMask = _states.ColorWriteMask;
		_gl.ColorMask((colorMask & 1) != 0, (colorMask & 2) != 0, (colorMask & 4) != 0, (colorMask & 8) != 0);
	}

	private void UpdateConstants(VertexPipeline pipeline)
	{
		uint fogColor = _states.Get(RenderStateId.FogColor, 0);
		_gl.Uniform4(pipeline.FogColor, ((fogColor >> 16) & 0xFF) / 255.0f, ((fogColor >> 8) & 0xFF) / 255.0f, (fogColor & 0xFF) / 255.0f, 1);
		_gl.Uniform4(
			pipeline.FogParameters,
			BitConverter.Int32BitsToSingle(unchecked((int)_states.Get(RenderStateId.FogStart, 0))),
			BitConverter.Int32BitsToSingle(unchecked((int)_states.Get(RenderStateId.FogEnd, 0x3F800000))),
			BitConverter.Int32BitsToSingle(unchecked((int)_states.Get(RenderStateId.FogDensity, 0x3F800000))),
			_states.GetFogMode());
		_gl.Uniform4(pipeline.AlphaTest, _states.GetAlphaReference(), _states.GetAlphaFunction(), _states.IsAlphaTestEnabled() ? 1 : 0, 0);
		_gl.Uniform4(pipeline.ScreenSize, Settings.Width, Settings.Height, 1.0f / Settings.Width, 1.0f / Settings.Height);
		_gl.Uniform4(pipeline.FogRange, _states.Get(RenderStateId.RangeFogEnable, 0) != 0 ? 1 : 0, 0, 0, 0);
		UploadMatrix(pipeline.World, _world);
		UploadMatrix(pipeline.View, _view);
		UploadMatrix(pipeline.Projection, _projection);
		UploadMatrix(pipeline.TextureTransform0, _textureTransforms[0]);
		_gl.Uniform1(pipeline.DiffuseTexture, 0);
	}

	private void UploadMatrix(int location, in Matrix4x4 matrix)
	{
		Matrix4x4 value = matrix;
		unsafe
		{
			_gl.UniformMatrix4(location, 1, false, &value.M11);
		}
	}

	private void UploadVertices(ReadOnlySpan<byte> vertices)
	{
		_gl.BindBuffer(BufferTargetARB.ArrayBuffer, _vertexBuffer);
		unsafe
		{
			fixed (byte* pointer = vertices)
				_gl.BufferData(BufferTargetARB.ArrayBuffer, (nuint)vertices.Length, pointer, BufferUsageARB.StreamDraw);
		}
	}

	private void UploadFanIndices(int primitiveCount)
	{
		int indexCount = primitiveCount * 3;
		uint[] indices = new uint[indexCount];
		for (int index = 0; index < primitiveCount; index++)
		{
			indices[index * 3] = 0;
			indices[index * 3 + 1] = (uint)(index + 1);
			indices[index * 3 + 2] = (uint)(index + 2);
		}
		_gl.BindBuffer(BufferTargetARB.ElementArrayBuffer, _indexBuffer);
		unsafe
		{
			fixed (uint* pointer = indices)
				_gl.BufferData(BufferTargetARB.ElementArrayBuffer, (nuint)(indexCount * sizeof(uint)), pointer, BufferUsageARB.StreamDraw);
		}
	}

	private void BindVertexLayout(VertexPipeline pipeline, int stride)
	{
		_gl.BindVertexArray(_vertexArray);
		_gl.BindBuffer(BufferTargetARB.ArrayBuffer, _vertexBuffer);
		for (uint location = 0; location < 8; location++)
			_gl.DisableVertexAttribArray(location);
		foreach (VertexAttribute attribute in pipeline.Attributes)
		{
			_gl.EnableVertexAttribArray(attribute.Location);
			_gl.VertexAttribPointer(attribute.Location, attribute.ComponentCount, attribute.Type, attribute.Normalized, (uint)stride, (void*)(nint)attribute.Offset);
		}
	}

	private void BindTextures()
	{
		for (int stage = 0; stage < TextureStageCount; stage++)
		{
			_gl.ActiveTexture((TextureUnit)((int)TextureUnit.Texture0 + stage));
			_gl.BindTexture(TextureTarget.Texture2D, _textures[stage]?.Handle ?? (stage == 0 ? _whiteTexture : 0));
		}
		_gl.ActiveTexture(TextureUnit.Texture0);
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
