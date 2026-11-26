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
		(Vector2 Position, int Texture)[] pieces =
		[
			(new Vector2(512f, 384f), 7),
			(new Vector2(512f, 256f), 6),
			(new Vector2(512f, 128f), 5),
			(new Vector2(512f, 0f), 4),
			(new Vector2(0f, 256f), 1),
			(new Vector2(0f, 0f), 0),
			(new Vector2(256f, 256f), 3),
			(new Vector2(256f, 0f), 2),
		];
		for (int index = 0; index < pieces.Length; index++)
		{
			UiQuad quad = draw.Quads[index];
			Assert.Equal(pieces[index].Position, quad.Position);
			Assert.Equal(pieces[index].Texture >= 4 ? new Vector2(128f, 128f) : new Vector2(256f, 256f), quad.Size);
			Assert.Same(scene.LogoTextures[pieces[index].Texture], quad.Texture);
			Assert.Equal(new Vector4(0f, 0f, 1f, 1f), quad.TextureCoordinates);
		}
		UiQuad pressStart = draw.Quads[^1];
		Assert.Equal(new Vector2(0f, 7.5f), pressStart.Position);
		Assert.Equal(new Vector2(640f, 45f), pressStart.Size);
		Assert.Same(scene.PressStartTexture, pressStart.Texture);
		Assert.Equal(new Vector4(0f, 4f / 256f, 1f, 28f / 256f), pressStart.TextureCoordinates);
	}

	[Fact]
	public void LogoTexturesTurnPureWhiteIntoATransparentColorKey()
	{
		using DataFileRegistry files = TitleTestData.Registry(logo: TitleTestData.ColorKeyLogoXvm());
		using PixelRenderer renderer = new();
		using TitleScene scene = new(files, renderer);
		byte[] logo = renderer.Uploaded[^8];
		Assert.Equal(0, logo[3]);
		Assert.Equal(255, logo[7]);
	}

	[Fact]
	public void TheLogoPassUsesTheColorKeyStateSequence()
	{
		using DataFileRegistry files = TitleTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using TitleScene scene = new(files, renderer);
		scene.ConfigureRenderState(renderer);
		string[] expected =
		[
			"State 7:0",
			"State 14:0",
			"State 22:1",
			"State 137:0",
			"State 145:1",
			"State 28:0",
			"State 15:1",
			"State 24:0",
			"State 25:5",
			"State 27:0",
			"State 19:2",
			"State 20:1",
		];
		Assert.Equal(expected, renderer.Commands);
	}

	[Fact]
	public void TheMenuPassEnablesAlphaBlending()
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
		scene.ConfigureRenderState(renderer);
		Assert.Contains("State 15:0", renderer.Commands);
		Assert.Contains("State 27:1", renderer.Commands);
		Assert.Contains("State 19:5", renderer.Commands);
		Assert.Contains("State 20:6", renderer.Commands);
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

	private sealed class PixelRenderer : IRenderer
	{
		public List<byte[]> Uploaded { get; } = [];
		public RenderSettings Settings => RenderSettings.Default;
		public void BeginFrame() { }
		public void SetViewport(int x, int y, int width, int height) { }
		public void Clear(uint color) { }
		public void SetTransform(TransformKind kind, in Matrix4x4 transform) { }
		public void SetRenderState(uint state, uint value) { }
		public void SetTexture(int stage, ITexture? texture) { }
		public void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat) { }
		public void EndFrame() { }
		public void Dispose() { }
		public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
		{
			Uploaded.Add(pixels.ToArray());
			return new PixelTexture(width, height);
		}

		private sealed class PixelTexture(int width, int height) : ITexture
		{
			public int Width { get; } = width;
			public int Height { get; } = height;
			public void Update(ReadOnlySpan<byte> pixels, int stride) { }
			public void Dispose() { }
		}
	}
}
