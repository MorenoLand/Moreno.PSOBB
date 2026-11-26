using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Tests;

/// <summary>
/// A renderer that records the commands it receives, for contract tests without a graphics device.
/// </summary>
internal sealed class RecordingRenderer : IFixedFunctionRenderer, IResizableRenderer
{
	private readonly List<string> _commands = [];
	private readonly List<TextureUpload> _textureUploads = [];
	private int _disposeCount;
	private int _disposedTextureCount;

	/// <summary>
	/// Creates a recording renderer with the given settings.
	/// </summary>
	/// <param name="settings">The settings the renderer reports.</param>
	public RecordingRenderer(RenderSettings settings)
	{
		Settings = settings;
	}

	/// <summary>Gets the commands recorded so far.</summary>
	public IReadOnlyList<string> Commands => _commands;

	/// <summary>Gets the texture uploads recorded so far.</summary>
	public IReadOnlyList<TextureUpload> TextureUploads => _textureUploads;

	/// <summary>Gets the number of texture dispose calls received.</summary>
	public int DisposedTextureCount => _disposedTextureCount;

	/// <summary>Gets the number of times the renderer was disposed.</summary>
	public int DisposeCount => _disposeCount;

	/// <summary>Gets a value indicating whether the renderer was disposed.</summary>
	public bool IsDisposed => _disposeCount != 0;

	/// <inheritdoc/>
	public RenderSettings Settings { get; private set; }

	/// <inheritdoc/>
	public void BeginFrame() => _commands.Add("BeginFrame");

	/// <inheritdoc/>
	public void SetViewport(int x, int y, int width, int height) => _commands.Add($"Viewport {x},{y} {width}x{height}");

	/// <inheritdoc/>
	public void Clear(uint color) => _commands.Add($"Clear {color:X8}");

	/// <inheritdoc/>
	public void SetTransform(TransformKind kind, in Matrix4x4 transform) => _commands.Add($"Transform {kind}");

	/// <inheritdoc/>
	public void SetWorldMatrix(int index, in Matrix4x4 transform) => _commands.Add($"WorldMatrix {index}");

	/// <inheritdoc/>
	public void SetRenderState(uint state, uint value) => _commands.Add($"State {state}:{value}");

	/// <inheritdoc/>
	public void SetMaterial(in Material material) => _commands.Add("Material");

	/// <inheritdoc/>
	public void SetLight(int index, in Light light) => _commands.Add($"Light {index}:{light.Type}");

	/// <inheritdoc/>
	public void SetLightEnabled(int index, bool enabled) => _commands.Add($"LightEnabled {index}:{enabled}");

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture) => _commands.Add($"Texture {stage}:{texture?.Width ?? 0}x{texture?.Height ?? 0}");

	/// <inheritdoc/>
	public void SetTextureStageState(int stage, uint state, uint value) => _commands.Add($"TextureStage {stage}:{state}:{value}");

	/// <inheritdoc/>
	public void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat)
		=> _commands.Add($"Draw {primitive} {primitiveCount} {stride} {vertexFormat:X}");

	/// <inheritdoc/>
	public void EndFrame() => _commands.Add("EndFrame");

	/// <inheritdoc/>
	public void Resize(int width, int height)
	{
		_commands.Add($"Resize {width}x{height}");
		Settings = new RenderSettings(width, height, Settings.Windowed, Settings.MultisampleCount, Settings.VSync);
	}

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
	{
		RecordingTexture texture = new(this, width, height, stride, pixels.ToArray());
		_textureUploads.Add(new TextureUpload(texture));
		return texture;
	}

	/// <inheritdoc/>
	public void Dispose() => _disposeCount++;

	/// <summary>
	/// One recorded texture upload.
	/// </summary>
	internal sealed class TextureUpload
	{
		internal TextureUpload(RecordingTexture texture)
		{
			Texture = texture;
		}

		/// <summary>Gets the uploaded texture handle.</summary>
		public RecordingTexture Texture { get; }

		/// <summary>Gets the texture width in pixels.</summary>
		public int Width => Texture.Width;

		/// <summary>Gets the texture height in pixels.</summary>
		public int Height => Texture.Height;

		/// <summary>Gets the number of bytes per row.</summary>
		public int Stride => Texture.Stride;

		/// <summary>Gets the pixel bytes passed to the renderer.</summary>
		public ReadOnlyMemory<byte> Pixels => Texture.Pixels;
	}

	/// <summary>
	/// A texture handle for the recording renderer.
	/// </summary>
	internal sealed class RecordingTexture : ITexture
	{
		private readonly RecordingRenderer _owner;
		private readonly byte[] _pixels;

		/// <summary>
		/// Creates the texture with its dimensions and uploaded pixels.
		/// </summary>
		/// <param name="owner">The recording renderer.</param>
		/// <param name="width">Texture width.</param>
		/// <param name="height">Texture height.</param>
		/// <param name="stride">The number of bytes per row.</param>
		/// <param name="pixels">The uploaded pixel bytes.</param>
		public RecordingTexture(RecordingRenderer owner, int width, int height, int stride, byte[] pixels)
		{
			_owner = owner;
			Width = width;
			Height = height;
			Stride = stride;
			_pixels = pixels;
		}

		/// <inheritdoc/>
		public int Width { get; }

		/// <inheritdoc/>
		public int Height { get; }

		/// <summary>Gets the number of bytes per row.</summary>
		public int Stride { get; }

		/// <summary>Gets the uploaded pixel bytes.</summary>
		public ReadOnlyMemory<byte> Pixels => _pixels;

		/// <summary>Gets the number of dispose calls received.</summary>
		public int DisposeCount { get; private set; }

		/// <inheritdoc/>
		public void Update(ReadOnlySpan<byte> pixels, int stride)
		{
		}

		/// <inheritdoc/>
		public void Dispose()
		{
			DisposeCount++;
			_owner._disposedTextureCount++;
		}
	}
}
