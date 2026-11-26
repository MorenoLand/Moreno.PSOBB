using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the XVM texture-font metrics, cell placement, atlas binding, wrapping and release.
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
		Assert.Equal(new Vector2(29f, 20f), d.Position);
		Assert.Equal(new Vector2(11f, 13f), d.Size);
		Assert.Equal(new Vector4(64f / 256f, 96f / 256f, 75f / 256f, 109f / 256f), d.TextureCoordinates);
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
	public void WrappingReturnsToTheLeftMarginAtTheNextLine()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();

		surface.Draw(drawList, "AAA", new Vector2(0f, 0f), 0xFFFFFFFFu, 20f);

		Assert.Equal(3, drawList.Quads.Count);
		Assert.Equal(0f, drawList.Quads[0].Position.X);
		Assert.Equal(0f, drawList.Quads[1].Position.X);
		Assert.Equal(20f, drawList.Quads[1].Position.Y);
		Assert.Equal(0f, drawList.Quads[2].Position.X);
		Assert.Equal(40f, drawList.Quads[2].Position.Y);
	}

	[Fact]
	public void RenderBindsTheAtlasPageAndReleasesIt()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		TextureFont font = CreateFont(renderer);
		TextureFontSurface surface = new(font);
		UiDrawList drawList = new();
		surface.Draw(drawList, "AB", Vector2.Zero, 0xFFFFFFFFu);

		drawList.Render(renderer);

		Assert.Equal(2, renderer.Textures.Count);
		Assert.All(renderer.Textures, binding => Assert.Same(font.Pages[0], binding.Texture));
		Assert.Equal(2, renderer.DrawVertices.Count);
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
	}

	private static TextureFont CreateFont(RecordingRenderer renderer)
	{
		byte[] pixels = new byte[256 * 256 * 4];
		ITexture page = renderer.CreateTexture(256, 256, pixels, 256 * 4);
		return new TextureFont([page], TextureFontMetrics.Default);
	}
}
