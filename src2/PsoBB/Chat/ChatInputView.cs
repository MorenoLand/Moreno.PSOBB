using System.Numerics;
using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Chat;

/// <summary>
/// Draws the chat entry text and its blinking cursor through the merged font renderer.
/// </summary>
/// <remarks>
/// The entry wraps at the character boundary rather than at word boundaries, as the original keyboard window does. The cursor advances over spaces and wraps at the same points as the text layout.
/// </remarks>
public sealed class ChatInputView
{
	private readonly ChatInput _input;
	private readonly TextRenderer _renderer;

	/// <summary>
	/// Creates a view for an entry and a font renderer.
	/// </summary>
	/// <param name="input">The chat entry.</param>
	/// <param name="renderer">The merged font renderer.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public ChatInputView(ChatInput input, TextRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(input);
		ArgumentNullException.ThrowIfNull(renderer);
		_input = input;
		_renderer = renderer;
	}

	/// <summary>Gets or sets the cursor colour in 0xAARRGGBB form.</summary>
	public uint CursorColor { get; set; } = ChatText.DefaultColor;

	/// <summary>Gets or sets the cursor width in pixels.</summary>
	public float CursorWidth { get; set; } = 1f;

	/// <summary>
	/// Draws the entry text and cursor.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph and cursor quads.</param>
	/// <param name="position">The top-left client-area position of the entry.</param>
	/// <param name="width">The wrapping width in pixels; zero draws one line.</param>
	/// <param name="color">The text colour in 0xAARRGGBB form.</param>
	/// <param name="clip">The optional clip rectangle.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	[Original(0x0072FF2C, "unknown_render_chat_input_text")]
	public void Render(UiDrawList drawList, Vector2 position, float width, uint color = ChatText.DefaultColor, Vector4? clip = null)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (!_input.IsOpen)
			return;
		TextLayout layout = TextLayout.Create(
			_renderer.Font,
			_input.Text,
			new TextLayoutOptions(width, TextAlignment.Left, true, color, false, null, BreakAtWords: false));
		_renderer.DrawLayout(drawList, layout, position, clip);
		if (!_input.IsCursorVisible)
			return;
		Vector2 cursor = GetCursorPosition(width);
		UiQuad quad = new(
			position + cursor,
			new Vector2(CursorWidth, BitmapFont.GlyphHeight),
			default,
			null,
			CursorColor);
		drawList.Add(quad.Clip(clip));
	}

	private Vector2 GetCursorPosition(float width)
	{
		float x = 0f;
		float y = 0f;
		ReadOnlySpan<char> text = _input.Text.AsSpan();
		int limit = Math.Min(_input.Cursor, text.Length);
		for (int index = 0; index < limit; index++)
		{
			char value = text[index];
			if (value == '\n')
			{
				x = 0f;
				y += _renderer.Font.LineHeight;
				continue;
			}
			int advance = _renderer.Font.GetAdvance(value);
			if (width > 0f && x > 0f && x + advance > width)
			{
				x = 0f;
				y += _renderer.Font.LineHeight;
			}
			x += advance;
		}
		return new Vector2(x, y);
	}
}
