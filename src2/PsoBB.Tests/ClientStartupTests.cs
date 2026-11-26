using PsoBB.Client;
using PsoBB.Game;
using PsoBB.Graphics;

namespace PsoBB.Tests;

/// <summary>
/// Checks that the client start-up runs from the constructed host renderer alone.
/// </summary>
[Collection("Game state")]
public sealed class ClientStartupTests : IDisposable
{
    public ClientStartupTests() => GameState.Reset();

    public void Dispose() => GameState.Reset();

    [Fact]
    public void AClientStartupRequiresARenderer()
    {
        Assert.Throws<ArgumentNullException>(() => new ClientStartup(null!));
    }

    [Fact]
    public void TheStartupRunsFromTheRendererSettings()
    {
        using RecordingRenderer renderer = new(new RenderSettings(1280, 720, true, 8, true));
        GameStartupResult result = new ClientStartup(renderer).Start();
        Assert.Equal(6, result.Stages.Count);
        Assert.Equal(1280u, GameState.DisplayWidth);
        Assert.Equal(720u, GameState.DisplayHeight);
        Assert.Equal(0u, GameState.Fullscreen);
        Assert.Equal(0x007A6358u, GameState.ExitHandler);
        Assert.Equal(SceneLibrary.SceneCount, result.Scenes.Scenes.Count);
        Assert.False(result.IsComplete);
        Assert.Empty(renderer.Commands);
    }
}
