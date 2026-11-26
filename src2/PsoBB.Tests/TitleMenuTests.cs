using System.Numerics;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the title menu selection, repeat, confirmation, transition requests and label quads.
/// </summary>
[Collection("Game state")]
public sealed class TitleMenuTests : IDisposable
{
    private static readonly TitleMenuEntry[] Entries =
    [
        new("ONLINE GAME", TitleMenuAction.OnlineGame, new Vector4(0f, 0f, 1f, 28f / 256f)),
        new("OFFLINE GAME", TitleMenuAction.OfflineGame, new Vector4(0f, 28f / 256f, 1f, 56f / 256f)),
        new("OPTIONS", TitleMenuAction.Options, new Vector4(0f, 56f / 256f, 1f, 84f / 256f)),
        new("HOME PAGES", TitleMenuAction.HomePages, new Vector4(0f, 84f / 256f, 1f, 112f / 256f)),
    ];

    public TitleMenuTests() => GameState.Reset();

    public void Dispose() => GameState.Reset();

    [Fact]
    public void DownAndUpWrapAtTheEnds()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out InputManager input, out MemoryGameInput source);
        Press(input, source, GameKey.Down, menu.Update);
        Assert.Equal(1, menu.SelectedIndex);
        Press(input, source, GameKey.Down, menu.Update);
        Press(input, source, GameKey.Down, menu.Update);
        Press(input, source, GameKey.Down, menu.Update);
        Assert.Equal(0, menu.SelectedIndex);
        Press(input, source, GameKey.Up, menu.Update);
        Assert.Equal(3, menu.SelectedIndex);
    }

    [Fact]
    public void HeldDirectionRepeatsByTheInputRepeatCount()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out InputManager input, out MemoryGameInput source, new KeyRepeatSettings(TimeSpan.FromMilliseconds(100), TimeSpan.FromMilliseconds(50)));
        source.SetKey(GameKey.Down, true);
        input.Update(TimeSpan.Zero);
        menu.Update(input);
        Assert.Equal(1, menu.SelectedIndex);
        input.Update(TimeSpan.FromMilliseconds(100));
        menu.Update(input);
        Assert.Equal(2, menu.SelectedIndex);
        input.Update(TimeSpan.FromMilliseconds(50));
        menu.Update(input);
        Assert.Equal(3, menu.SelectedIndex);
    }

    [Fact]
    public void TheSelectedLabelIsOpaqueAndTheOthersFade()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out InputManager input, out MemoryGameInput source);
        source.SetKey(GameKey.Down, true);
        input.Update(TimeSpan.Zero);
        menu.Update(input);
        Assert.Equal(255u, menu.GetAlpha(1));
        Assert.Equal(230u, menu.GetAlpha(0));
        Assert.Equal(0u, menu.GetAlpha(2));
    }

    [Theory]
    [InlineData(0, 11u, 0u)]
    [InlineData(1, 5u, 11u)]
    [InlineData(2, 3u, 6u)]
    [InlineData(3, 5u, 15u)]
    public void ConfirmingAnEntryRequestsTheOriginalScene(int entry, uint scene, uint root)
    {
        SceneManager.SelectInitialScene(0);
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out InputManager input, out MemoryGameInput source);
        for (int index = 0; index < entry; index++)
            Press(input, source, GameKey.Down, menu.Update);
        TitleMenuAction action = menu.Confirm();
        Assert.Equal(Entries[entry].Action, action);
        Assert.Equal(scene, GameState.RequestedScene);
        Assert.Equal(1u, GameState.SceneTransition);
        if (root != 0)
            Assert.Equal(root, GameState.RootScene);
    }

    [Fact]
    public void CancelRequestsARestart()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out _, out _);
        menu.Cancel();
        Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
        Assert.Equal(3u, GameState.SceneTransition);
    }

    [Fact]
    public void DrawUsesTheOriginalOriginAndEntrySize()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        using TitleMenu menu = NewMenu(renderer, out _, out _);
        UiDrawList draw = new();
        menu.Draw(draw);
        Assert.Equal(4, draw.Quads.Count);
        for (int index = 0; index < draw.Quads.Count; index++)
        {
            UiQuad quad = draw.Quads[index];
            Assert.Equal(new Vector2(131f, 182f + 38f * index), quad.Position);
            Assert.Equal(new Vector2(180f, 38f), quad.Size);
            Assert.Same(menu.Labels, quad.Texture);
            Assert.Equal(Entries[index].TextureCoordinates, quad.TextureCoordinates);
        }
        Assert.Equal(0xFFFFFFFFu, draw.Quads[0].Color);
        Assert.Equal(0x00FFFFFFu, draw.Quads[1].Color);
    }

    [Fact]
    public void ReleaseIsIdempotent()
    {
        using RecordingRenderer renderer = new(RenderSettings.Default);
        TitleMenu menu = NewMenu(renderer, out _, out _);
        menu.Dispose();
        menu.Dispose();
        Assert.True(menu.IsDisposed);
    }

    private static TitleMenu NewMenu(RecordingRenderer renderer, out InputManager input, out MemoryGameInput source, KeyRepeatSettings? keyRepeat = null)
    {
        source = new MemoryGameInput();
        input = new InputManager(source, InputBindings.CreateDefault(), gamepadSettings: null, keyRepeat);
        ITexture labels = renderer.CreateTexture(256, 256, new byte[256 * 256 * 4], 256 * 4);
        return new TitleMenu(labels, Entries);
    }

    private static void Press(InputManager input, MemoryGameInput source, GameKey key, Action<InputManager> update)
    {
        source.SetKey(key, true);
        input.Update(TimeSpan.Zero);
        update(input);
        source.SetKey(key, false);
        input.Update(TimeSpan.Zero);
        update(input);
    }
}
