namespace PsoBB.Gui;

/// <summary>
/// The bits of the 16-bit state word every interface element carries.
/// </summary>
[Flags]
public enum UiElementState : ushort
{
	/// <summary>No state bit.</summary>
	None = 0,
	/// <summary>The element owns keyboard focus.</summary>
	Focused = 0x0001,
	/// <summary>The element is drawn in its highlighted form.</summary>
	Highlighted = 0x0002,
	/// <summary>The first general-purpose element flag.</summary>
	Flag04 = 0x0004,
	/// <summary>The second general-purpose element flag.</summary>
	Flag08 = 0x0008,
	/// <summary>The third general-purpose element flag.</summary>
	Flag10 = 0x0010,
	/// <summary>The fourth general-purpose element flag.</summary>
	Flag40 = 0x0040,
	/// <summary>The element refuses input.</summary>
	Locked = 0x0080,
	/// <summary>The element takes part in hit testing and drawing.</summary>
	Visible = 0x0100,
	/// <summary>The element is drawn but refuses input.</summary>
	Disabled = 0x0200,
}
