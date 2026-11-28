using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the bitmap font atlas, character measurement, wrapping, alignment, colour prefixes,
/// missing glyphs and the quads submitted to the interface draw list.
/// </summary>
public sealed class FontTextTests
{
	private static readonly FontDescriptor Descriptor = new(400, 0, 0, 0, 0, 0, "Synthetic");

	[Fact]
	public void GlyphLookupReturnsTheAddedCellAndTheTransparentFallback()
	{
		BitmapFont font = CreateFont();

		FontGlyph a = font.GetGlyph('A');
		FontGlyph missing = font.GetGlyph('Z');

		Assert.Equal(8, a.Advance);
		Assert.Equal(8, a.Width);
		Assert.Equal(0, a.Page);
		Assert.Equal(0, a.X);
		Assert.Equal(0, a.Y);
		Assert.Equal(font.FallbackGlyph, missing);
		Assert.Equal(7, missing.Width);
		Assert.Equal(0, font.Pages[2].Pixels.Span[((240 * 256) + 240) * 4 + 3]);
	}

	[Fact]
	public void AtlasPacksThreePagesOnTheSixteenPixelGrid()
	{
		BitmapFontBuilder builder = new(Descriptor);
		byte[] coverage = Coverage(0xFF);
		for (int index = 0; index < 300; index++)
			builder.AddGlyph((char)(0x100 + index), coverage, 8);
		BitmapFont font = builder.Build();

		FontGlyph first = font.Glyphs[(ushort)0x100];
		FontGlyph pageEdge = font.Glyphs[(ushort)(0x100 + 256)];
		FontGlyph secondCell = font.Glyphs[(ushort)(0x100 + 257)];

		Assert.Equal(0, first.Page);
		Assert.Equal(0, first.X);
		Assert.Equal(0, first.Y);
		Assert.Equal(1, pageEdge.Page);
		Assert.Equal(0, pageEdge.X);
		Assert.Equal(0, pageEdge.Y);
		Assert.Equal(1, secondCell.Page);
		Assert.Equal(16, secondCell.X);
		Assert.Equal(0, secondCell.Y);
	}

	[Fact]
	public void AtlasQuantisesCoverageToTheFourOriginalAlphaLevels()
	{
		BitmapFontBuilder builder = new(Descriptor);
		byte[] coverage = new byte[196];
		coverage[0] = 0;
		coverage[1] = 85;
		coverage[2] = 86;
		coverage[3] = 170;
		coverage[4] = 171;
		coverage[5] = 255;
		builder.AddGlyph('A', coverage, 8);
		BitmapFont font = builder.Build();
		ReadOnlySpan<byte> pixels = font.Pages[0].Pixels.Span;

		Assert.Equal((byte)0, pixels[3]);
		Assert.Equal((byte)0x55, pixels[7]);
		Assert.Equal((byte)0xAA, pixels[11]);
		Assert.Equal((byte)0xAA, pixels[15]);
		Assert.Equal((byte)0xFF, pixels[19]);
		Assert.Equal((byte)0xFF, pixels[23]);
	}

	[Fact]
	public void EmptyFaceNameBuildsTheDefaultFaceFont()
	{
		BitmapFontBuilder builder = new(new FontDescriptor(600, 0, 7, 0, 4, 2, string.Empty));
		builder.AddGlyph('A', Coverage(0xFF), 8);
		BitmapFont font = builder.Build();

		Assert.Equal(string.Empty, font.Descriptor.FaceName);
		Assert.Equal(8, font.GetAdvance('A'));
		Assert.Equal(8, font.GetGlyph('A').Width);
	}

	[Fact]
	public void MeasurementCapsEachGlyphAtFourteenPixels()
	{
		BitmapFont font = CreateFont();
		TextMetrics metrics = new(font);

		Assert.Equal(16, metrics.MeasureExtent("AB"));
		Assert.Equal(14, metrics.MeasureExtent("W"));
		Assert.Equal(0, metrics.MeasureExtent(""));
		Assert.Equal(20, metrics.MeasureWindowWidth("W"));
	}

	[Fact]
	public void WindowWidthUsesPaddingAndTheConfiguredMinimum()
	{
		BitmapFontBuilder builder = new(Descriptor) { WindowWidthPadding = 5f, MinimumWindowWidth = 100f };
		builder.AddGlyph('A', Coverage(0xFF), 8);
		BitmapFont font = builder.Build();
		TextMetrics metrics = new(font);

		Assert.Equal(100, metrics.MeasureWindowWidth("A"));
		Assert.Equal(8, metrics.MeasureExtent("A"));
	}

	[Fact]
	public void MeasurementSkipsLocaleAndColourCommands()
	{
		TextMetrics metrics = new(CreateFont());

		Assert.Equal(16, metrics.MeasureExtent("\tJAB"));
		Assert.Equal(16, metrics.MeasureExtent("\tC1AB"));
		Assert.Equal(16, metrics.MeasureExtent("\tEAB"));
		Assert.Equal(16, metrics.MeasureWindowWidth("\tC1AB"));
	}

