using PsoBB.Gui;

namespace PsoBB.Scenes;

/// <summary>
/// The transition overlay manager the shared title interface constructs at <c>0x007195C8</c>.
/// </summary>
/// <remarks>
/// The original manager owns six full-screen transition windows and a small hierarchy of layer
/// tasks. Its per-frame pump at <c>0x007199E8</c> draws a sublayer, resets the viewport, draws a
/// full-screen overlay, draws the band pass, draws the primary layer, restores the viewport and
/// clears the display state. The layer traversal, overlay primitive and band primitive are supplied
/// through <see cref="IScene2TransitionRenderer"/>; the band pass body at <c>0x00719B1C</c> and the
/// task children outside the six windows are not reconstructed here.
/// </remarks>
public sealed class Scene2TransitionOverlay
{
	/// <summary>The number of transition windows the manager creates.</summary>
	public const int SlotCount = 6;

	/// <summary>The width the transition windows are initialised with.</summary>
	public const float ScreenWidth = 640f;

	/// <summary>The height the transition windows are initialised with.</summary>
	public const float ScreenHeight = 480f;

	/// <summary>The bit of the manager flag word that suppresses the pump.</summary>
	public const uint ReadyMask = 1;

	private readonly Scene2TransitionSlot[] _slots = new Scene2TransitionSlot[SlotCount];

	/// <summary>
	/// Creates the six full-screen transition windows.
	/// </summary>
	public Scene2TransitionOverlay()
	{
		for (int index = 0; index < _slots.Length; index++)
			_slots[index] = new Scene2TransitionSlot { Width = ScreenWidth, Height = ScreenHeight };
	}

	/// <summary>Gets the six transition windows in creation order.</summary>
	public IReadOnlyList<Scene2TransitionSlot> Slots => _slots;

	/// <summary>Gets or sets the manager flag word read by <c>0x00719A48</c>.</summary>
	[OriginalGlobal(0x00A98540)]
	public static uint Flags { get; set; }

	/// <summary>Gets or sets the current display identifier read by <c>0x007BB6D0</c>.</summary>
	[OriginalGlobal(0x00A9C4F4)]
	public static uint DisplayId { get; set; }

	/// <summary>
	/// Returns whether the pump may run; bit zero of the manager flags suppresses it.
	/// </summary>
	/// <returns><see langword="true"/> when bit zero is clear.</returns>
	[Original(0x00719A48, "InterfaceManager_CanPump_00719a48")]
	public static bool CanPump() => (Flags & ReadyMask) == 0;

	/// <summary>
	/// Restores the manager and display globals to their shipped values.
	/// </summary>
	public static void Reset()
	{
		Flags = 0;
		DisplayId = 0;
	}

	/// <summary>
	/// Runs one transition pump in the original order.
	/// </summary>
	/// <param name="draw">The draw list passed to the layer, overlay and band stages.</param>
	/// <param name="renderer">The renderer seam for the original draw stages.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> or <paramref name="renderer"/> is null.</exception>
	[Original(0x007199E8, "InterfaceManager_Pump_007199e8")]
	public void Pump(UiDrawList draw, IScene2TransitionRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ArgumentNullException.ThrowIfNull(renderer);
		if (!CanPump())
			return;
		ushort displayId = (ushort)DisplayId;
		renderer.BeginDisplay(displayId);
		renderer.DrawLayer(draw, Scene2TransitionLayer.SubLayer);
		renderer.ResetViewport();
		renderer.DrawOverlay(draw);
		renderer.DrawBands(draw);
		renderer.DrawLayer(draw, Scene2TransitionLayer.Primary);
		renderer.RestoreViewport();
		renderer.EndDisplay();
	}
}

/// <summary>
/// One of the six full-screen windows the transition manager creates.
/// </summary>
public sealed class Scene2TransitionSlot
{
	/// <summary>Gets or sets the left edge.</summary>
	public float Left { get; set; }

	/// <summary>Gets or sets the top edge.</summary>
	public float Top { get; set; }

	/// <summary>Gets or sets the width.</summary>
	public float Width { get; set; }

	/// <summary>Gets or sets the height.</summary>
	public float Height { get; set; }

	/// <summary>Gets or sets the diffuse colour the window draws with.</summary>
	public uint Color { get; set; }
}

/// <summary>
/// The two task layers the transition pump draws.
/// </summary>
public enum Scene2TransitionLayer
{
	/// <summary>The sublayer whose children draw before the viewport reset.</summary>
	SubLayer,

	/// <summary>The primary layer whose children draw before the viewport restore.</summary>
	Primary,
}

/// <summary>
/// The renderer seam for the transition pump's original draw stages.
/// </summary>
public interface IScene2TransitionRenderer
{
	/// <summary>Sets the display state before the pump's draw stages.</summary>
	/// <param name="displayId">The low sixteen bits of the current display identifier.</param>
	void BeginDisplay(ushort displayId);

	/// <summary>Draws one task layer's children.</summary>
	/// <param name="draw">The draw list that receives the layer quads.</param>
	/// <param name="layer">The layer to draw.</param>
	void DrawLayer(UiDrawList draw, Scene2TransitionLayer layer);

	/// <summary>Resets the viewport to the original 640 by 480 client area.</summary>
	void ResetViewport();

	/// <summary>Draws the full-screen overlay at <c>0x00719A60</c>.</summary>
	/// <param name="draw">The draw list that receives the overlay quads.</param>
	void DrawOverlay(UiDrawList draw);

	/// <summary>Draws the band pass at <c>0x00719B1C</c>.</summary>
	/// <param name="draw">The draw list that receives the band quads.</param>
	void DrawBands(UiDrawList draw);

	/// <summary>Restores the viewport after the primary layer.</summary>
	void RestoreViewport();

	/// <summary>Clears the display state after the pump's draw stages.</summary>
	void EndDisplay();
}
