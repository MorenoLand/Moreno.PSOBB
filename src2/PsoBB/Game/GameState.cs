using PsoBB.Core;

namespace PsoBB.Game;

/// <summary>
/// Process-wide display, hook and scene state the client writes during start-up.
/// </summary>
/// <remarks>
/// <see cref="Reset"/> restores the pre-start-up values so tests never share state. The scene
/// selection flag is the only member read from the data image; the rest are outputs of start-up.
/// </remarks>
public static class GameState
{
    /// <summary>
    /// The flag that selects scene 1 or scene 18 when the scene table is initialised.
    /// </summary>
    [OriginalGlobal(0x00ACBEC0)]
    public static uint SceneSelection { get; set; }

    /// <summary>
    /// Gets or sets the high sixteen bits of the registered window message handler.
    /// </summary>
    [OriginalGlobal(0x00ACBEB0)]
    public static uint WindowMessageHandlerHigh { get; set; }

    /// <summary>
    /// Gets or sets the low sixteen bits of the registered window message handler.
    /// </summary>
    [OriginalGlobal(0x00ACBEB8)]
    public static uint WindowMessageHandlerLow { get; set; }

    /// <summary>
    /// Gets or sets the registered shutdown function pointer.
    /// </summary>
    [OriginalGlobal(0x00ACBEBC)]
    public static uint ShutdownHandler { get; set; }

    /// <summary>
    /// Gets or sets the registered exit function pointer.
    /// </summary>
    [OriginalGlobal(0x00ACBEE0)]
    public static uint ExitHandler { get; set; }

    /// <summary>
    /// Gets or sets the requested fullscreen flag the window is created with.
    /// </summary>
    [OriginalGlobal(0x00ACBE78)]
    public static uint Fullscreen { get; set; }

    /// <summary>
    /// Gets or sets the requested display width.
    /// </summary>
    [OriginalGlobal(0x00ACBE7C)]
    public static uint DisplayWidth { get; set; }

    /// <summary>
    /// Gets or sets the requested display height.
    /// </summary>
    [OriginalGlobal(0x00ACBE80)]
    public static uint DisplayHeight { get; set; }

    /// <summary>
    /// Gets or sets the scene that is currently running.
    /// </summary>
    [OriginalGlobal(0x00AAB384)]
    public static uint CurrentScene { get; set; }

    /// <summary>
    /// Gets or sets the scene the next loop iteration switches to.
    /// </summary>
    [OriginalGlobal(0x00AAB388)]
    public static uint RequestedScene { get; set; }

    /// <summary>
    /// Gets or sets the scene a root-scene request returns to.
    /// </summary>
    [OriginalGlobal(0x00AAB38C)]
    public static uint RootScene { get; set; }

    /// <summary>
    /// Gets or sets the scene parameter supplied by scene code.
    /// </summary>
    [OriginalGlobal(0x00AAB390)]
    public static uint SceneParameter { get; set; }

    /// <summary>
    /// Gets or sets the transition kind the scene loop consumes.
    /// </summary>
    [OriginalGlobal(0x00AAB394)]
    public static uint SceneTransition { get; set; }

    /// <summary>
    /// Gets or sets the scene that ran before the last transition.
    /// </summary>
    [OriginalGlobal(0x00AAB398)]
    public static uint PreviousScene { get; set; }

    /// <summary>
    /// Gets or sets the first scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB39C)]
    public static uint SceneArgument0 { get; set; }

    /// <summary>
    /// Gets or sets the second scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A0)]
    public static uint SceneArgument1 { get; set; }

    /// <summary>
    /// Gets or sets the third scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A4)]
    public static uint SceneArgument2 { get; set; }

    /// <summary>
    /// Gets or sets the fourth scene argument.
    /// </summary>
    [OriginalGlobal(0x00AAB3A8)]
    public static uint SceneArgument3 { get; set; }

    /// <summary>
    /// Restores every member to its pre-start-up value.
    /// </summary>
    public static void Reset()
    {
        SceneSelection = 0;
        WindowMessageHandlerHigh = 0;
        WindowMessageHandlerLow = 0;
        ShutdownHandler = 0;
        ExitHandler = 0;
        Fullscreen = 0;
        DisplayWidth = 0;
        DisplayHeight = 0;
        CurrentScene = 0;
        RequestedScene = 0;
        RootScene = 0;
        SceneParameter = 0;
        SceneTransition = 0;
        PreviousScene = 0;
        SceneArgument0 = 0;
        SceneArgument1 = 0;
        SceneArgument2 = 0;
        SceneArgument3 = 0;
    }

    /// <summary>
    /// Reads the scene selection flag from the data image.
    /// </summary>
    /// <param name="image">The data image that maps the flag.</param>
    /// <returns>The flag value.</returns>
    public static uint ReadSceneSelection(GuestImage image)
    {
        ArgumentNullException.ThrowIfNull(image);
        return image.ReadUInt32(0x00ACBEC0);
    }
}