	[Fact]
	public void EncodedMeasurementCombinesShiftJisPairCharacters()
	{
		TextMetrics metrics = new(CreateFont());

		Assert.Equal(12, metrics.MeasureEncodedExtent("\u0082\u00A0"));
		Assert.Equal(23, metrics.MeasureEncodedExtent("A B"));
		Assert.Equal(8, metrics.MeasureEncodedExtent("A\n"));
	}

	[Fact]
	public void NextWordFitsReportsTheLineOverflow()
	{
		TextMetrics metrics = new(CreateFont());

		Assert.True(metrics.NextWordFits("AB CD", 0, 0, 16));
		Assert.False(metrics.NextWordFits("AB CD", 0, 10, 16));
		Assert.True(metrics.NextWordFits("AB CD", 2, 10, 16));
	}

	[Fact]
	public void LayoutWrapsBeforeAWordThatDoesNotFit()
	{
		TextLayout layout = TextLayout.Create(CreateFont(), "AB CD", new TextLayoutOptions(MaxWidth: 25f));

		Assert.Equal(2, layout.Lines.Count);
		Assert.Equal(23f, layout.Lines[0].Width);
		Assert.Equal(16f, layout.Lines[1].Width);
		Assert.Equal(new Vector2(0f, 20f), layout.Glyphs[2].Position);
		Assert.Equal(new Vector2(8f, 20f), layout.Glyphs[3].Position);
	}

	[Fact]
	public void LayoutWrapsALongWordInTheMiddle()
	{
		TextLayout layout = TextLayout.Create(CreateFont(), "ABC", new TextLayoutOptions(MaxWidth: 20f));

		Assert.Equal(2, layout.Lines.Count);
		Assert.Equal(16f, layout.Lines[0].Width);
		Assert.Equal(8f, layout.Lines[1].Width);
		Assert.Equal(new Vector2(0f, 20f), layout.Glyphs[2].Position);
	}

	[Fact]
	public void LayoutHonoursExplicitNewlines()
	{
		TextLayout layout = TextLayout.Create(CreateFont(), "A\nB");

		Assert.Equal(2, layout.Lines.Count);
		Assert.Equal(new Vector2(0f, 0f), layout.Glyphs[0].Position);
		Assert.Equal(new Vector2(0f, 20f), layout.Glyphs[1].Position);
		Assert.Equal(40f, layout.Height);
	}

	[Theory]
	[InlineData(TextAlignment.Left, 0f)]
	[InlineData(TextAlignment.Center, 12f)]
	[InlineData(TextAlignment.Right, 24f)]
	public void LayoutAlignsEachLineInsideTheLayoutWidth(TextAlignment alignment, float expected)
	{
		TextLayout layout = TextLayout.Create(
			CreateFont(),
			"AB",
			new TextLayoutOptions(MaxWidth: 40f, Alignment: alignment));

		Assert.Equal(expected, layout.Glyphs[0].Position.X);
		Assert.Equal(expected + 8f, layout.Glyphs[1].Position.X);
	}

	[Fact]
	public void LayoutAppliesTabColourCommandsToFollowingGlyphs()
	{
		uint[] colors = new uint[58];
		colors['1'] = 0xFFFF0000;
		colors['2'] = 0xFF00FF00;
		TextColorTable table = new(colors);
		TextLayout layout = TextLayout.Create(
			CreateFont(),
			"\tC1A\tC2B",
			new TextLayoutOptions(ColorTable: table));

		Assert.Equal(0xFFFF0000u, layout.Glyphs[0].Color);
		Assert.Equal(0xFF00FF00u, layout.Glyphs[1].Color);
	}

	[Fact]
	public void LayoutUsesTheGoldColourForTheGCommand()
	{
		TextLayout layout = TextLayout.Create(CreateFont(), "\tCGA");

		Assert.Equal(TextColorTable.DefaultGold, layout.Glyphs[0].Color);
	}

	[Fact]
	public void PrefixParserSkipsCommandsAndReportsTheJapaneseFlag()
	{
		uint color = 0xFFFFFFFF;
		bool japanese = false;

		int index = TextPrefix.Skip("\tJ\tCGA", 0, ref color, ref japanese, true, null);

		Assert.Equal(5, index);
		Assert.True(japanese);
		Assert.Equal(TextColorTable.DefaultGold, color);
		Assert.Equal(2, TextPrefix.Skip("\tX", 0, ref color, ref japanese, true, null));
	}

	[Fact]
	public void DrawSubmitsOneQuadPerVisibleGlyph()
	{
		BitmapFont font = CreateFont();
		UiDrawList list = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using FontTextures textures = new(font, renderer);
		TextRenderer textRenderer = new(font, textures);

		textRenderer.Draw(list, "AB", new Vector2(10f, 20f), 0xFFFFFFFF);

		Assert.Equal(2, list.Quads.Count);
		Assert.Equal(new Vector2(10f, 20f), list.Quads[0].Position);
		Assert.Equal(new Vector2(8f, 14f), list.Quads[0].Size);
		Assert.Equal(new Vector4(0f, 0f, 8f / 256f, 14f / 256f), list.Quads[0].TextureCoordinates);
		Assert.Equal(256, list.Quads[0].Texture!.Width);
		Assert.Equal(new Vector2(18f, 20f), list.Quads[1].Position);
	}

