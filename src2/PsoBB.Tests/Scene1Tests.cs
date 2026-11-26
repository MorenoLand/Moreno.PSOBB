using System.Numerics;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene 1 resource loads, screen 9 activation and transforms, logo timeline, two input
/// checks, draw rectangles and release.
/// </summary>
[Collection("Game state")]
public sealed class Scene1Tests : IDisposable
{
	public Scene1Tests()
	{
		GameState.Reset();
		Scene1.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		Scene1.Reset();
	}

	[Fact]
	public void LoadsTheSimpleLogoDescriptorAndTheResourceGroup()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures);
		Assert.Equal(Scene1.SceneNumber, GameState.SceneParameter);
		Assert.Equal(8, scene.Logo.Frames.Count);
		Assert.False(scene.Logo.IsCinematic);
		Assert.Equal(8, renderer.CreatedTextureCount);
		Assert.Equal(RenderSettings.Default.Width, Scene1.TitleScreenWidth);
		Assert.Equal(RenderSettings.Default.Height, Scene1.TitleScreenHeight);
		Assert.False(Scene1.TitleDrawingEnabled);
		Assert.Equal(0u, Scene1.TitleFlags);
	}

	[Fact]
	public void TheResourceGroupResetsTheSelectionAndTheTransformGate()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures);
		Assert.Equal(0, scene.Preview.SelectedScreen);
		Assert.Equal(0u, scene.Preview.Status);
		Assert.Equal(Vector3.Zero, scene.Preview.RequestedPosition);
		Assert.Equal(Vector3.Zero, scene.Preview.RequestedDirection);
		Assert.Equal(Vector3.Zero, scene.Preview.ScreenDirection);
	}

	[Fact]
	public void TheFirstUpdateActivatesScreenNineAndAppliesBothTransforms()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures);
		MemoryGameInput source = new();
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(Scene1.TitleScreenIndex, scene.Preview.SelectedScreen);
		Assert.True(scene.IsScreenActive);
		Assert.Equal(0x004D5A14u, scene.Preview.Screens[Scene1.TitleScreenIndex].ConstructorAddress);
		Assert.Equal(Vector3.Zero, scene.Preview.ScreenPosition);
		Assert.Equal(new Vector3(0f, 0f, -100f), scene.Preview.ScreenDirection);
		Assert.False(scene.Preview.ActivateScreen(Scene1.TitleScreenIndex));
	}

	[Fact]
	public void TheLogoQuadTableMatchesTheEightOriginalRectangles()
	{
		Assert.Equal(8, TitleLogo.Quads.Count);
		Assert.Equal(new TitleLogoQuad(7, 0x200, 0x180, 0x80, 0x80), TitleLogo.Quads[0]);
		Assert.Equal(new TitleLogoQuad(6, 0x200, 0x100, 0x80, 0x80), TitleLogo.Quads[1]);
		Assert.Equal(new TitleLogoQuad(5, 0x200, 0x080, 0x80, 0x80), TitleLogo.Quads[2]);
		Assert.Equal(new TitleLogoQuad(4, 0x200, 0x000, 0x80, 0x80), TitleLogo.Quads[3]);
		Assert.Equal(new TitleLogoQuad(1, 0x000, 0x100, 0x100, 0x100), TitleLogo.Quads[4]);
		Assert.Equal(new TitleLogoQuad(0, 0x000, 0x000, 0x100, 0x100), TitleLogo.Quads[5]);
		Assert.Equal(new TitleLogoQuad(3, 0x100, 0x100, 0x100, 0x100), TitleLogo.Quads[6]);
		Assert.Equal(new TitleLogoQuad(2, 0x100, 0x000, 0x100, 0x100), TitleLogo.Quads[7]);
	}

	[Fact]
	public void DrawSubmitsEveryLogoRectangleInTableOrder()
	{
		using DataFileRegistry files = Scene1TestData.Registry(count: Scene1TestData.CinematicCount);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures, cinematicLogo: true);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(8, draw.Quads.Count);
		for (int index = 0; index < draw.Quads.Count; index++)
		{
			TitleLogoQuad quad = TitleLogo.Quads[index];
			UiQuad submitted = draw.Quads[index];
			Assert.Same(scene.Logo.Frames[quad.TextureIndex], submitted.Texture);
			Assert.Equal(new Vector2(quad.X, quad.Y), submitted.Position);
			Assert.Equal(new Vector2(quad.Width, quad.Height), submitted.Size);
			Assert.Equal(new Vector4(0f, 0f, 1f, 1f), submitted.TextureCoordinates);
			Assert.Equal(0xFFFFFFFFu, submitted.Color);
		}
	}

	[Fact]
	public void TheStateOneAndTwoDrawOffsetsSelectTheNextSpriteGroups()
	{
		using DataFileRegistry files = Scene1TestData.Registry(count: Scene1TestData.CinematicCount);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures, cinematicLogo: true);
		UiDrawList first = new();
		scene.Logo.Draw(first, 1);
		Assert.Equal(8, first.Quads.Count);
		Assert.Same(scene.Logo.Frames[15], first.Quads[0].Texture);
		UiDrawList second = new();
		scene.Logo.Draw(second, 2);
		Assert.Equal(8, second.Quads.Count);
		Assert.Same(scene.Logo.Frames[23], second.Quads[0].Texture);
	}

	[Fact]
	public void TheTimelineWaitsThirtyTwoSixtyAndThirtyTwoUpdates()
	{
		TitleLogoSequence sequence = new(cinematic: false);
		for (int index = 0; index < TitleLogoSequence.TimerTicks; index++)
			sequence.Update();
		Assert.Equal(1, sequence.State);
		Assert.Equal(0, sequence.Frames);
		Assert.False(sequence.IsFinished);
		for (int index = 0; index < TitleLogoSequence.FrameLimit; index++)
			sequence.Update();
		Assert.Equal(1, sequence.State);
		Assert.Equal(TitleLogoSequence.FrameLimit, sequence.Frames);
		sequence.Update();
		Assert.Equal(2, sequence.State);
		Assert.False(sequence.IsFinished);
		for (int index = 0; index < TitleLogoSequence.TimerTicks - 2; index++)
			sequence.Update();
		Assert.False(sequence.IsFinished);
		sequence.Update();
		Assert.True(sequence.IsFinished);
		Assert.Equal(0, sequence.Variant);
	}

	[Fact]
	public void TheCinematicTimelineContinuesThroughTheJumpTable()
	{
		TitleLogoSequence sequence = new(cinematic: true);
		for (int index = 0; index < TitleLogoSequence.TimerTicks + TitleLogoSequence.FrameLimit + 1 + TitleLogoSequence.TimerTicks - 1; index++)
			sequence.Update();
		Assert.Equal(3, sequence.State);
		Assert.Equal(0, sequence.Variant);
		Assert.False(sequence.IsFinished);
		sequence.Update();
		Assert.Equal(4, sequence.State);
		Assert.Equal(1, sequence.Variant);
		Assert.False(sequence.IsFinished);
		for (int index = 0; index < TitleLogoSequence.TimerTicks - 2; index++)
			sequence.Update();
		Assert.False(sequence.IsFinished);
		sequence.Update();
		Assert.True(sequence.IsFinished);
	}

	[Fact]
	public void CompletionRequestsSceneTwoOnTheFollowingUpdate()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures);
		MemoryGameInput source = new();
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		int total = TitleLogoSequence.TimerTicks + TitleLogoSequence.FrameLimit + 1 + TitleLogoSequence.TimerTicks - 1;
		for (int index = 0; index < total; index++)
			scene.Update(input);
		Assert.True(scene.Sequence.IsFinished);
		Assert.False(scene.IsComplete);
		scene.Update(input);
		Assert.True(scene.IsComplete);
		Assert.Equal(Scene1.NextScene, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void CancelRequestsARestart()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures);
		MemoryGameInput source = new();
		InputManager input = new(source);
		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
	}

	[Fact]
	public void TheShippedConfirmCheckRequestsTheExitSceneWhenItReturnsTrue()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures, confirmRequested: () => true);
		MemoryGameInput source = new();
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void ReleaseDisposesEverySpriteOnce()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		Scene1 scene = new(files, renderer, textures);
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.True(scene.Logo.IsDisposed);
		Assert.Equal(8, renderer.CreatedTextureCount);
		Assert.Equal(8, renderer.DisposedTextureCount);
		Assert.Equal(0, textures.LoadedCount);
		Assert.Throws<ObjectDisposedException>(() => scene.Update(new InputManager(new MemoryGameInput())));
		Assert.Throws<ObjectDisposedException>(() => scene.Draw(new UiDrawList()));
	}

	[Fact]
	public void AMissingLogoArchiveIsReported()
	{
		using DataFileRegistry files = Scene1TestData.Registry(includeLogo: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		Assert.Throws<FileNotFoundException>(() => new Scene1(files, renderer, textures));
	}

	[Fact]
	public void TheCinematicDescriptorRequiresTwentyFourSprites()
	{
		using DataFileRegistry files = Scene1TestData.Registry(count: Scene1TestData.CinematicCount);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TextureCache textures = new(renderer);
		using Scene1 scene = new(files, renderer, textures, cinematicLogo: true);
		Assert.True(scene.Logo.IsCinematic);
		Assert.Equal(24, scene.Logo.Frames.Count);
		Assert.Equal(24, renderer.CreatedTextureCount);
	}
}
