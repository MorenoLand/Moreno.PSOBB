using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Gui;

/// <summary>
/// Base interface element: a screen-space rectangle with state bits, text, an optional texture
/// and a callback.
/// </summary>
/// <remarks>
/// Positions are client-area pixels. The original applies a 32-pixel horizontal starting offset
/// in its position setter, and texture coordinates use a 256-pixel atlas.
/// </remarks>
public class UiElement : IDisposable
{
	/// <summary>
	/// The horizontal offset the original adds when positioning an element.
	/// </summary>
	public const float PositionOffsetX = 32f;

	/// <summary>
	/// The atlas size used to normalise texture coordinates.
	/// </summary>
	public const float TextureAtlasSize = 256f;

	private UiElementState _state = UiElementState.Visible;
	private bool _disposed;

	/// <summary>
	/// Gets or sets the element rectangle position in client-area pixels.
	/// </summary>
	public Vector2 Position { get; set; }

	/// <summary>
	/// Gets or sets the element rectangle size in client-area pixels.
	/// </summary>
	public Vector2 Size { get; set; }

	/// <summary>
	/// Gets or sets the fill colour in 0xAARRGGBB form; a transparent colour draws nothing without a texture.
	/// </summary>
	public uint Color { get; set; }

	/// <summary>
	/// Gets or sets the texture drawn over <see cref="Color"/>.
	/// </summary>
	public ITexture? Texture { get; set; }

	/// <summary>
	/// Gets or sets the texture rectangle as left, top, right and bottom coordinates in atlas space.
	/// </summary>
	public Vector4 TextureCoordinates { get; set; } = new(0f, 0f, 1f, 1f);

	/// <summary>
	/// Gets or sets the text associated with the element.
	/// </summary>
	public string Text { get; private set; } = string.Empty;

	/// <summary>
	/// Gets or sets the text colour in 0xAARRGGBB form.
	/// </summary>
	public uint TextColor { get; private set; } = 0xFFFFFFFF;

	/// <summary>
	/// Gets or sets an optional clipping rectangle as left, top, right and bottom coordinates.
	/// </summary>
	public Vector4? ClipBounds { get; private set; }

	/// <summary>
	/// Gets or sets a value indicating whether the element can receive focus when it is available.
	/// </summary>
	public bool Focusable { get; set; } = true;

	/// <summary>
	/// Gets or sets the callback installed through <see cref="SetCallback"/>.
	/// </summary>
	public Action<UiElement>? Callback { get; private set; }

	/// <summary>
	/// Gets the parent panel, or <see langword="null"/> when the element is detached.
	/// </summary>
	public UiPanel? Parent { get; internal set; }

	/// <summary>
	/// Gets the current state word.
	/// </summary>
	public UiElementState State => _state;

	/// <summary>
	/// Gets a value indicating whether the element has been disposed.
	/// </summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Gets a value indicating whether the element belongs to a panel.
	/// </summary>
	public bool IsAttached => Parent is not null;

	/// <summary>
	/// Gets a value indicating whether the element owns keyboard focus.
	/// </summary>
	[Original(0x0071602C)]
	public bool IsFocused => HasState(UiElementState.Focused);

	/// <summary>
	/// Gets a value indicating whether the element is highlighted.
	/// </summary>
	[Original(0x00716040)]
	public bool IsHighlighted => HasState(UiElementState.Highlighted);

	/// <summary>
	/// Gets a value indicating whether the element refuses input.
	/// </summary>
	[Original(0x00716064)]
	public bool IsLocked => HasState(UiElementState.Locked);

	/// <summary>
	/// Gets a value indicating whether the element takes part in hit testing and drawing.
	/// </summary>
	[Original(0x00716078)]
	public bool IsVisible => HasState(UiElementState.Visible);

	/// <summary>
	/// Gets a value indicating whether the element refuses input while still drawing.
	/// </summary>
	[Original(0x0071608C)]
	public bool IsDisabled => HasState(UiElementState.Disabled);

