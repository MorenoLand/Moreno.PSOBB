using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Text;

/// <summary>
/// Connects the bitmap-font text renderer to the interface text-surface contract.
/// </summary>
public sealed class TextRendererSurface : IUiTextSurface
{
	private readonly TextRenderer _renderer;

	/// <summary>
	/// Creates a surface over an existing text renderer.
	/// </summary>
	/// <param name="renderer">The renderer that supplies glyphs.</param>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	public TextRendererSurface(TextRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		_renderer = renderer;
	}

	/// <inheritdoc/>
	public float Measure(string? text) => _renderer.Measure(text);

	/// <inheritdoc/>
	public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
		=> _renderer.Draw(drawList, text, position, color, maxWidth);
}