	[Fact]
	public void DrawAtlasAlignsWithoutAutomaticWordWrapping()
	{
		BitmapFont font = CreateFont();
		UiDrawList list = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using FontTextures textures = new(font, renderer);
		TextRenderer textRenderer = new(font, textures);

		textRenderer.DrawAtlas(list, "AB", new Vector2(0f, 0f), 0xFFFFFFFF, 40f, TextAlignment.Center);

		Assert.Equal(2, list.Quads.Count);
		Assert.Equal(12f, list.Quads[0].Position.X);
	}

	[Fact]
	public void DrawOutlinedSubmitsEightOutlinePassesAndTheMainPass()
	{
		BitmapFont font = CreateFont();
		UiDrawList list = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using FontTextures textures = new(font, renderer);
		TextRenderer textRenderer = new(font, textures);

		textRenderer.DrawOutlined(list, "AB", new Vector2(100f, 10f), 0xFFFFFFFF);

		Assert.Equal(18, list.Quads.Count);
		Assert.Equal(new Vector2(82f, 8f), list.Quads[0].Position);
		Assert.Equal(0xFF000000u, list.Quads[0].Color);
		Assert.Equal(new Vector2(84f, 10f), list.Quads[16].Position);
		Assert.Equal(0xFFFFFFFFu, list.Quads[16].Color);
	}

	[Fact]
	public void DrawSkipsEmptyTextAndDrawsTheMissingGlyphFallback()
	{
		BitmapFont font = CreateFont();
		UiDrawList list = new();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using FontTextures textures = new(font, renderer);
		TextRenderer textRenderer = new(font, textures);

		textRenderer.Draw(list, "", new Vector2(0f, 0f), 0xFFFFFFFF);
		textRenderer.Draw(list, null, new Vector2(0f, 0f), 0xFFFFFFFF);
		textRenderer.Draw(list, "Z", new Vector2(0f, 0f), 0xFFFFFFFF);

		Assert.Single(list.Quads);
		Assert.Equal(7f, list.Quads[0].Size.X);
		Assert.Equal(256, list.Quads[0].Texture!.Width);
	}

	[Fact]
	public void WideCharactersUseTheWideGlyphAndAlphabetType()
	{
		BitmapFont font = CreateFont();
		TextMetrics metrics = new(font);

		Assert.Equal(14, metrics.MeasureExtent("\u3042"));
		Assert.Equal(3, font.GetAlphabetType('\u3042'));
		Assert.Equal(0, font.GetAlphabetType('A'));
		Assert.Equal(20, metrics.MeasureExtent("\uD83D\uDE00"));
	}

	[Fact]
	public void FaceIndexFallsBackToTheSecondFace()
	{
		Assert.Equal(0, FontDescriptor.GetValidFaceIndex(0));
		Assert.Equal(4, FontDescriptor.GetValidFaceIndex(4));
		Assert.Equal(1, FontDescriptor.GetValidFaceIndex(-1));
		Assert.Equal(1, FontDescriptor.GetValidFaceIndex(5));
	}

	[Fact]
	public void FaceTableFallsBackToTheSecondFace()
	{
		FontDescriptor second = new(400, 1, 0, 0, 0, 0, "Second");
		FontFaceTable table = new(
		[
			new FontDescriptor(400, 0, 0, 0, 0, 0, "First"),
			second,
			new FontDescriptor(400, 2, 0, 0, 0, 0, "Third"),
			new FontDescriptor(400, 3, 0, 0, 0, 0, "Fourth"),
			new FontDescriptor(400, 4, 0, 0, 0, 0, "Fifth"),
		]);

		Assert.Same(second.FaceName, table.GetFace(-1).FaceName);
		Assert.Same(second.FaceName, table.GetFace(7).FaceName);
		Assert.Equal(5, table.Count);
	}

	private static BitmapFont CreateFont()
	{
		BitmapFontBuilder builder = new(Descriptor, wideAlphabetType: 3);
		builder.AddGlyph('A', Coverage(0xFF), 8);
		builder.AddGlyph('B', Coverage(0xAA), 8);
		builder.AddGlyph('C', Coverage(0x55), 8);
		builder.AddGlyph('D', Coverage(0x01), 8);
		builder.AddGlyph('W', Coverage(0xFF), 20);
		builder.AddGlyph(' ', Coverage(0), 7);
		builder.AddGlyph('\u3042', Coverage(0xFF), 14);
		builder.AddGlyph('\u82A0', Coverage(0xAA), 12);
		builder.AddGlyph('\uD83D', Coverage(0xFF), 10);
		builder.AddGlyph('\uDE00', Coverage(0xFF), 10);
		return builder.Build();
	}

	private static byte[] Coverage(byte value)
	{
		byte[] coverage = new byte[196];
		coverage.AsSpan().Fill(value);
		return coverage;
	}
}
