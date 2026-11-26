namespace PsoBB.Game;

/// <summary>
/// Process-wide display, hook and scene state the client writes during start-up.
/// </summary>
/// <remarks>
/// Most members sit in the zero-filled uninitialised data gap and start at zero. The two shared
/// scene-screen states at <c>0x00A165F0</c> and <c>0x00A165F8</c> are mapped by the shipped image
/// with the value <see cref="SceneScreenInitialValue"/>. <see cref="Reset"/> restores those values.
/// </remarks>
public static class GameState
{
    /// <summary>
    /// The value the shipped image supplies for every member in this class.
    /// </summary>
    public const uint InitialValue = 0;

    /// <summary>
    /// The value the shipped image supplies for the two shared scene-screen states at
    /// <c>0x00A165F0</c> and <c>0x00A165F8</c>.
    /// </summary>
    public const uint SceneScreenInitialValue = 0xC;

    /// <summary>
    /// The flag that selects scene 1 or scene 18 when the scene table is initialised.
    /// </summary>
    [OriginalGlobal(0x00ACBEC0)]
    public static uint SceneSelection { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the high sixteen bits of the registered window message handler.
    /// </summary>
    [OriginalGlobal(0x00ACBEB0)]
    public static uint WindowMessageHandlerHigh { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the low sixteen bits of the registered window message handler.
    /// </summary>
    [OriginalGlobal(0x00ACBEB8)]
    public static uint WindowMessageHandlerLow { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the registered shutdown function pointer.
    /// </summary>
    [OriginalGlobal(0x00ACBEBC)]
    public static uint ShutdownHandler { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the registered exit function pointer.
    /// </summary>
    [OriginalGlobal(0x00ACBEE0)]
    public static uint ExitHandler { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the requested fullscreen flag the window is created with.
    /// </summary>
    [OriginalGlobal(0x00ACBE78)]
    public static uint Fullscreen { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the requested display width.
    /// </summary>
    [OriginalGlobal(0x00ACBE7C)]
    public static uint DisplayWidth { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the requested display height.
    /// </summary>
    [OriginalGlobal(0x00ACBE80)]
    public static uint DisplayHeight { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the scene that is currently running.
    /// </summary>
    [OriginalGlobal(0x00AAB384)]
    public static uint CurrentScene { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the scene the next loop iteration switches to.
    /// </summary>
    [OriginalGlobal(0x00AAB388)]
    public static uint RequestedScene { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the scene a root-scene request returns to.
    /// </summary>
    [OriginalGlobal(0x00AAB38C)]
    public static uint RootScene { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the scene parameter supplied by scene code.
    /// </summary>
    [OriginalGlobal(0x00AAB390)]
    public static uint SceneParameter { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the transition kind the scene loop consumes.
    /// </summary>
    [OriginalGlobal(0x00AAB394)]
    public static uint SceneTransition { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the scene that ran before the last transition.
    /// </summary>
    [OriginalGlobal(0x00AAB398)]
    public static uint PreviousScene { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the first scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB39C)]
    public static uint SceneArgument0 { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the second scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A0)]
    public static uint SceneArgument1 { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the third scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A4)]
    public static uint SceneArgument2 { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the fourth scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A8)]
    public static uint SceneArgument3 { get; set; } = InitialValue;

    /// <summary>
    /// Gets or sets the shared screen state the current scene selects from.
    /// </summary>
    [OriginalGlobal(0x00A165F0)]
    public static uint SceneScreenState { get; set; } = SceneScreenInitialValue;

    /// <summary>
    /// Gets or sets the screen state that was running before the current screen was selected.
    /// </summary>
    [OriginalGlobal(0x00A165F8)]
    public static uint PreviousSceneScreenState { get; set; } = SceneScreenInitialValue;

    /// <summary>
    /// Gets or sets the shared screen fade state.
    /// </summary>
    [OriginalGlobal(0x00ACA4E4)]
    public static uint SceneFadeState { get; set; } = InitialValue;

    /// <summary>
    /// Restores every member to its baked shipped-image value.
    /// </summary>
    public static void Reset()
    {
        SceneSelection = InitialValue;
        WindowMessageHandlerHigh = InitialValue;
        WindowMessageHandlerLow = InitialValue;
        ShutdownHandler = InitialValue;
        ExitHandler = InitialValue;
        Fullscreen = InitialValue;
        DisplayWidth = InitialValue;
        DisplayHeight = InitialValue;
        CurrentScene = InitialValue;
        RequestedScene = InitialValue;
        RootScene = InitialValue;
        SceneParameter = InitialValue;
        SceneTransition = InitialValue;
        PreviousScene = InitialValue;
        SceneArgument0 = InitialValue;
        SceneArgument1 = InitialValue;
        SceneArgument2 = InitialValue;
        SceneArgument3 = InitialValue;
        SceneScreenState = SceneScreenInitialValue;
        PreviousSceneScreenState = SceneScreenInitialValue;
        SceneFadeState = InitialValue;
    }
}
