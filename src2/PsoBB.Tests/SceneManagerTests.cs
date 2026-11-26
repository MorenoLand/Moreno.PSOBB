using PsoBB.Game;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene selection and transition state machine against the original values.
/// </summary>
[Collection("Game state")]
public sealed class SceneManagerTests : IDisposable
{
    public SceneManagerTests() => GameState.Reset();

    public void Dispose() => GameState.Reset();

    [Fact]
    public void WithoutASelectionTheFirstSceneRuns()
    {
        SceneManager.SelectInitialScene(0);
        Assert.Equal(1u, GameState.CurrentScene);
        Assert.Equal(1u, GameState.RootScene);
        Assert.Equal(1u, GameState.SceneParameter);
        Assert.Equal(1u, GameState.PreviousScene);
    }

    [Fact]
    public void WithASelectionSceneEighteenRuns()
    {
        SceneManager.SelectInitialScene(1);
        Assert.Equal(0x12u, GameState.CurrentScene);
        Assert.Equal(0x12u, GameState.RootScene);
        Assert.Equal(0x12u, GameState.SceneParameter);
        Assert.Equal(0x12u, GameState.PreviousScene);
    }

    [Fact]
    public void SelectingTheInitialSceneClearsTheArguments()
    {
        GameState.SceneArgument0 = 1;
        GameState.SceneArgument1 = 2;
        GameState.SceneArgument2 = 3;
        GameState.SceneArgument3 = 4;
        SceneManager.SelectInitialScene(1);
        Assert.Equal(0u, GameState.SceneArgument0);
        Assert.Equal(0u, GameState.SceneArgument1);
        Assert.Equal(0u, GameState.SceneArgument2);
        Assert.Equal(0u, GameState.SceneArgument3);
    }

    [Fact]
    public void SelectingTheInitialSceneLeavesThePendingTransitionAlone()
    {
        GameState.RequestedScene = 7;
        GameState.SceneTransition = 3;
        SceneManager.SelectInitialScene(0);
        Assert.Equal(7u, GameState.RequestedScene);
        Assert.Equal(3u, GameState.SceneTransition);
    }

    [Fact]
    public void ARootRequestUsesTheStoredRootScene()
    {
        SceneManager.SetRootScene(9);
        SceneManager.RequestRootScene();
        Assert.Equal(9u, GameState.RequestedScene);
        Assert.Equal(2u, GameState.SceneTransition);
    }

    [Fact]
    public void ASceneRequestUsesThePushTransition()
    {
        SceneManager.RequestScene(5);
        Assert.Equal(5u, GameState.RequestedScene);
        Assert.Equal(1u, GameState.SceneTransition);
    }

    [Fact]
    public void ARestartRequestReturnsToTheExitScene()
    {
        SceneManager.RequestRestart();
        Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
        Assert.Equal(3u, GameState.SceneTransition);
    }

    [Fact]
    public void AnExitRequestReturnsToTheExitScene()
    {
        SceneManager.RequestExit();
        Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
        Assert.Equal(1u, GameState.SceneTransition);
    }

    [Fact]
    public void TheGetAccessorsReadTheOriginalGlobals()
    {
        GameState.CurrentScene = 4;
        GameState.PreviousScene = 3;
        Assert.Equal(4u, SceneManager.GetCurrentScene());
        Assert.Equal(3u, SceneManager.GetPreviousScene());
    }

    [Fact]
    public void TheSceneParameterIsStored()
    {
        SceneManager.SetSceneParameter(11);
        Assert.Equal(11u, GameState.SceneParameter);
    }
}
