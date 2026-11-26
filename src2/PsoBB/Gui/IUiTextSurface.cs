using System.Numerics;

namespace PsoBB.Gui;

/// <summary>
/// Draws interface text into a draw list and reports the width a control needs to reserve.
/// </summary>
public interface IUiTextSurface
{
	/// <summary>
	/// Measures the width the original window-width query returns for a string.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The width in pixels.</returns>
	float Measure(string? text);

	/// <summary>
	/// Draws text at a client-area position.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The initial colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The line width; zero disables wrapping.</param>
	void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f);
}
