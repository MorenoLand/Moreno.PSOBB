using System.Reflection;
using PsoBB.Game;
using PsoBB.Graphics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported game start-up stages, the baked scene table, their order and the boundary.
/// </summary>
[Collection("Game state")]
public sealed class GameStartupTests : IDisposable
{
    public GameStartupTests() => GameState.Reset();

    public void Dispose() => GameState.Reset();

    [Fact]
    public void StartInitialisesThePortedStateInOrder()
    {
        GameState.SceneSelection = 1;
        GameStartupResult result = new GameStartup(new RenderSettings(800, 600, true, 0, true)).Start();
        Assert.Equal(
            ["Scene selection flag", "Display mode", "Initial scene", "Scene library", "Window message handler", "Exit handler"],
            result.Stages.Select(stage => stage.Name));
        Assert.Equal([0x00ACBEC0, 0x0082CADC, 0x007A6454, 0x009FF7C0, 0x0082CB00, 0x0082D330], result.Stages.Select(stage => stage.Address));
        Assert.Equal(0u, GameState.Fullscreen);
        Assert.Equal(800u, GameState.DisplayWidth);
        Assert.Equal(600u, GameState.DisplayHeight);
        Assert.Equal(0x12u, GameState.CurrentScene);
        Assert.Equal(0x12u, GameState.RootScene);
        Assert.Equal(0x12u, GameState.SceneParameter);
        Assert.Equal(0x12u, GameState.PreviousScene);
        Assert.Equal(0u, GameState.SceneArgument0);
        Assert.Equal(0x007Au, GameState.WindowMessageHandlerHigh);
        Assert.Equal(0x0334u, GameState.WindowMessageHandlerLow);
        Assert.Equal(0x007A6358u, GameState.ExitHandler);
        Assert.Equal(SceneLibrary.SceneCount, result.Scenes.Scenes.Count);
        Assert.Equal(0x007A45D0u, result.Scenes.Scenes[1].Callback0);
        Assert.Equal(0x0070ADE8u, result.Scenes.Scenes[^1].Callback2);
        Assert.False(result.IsComplete);
        Assert.Equal(0x0082E940, result.BoundaryAddress);
    }

    [Fact]
    public void FullscreenSettingsStoreTheFullscreenFlag()
    {
        GameStartupResult result = new GameStartup(new RenderSettings(1024, 768, false, 4, true)).Start();
        Assert.Equal(1u, GameState.Fullscreen);
        Assert.Equal(1024u, GameState.DisplayWidth);
        Assert.Equal(768u, GameState.DisplayHeight);
        Assert.Equal(1u, GameState.CurrentScene);
        Assert.Equal(6, result.Stages.Count);
    }

    [Fact]
    public void TheBakedSceneTableMatchesTheShippedImage()
    {
        Assert.Equal(0x009FF7C0u, SceneLibrary.TableAddress);
        Assert.Equal(12, SceneLibrary.DescriptorSize);
        Assert.Equal(0x13, SceneLibrary.SceneCount);
        Assert.Equal(0xE4, SceneLibrary.TableLength);
        IReadOnlyList<SceneLibrary.SceneDescriptor> scenes = SceneLibrary.Table;
        Assert.Equal(0x13, scenes.Count);
        Assert.Equal(new SceneLibrary.SceneDescriptor(0, 0, 0, 0), scenes[0]);
        Assert.Equal(new SceneLibrary.SceneDescriptor(1, 0x007A45D0, 0x007A4418, 0x007A44D0), scenes[1]);
        Assert.Equal(new SceneLibrary.SceneDescriptor(14, 0, 0, 0), scenes[14]);
        Assert.Equal(new SceneLibrary.SceneDescriptor(18, 0x0070AE9C, 0x0070AD94, 0x0070ADE8), scenes[18]);
    }

    [Fact]
    public void ResetRestoresTheBakedValues()
    {
        GameState.SceneSelection = 3;
        GameState.CurrentScene = 4;
        GameState.WindowMessageHandlerHigh = 5;
        GameState.Reset();
        Assert.Equal(GameState.InitialValue, GameState.SceneSelection);
        Assert.Equal(GameState.InitialValue, GameState.CurrentScene);
        Assert.Equal(GameState.InitialValue, GameState.WindowMessageHandlerHigh);
        Assert.Equal(0u, GameState.InitialValue);
    }

    [Fact]
    public void HookRegistrationsReproduceTheOriginalGlobals()
    {
        GameStartup.SetWindowMessageHandler(0x007A0334);
        GameStartup.SetExitHandler(0x007A6358);
        GameStartup.SetShutdownHandler(0x007A6374);
        Assert.Equal(0x007Au, GameState.WindowMessageHandlerHigh);
        Assert.Equal(0x0334u, GameState.WindowMessageHandlerLow);
        Assert.Equal(0x007A6358u, GameState.ExitHandler);
        Assert.Equal(0x007A6374u, GameState.ShutdownHandler);
    }

    [Fact]
    public void MembersDeclareTheirOriginalAddress()
    {
        Dictionary<string, int> expected = new()
        {
            ["SceneSelection"] = 0x00ACBEC0,
            ["WindowMessageHandlerHigh"] = 0x00ACBEB0,
            ["WindowMessageHandlerLow"] = 0x00ACBEB8,
            ["ShutdownHandler"] = 0x00ACBEBC,
            ["ExitHandler"] = 0x00ACBEE0,
            ["Fullscreen"] = 0x00ACBE78,
            ["DisplayWidth"] = 0x00ACBE7C,
            ["DisplayHeight"] = 0x00ACBE80,
            ["CurrentScene"] = 0x00AAB384,
            ["RequestedScene"] = 0x00AAB388,
            ["RootScene"] = 0x00AAB38C,
            ["SceneParameter"] = 0x00AAB390,
            ["SceneTransition"] = 0x00AAB394,
            ["PreviousScene"] = 0x00AAB398,
            ["SceneArgument0"] = 0x00AAB39C,
            ["SceneArgument1"] = 0x00AAB3A0,
            ["SceneArgument2"] = 0x00AAB3A4,
            ["SceneArgument3"] = 0x00AAB3A8,
            ["SceneScreenState"] = 0x00A165F0,
            ["PreviousSceneScreenState"] = 0x00A165F8,
            ["SceneFadeState"] = 0x00ACA4E4,
            ["GameStarted"] = 0x00A95624,
            ["MapLoaded"] = 0x00AAB378,
            ["SceneEvent"] = 0x00AAB380,
        };
        PropertyInfo[] members = typeof(GameState).GetProperties(BindingFlags.Public | BindingFlags.Static);
        Assert.Equal(expected.Count, members.Length);
        foreach (PropertyInfo member in members)
        {
            OriginalGlobalAttribute attribute = Assert.IsType<OriginalGlobalAttribute>(member.GetCustomAttribute<OriginalGlobalAttribute>());
            Assert.Equal(expected[member.Name], attribute.Address);
        }
    }
}
