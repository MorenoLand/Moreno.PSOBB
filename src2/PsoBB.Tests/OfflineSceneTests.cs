using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scene;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks scene 10's initialiser table, save and light loads, flag transitions, cancel and release.
/// </summary>
[Collection("Game state")]
public sealed class OfflineSceneTests : IDisposable
{
	public OfflineSceneTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void InitialiseLoadsTheSaveAndLightTableAndStoresSceneParameterAndRoot()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		Assert.True(scene.HasCharacterSave);
		Assert.Equal(OfflineScene.CharacterFileLength, scene.CharacterSave.Length);
		Assert.NotNull(scene.LightTable);
		Assert.Equal(1, scene.LightTable.Count);
		Assert.Equal(OfflineScene.SceneParameter, GameState.SceneParameter);
		Assert.Equal(OfflineScene.SceneNumber, GameState.RootScene);
		Assert.False(scene.IsGameStarted);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void MissingCharacterSaveRequestsARestartButStillStoresTheScene()
	{
		using DataFileRegistry files = Registry(includeSave: false);
		using OfflineScene scene = new(files);
		Assert.False(scene.HasCharacterSave);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
		Assert.Equal(OfflineScene.SceneParameter, GameState.SceneParameter);
		Assert.Equal(OfflineScene.SceneNumber, GameState.RootScene);
	}

	[Fact]
	public void ShortCharacterSaveIsRejected()
	{
		using DataFileRegistry files = Registry(saveLength: OfflineScene.CharacterFileLength - 1);
		using OfflineScene scene = new(files);
		Assert.False(scene.HasCharacterSave);
		Assert.Equal(3u, GameState.SceneTransition);
	}

	[Fact]
	public void MissingLightTableIsTolerated()
	{
		using DataFileRegistry files = Registry(includeLight: false);
		using OfflineScene scene = new(files);
		Assert.Null(scene.LightTable);
		Assert.True(scene.HasCharacterSave);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void TheInitTableKeepsTheOriginalPairsAndOrder()
	{
		Assert.Equal(OfflineScene.InitEntryCount, OfflineScene.InitTable.Count);
		Assert.Equal(new OfflineScene.SceneInitEntry(0x00792818, 0x00000000), OfflineScene.InitTable[0]);
		Assert.Equal(new OfflineScene.SceneInitEntry(0x00796708, 0x00793F48), OfflineScene.InitTable[17]);
		Assert.Equal(new OfflineScene.SceneInitEntry(0x0077D644, 0x0077D644), OfflineScene.InitTable[^1]);
	}

	[Fact]
	public void MapCompletionStartsTheFieldAndClearsTheSceneEvent()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		SceneManager.SetMapLoaded();
		SceneManager.SetSceneEvent();
		scene.Update(Input());
		Assert.True(scene.IsGameStarted);
		Assert.True(SceneManager.MapLoaded);
		Assert.False(SceneManager.SceneEvent);
	}

	[Fact]
	public void StartupSceneEventDoesNotStartTheField()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		SceneManager.SetSceneEvent();
		scene.Update(Input());
		Assert.False(scene.IsGameStarted);
		Assert.True(SceneManager.SceneEvent);
	}

	[Fact]
	public void FieldUpdateConsumesTheSceneEventBeforeTheMapFlag()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		GameState.GameStarted = 1;
		SceneManager.SetSceneEvent();
		SceneManager.SetMapLoaded();
		scene.Update(Input());
		Assert.False(SceneManager.SceneEvent);
		Assert.True(SceneManager.MapLoaded);
		scene.Update(Input());
		Assert.False(SceneManager.MapLoaded);
	}

	[Fact]
	public void CancelInStartupRequestsARestartAndClearsTheFlags()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		SceneManager.SetMapLoaded();
		SceneManager.SetSceneEvent();
		scene.Update(Input(GameKey.Escape));
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
		Assert.False(scene.IsGameStarted);
		Assert.False(SceneManager.MapLoaded);
		Assert.False(SceneManager.SceneEvent);
	}

	[Fact]
	public void CancelInTheFieldResetsTheGameAndRequestsARestart()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		GameState.GameStarted = 1;
		SceneManager.SetMapLoaded();
		SceneManager.SetSceneEvent();
		scene.Update(Input(GameKey.Escape));
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(3u, GameState.SceneTransition);
		Assert.False(scene.IsGameStarted);
		Assert.False(SceneManager.MapLoaded);
		Assert.False(SceneManager.SceneEvent);
	}

	[Fact]
	public void DrawAddsNoSceneOwnedGeometry()
	{
		using DataFileRegistry files = Registry();
		using OfflineScene scene = new(files);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Empty(draw.Quads);
		draw.Render(renderer);
		Assert.Empty(renderer.Commands);
		Assert.Equal(0, renderer.CreatedTextureCount);
	}

	[Fact]
	public void ReleaseResetsTheGameAndIsIdempotent()
	{
		using DataFileRegistry files = Registry();
		OfflineScene scene = new(files);
		GameState.GameStarted = 1;
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.False(scene.IsGameStarted);
		Assert.True(scene.CharacterSave.IsEmpty);
		Assert.Null(scene.LightTable);
	}

	[Fact]
	public void UpdateAndDrawRejectAReleasedScene()
	{
		using DataFileRegistry files = Registry();
		OfflineScene scene = new(files);
		scene.Dispose();
		Assert.Throws<ObjectDisposedException>(() => scene.Update(Input()));
		Assert.Throws<ObjectDisposedException>(() => scene.Draw(new UiDrawList()));
	}

	[Fact]
	public void LoadsTheRetailLightTableWhenItIsPresent()
	{
		string? path = FindRetailFile(OfflineScene.LightTableName);
		if (path is null)
			return;
		MemoryFileSystem fileSystem = new();
		SceneSamples.AddFile(fileSystem, OfflineScene.LightTableName, File.ReadAllBytes(path));
		SceneSamples.AddFile(fileSystem, OfflineScene.CharacterFileName, new byte[OfflineScene.CharacterFileLength]);
		using DataFileRegistry files = new(fileSystem);
		using OfflineScene scene = new(files);
		Assert.NotNull(scene.LightTable);
		Assert.Equal(96, scene.LightTable.Count);
	}

	private static DataFileRegistry Registry(bool includeSave = true, bool includeLight = true, int saveLength = OfflineScene.CharacterFileLength)
	{
		MemoryFileSystem fileSystem = new();
		if (includeLight)
			SceneSamples.AddFile(fileSystem, OfflineScene.LightTableName, SceneSamples.Lights());
		if (includeSave)
			SceneSamples.AddFile(fileSystem, OfflineScene.CharacterFileName, new byte[saveLength]);
		return new DataFileRegistry(fileSystem);
	}

	private static InputManager Input(GameKey? pressed = null)
	{
		MemoryGameInput source = new();
		if (pressed is GameKey key)
			source.SetKey(key, true);
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		return input;
	}

	private static string? FindRetailFile(string name)
	{
		for (DirectoryInfo? directory = new(AppContext.BaseDirectory); directory is not null; directory = directory.Parent)
		{
			string candidate = Path.Combine(directory.FullName, "bin", "data", name);
			if (File.Exists(candidate))
				return candidate;
		}
		return null;
	}
}
