using System.Numerics;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Imaging;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the loading surface, the press-enter strip, the title fade state and the title blend states.
/// </summary>
[Collection("Game state")]
public sealed class TitleStartupTests : IDisposable
{
	public TitleStartupTests()
	{
		Scene1.Reset();
	}

	public void Dispose()
	{
		Scene1.Reset();
	}

	[Fact]
	public void LoadingArchiveCarriesThreeFramesAndTheDrawGateUsesTitleBitOne()
	{
		using DataFileRegistry files = Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using NowLoadingScreen loading = new(files, renderer);
		Assert.Equal(3, loading.Textures.Count);
		Assert.Equal(128, loading.Textures[0].Width);
		Assert.Equal(64, loading.Textures[2].Width);
		TitleArtDrawList draw = new();
		loading.Draw(draw);
		Assert.Empty(draw.OverlayQuads);
		Scene1.EnableTitleDrawing();
		Assert.True(Scene1.TitleDrawingEnabled);
		loading.Draw(draw);
		Assert.Equal(3, draw.OverlayQuads.Count);
	}

	[Fact]
	public void LoadingDrawUsesTheTwoHalvesTheEmblemRectAndTheSineColour()
	{
		Scene1.EnableTitleDrawing();
		using DataFileRegistry files = Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using NowLoadingScreen loading = new(files, renderer);
		TitleArtDrawList draw = new();
		loading.Draw(draw);
		Assert.Equal(NowLoadingScreen.RotationStep, loading.Rotation);
		Assert.Equal(new Vector2(368f, 352f), draw.OverlayQuads[0].P0.Position);
		Assert.Equal(new Vector2(497f, 480f), draw.OverlayQuads[0].P2.Position);
		Assert.Equal(new Vector2(496f, 352f), draw.OverlayQuads[1].P0.Position);
		Assert.Equal(new Vector2(624f, 480f), draw.OverlayQuads[1].P2.Position);
		Assert.Equal(new Vector2(496f, 416f), NowLoadingScreen.EmblemPosition);
		Assert.Equal(new Vector2(464f, 384f), draw.OverlayQuads[2].P0.Position);
		Assert.Equal(new Vector2(592f, 512f), draw.OverlayQuads[2].P2.Position);
		Assert.Equal(NowLoadingScreen.TextureCoordinates, new Vector4(draw.OverlayQuads[0].P0.TextureCoordinates.X, draw.OverlayQuads[0].P0.TextureCoordinates.Y, draw.OverlayQuads[0].P2.TextureCoordinates.X, draw.OverlayQuads[0].P2.TextureCoordinates.Y));
		Assert.Equal(0xFFFFFFFFu, draw.OverlayQuads[0].Color);
		Assert.Equal(0xFFFFFFFFu, draw.OverlayQuads[1].Color);
		Assert.Equal(NowLoadingScreen.GetColor(NowLoadingScreen.RotationStep), draw.OverlayQuads[2].Color);
		Assert.Equal(TitleArtBlend.Opaque, draw.OverlayQuads[0].Blend);
		Assert.Equal(TitleArtBlend.AdditiveAlpha, draw.OverlayQuads[2].Blend);
	}

	[Fact]
	public void LoadingColourIsTheQuarterSinePlusHalfOffset()
	{
		Assert.Equal(0xBF000000u, NowLoadingScreen.GetColor(0) & 0xFF000000u);
		Assert.Equal(0xFFFFFFFFu, NowLoadingScreen.GetColor(16384));
		Assert.Equal(0x7F000000u, NowLoadingScreen.GetColor(49152) & 0xFF000000u);
		Assert.Equal(0xFFFFFFFFu, NowLoadingScreen.GetColor(16384) | 0xFFFFFFu);
	}

	[Fact]
	public void PressEnterStripIsElementTenAtTheOriginalPositionAndFrame()
	{
		Assert.Equal(10, Scene2TitleArt.SelectorElement);
		Assert.Equal(10, Scene2TitleArt.SelectorFrame);
		Assert.Equal(new Vector2(193f, 338f), Scene2TitleArt.SelectorPosition);
		Assert.Equal(new Vector2(256f, 32f), Scene2TitleArt.SelectorSize);
		Assert.Equal(new Vector4(0f, 0f, 255f / 256f, 31f / 256f), Scene2TitleArt.SelectorTextureCoordinates);
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.DrawSelectorStrip(draw);
		TitleArtOverlayQuad quad = Assert.Single(draw.OverlayQuads);
		Assert.Same(art.Textures[0], quad.Texture);
		Assert.Equal(new Vector2(193f, 338f), quad.P0.Position);
		Assert.Equal(new Vector2(449f, 370f), quad.P2.Position);
		Assert.Equal(new Vector2(0f, 0f), quad.P0.TextureCoordinates);
		Assert.Equal(new Vector2(255f / 256f, 31f / 256f), quad.P2.TextureCoordinates);
		Assert.Equal(TitleArtBlend.Alpha, quad.Blend);
	}

	[Fact]
	public void TitleBlendStatesKeepTheAlphaTestAndTheOriginalFactors()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.Draw(draw);
		art.DrawSelectorStrip(draw);
		art.DrawEmblem(draw, 0);
		draw.Render(renderer);
		Assert.Contains("State 15:1", renderer.Commands);
		Assert.Contains("State 24:16", renderer.Commands);
		Assert.Contains("State 25:5", renderer.Commands);
		Assert.Contains("State 27:0", renderer.Commands);
		Assert.Contains("State 27:1", renderer.Commands);
		Assert.Contains("State 19:5", renderer.Commands);
		Assert.Contains("State 20:6", renderer.Commands);
		Assert.Contains("State 19:2", renderer.Commands);
		Assert.Contains("State 20:2", renderer.Commands);
	}

	[Fact]
	public void FadeHidesTheScreenForTheTwoStepSceneState()
	{
		uint state = TitleFade.Initial;
		Assert.True(TitleFade.Advance(ref state));
		Assert.Equal(2u, state);
		Assert.True(TitleFade.Advance(ref state));
		Assert.Equal(0u, state);
		Assert.False(TitleFade.Advance(ref state));
		Assert.Equal(0u, state);
		Assert.False(TitleFade.IsHidden(0));
		Assert.True(TitleFade.IsHidden(1));
		Assert.True(TitleFade.IsHidden(2));
	}

	private static DataFileRegistry Registry()
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		byte[][] chunks = new byte[3][];
		chunks[0] = TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 128, 128, new byte[128 * 128 / 2]);
		chunks[1] = TextureTestData.Xvr(XvmTextureFormat.Dxt1, 2, 128, 128, new byte[128 * 128 / 2]);
		chunks[2] = TextureTestData.Xvr(XvmTextureFormat.Dxt1, 3, 64, 64, new byte[64 * 64 / 2]);
		byte[] gsl = ArchiveSamples.Gsl([("nowloading.prs", TextureTestData.Xvm(chunks), 0)]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}
}