	/// <summary>
	/// Gets a value indicating whether the element accepts focus.
	/// </summary>
	public bool IsFocusable => Focusable && IsVisible && !IsDisabled && !IsLocked;

	/// <summary>
	/// Gets the element rectangle.
	/// </summary>
	public UiQuad Bounds => new(Position, Size, TextureCoordinates, Texture, Color);

	/// <summary>
	/// Sets the state word directly.
	/// </summary>
	/// <param name="state">The complete state word.</param>
	public void SetState(UiElementState state) => _state = state;

	/// <summary>
	/// Sets one or more state bits.
	/// </summary>
	/// <param name="flags">The bits to set.</param>
	[Original(0x007160E8)]
	public void SetStateFlag(UiElementState flags) => _state |= flags;

	/// <summary>
	/// Clears one or more state bits.
	/// </summary>
	/// <param name="flags">The bits to clear.</param>
	[Original(0x007160F8)]
	public void ClearStateFlag(UiElementState flags) => _state &= ~flags;

	/// <summary>
	/// Sets the highlight bit.
	/// </summary>
	[Original(0x007160C8)]
	public void SetHighlighted() => _state |= UiElementState.Highlighted;

	/// <summary>
	/// Clears the highlight bit.
	/// </summary>
	[Original(0x007160D8)]
	public void ClearHighlighted() => _state &= ~UiElementState.Highlighted;

	/// <summary>
	/// Sets the focus bit.
	/// </summary>
	[Original(0x007160A0)]
	public void SetFocus() => _state |= UiElementState.Focused;

	/// <summary>
	/// Clears the focus bit.
	/// </summary>
	[Original(0x007160B4)]
	public void ClearFocus() => _state &= ~UiElementState.Focused;

	/// <summary>
	/// Clears the third general-purpose state bit.
	/// </summary>
	[Original(0x00716128)]
	public void ResetState() => _state &= ~UiElementState.Flag10;

	/// <summary>
	/// Sets the third general-purpose state bit.
	/// </summary>
	[Original(0x00716138)]
	public void SetState() => _state |= UiElementState.Flag10;

	/// <summary>
	/// Sets the lock bit.
	/// </summary>
	[Original(0x00716168)]
	public void Lock() => _state |= UiElementState.Locked;

	/// <summary>
	/// Clears the lock bit.
	/// </summary>
	[Original(0x00716178)]
	public void Unlock() => _state &= ~UiElementState.Locked;

	/// <summary>
	/// Sets the lock and visible bits together.
	/// </summary>
	[Original(0x00716188)]
	public void SetLockedAndVisible() => _state |= UiElementState.Locked | UiElementState.Visible;

	/// <summary>
	/// Clears the lock and visible bits together.
	/// </summary>
	[Original(0x00716198)]
	public void ClearLockedAndVisible() => _state &= ~(UiElementState.Locked | UiElementState.Visible);

	/// <summary>
	/// Shows the element.
	/// </summary>
	public void Show() => _state |= UiElementState.Visible;

	/// <summary>
	/// Hides the element.
	/// </summary>
	public void Hide() => _state &= ~UiElementState.Visible;

	/// <summary>
	/// Enables input for the element.
	/// </summary>
	public void Enable() => _state &= ~UiElementState.Disabled;

	/// <summary>
	/// Disables input for the element without hiding it.
	/// </summary>
	public void Disable() => _state |= UiElementState.Disabled;

	/// <summary>
	/// Moves the element using the original's horizontal starting offset.
	/// </summary>
	/// <param name="x">The client-area horizontal position before the offset.</param>
	/// <param name="y">The client-area vertical position.</param>
	[Original(0x0071434A)]
	public void SetPosition(float x, float y) => Position = new Vector2(x + PositionOffsetX, y);

