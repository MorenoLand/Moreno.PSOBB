using System.Numerics;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene-2 title strip table, title and effect texture loading, and draw submission.
/// </summary>
public sealed class Scene2TitleArtTests
{
	[Fact]
	public void LoadsTheTwentyOneTitleTextures()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		Assert.Equal(21, art.Textures.Count);
		Assert.Equal(256, art.Textures[0].Width);
		Assert.Equal(128, art.Textures[7].Width);
		Assert.Equal(512, art.Textures[11].Width);
		Assert.Equal(256, art.Textures[13].Width);
		Assert.Equal(128, art.Textures[17].Width);
	}

	[Fact]
	public void DefaultsToTheModeZeroTitleSet()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry(looseEpisode4: true);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		Assert.Equal(Scene2TitleSet.Title, art.TitleSet);
		Assert.Equal(256, art.Textures[0].Width);
	}

	[Fact]
	public void Episode4SelectionLoadsTheLooseTitleEp4Archive()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry(looseEpisode4: true);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer, Scene2TitleSet.TitleEp4);
		Assert.Equal(Scene2TitleSet.TitleEp4, art.TitleSet);
		Assert.Equal(128, art.Textures[0].Width);
	}

	[Fact]
	public void TitleSetSelectorMirrorsTheTwoOriginalChecks()
	{
		Assert.Equal(Scene2TitleSet.Title, Scene2TitleArt.SelectTitleSet(0, false));
		Assert.Equal(Scene2TitleSet.TitleEp4, Scene2TitleArt.SelectTitleSet(0, true));
		Assert.Equal(Scene2TitleSet.Title, Scene2TitleArt.SelectTitleSet(1, true));
		Assert.True(Scene2TitleArt.IsEpisode4Configuration(3, false, string.Empty));
		Assert.True(Scene2TitleArt.IsEpisode4Configuration(0, true, string.Empty));
		Assert.True(Scene2TitleArt.IsEpisode4Configuration(0, false, "Episode4"));
		Assert.False(Scene2TitleArt.IsEpisode4Configuration(0, false, "Account"));
		Assert.Equal(Scene2TitleSet.TitleEp4, Scene2TitleArt.SelectTitleSet(0, false, "Episode4"));
	}

	[Fact]
	public void ArchiveNamesMatchTheThreeOriginalLiterals()
	{
		Assert.Equal("Title.prs", Scene2TitleArt.GetArchiveName(Scene2TitleSet.Title));
		Assert.Equal("TitleEP4.prs", Scene2TitleArt.GetArchiveName(Scene2TitleSet.TitleEp4));
		Assert.Equal("Title_cs.prs", Scene2TitleArt.GetArchiveName(Scene2TitleSet.TitleCs));
	}

	[Fact]
	public void LoadsTheThreeEffectRecordsAndTheirTwoPayloads()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		Assert.Equal(3, art.EffectRecords.Count);
		TitleEffectRecord first = art.EffectRecords[0];
		Assert.Equal(483, first.Index);
		Assert.Equal("title_a", first.Name);
		Assert.Equal("ontaib", first.SecondaryName);
		Assert.Equal(2, first.Type);
		Assert.Equal(0xAB02Cu, first.TextureId);
		Assert.Equal(50, first.Field48);
		Assert.Equal(10, first.Field4C);
		TitleEffectRecord second = art.EffectRecords[1];
		Assert.Equal(484, second.Index);
		Assert.Equal("title_b", second.Name);
		Assert.Equal(0xAB02Cu, second.TextureId);
		Assert.Equal(100, second.Field48);
		Assert.Equal(20, second.Field4C);
		TitleEffectRecord third = art.EffectRecords[2];
		Assert.Equal(485, third.Index);
		Assert.Equal("title_seiunn", third.Name);
		Assert.Equal("ki", third.SecondaryName);
		Assert.Equal(0xAAEF7u, third.TextureId);
		Assert.Equal(350, third.Field48);
		Assert.Equal(300, third.Field4C);
		Assert.Equal(2, art.EffectTextures.Count);
		Assert.Equal(32, art.EffectTextures[0xAB02Cu].Width);
		Assert.Equal(128, art.EffectTextures[0xAAEF7u].Width);
		Assert.Same(art.EffectTextures[first.TextureId], art.EffectTextures[second.TextureId]);
	}

	[Fact]
	public void DrawSubmitsTheOpaqueAndAlphaStripLayers()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.Draw(draw);
		Assert.Equal(16, draw.Quads.Count);
		int[] opaqueFrames = [20, 19, 18, 17, 14, 13, 16, 15];
		int[] alphaFrames = [10, 9, 8, 7, 4, 3, 6, 5];
		Vector2[] positions =
		[
			new(512, 384), new(512, 256), new(512, 128), new(512, 0),
			new(0, 256), new(0, 0), new(256, 256), new(256, 0),
		];
		for (int index = 0; index < 8; index++)
		{
			TitleArtQuad quad = draw.Quads[index];
			Assert.Equal(opaqueFrames[index], quad.Frame);
			Assert.Equal(positions[index], quad.Position);
			Assert.Equal(new Vector2(index < 4 ? 128f : 256f), quad.Size);
			Assert.Equal(TitleArtBlend.Opaque, quad.Blend);
			Assert.Equal(0xFFFFFFFFu, quad.Color);
			Assert.Equal(1f + 1f / -150f, quad.Depth, 5);
			Assert.Same(art.Textures[quad.Frame], quad.Texture);
		}
		for (int index = 0; index < 8; index++)
		{
			TitleArtQuad quad = draw.Quads[index + 8];
			Assert.Equal(alphaFrames[index], quad.Frame);
			Assert.Equal(positions[index], quad.Position);
			Assert.Equal(new Vector2(index < 4 ? 128f : 256f), quad.Size);
			Assert.Equal(TitleArtBlend.Alpha, quad.Blend);
			Assert.Equal(0xFFFFFFFFu, quad.Color);
			Assert.Equal(1f + 1f / -130f, quad.Depth, 5);
			Assert.Same(art.Textures[quad.Frame], quad.Texture);
		}
		Assert.DoesNotContain(draw.Quads, quad => art.EffectTextures.Values.Contains(quad.Texture));
	}

	[Fact]
	public void EmblemAngleAndColorFollowTheOriginalFormulas()
	{
		Assert.Equal(0, Scene2TitleArt.GetEmblemAngle(0, 0));
		Assert.Equal(32768, Scene2TitleArt.GetEmblemAngle(450, 0));
		Assert.Equal(32768, Scene2TitleArt.GetEmblemAngle(225, 2));
		Assert.Equal(-32768, Scene2TitleArt.GetEmblemAngle(450, 1));
		Assert.Equal(0xFF005873u, Scene2TitleArt.GetEmblemColor(0));
		Assert.Equal(0xFF005873u, Scene2TitleArt.GetEmblemColor(150));
		Assert.Equal(0xFFFFFFFFu, Scene2TitleArt.GetEmblemColor(165));
		Assert.Equal(0xFF005873u, Scene2TitleArt.GetEmblemColor(180));
	}

	[Fact]
	public void DrawEmblemSubmitsTheTwoMahoujinQuadsAndThreeRingQuads()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.DrawEmblem(draw, 0);
		Assert.Equal(5, draw.OverlayQuads.Count);
		Assert.Same(art.Textures[11], draw.OverlayQuads[0].Texture);
		Assert.Same(art.Textures[12], draw.OverlayQuads[1].Texture);
		Assert.Same(art.Textures[12], draw.OverlayQuads[4].Texture);
		Assert.Equal(new Vector2(105f, 5f), draw.OverlayQuads[0].P0.Position);
		Assert.Equal(new Vector2(535f, 5f), draw.OverlayQuads[0].P1.Position);
		Assert.Equal(new Vector2(535f, 435f), draw.OverlayQuads[0].P2.Position);
		Assert.Equal(new Vector2(105f, 435f), draw.OverlayQuads[0].P3.Position);
		Assert.Equal(new Vector2(0f, 0f), draw.OverlayQuads[0].P0.TextureCoordinates);
		Assert.Equal(new Vector2(0.83984375f, 0.83984375f), draw.OverlayQuads[0].P2.TextureCoordinates);
		Assert.Equal(1f - 0.008333334f, draw.OverlayQuads[0].Depth, 5);
		Assert.Equal(1f - 0.008403362f, draw.OverlayQuads[1].Depth, 5);
		Assert.Equal(1f - 0.008474576f, draw.OverlayQuads[2].Depth, 5);
		Assert.Equal(new Vector2(0.35f, 0f), draw.OverlayQuads[2].P0.TextureCoordinates);
		Assert.Equal(new Vector2(0.553125f, 0.203125f), draw.OverlayQuads[2].P2.TextureCoordinates);
		Assert.All(draw.OverlayQuads, quad => Assert.Equal(0xFF005873u, quad.Color));
		Assert.All(draw.OverlayQuads, quad => Assert.Equal(TitleArtBlend.Additive, quad.Blend));
		draw.Render(renderer);
		Assert.Contains("State 19:2", renderer.Commands);
		Assert.Contains("State 20:2", renderer.Commands);
		Assert.Equal(5, renderer.Commands.Count(command => command == "Draw TriangleList 2 28 144"));
	}

	[Fact]
	public void DrawEmblemUsesTheRuntimeRingUvAndPrimaryUv()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.DrawEmblem(draw, 165, new TitleEmblemState(new Vector2(320f, 220f), 0, 0.1f, 0.2f, 0.4f, 0.1f));
		Assert.Equal(new Vector2(0.1f, 0.2f), draw.OverlayQuads[0].P0.TextureCoordinates);
		Assert.Equal(new Vector2(0.4f, 0.1f), draw.OverlayQuads[2].P0.TextureCoordinates);
		Assert.All(draw.OverlayQuads, quad => Assert.Equal(0xFFFFFFFFu, quad.Color));
	}

	[Fact]
	public void FlashWindowAndColourRampMatchTheOriginal()
	{
		Assert.False(Scene2TitleArt.IsFlashVisible(149));
		Assert.True(Scene2TitleArt.IsFlashVisible(150));
		Assert.True(Scene2TitleArt.IsFlashVisible(170));
		Assert.False(Scene2TitleArt.IsFlashVisible(171));
		Assert.Equal(0u, Scene2TitleArt.GetFlashColor(149));
		Assert.Equal(0xFFFFFFFFu, Scene2TitleArt.GetFlashColor(150));
		Assert.Equal(0xFF7F7F7Fu, Scene2TitleArt.GetFlashColor(160));
		Assert.Equal(0xFF000000u, Scene2TitleArt.GetFlashColor(170));
		Assert.Equal(0u, Scene2TitleArt.GetFlashColor(171));
		Assert.Equal(0xFF7F7F7Fu, Scene2TitleArt.GetFlashColor(460));
	}

	[Fact]
	public void DrawFlashSubmitsTheExpandingQuadInsideTheWindow()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.DrawFlash(draw, 160, new Vector4(0f, 0f, 1f, 1f));
		Assert.Single(draw.OverlayQuads);
		TitleArtOverlayQuad quad = draw.OverlayQuads[0];
		Assert.Same(art.Textures[12], quad.Texture);
		Assert.Equal(185.6f, quad.P0.Position.X, 4);
		Assert.Equal(65.6f, quad.P0.Position.Y, 4);
		Assert.Equal(454.4f, quad.P2.Position.X, 4);
		Assert.Equal(334.4f, quad.P2.Position.Y, 4);
		Assert.Equal(0xFF7F7F7Fu, quad.Color);
		Assert.Equal(Scene2TitleArt.FlashDepth, quad.Depth);
		draw = new TitleArtDrawList();
		art.DrawFlash(draw, 149, new Vector4(0f, 0f, 1f, 1f));
		Assert.Empty(draw.OverlayQuads);
	}

	[Fact]
	public void RenderSubmitsTheTwoBlendModesAndSixteenQuads()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		TitleArtDrawList draw = new();
		art.Draw(draw);
		draw.Render(renderer);
		Assert.Contains("State 27:0", renderer.Commands);
		Assert.Contains("State 27:1", renderer.Commands);
		Assert.Contains("State 19:5", renderer.Commands);
		Assert.Contains("State 20:6", renderer.Commands);
		Assert.Contains("TextureStage 0:4:3", renderer.Commands);
		Assert.Contains("TextureStage 0:4:4", renderer.Commands);
		Assert.Contains("TextureStage 0:13:3", renderer.Commands);
		Assert.Contains("TextureStage 0:14:3", renderer.Commands);
		Assert.Equal(16, renderer.Commands.Count(command => command.StartsWith("Texture 0:")));
		Assert.Equal(16, renderer.Commands.Count(command => command == "Draw TriangleList 2 28 144"));
	}

	[Fact]
	public void MissingTitleArchiveIsReported()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry(includeTitle: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new Scene2TitleArt(files, renderer));
	}

	[Fact]
	public void MissingEffectAssetsLeaveTheStripDrawAvailable()
	{
		using DataFileRegistry files = Scene2TitleTestData.Registry(includeEffects: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using Scene2TitleArt art = new(files, renderer);
		Assert.Empty(art.EffectRecords);
		Assert.Empty(art.EffectTextures);
		TitleArtDrawList draw = new();
		art.Draw(draw);
		Assert.Equal(16, draw.Quads.Count);
	}
}
