using PsoBB.Graphics;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// A synthetic font, uploaded atlas and recording renderer for chat drawing tests.
/// </summary>
internal sealed class ChatTestFont : IDisposable
{
	private static readonly FontDescriptor Descriptor = new(400, 0, 0, 0, 0, 0, "Synthetic");

	public ChatTestFont()
	{
		BitmapFontBuilder builder = new(Descriptor);
		builder.AddGlyph('A', Coverage(0xFF), 8);
		builder.AddGlyph('B', Coverage(0xAA), 8);
		builder.AddGlyph('C', Coverage(0x55), 8);
		builder.AddGlyph('D', Coverage(0x01), 8);
		builder.AddGlyph('W', Coverage(0xFF), 20);
		Font = builder.Build();
		Renderer = new RecordingRenderer(RenderSettings.Default);
		Textures = new FontTextures(Font, Renderer);
		TextRenderer = new TextRenderer(Font, Textures);
	}

	public BitmapFont Font { get; }

	public RecordingRenderer Renderer { get; }

	public FontTextures Textures { get; }

	public TextRenderer TextRenderer { get; }

	public void Dispose()
	{
		Textures.Dispose();
		Renderer.Dispose();
	}

	private static byte[] Coverage(byte value)
	{
		byte[] coverage = new byte[196];
		coverage.AsSpan().Fill(value);
		return coverage;
	}
}
