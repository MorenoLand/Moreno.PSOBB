using System.Numerics;
using PsoBB.Data;
using PsoBB.Audio;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the character-making scene assets, preview container, transitions, draw order and release.
/// </summary>
[Collection("Game state")]
public sealed class CharacterMakingSceneTests : IDisposable
{
	public CharacterMakingSceneTests()
	{
		GameState.Reset();
		CharacterMakingScene.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		CharacterMakingScene.Reset();
	}

	[Fact]
	public void LoadsTheModelBothSurfacesAndTheMusicEntry()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		Assert.Single(scene.ModelArchive.Files);
		Assert.Equal("charamakingmot.bml", scene.ModelArchive.Files[0].Name);
		Assert.Equal(64, scene.AdTexture.Width);
		Assert.Equal(64, scene.AdTexture.Height);
		Assert.Equal(64, scene.BackgroundTexture.Width);
		Assert.Equal(2, renderer.CreatedTextureCount);
		Assert.True(scene.HasMusic);
		Assert.Equal(MusicLibrary.GetTrackPath(CharacterMakingScene.MusicTrackName), scene.MusicTrackPath);
		Assert.Equal(CharacterMakingScene.SceneParameter, GameState.SceneParameter);
		Assert.False(scene.IsEntryRestart);
	}

	[Fact]
	public void CreatesFourPlayerPreviewsAndSelectsScreenEightOfThirteen()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		Assert.Equal(4, scene.PreviewObjectCount);
		Assert.Equal(4, scene.Preview.Players.Count);
		Assert.Equal(13, scene.Preview.Screens.Count);
		Assert.Equal(8, scene.SelectedScreen);
		Assert.Equal(0x004EB2C0u, scene.Preview.Screens[8].ConstructorAddress);
		Assert.True(scene.Preview.Screens[3].IsPlayerSlot);
		Assert.False(scene.Preview.Screens[4].IsPlayerSlot);
	}

	[Fact]
	public void CancelRequestsTheExitScene()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
	}

	[Fact]
	public void ConfirmRequestsSceneTwo()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		source.SetKey(GameKey.Return, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(CharacterMakingScene.ConfirmScene, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void ConfirmAfterCancelWinsInTheSameFrame()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		source.SetKey(GameKey.Escape, true);
		source.SetKey(GameKey.Return, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(CharacterMakingScene.ConfirmScene, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void DrawSubmitsTheAdThenBackgroundSurfaces()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(2, draw.Quads.Count);
		Assert.Same(scene.AdTexture, draw.Quads[0].Texture);
		Assert.Same(scene.BackgroundTexture, draw.Quads[1].Texture);
		foreach (UiQuad quad in draw.Quads)
		{
			Assert.Equal(Vector2.Zero, quad.Position);
			Assert.Equal(CharacterMakingScene.SurfaceSize, quad.Size);
			Assert.Equal(new Vector4(0f, 0f, 1f, 1f), quad.TextureCoordinates);
			Assert.Equal(0xFFFFFFFFu, quad.Color);
		}
	}

	[Fact]
	public void ReleaseDisposesBothSurfacesOnce()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		CharacterMakingScene scene = new(files, renderer);
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.Equal(2, renderer.CreatedTextureCount);
		Assert.Equal(2, renderer.DisposedTextureCount);
	}

	[Fact]
	public void MissingModelArchiveIsReported()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(includeModel: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new CharacterMakingScene(files, renderer));
	}

	[Fact]
	public void MissingBackgroundSurfaceIsReported()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(includeBackground: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new CharacterMakingScene(files, renderer));
	}

	[Fact]
	public void MissingMusicLeavesTheSceneSilent()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(includeMusic: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		Assert.False(scene.HasMusic);
		Assert.Equal(MusicLibrary.GetTrackPath(CharacterMakingScene.MusicTrackName), scene.MusicTrackPath);
	}

	[Fact]
	public void ReentryFlagRequestsTheExitSceneBeforeLoadingAssets()
	{
		CharacterMakingScene.ReenterFlag = 1;
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		Assert.True(scene.IsEntryRestart);
		Assert.Equal(CharacterMakingScene.SceneParameter, GameState.SceneParameter);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
		Assert.Equal(0, CharacterMakingScene.ReenterFlag);
		Assert.Equal(0, renderer.CreatedTextureCount);
		Assert.Throws<InvalidOperationException>(() => scene.ModelArchive);
	}
}
