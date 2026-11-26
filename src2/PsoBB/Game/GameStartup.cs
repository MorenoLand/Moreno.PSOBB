using PsoBB.Graphics;

namespace PsoBB.Game;

/// <summary>
/// Runs the ported game-owned start-up stages in their original order.
/// </summary>
/// <remarks>
/// The host creates the window, renderer and input first. This type applies the display mode,
/// initialises the baked scene library and registers the two original hooks;
/// <see cref="EngineBoundaryAddress"/> marks the first unported engine step.
/// </remarks>
public sealed class GameStartup
{
    /// <summary>
    /// The custom window message handler the engine registers.
    /// </summary>
    public const int WindowMessageHandlerAddress = 0x007A0334;

    /// <summary>
    /// The exit handler the engine registers.
    /// </summary>
    public const int ExitHandlerAddress = 0x007A6358;

    /// <summary>
    /// The first engine initialisation step that is not ported: the allocator thunk at 0x0082E940.
    /// </summary>
    public const int EngineBoundaryAddress = 0x0082E940;
    private readonly RenderSettings _settings;

    /// <summary>
    /// Creates a start-up runner over the host renderer settings.
    /// </summary>
    /// <param name="settings">The renderer settings the host already applied to its window.</param>
    public GameStartup(RenderSettings settings) => _settings = settings;

    /// <summary>
    /// Runs every ported start-up stage and reports the first unported engine step.
    /// </summary>
    /// <returns>The completed stages, the scene library and the boundary.</returns>
    public GameStartupResult Start()
    {
        List<GameStartupStage> stages = [];
        stages.Add(new("Scene selection flag", 0x00ACBEC0, "Baked shipped value zero; WinMain override is not ported."));
        SetDisplayMode(!_settings.Windowed, _settings.Width, _settings.Height);
        stages.Add(new("Display mode", 0x0082CADC, "Renderer settings supply the mode the original read at 0x007A6080."));
        SceneManager.SelectInitialScene(GameState.SceneSelection);
        stages.Add(new("Initial scene", 0x007A6454, "Scene identifiers and arguments for the loop at 0x007A5E84."));
        SceneLibrary scenes = SceneLibrary.Load();
        stages.Add(new("Scene library", (int)SceneLibrary.TableAddress, "0x13 baked descriptors of 12 bytes each."));
        SetWindowMessageHandler(WindowMessageHandlerAddress);
        stages.Add(new("Window message handler", 0x0082CB00, "Registers the original custom-message function pointer."));
        SetExitHandler(ExitHandlerAddress);
        stages.Add(new("Exit handler", 0x0082D330, "Registers the original exit function pointer."));
        return new(stages, scenes, EngineBoundaryAddress, false);
    }

    /// <summary>
    /// Stores the requested display mode the window is created from.
    /// </summary>
    /// <param name="fullscreen">Whether the client presents fullscreen.</param>
    /// <param name="width">The display width.</param>
    /// <param name="height">The display height.</param>
    [Original(0x0082CADC)]
    public static void SetDisplayMode(bool fullscreen, int width, int height)
    {
        GameState.Fullscreen = fullscreen ? 1u : 0u;
        GameState.DisplayWidth = (uint)width;
        GameState.DisplayHeight = (uint)height;
    }

    /// <summary>
    /// Stores the original function pointer in the two sixteen-bit halves the message hook reads.
    /// </summary>
    /// <param name="address">The original function address.</param>
    [Original(0x0082CB00)]
    public static void SetWindowMessageHandler(uint address)
    {
        GameState.WindowMessageHandlerHigh = address >> 16;
        GameState.WindowMessageHandlerLow = address & 0xFFFF;
    }

    /// <summary>
    /// Stores the original exit function pointer.
    /// </summary>
    /// <param name="address">The original function address.</param>
    [Original(0x0082D330)]
    public static void SetExitHandler(uint address) => GameState.ExitHandler = address;

    /// <summary>
    /// Stores the original shutdown function pointer.
    /// </summary>
    /// <param name="address">The original function address.</param>
    [Original(0x0082D33C)]
    public static void SetShutdownHandler(uint address) => GameState.ShutdownHandler = address;
}
