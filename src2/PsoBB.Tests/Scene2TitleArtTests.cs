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
