using System.Numerics;
using System.Text;
using PsoBB.Audio;
using PsoBB.Core;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the save-after-credits scene assets, two-row menu geometry, transitions, draw order and release.
/// </summary>
[Collection("Game state")]
public sealed class SaveGameSceneTests : IDisposable
{
	public SaveGameSceneTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void LoadsBothSurfacesAndTheTitleTrack()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		Assert.Equal(64, scene.AdTexture.Width);
		Assert.Equal(64, scene.AdTexture.Height);
		Assert.Equal(64, scene.BackgroundTexture.Width);
		Assert.Equal(2, renderer.CreatedTextureCount);
		Assert.True(scene.HasMusic);
		Assert.Equal(MusicLibrary.GetTrackPath(SaveGameScene.MusicTrackName), scene.MusicTrackPath);
		Assert.Equal(SaveGameScene.SceneParameter, GameState.SceneParameter);
		Assert.Equal(SaveGameSceneState.CreatingMenu, scene.State);
	}

	[Fact]
	public void CreatesTheTwoRowMenuAtTheOriginalPositionOnTheFirstUpdate()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		RecordingTextSurface text = new();
		scene.TextSurface = text;
		scene.Update(input);
		Assert.Equal(SaveGameSceneState.Menu, scene.State);
		Assert.Equal(2, scene.Menu.Items.Count);
		Assert.Equal(SaveGameScene.SaveLabel, scene.Menu.Items[0].Text);
		Assert.Equal(SaveGameScene.ExitWithoutSavingLabel, scene.Menu.Items[1].Text);
		Assert.Equal(SaveGameScene.MenuPosition, scene.Menu.Position);
		Assert.Equal(40f, scene.Menu.Size.Y);
		Assert.Equal(160f, scene.Menu.Size.X);
		Assert.Equal(0, scene.Menu.SelectedIndex);
	}

	[Fact]
	public void ConfirmOnSaveStopsAtTheSaveRequestBoundary()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		scene.Update(input);
		Press(scene, input, source, GameKey.Return);
		Assert.Equal(SaveGameSceneState.SaveRequested, scene.State);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void ConfirmOnExitWithoutSavingRequestsTheRootScene()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		GameState.RootScene = 2;
		MemoryGameInput source = new();
		InputManager input = new(source);
		scene.Update(input);
		Press(scene, input, source, GameKey.Down);
		Assert.Equal(1, scene.Menu.SelectedIndex);
		Press(scene, input, source, GameKey.Return);
		Assert.Equal(SaveGameSceneState.ExitRequested, scene.State);
		Assert.Equal(2u, GameState.RequestedScene);
		Assert.Equal(2u, GameState.SceneTransition);
	}

	[Fact]
	public void CancelRequestsTheRestartScene()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		scene.Update(input);
		Press(scene, input, source, GameKey.Escape);
		Assert.Equal(SaveGameSceneState.Canceled, scene.State);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
	}

	[Fact]
	public void NavigationWrapsBetweenTheTwoRows()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		scene.Update(input);
		Press(scene, input, source, GameKey.Up);
		Assert.Equal(1, scene.Menu.SelectedIndex);
		Press(scene, input, source, GameKey.Down);
		Assert.Equal(0, scene.Menu.SelectedIndex);
	}

	[Fact]
	public void DrawSubmitsTheAdvertisementThenTheTintedBackgroundThenTheSelection()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		MemoryGameInput source = new();
		InputManager input = new(source);
		RecordingTextSurface text = new();
		scene.TextSurface = text;
		scene.Update(input);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(3, draw.Quads.Count);
		Assert.Same(scene.AdTexture, draw.Quads[0].Texture);
		Assert.Equal(0xFFFFFFFFu, draw.Quads[0].Color);
		Assert.Same(scene.BackgroundTexture, draw.Quads[1].Texture);
		Assert.Equal(SaveGameScene.BackgroundColor, draw.Quads[1].Color);
		Assert.Equal(SaveGameScene.MenuPosition, draw.Quads[2].Position);
		foreach (UiQuad quad in draw.Quads.Take(2))
		{
			Assert.Equal(Vector2.Zero, quad.Position);
			Assert.Equal(SaveGameScene.SurfaceSize, quad.Size);
			Assert.Equal(new Vector4(0f, 0f, 1f, 1f), quad.TextureCoordinates);
		}
		Assert.Equal(SaveGameScene.SaveLabel, text.Draws[0].Text);
		Assert.Equal(new Vector2(SaveGameScene.MenuPosition.X, SaveGameScene.MenuPosition.Y), text.Draws[0].Position);
		Assert.Equal(SaveGameScene.ExitWithoutSavingLabel, text.Draws[1].Text);
		Assert.Equal(new Vector2(SaveGameScene.MenuPosition.X, SaveGameScene.MenuPosition.Y + SaveGameScene.MenuRowHeight), text.Draws[1].Position);
	}

	[Fact]
	public void ReleaseDisposesBothSurfacesAndTheMenuOnce()
	{
		using DataFileRegistry files = SaveGameTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SaveGameScene scene = new(files, renderer);
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.Equal(SaveGameSceneState.Released, scene.State);
		Assert.Equal(2, renderer.CreatedTextureCount);
		Assert.Equal(2, renderer.DisposedTextureCount);
	}

	[Fact]
	public void MissingAdvertisementSurfaceIsReported()
	{
		using DataFileRegistry files = SaveGameTestData.Registry(includeAd: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new SaveGameScene(files, renderer));
		Assert.Equal(0, renderer.CreatedTextureCount);
	}

	[Fact]
	public void MissingBackgroundSurfaceIsReportedAndReleasesTheAdvertisement()
	{
		using DataFileRegistry files = SaveGameTestData.Registry(includeBackground: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new SaveGameScene(files, renderer));
		Assert.Equal(1, renderer.CreatedTextureCount);
		Assert.Equal(1, renderer.DisposedTextureCount);
	}

	[Fact]
	public void MissingTitleTrackLeavesTheSceneSilent()
	{
		using DataFileRegistry files = SaveGameTestData.Registry(includeMusic: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SaveGameScene scene = new(files, renderer);
		Assert.False(scene.HasMusic);
		Assert.Equal(MusicLibrary.GetTrackPath(SaveGameScene.MusicTrackName), scene.MusicTrackPath);
	}

	[Fact]
	public void RetailImageCarriesTheSceneConstants()
	{
		string? path = FindImage();
		if (path is null)
			return;
		using FileStream stream = File.OpenRead(path);
		GuestImage image = GuestImage.Load(stream);
		Assert.Equal(0x004D471Cu, image.ReadUInt32(0x009CEC28));
		Assert.Equal(0x004D2AF0u, image.ReadUInt32(0x009CEC2C));
		Assert.Equal(324f, image.ReadSingle(0x0096B8E0));
		Assert.Equal(374f, image.ReadSingle(0x0096B8E4));
		Assert.Equal("title.adx", ReadAscii(image, 0x0096B8FC, 9));
		Assert.Equal("f256_ad_pic_2", ReadAscii(image, 0x008F8524, 13));
		Assert.Equal("f256_backtext", ReadAscii(image, 0x008F8558, 13));
	}

	private static string ReadAscii(GuestImage image, uint address, int length)
	{
		byte[] bytes = new byte[length];
		image.ReadBytes(address, bytes);
		return Encoding.ASCII.GetString(bytes);
	}

	private static string? FindImage()
	{
		string? configured = Environment.GetEnvironmentVariable("PSOBB_IMAGE");
		if (!string.IsNullOrEmpty(configured))
			return File.Exists(configured) ? configured : null;
		for (DirectoryInfo? directory = new(AppContext.BaseDirectory); directory is not null; directory = directory.Parent)
		{
			string candidate = Path.Combine(directory.FullName, "src", "image.bin");
			if (File.Exists(candidate) && Directory.Exists(Path.Combine(directory.FullName, "recomp")))
				return candidate;
		}
		return null;
	}

	private static void Press(SaveGameScene scene, InputManager input, MemoryGameInput source, GameKey key)
	{
		source.SetKey(key, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		source.SetKey(key, false);
		input.Update(TimeSpan.Zero);
	}

	private sealed class RecordingTextSurface : IUiTextSurface
	{
		public List<(string? Text, Vector2 Position, uint Color)> Draws { get; } = [];

		public float Measure(string? text) => (text?.Length ?? 0) * 8f;

		public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
			=> Draws.Add((text, position, color));
	}
}
