using System.Numerics;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the title scene archive loading, press-start state, scene requests, quads and release.
/// </summary>
[Collection("Game state")]
public sealed class TitleSceneTests : IDisposable
{
	public TitleSceneTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void LoadsTheTitleSelectAndLogoArchives()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		Assert.Equal(1u, GameState.SceneParameter);
		Assert.Equal(256, scene.PressStartTexture.Width);
		Assert.Equal(256, scene.PressStartTexture.Height);
		Assert.Equal(8, scene.LogoTextures.Count);
		Assert.Equal(256, scene.Menu.Labels.Width);
		Assert.Equal(4, scene.Menu.EntryCount);
		Assert.NotNull(scene.SelectLabels);
		Assert.Equal(256, scene.SelectLabels.Width);
		Assert.False(scene.IsMenuVisible);
	}

	[Fact]
	public void TheFirstConfirmationSignalsAndTheNextRequestsSceneTwo()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		InputManager input = NewInput(out MemoryGameInput source);
		source.SetKey(GameKey.Return, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(0u, GameState.SceneTransition);
		source.SetKey(GameKey.Return, false);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(2u, GameState.RequestedScene);
		Assert.True(scene.IsMenuVisible);
	}

	[Fact]
	public void CancelRequestsARestart()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		InputManager input = NewInput(out MemoryGameInput source);
		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
		Assert.True(scene.IsPreviewComplete);
	}

	[Fact]
	public void DrawsTheLogoGroupAndPressStartQuad()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(9, draw.Quads.Count);
		Assert.Equal(new Vector2(-150f, 0f), draw.Quads[0].Position);
		Assert.Equal(new Vector2(256f, 256f), draw.Quads[0].Size);
		Assert.Same(scene.LogoTextures[0], draw.Quads[0].Texture);
		UiQuad pressStart = draw.Quads[^1];
		Assert.Equal(new Vector2(192f, 96f), pressStart.Position);
		Assert.Equal(new Vector2(256f, 24f), pressStart.Size);
		Assert.Same(scene.PressStartTexture, pressStart.Texture);
		Assert.Equal(new Vector4(0f, 4f / 256f, 1f, 28f / 256f), pressStart.TextureCoordinates);
	}

	[Fact]
	public void DrawsTheMenuLabelsAfterThePressStart()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		InputManager input = NewInput(out MemoryGameInput source);
		source.SetKey(GameKey.Return, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		source.SetKey(GameKey.Return, false);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(4, draw.Quads.Count);
		Assert.Equal(new Vector4(0f, 36f / 256f, 1f, 60f / 256f), draw.Quads[0].TextureCoordinates);
		Assert.Equal(new Vector4(0f, 132f / 256f, 1f, 156f / 256f), draw.Quads[3].TextureCoordinates);
		Assert.Equal(0xFFFFFFFFu, draw.Quads[0].Color);
	}

	[Fact]
	public void FallsBackToTheStandaloneTitleAtlasWithoutTheSelectArchive()
	{
		using DataFileRegistry files = TitleTestData.Registry(includeSelect: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(9, draw.Quads.Count);
		Assert.Equal(4, scene.Menu.EntryCount);
	}

	[Fact]
	public void MissingTitleArchivesAreReported()
	{
		using DataFileRegistry files = TitleTestData.Registry(includeSelect: false, includeTitle: false, includeStandalone: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new TitleScene(files, renderer));
	}

	[Fact]
	public void ReleaseDisposesOnceAndClearsTheLogoList()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		TitleScene scene = new(files, renderer);
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.Empty(scene.LogoTextures);
	}

	private static InputManager NewInput(out MemoryGameInput source)
	{
		source = new MemoryGameInput();
		return new InputManager(source);
	}
}
