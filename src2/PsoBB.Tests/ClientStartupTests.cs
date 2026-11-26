using PsoBB.Client;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks that the client start-up runs from the constructed host services with in-memory doubles.
/// </summary>
[Collection("Game state")]
public sealed class ClientStartupTests : IDisposable
{
    public ClientStartupTests() => GameState.Reset();

    public void Dispose() => GameState.Reset();

    [Fact]
    public void AClientStartupRequiresAHost()
    {
        Assert.Throws<ArgumentNullException>(() => new ClientStartup(null!));
    }

    [Fact]
    public void TheStartupRunsFromTheHostImageAndRendererSettings()
    {
        using RecordingRenderer renderer = new(new RenderSettings(1280, 720, true, 8, true));
        ManualGameClock clock = new(new DateTimeOffset(2026, 11, 26, 12, 0, 0, TimeSpan.Zero));
        using ClientHost host = new(
            new ClientOptions("data"),
            CreateFileSystem(),
            clock,
            new MemoryGameSettings(),
            new MemoryGameInput(),
            new SingleThreadedDispatcher(clock),
            new SilentAudioDevice(),
            renderer);
        GameStartupResult result = new ClientStartup(host).Start();
        Assert.Equal(6, result.Stages.Count);
        Assert.Equal(1280u, GameState.DisplayWidth);
        Assert.Equal(720u, GameState.DisplayHeight);
        Assert.Equal(0u, GameState.Fullscreen);
        Assert.Equal(0x007A6358u, GameState.ExitHandler);
        Assert.Equal(TestGameImage.SceneCount, result.Scenes.Scenes.Count);
        Assert.False(result.IsComplete);
        Assert.Empty(renderer.Commands);
    }

    private static MemoryFileSystem CreateFileSystem()
    {
        MemoryFileSystem fileSystem = new();
        using IGameFile file = fileSystem.Open(GamePath.Parse(ClientOptions.DefaultImageFileName), GameFileAccess.Write, GameFileMode.CreateNew)
            ?? throw new InvalidOperationException("The memory file system refused to create the image.");
        file.Write(TestGameImage.Create());
        return fileSystem;
    }
}
