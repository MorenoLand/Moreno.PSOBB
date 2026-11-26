namespace PsoBB.Game;

/// <summary>
/// The result of the ported game start-up.
/// </summary>
/// <param name="Stages">The completed stages in execution order.</param>
/// <param name="Scenes">The scene table read from the data image.</param>
/// <param name="BoundaryAddress">The first original start-up step that is not ported.</param>
/// <param name="IsComplete">Whether every original start-up step before the first frame is ported.</param>
public sealed record GameStartupResult(
    IReadOnlyList<GameStartupStage> Stages,
    SceneLibrary Scenes,
    int BoundaryAddress,
    bool IsComplete);