	/// <summary>
	/// Derives the texture rectangle from an atlas-space origin and the current element size.
	/// </summary>
	/// <param name="x">The atlas horizontal origin in pixels.</param>
	/// <param name="y">The atlas vertical origin in pixels.</param>
	[Original(0x0072E7E4)]
	public void SetTextureCoordinates(float x, float y)
	{
		float left = x / TextureAtlasSize;
		float top = y / TextureAtlasSize;
		TextureCoordinates = new Vector4(left, top, (x + Size.X) / TextureAtlasSize, (y + Size.Y) / TextureAtlasSize);
	}

	/// <summary>
	/// Sets the clipping rectangle.
	/// </summary>
	/// <param name="left">The left edge.</param>
	/// <param name="top">The top edge.</param>
	/// <param name="right">The right edge.</param>
	/// <param name="bottom">The bottom edge.</param>
	[Original(0x0071BC6C)]
	public void SetClipBounds(float left, float top, float right, float bottom) => ClipBounds = new Vector4(left, top, right, bottom);

	/// <summary>
	/// Sets the text colour.
	/// </summary>
	/// <param name="color">The colour in 0xAARRGGBB form.</param>
	[Original(0x0071BC8C)]
	public void SetTextColor(uint color) => TextColor = color;

	/// <summary>
	/// Replaces the element text.
	/// </summary>
	/// <param name="text">The new text; <see langword="null"/> becomes the empty string.</param>
	[Original(0x0072B548)]
	public void SetText(string? text) => Text = text ?? string.Empty;

	/// <summary>
	/// Installs the element callback.
	/// </summary>
	/// <param name="callback">The callback, or <see langword="null"/> to remove it.</param>
	[Original(0x00731740)]
	public void SetCallback(Action<UiElement>? callback) => Callback = callback;

	/// <summary>
	/// Returns whether a client-area point lies inside the element rectangle.
	/// </summary>
	/// <param name="point">The client-area point.</param>
	/// <returns><see langword="true"/> for a point on the half-open rectangle.</returns>
	public virtual bool Contains(Vector2 point)
		=> point.X >= Position.X && point.X < Position.X + Size.X && point.Y >= Position.Y && point.Y < Position.Y + Size.Y;

	/// <summary>
	/// Returns the deepest element under a client-area point, or <see langword="null"/>.
	/// </summary>
	/// <param name="point">The client-area point.</param>
	/// <returns>The hit element.</returns>
	public virtual UiElement? HitTest(Vector2 point)
	{
		if (_disposed || !IsVisible || IsDisabled || IsLocked)
			return null;
		return Contains(point) ? this : null;
	}

	/// <summary>
	/// Offers an event to the element.
	/// </summary>
	/// <param name="uiEvent">The event.</param>
	/// <returns><see langword="true"/> when the element handled the event.</returns>
	public virtual bool OnEvent(UiEvent uiEvent) => false;

	/// <summary>
	/// Advances the element by one frame.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	public virtual void Update(float deltaSeconds)
	{
	}

	/// <summary>
	/// Adds the element's quad to a draw list.
	/// </summary>
	/// <param name="drawList">The list that receives the quad.</param>
	public virtual void Draw(UiDrawList drawList)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (_disposed || !IsVisible || ((Color >> 24) == 0 && Texture is null))
			return;
		UiQuad quad = Bounds.Clip(ClipBounds);
		if (!quad.IsEmpty)
			drawList.Add(quad);
	}

	/// <summary>
	/// Detaches the element from its parent and marks it disposed.
	/// </summary>
	public void Dispose()
	{
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	/// <summary>
	/// Releases the element and detaches it from its parent.
	/// </summary>
	/// <param name="disposing">Whether managed resources are being released.</param>
	protected virtual void Dispose(bool disposing)
	{
		if (_disposed)
			return;
		_disposed = true;
		if (disposing)
			Parent?.Detach(this);
	}

	private bool HasState(UiElementState flag) => (_state & flag) != 0;
}
