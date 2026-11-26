using PsoBB.Game;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the one complete scene-2 path function: the selector transition at 0x00824860.
/// </summary>
[Collection("Game state")]
public sealed class Scene2Tests : IDisposable
{
	public Scene2Tests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void TheSelectorTransitionSavesTheStateSelectsNineAndStartsTheFade()
	{
		GameState.SceneScreenState = 7;
		GameState.PreviousSceneScreenState = 3;
		GameState.SceneFadeState = 0;
		Scene2.SelectSharedScreenState();
		Assert.Equal(9u, GameState.SceneScreenState);
		Assert.Equal(7u, GameState.PreviousSceneScreenState);
		Assert.Equal(1u, GameState.SceneFadeState);
	}

	[Fact]
	public void ResetRestoresTheImageValuesOfTheSharedScreenState()
	{
		GameState.SceneScreenState = 1;
		GameState.PreviousSceneScreenState = 2;
		GameState.SceneFadeState = 2;
		GameState.Reset();
		Assert.Equal(0xCu, GameState.SceneScreenState);
		Assert.Equal(0xCu, GameState.PreviousSceneScreenState);
		Assert.Equal(0u, GameState.SceneFadeState);
	}

	[Fact]
	public void TheSceneDescriptorUsesTheSharedCallbacks()
	{
		SceneLibrary.SceneDescriptor descriptor = SceneLibrary.Table[(int)Scene2.SceneNumber];
		Assert.Equal(0x00824934u, descriptor.Callback0);
		Assert.Equal(0x0081AA00u, descriptor.Callback1);
		Assert.Equal(0x0081E160u, descriptor.Callback2);
	}
}
