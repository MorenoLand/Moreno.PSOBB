namespace PsoBB.Gui;

/// <summary>
/// The interface event families the control tree dispatches.
/// </summary>
public enum UiEventKind
{
	/// <summary>A keyboard key went down.</summary>
	KeyDown,
	/// <summary>A keyboard key went up.</summary>
	KeyUp,
	/// <summary>A character was typed.</summary>
	TextInput,
	/// <summary>The pointer moved.</summary>
	MouseMove,
	/// <summary>A mouse button went down.</summary>
	MouseDown,
	/// <summary>A mouse button went up.</summary>
	MouseUp,
	/// <summary>The mouse wheel turned.</summary>
	MouseWheel,
	/// <summary>A named command was invoked.</summary>
	Command,
}
