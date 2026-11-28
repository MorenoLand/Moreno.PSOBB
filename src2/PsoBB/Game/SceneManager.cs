namespace PsoBB.Game;

/// <summary>
/// The scene selection protocol the client uses to leave one scene and enter the next.
/// </summary>
/// <remarks>
/// Scene number zero stops the scene loop, which then runs the engine shutdown sequence.
/// </remarks>
public static class SceneManager
{
    /// <summary>
    /// The scene number that ends the scene loop.
    /// </summary>
    public const uint ExitScene = 0;

    /// <summary>
    /// Selects scene 1, or scene 18 when <paramref name="sceneSelection"/> is nonzero, and clears
    /// the stored scene arguments.
    /// </summary>
    /// <param name="sceneSelection">The start-up selection flag.</param>
    [Original(0x007A6454)]
    public static void SelectInitialScene(uint sceneSelection)
    {
        uint scene = sceneSelection == 0 ? 1u : 0x12u;
        GameState.CurrentScene = scene;
        GameState.RootScene = scene;
        GameState.SceneParameter = scene;
        GameState.PreviousScene = scene;
        GameState.SceneArgument0 = 0;
        GameState.SceneArgument1 = 0;
        GameState.SceneArgument2 = 0;
        GameState.SceneArgument3 = 0;
    }

    /// <summary>
    /// Requests a transition to <paramref name="scene"/>.
    /// </summary>
    /// <param name="scene">The destination scene number.</param>
    [Original(0x007A60DC)]
    public static void RequestScene(uint scene)
    {
        GameState.SceneTransition = 1;
        GameState.RequestedScene = scene;
    }

    /// <summary>
    /// Requests a transition back to the root scene.
    /// </summary>
    [Original(0x007A60F0)]
    public static void RequestRootScene()
    {
        uint scene = GameState.RootScene;
        GameState.SceneTransition = 2;
        GameState.RequestedScene = scene;
    }

    /// <summary>
    /// Requests a restart of the scene loop from the exit scene.
    /// </summary>
    [Original(0x007A6174)]
    public static void RequestRestart()
    {
        GameState.RequestedScene = ExitScene;
        GameState.SceneTransition = 3;
    }

    /// <summary>
    /// Stores the scene the root-scene request returns to.
    /// </summary>
    /// <param name="scene">The root scene number.</param>
    [Original(0x007A618C)]
    public static void SetRootScene(uint scene) => GameState.RootScene = scene;

    /// <summary>
    /// Stores the scene parameter supplied by scene code.
    /// </summary>
    /// <param name="value">The parameter value.</param>
    [Original(0x007A6198)]
    public static void SetSceneParameter(uint value) => GameState.SceneParameter = value;

    /// <summary>
    /// Gets a value indicating whether the map loader has raised the floor-ready flag.
    /// </summary>
    [Original(0x007A616C)]
    public static bool MapLoaded => GameState.MapLoaded != 0;

    /// <summary>
    /// Raises the floor-ready flag the scene updates consume.
    /// </summary>
    [Original(0x007A6160)]
    public static void SetMapLoaded() => GameState.MapLoaded = 1;

    /// <summary>
    /// Clears the floor-ready flag.
    /// </summary>
    [Original(0x007A6154)]
    public static void ClearMapLoaded() => GameState.MapLoaded = 0;

    /// <summary>
    /// Gets a value indicating whether a scene system has raised its update flag.
    /// </summary>
    [Original(0x007A6120)]
    public static bool SceneEvent => GameState.SceneEvent != 0;

    /// <summary>
    /// Raises the scene-system update flag.
    /// </summary>
    [Original(0x007A6114)]
    public static void SetSceneEvent() => GameState.SceneEvent = 1;

    /// <summary>
    /// Clears the scene-system update flag.
    /// </summary>
    [Original(0x007A6108)]
    public static void ClearSceneEvent() => GameState.SceneEvent = 0;

    /// <summary>
    /// Gets the scene that is currently running.
    /// </summary>
    /// <returns>The current scene number.</returns>
    [Original(0x007A61A4)]
    public static uint GetCurrentScene() => GameState.CurrentScene;

    /// <summary>
    /// Gets the scene that ran before the last transition.
    /// </summary>
    /// <returns>The previous scene number.</returns>
    [Original(0x007A61AC)]
    public static uint GetPreviousScene() => GameState.PreviousScene;

    /// <summary>
    /// Requests a transition to the exit scene.
    /// </summary>
    [Original(0x007A62DC)]
    public static void RequestExit()
    {
        GameState.RequestedScene = ExitScene;
        GameState.SceneTransition = 1;
    }
}
