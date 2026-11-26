using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Tests;

/// <summary>
/// A renderer that records the commands it receives, for contract tests without a graphics device.
/// </summary>
internal sealed class RecordingRenderer : IRenderer
{
	private readonly List<string> _commands = [];
	private int _disposeCount;

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

	/// <summary>Gets the number of times the renderer was disposed.</summary>
	public int DisposeCount => _disposeCount;

	/// <summary>Gets a value indicating whether the renderer was disposed.</summary>
	public bool IsDisposed => _disposeCount != 0;

	/// <inheritdoc/>
	public RenderSettings Settings { get; }

	/// <inheritdoc/>
	public void BeginFrame() => _commands.Add("BeginFrame");

	/// <inheritdoc/>
	public void SetViewport(int x, int y, int width, int height) => _commands.Add($"Viewport {x},{y} {width}x{height}");

	/// <inheritdoc/>
	public void Clear(uint color) => _commands.Add($"Clear {color:X8}");

	/// <inheritdoc/>
	public void SetTransform(TransformKind kind, in Matrix4x4 transform) => _commands.Add($"Transform {kind}");

	/// <inheritdoc/>
	public void SetRenderState(uint state, uint value) => _commands.Add($"State {state}:{value}");

	/// <inheritdoc/>
	public void SetTexture(int stage, ITexture? texture) => _commands.Add($"Texture {stage}:{texture?.Width ?? 0}x{texture?.Height ?? 0}");

	/// <inheritdoc/>
	public void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat)
		=> _commands.Add($"Draw {primitive} {primitiveCount} {stride} {vertexFormat:X}");

	/// <inheritdoc/>
	public void EndFrame() => _commands.Add("EndFrame");

	/// <inheritdoc/>
	public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride) => new RecordingTexture(width, height);

	/// <inheritdoc/>
	public void Dispose() => _disposeCount++;

	/// <summary>
	/// A texture handle for the recording renderer.
	/// </summary>
	private sealed class RecordingTexture : ITexture
	{
		/// <summary>
		/// Creates the texture with its dimensions.
		/// </summary>
		/// <param name="width">Texture width.</param>
		/// <param name="height">Texture height.</param>
		public RecordingTexture(int width, int height)
		{
			Width = width;
			Height = height;
		}

		/// <inheritdoc/>
		public int Width { get; }

		/// <inheritdoc/>
		public int Height { get; }

		/// <inheritdoc/>
		public void Update(ReadOnlySpan<byte> pixels, int stride)
		{
		}

		/// <inheritdoc/>
		public void Dispose()
		{
		}
	}
}
