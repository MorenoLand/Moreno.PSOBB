using System.Numerics;
using PsoBB.Data;
using PsoBB.Audio;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Models;
using PsoBB.Platform;
using PsoBB.Rendering;
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
	public void ScreensExposeTheConstructorFields()
	{
		Assert.Equal(13, CharacterCreationScreen.All.Count);
		Assert.Equal(4, CharacterCreationScreen.All.Count(screen => screen.IsPlayerSlot));
		Assert.All(CharacterCreationScreen.All.Take(4), screen => Assert.Equal(272, screen.ObjectSize));
		Assert.Equal(10f, CharacterCreationScreen.All[4].Scale);
		Assert.Equal(168, CharacterCreationScreen.All[5].ObjectSize);
		Assert.Equal(20f, CharacterCreationScreen.All[6].Scale);
		Assert.Equal(116, CharacterCreationScreen.All[7].ObjectSize);
		Assert.Equal(30f, CharacterCreationScreen.All[8].Scale);
		Assert.Equal(4, CharacterCreationScreen.All[9].Group);
		Assert.Equal(5, CharacterCreationScreen.All[11].Group);
		Assert.Equal(0x15, CharacterCreationScreen.All[12].Group);
	}

	[Fact]
	public void PreviewLoadsFourModelsAndSubmitsNodeGeometry()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(model: CharacterMakingTestData.PlayerModel(4));
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		Assert.Equal(4, scene.Preview.LoadedModelCount);
		Assert.All(scene.Preview.Players, player => Assert.NotNull(player.Model));
		int surfaces = scene.DrawPreview(renderer, SceneCamera.Default);
		Assert.Equal(4, surfaces);
		Assert.Contains(renderer.Commands, command => command.StartsWith("Draw ", StringComparison.Ordinal));
		Assert.Contains(renderer.Textures, binding => binding.Texture is not null);
	}

	[Fact]
	public void PreviewUsesTheMotionArchiveWhenTheModelEntryHasNone()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		BmlArchive archive = BmlArchive.Parse(ModelTestData.BmlSplit());
		using CharacterPreview preview = new();
		Assert.Equal(1, preview.LoadModels(archive, renderer));
		Assert.NotNull(preview.Players[0].Model);
		Assert.NotNull(preview.Players[0].Motion);
	}

	[Fact]
	public void PreviewMotionAdvancesTheNodeTransform()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(model: CharacterMakingTestData.PlayerModel(1));
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		CharacterPreviewModel player = scene.Preview.Players[0];
		Assert.NotNull(player.Model);
		player.Advance(5f);
		Matrix4x4 world = player.GetWorld(player.Model.Nodes[0]);
		Assert.Equal(5f, world.M41, 3);
		Assert.Equal(10f, world.M42, 3);
		Assert.Equal(15f, world.M43, 3);
	}

	[Fact]
	public void ClassSelectionUsesInjectedRowsAndPlaysTheOriginalSounds()
	{
		CharacterClassSelection selection = new([new(0, 3), new(4, 7), new(8, 11)]);
		List<int> sounds = [];
		selection.SoundRequested += sounds.Add;
		Assert.True(selection.UpdateRow(1, false));
		Assert.Equal(1, selection.Row);
		Assert.True(selection.UpdateRow(0, true));
		Assert.Equal(1, selection.Stage);
		Assert.Equal(4, selection.Column);
		Assert.True(selection.UpdateColumn(1, false, false));
		Assert.Equal(5, selection.Column);
		Assert.True(selection.UpdateColumn(0, false, true));
		Assert.Equal(0, selection.Stage);
		Assert.Equal([CharacterClassSelection.MoveSoundId, CharacterClassSelection.ConfirmSoundId, CharacterClassSelection.MoveSoundId, CharacterClassSelection.CancelSoundId], sounds);
	}

	[Fact]
	public void SceneRoutesSelectionSoundsToTheAudioSurface()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using CharacterMakingScene scene = new(files, renderer);
		scene.ClassSelection.SetRows([new(0, 3), new(4, 7), new(8, 11)]);
		List<int> sounds = [];
		scene.SoundEffectRequested += sounds.Add;
		MemoryGameInput source = new();
		InputManager input = new(source);
		source.SetKey(GameKey.Down, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal([CharacterClassSelection.MoveSoundId], sounds);
	}

	[Fact]
	public void ClassSelectionWrapsWithinTheSelectedRow()
	{
		CharacterClassSelection selection = new([new(0, 3), new(4, 7), new(8, 11)]);
		selection.UpdateRow(1, true);
		Assert.True(selection.UpdateColumn(-1, false, false));
		Assert.Equal(7, selection.Column);
		Assert.True(selection.UpdateColumn(1, false, false));
		Assert.Equal(4, selection.Column);
	}

	[Fact]
	public void NameEntryTrimsAndLimitsToTwelveCharacters()
	{
		Assert.Equal("ABCDEFGHIJKL", CharacterNameEntry.Normalize("ABCDEFGHIJKLMN"));
		Assert.Equal("ABCDEFGH", CharacterNameEntry.Normalize("  ABC DEF GHI JKL"));
		Assert.Equal("", CharacterNameEntry.Normalize(" \t\u3000 "));
		Assert.Equal("HUmar", CharacterNameEntry.Normalize(" HUmar "));
		using CharacterNameEntry entry = new();
		entry.EditBox.SetText("  FOnewearl  ");
		Assert.True(entry.TryCommit(out string name));
		Assert.Equal("FOnewearl", name);
		entry.EditBox.SetText("   ");
		Assert.False(entry.TryCommit(out _));
		Assert.True(CharacterNameEntry.IsSingleByteOrHalfWidth('A'));
		Assert.True(CharacterNameEntry.IsSingleByteOrHalfWidth('\uFF61'));
		Assert.False(CharacterNameEntry.IsSingleByteOrHalfWidth('\u3042'));
	}

	[Fact]
	public void ReleaseDisposesPreviewTexturesOnce()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry(model: CharacterMakingTestData.PlayerModel(4));
		using RecordingRenderer renderer = new(RenderSettings.Default);
		CharacterMakingScene scene = new(files, renderer);
		Assert.Equal(6, renderer.CreatedTextureCount);
		scene.Dispose();
		scene.Dispose();
		Assert.Equal(6, renderer.DisposedTextureCount);
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
