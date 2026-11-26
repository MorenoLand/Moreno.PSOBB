using PsoBB.Game;
using PsoBB.Graphics;

namespace PsoBB.Client;

/// <summary>
/// Runs the game-owned start-up after the host has constructed its services.
/// </summary>
/// <remarks>
/// The host owns the window, renderer, input, audio and message loop. This type only needs the
/// renderer whose settings the host already applied.
/// </remarks>
public sealed class ClientStartup
{
    private readonly IRenderer _renderer;

    /// <summary>
    /// Creates the start-up runner for a constructed host renderer.
    /// </summary>
    /// <param name="renderer">The renderer whose settings the game start-up uses.</param>
    /// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
    public ClientStartup(IRenderer renderer)
    {
        ArgumentNullException.ThrowIfNull(renderer);
        _renderer = renderer;
    }

    /// <summary>
    /// Runs the ported game start-up stages.
    /// </summary>
    /// <returns>The completed stages, the scene library and the first unported engine step.</returns>
    public GameStartupResult Start() => new GameStartup(_renderer.Settings).Start();
}
