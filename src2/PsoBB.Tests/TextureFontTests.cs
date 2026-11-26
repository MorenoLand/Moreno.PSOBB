using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Archives;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Platform;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the XVM texture-font metrics, cell placement, atlas binding, clipping and release.
/// </summary>
public sealed class TextureFontTests
{
	[Fact]
	public void MeasureUsesTheDataImageAdvances()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);

		Assert.Equal(30f, surface.Measure("A d"));
		Assert.Equal(26f, surface.Measure("AA"));
		Assert.Equal(13f, surface.Measure("A\nA"));
	}

	[Fact]
	public void DrawPlacesAtlasCellsAndAdvancesByTheMetricWidth()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.Draw(drawList, "A d", new Vector2(10f, 20f), 0xFF00FF00);

		Assert.Equal(2, drawList.Quads.Count);
		UiQuad a = drawList.Quads[0];
		Assert.Equal(new Vector2(10f, 20f), a.Position);
		Assert.Equal(new Vector2(13f, 13f), a.Size);
		Assert.Equal(new Vector4(16f / 256f, 64f / 256f, 29f / 256f, 77f / 256f), a.TextureCoordinates);
		Assert.Equal(0xFF00FF00u, a.Color);
		Assert.Same(font.Pages[0], a.Texture);

		UiQuad d = drawList.Quads[1];
		Assert.Equal(new Vector2(28f, 20f), d.Position);
		Assert.Equal(new Vector2(11f, 13f), d.Size);
		Assert.Equal(new Vector4(64f / 256f, 96f / 256f, 75f / 256f, 109f / 256f), d.TextureCoordinates);
	}

	[Fact]
	public void DrawTruncatesTheAdvanceToTheOriginalByte()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		ITexture page = renderer.CreateTexture(256, 256, new byte[256 * 256 * 4], 256 * 4);
		TextureFontGlyph[] glyphs = new TextureFontGlyph[96];
		glyphs['A' - TextureFontMetrics.FirstCharacter] = new TextureFontGlyph(13.9f, 0f);
		using TextureFont font = new([page], glyphs);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.Draw(drawList, "A", Vector2.Zero, 0xFFFFFFFFu);

		Assert.Equal(13f, Assert.Single(drawList.Quads).Size.X);
		Assert.Equal(29f / 256f, drawList.Quads[0].TextureCoordinates.Z);
		Assert.Equal(13f, surface.Measure("A"));
	}

	[Fact]
	public void DescenderUsesItsVerticalOffset()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.Draw(drawList, "g", Vector2.Zero, 0xFFFFFFFFu);

		UiQuad quad = Assert.Single(drawList.Quads);
		Assert.Equal(new Vector2(0f, 3f), quad.Position);
		Assert.Equal(new Vector4(112f / 256f, 96f / 256f, 122f / 256f, 109f / 256f), quad.TextureCoordinates);
	}

	[Fact]
	public void RemainingWidthShortensTheGlyphWithoutWrapping()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		bool fitted = surface.DrawLine(drawList, "AAA", new Vector2(0f, 0f), 0xFFFFFFFFu, 20f);

		Assert.False(fitted);
		Assert.Equal(2, drawList.Quads.Count);
		Assert.Equal(0f, drawList.Quads[0].Position.X);
		Assert.Equal(13f, drawList.Quads[1].Position.X);
		Assert.Equal(7f, drawList.Quads[1].Size.X);
		Assert.Equal(29f / 256f, drawList.Quads[1].TextureCoordinates.Z);
		Assert.All(drawList.Quads, quad => Assert.Equal(0f, quad.Position.Y));
	}

	[Fact]
	public void AnExactRemainingWidthIsNotAClip()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		Assert.True(surface.DrawLine(drawList, "A", Vector2.Zero, 0xFFFFFFFFu, 13f));
		Assert.Equal(13f, Assert.Single(drawList.Quads).Size.X);
	}

	[Fact]
	public void ZeroRemainingWidthSuppressesNonSpaceGlyphs()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		Assert.False(surface.DrawLine(drawList, "A", Vector2.Zero, 0xFFFFFFFFu, 0f));
		Assert.Empty(drawList.Quads);
	}

	[Fact]
	public void ZeroAdvanceGlyphsSubmitNothing()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.Draw(drawList, "\u007F", Vector2.Zero, 0xFFFFFFFFu);

		Assert.Empty(drawList.Quads);
	}

	[Fact]
	public void VerticalLayoutUsesTheShiftedTextureRow()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.DrawVertical(drawList, "A", Vector2.Zero, 0xFFFFFFFFu);

		UiQuad quad = Assert.Single(drawList.Quads);
		Assert.Equal(173f / 256f, quad.TextureCoordinates.Y);
		Assert.Equal(186f / 256f, quad.TextureCoordinates.W);
	}

	[Fact]
	public void RenderBindsTheAtlasPageAndReleasesIt()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();
		surface.Draw(drawList, "AB", Vector2.Zero, 0x80FF0000);

		drawList.Render(renderer);

		Assert.Equal(2, renderer.Textures.Count);
		Assert.All(renderer.Textures, binding => Assert.Same(font.Pages[0], binding.Texture));
		Assert.Equal(2, renderer.DrawVertices.Count);
		Assert.Equal(0x80FF0000u, BinaryPrimitives.ReadUInt32LittleEndian(renderer.DrawVertices[0].AsSpan(16)));
		Assert.Equal(0, renderer.DisposedTextureCount);

		font.Dispose();
		Assert.True(font.IsDisposed);
		Assert.Equal(1, renderer.DisposedTextureCount);
	}

	[Fact]
	public void AtlasFileSelectionFollowsTheLocaleSwitch()
	{
		Assert.Equal("texturejapanese.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.Japanese));
		Assert.Equal("textureenglish.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.English));
		Assert.Equal("texturegerman.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.German));
		Assert.Equal("texturefrench.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.French));
		Assert.Equal("texturespanish.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.Spanish));
		Assert.Equal("texturechineses.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.ChineseSimplified));
		Assert.Equal("texturechineses.xvm", TextureFontAtlasFile.GetFileName(GameTextLocale.ChineseTraditional));
		Assert.Equal("TextureJapanese.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.Japanese));
		Assert.Equal("TextureEnglish.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.English));
		Assert.Equal("TextureGerman.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.German));
		Assert.Equal("TextureFrench.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.French));
		Assert.Equal("TextureSpanish.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.Spanish));
		Assert.Equal("TextureChineseS.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.ChineseSimplified));
		Assert.Equal("TextureChineseS.gvm", TextureFontAtlasFile.GetOriginalName(GameTextLocale.ChineseTraditional));
		Assert.Equal(0x7F, TextureFontMetrics.LastCharacter);
		Assert.Equal(0f, TextureFontMetrics.GetGlyph('\u007F').Advance);
		Assert.Equal(0f, TextureFontMetrics.GetGlyph('\u007F').Top);
	}

	[Fact]
	public void AtlasLoadsTheShippedGslEntry()
	{
		MemoryFileSystem fileSystem = new();
		SceneSamples.AddFile(fileSystem, "data.gsl", ArchiveSamples.Gsl(("textureenglish.xvm", SyntheticAtlas(1), 0)));
		using DataFileRegistry files = new(fileSystem, DataArchiveSource.Gsl("data.gsl"));
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = TextureFontAtlas.Load(files, renderer, GameTextLocale.English);

		Assert.Single(font.Pages);
		Assert.Equal(256, font.Pages[0].Width);
		Assert.Equal(1, renderer.CreatedTextureCount);
	}

	[Fact]
	public void RetailJapaneseAtlasMatchesTheGlyphLayout()
	{
		string? path = FindDataFile(Path.Combine("bin", "data", "data.gsl"));
		if (path is null)
			return;
		using FileStream stream = File.OpenRead(path);
		byte[] data = new byte[stream.Length];
		stream.ReadExactly(data);
		GslArchive archive = GslArchive.Open(data);
		ArchiveEntry? entry = archive.Find("texturejapanese.xvm");
		Assert.NotNull(entry);
		IReadOnlyList<XvmTexture> pages = XvmArchive.Read(archive.Read(entry).Span);
		Assert.Equal(new[] { 256, 256, 256, 128, 64 }, pages.Select(page => page.Width));
		Assert.All(pages, page => Assert.Equal(XvmTextureFormat.Dxt2, page.Format));
		ReadOnlySpan<byte> pixels = pages[0].Image.Pixels.Span;
		Assert.NotEqual(0, pixels[((64 + 4) * 256 + 16 + 4) * 4 + 3]);
		Assert.Equal(0, pixels[((32 + 4) * 256 + 4) * 4 + 3]);
	}

	private static TextureFont CreateFont(RecordingRenderer renderer)
	{
		byte[] pixels = new byte[256 * 256 * 4];
		ITexture page = renderer.CreateTexture(256, 256, pixels, 256 * 4);
		return new TextureFont([page], TextureFontMetrics.Default);
	}

	private static byte[] SyntheticAtlas(int pageCount)
	{
		byte[][] chunks = new byte[pageCount][];
		chunks[0] = TextureTestData.Xvr((XvmTextureFormat)11, 1, 256, 256, new byte[256 * 256 * 4]);
		for (int index = 1; index < pageCount; index++)
			chunks[index] = TextureTestData.Xvr((XvmTextureFormat)11, (uint)(index + 1), 64, 64, new byte[64 * 64 * 4]);
		return TextureTestData.Xvm(chunks);
	}

	private static string? FindDataFile(string relativePath)
	{
		for (DirectoryInfo? directory = new(AppContext.BaseDirectory); directory is not null; directory = directory.Parent)
		{
			string candidate = Path.Combine(directory.FullName, relativePath);
			if (File.Exists(candidate))
				return candidate;
		}
		return null;
	}
}
