using PsoBB.Game;

namespace PsoBB.Client;

/// <summary>
/// Runs the game-owned start-up after the host has constructed its services.
/// </summary>
/// <remarks>
/// The host owns the window, renderer, input, audio and message loop. This type only hands the
/// loaded data image and the renderer's settings to <see cref="GameStartup"/>.
/// </remarks>
public sealed class ClientStartup
{
    private readonly ClientHost _host;

    /// <summary>
    /// Creates the start-up runner for a constructed client host.
    /// </summary>
    /// <param name="host">The host whose image and renderer the game start-up uses.</param>
    /// <exception cref="ArgumentNullException"><paramref name="host"/> is null.</exception>
    public ClientStartup(ClientHost host)
    {
        ArgumentNullException.ThrowIfNull(host);
        _host = host;
    }

    /// <summary>
    /// Runs the ported game start-up stages.
    /// </summary>
    /// <returns>The completed stages, the scene library and the first unported engine step.</returns>
    public GameStartupResult Start() => new GameStartup(_host.DataImage, _host.Renderer.Settings).Start();
}
