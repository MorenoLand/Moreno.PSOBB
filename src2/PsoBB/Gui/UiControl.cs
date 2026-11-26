using System.Numerics;

namespace PsoBB.Gui;

/// <summary>
/// Base for the interface controls that render a text label through an optional text surface.
/// </summary>
public abstract class UiControl : UiElement
{
	/// <summary>
	/// Gets or sets the text surface used for labels, item text and button captions.
	/// </summary>
	public IUiTextSurface? TextSurface { get; set; }

	/// <summary>
	/// Gets or sets the offset from the element position to the text origin.
	/// </summary>
	public Vector2 TextOffset { get; set; }

	/// <summary>
	/// Draws text relative to the element position when a text surface is installed.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text to draw.</param>
	/// <param name="color">The text colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The line width; zero disables wrapping.</param>
	protected void DrawText(UiDrawList drawList, string? text, uint color, float maxWidth)
	{
		if (TextSurface is null || string.IsNullOrEmpty(text))
			return;
		TextSurface.Draw(drawList, text, Position + TextOffset, color, maxWidth);
	}

	/// <summary>
	/// Measures text with the installed surface, or returns zero when no surface is installed.
	/// </summary>
	/// <param name="text">The text to measure.</param>
	/// <returns>The width in pixels.</returns>
	protected float MeasureText(string? text) => TextSurface?.Measure(text) ?? 0f;
}
