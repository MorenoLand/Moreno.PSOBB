using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Game;

/// <summary>
/// The title screen's four-entry menu: selection, repeat, confirmation and the label quads.
/// </summary>
/// <remarks>
/// The entries use the original menu origin and entry size. Selection wraps, held directions repeat,
/// the selected label is fully opaque and the other labels fade by the original decrement.
/// </remarks>
public sealed class TitleMenu : IDisposable
{
    /// <summary>The original menu origin at 0x008FAC10.</summary>
    public const float OriginX = 131f;

    /// <summary>The original menu origin at 0x008FAC10.</summary>
    public const float OriginY = 182f;

    /// <summary>The original entry width at 0x008FAC30.</summary>
    public const float EntryWidth = 180f;

    /// <summary>The original entry height at 0x008FAC30.</summary>
    public const float EntryHeight = 38f;

    /// <summary>The alpha decrement the original applies to unselected labels each update.</summary>
    public const uint FadeStep = 25;

    private readonly ITexture _labels;
    private readonly TitleMenuEntry[] _entries;
    private readonly uint[] _alpha;
    private int _selectedIndex;
    private bool _disposed;

    /// <summary>
    /// Creates the menu over a label texture and its entries.
    /// </summary>
    /// <param name="labels">The texture that holds the label rows.</param>
    /// <param name="entries">The menu entries in display order.</param>
    /// <exception cref="ArgumentNullException">A parameter is null.</exception>
    /// <exception cref="ArgumentException"><paramref name="entries"/> is empty.</exception>
    [Original(0x004121F0)]
    public TitleMenu(ITexture labels, IReadOnlyList<TitleMenuEntry> entries)
    {
        ArgumentNullException.ThrowIfNull(labels);
        ArgumentNullException.ThrowIfNull(entries);
        if (entries.Count == 0)
            throw new ArgumentException("The menu needs at least one entry.", nameof(entries));
        _labels = labels;
        _entries = [.. entries];
        _alpha = new uint[_entries.Length];
        _alpha[0] = 255;
    }

    /// <summary>Gets the label texture.</summary>
    public ITexture Labels => _labels;

    /// <summary>Gets the selected entry index.</summary>
    public int SelectedIndex => _selectedIndex;

    /// <summary>Gets the selected entry.</summary>
    public TitleMenuEntry SelectedEntry => _entries[_selectedIndex];

    /// <summary>Gets the number of entries.</summary>
    public int EntryCount => _entries.Length;

    /// <summary>Gets a value indicating whether the menu has been released.</summary>
    public bool IsDisposed => _disposed;

    /// <summary>
    /// Gets one entry's current label alpha.
    /// </summary>
    /// <param name="index">The entry index.</param>
    /// <returns>The alpha byte in the range 0 to 255.</returns>
    public uint GetAlpha(int index)
    {
        ArgumentOutOfRangeException.ThrowIfNegative(index);
        ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, _entries.Length);
        return _alpha[index];
    }

    /// <summary>
    /// Advances the selection from the input edges and repeat counts and fades the old selection.
    /// </summary>
    /// <param name="input">The input layer already polled for this frame.</param>
    /// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
    /// <exception cref="ObjectDisposedException">The menu is released.</exception>
    [Original(0x0041245C)]
    public void Update(InputManager input)
    {
        ArgumentNullException.ThrowIfNull(input);
        ObjectDisposedException.ThrowIf(_disposed, this);
        if (input.WasActionPressed(InputAction.MoveForward))
            Move(-1);
        else
            Move(-input.GetActionRepeatCount(InputAction.MoveForward));
        if (input.WasActionPressed(InputAction.MoveBackward))
            Move(1);
        else
            Move(input.GetActionRepeatCount(InputAction.MoveBackward));
        for (int index = 0; index < _alpha.Length; index++)
            _alpha[index] = index == _selectedIndex ? 255 : _alpha[index] > FadeStep ? _alpha[index] - FadeStep : 0;
    }

    /// <summary>
    /// Confirms the selected entry and requests the scene the original screen enters.
    /// </summary>
    /// <returns>The confirmed action.</returns>
    /// <exception cref="ObjectDisposedException">The menu is released.</exception>
    [Original(0x00413F54)]
    public TitleMenuAction Confirm()
    {
        ObjectDisposedException.ThrowIf(_disposed, this);
        TitleMenuAction action = _entries[_selectedIndex].Action;
        switch (action)
        {
            case TitleMenuAction.OnlineGame:
                SceneManager.RequestScene(11);
                break;
            case TitleMenuAction.OfflineGame:
                SceneManager.SetRootScene(11);
                SceneManager.RequestScene(5);
                break;
            case TitleMenuAction.Options:
                SceneManager.SetRootScene(6);
                SceneManager.RequestScene(3);
                break;
            case TitleMenuAction.HomePages:
                SceneManager.SetRootScene(15);
                SceneManager.RequestScene(5);
                break;
            default:
                throw new InvalidOperationException($"The menu action {action} has no scene transition.");
        }
        return action;
    }

    /// <summary>
    /// Cancels the menu and requests a restart from the title scene.
    /// </summary>
    /// <exception cref="ObjectDisposedException">The menu is released.</exception>
    [Original(0x007A6174)]
    public void Cancel()
    {
        ObjectDisposedException.ThrowIf(_disposed, this);
        SceneManager.RequestRestart();
    }

    /// <summary>
    /// Adds the label quads with the original entry positions and per-entry alpha.
    /// </summary>
    /// <param name="draw">The draw list that receives the quads.</param>
    /// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
    /// <exception cref="ObjectDisposedException">The menu is released.</exception>
    [Original(0x00412800)]
    public void Draw(UiDrawList draw)
    {
        ArgumentNullException.ThrowIfNull(draw);
        ObjectDisposedException.ThrowIf(_disposed, this);
        for (int index = 0; index < _entries.Length; index++)
        {
            TitleMenuEntry entry = _entries[index];
            Vector2 position = new(OriginX, OriginY + EntryHeight * index);
            Vector2 size = new(EntryWidth, EntryHeight);
            uint color = (_alpha[index] << 24) | 0x00FFFFFFu;
            draw.Add(new UiQuad(position, size, entry.TextureCoordinates, _labels, color));
        }
    }

    /// <summary>
    /// Releases the label texture. Repeated calls do nothing.
    /// </summary>
    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        _labels.Dispose();
    }

    private void Move(int delta)
    {
        int count = _entries.Length;
        _selectedIndex = (_selectedIndex + delta % count + count) % count;
        _alpha[_selectedIndex] = 255;
    }
}

/// <summary>
/// One title menu entry: its label, action and texture rectangle.
/// </summary>
/// <param name="Label">The label text used by tests and diagnostics.</param>
/// <param name="Action">The scene action the entry confirms.</param>
/// <param name="TextureCoordinates">The left, top, right and bottom label coordinates.</param>
public sealed record TitleMenuEntry(string Label, TitleMenuAction Action, Vector4 TextureCoordinates);

/// <summary>
/// The scene action a title menu entry selects.
/// </summary>
public enum TitleMenuAction
{
    /// <summary>Starts the network game flow.</summary>
    OnlineGame,
    /// <summary>Starts the offline game flow.</summary>
    OfflineGame,
    /// <summary>Opens the options screen.</summary>
    Options,
    /// <summary>Opens the home pages screen.</summary>
    HomePages,
}
