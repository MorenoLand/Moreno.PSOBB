namespace PsoBB.Gui;

/// <summary>The blend state selected for a UI quad.</summary>
public enum UiBlendMode
{
	/// <summary>Keep the caller's current blend state.</summary>
	Inherit,
	/// <summary>Use source alpha and inverse source alpha.</summary>
	Alpha,
	/// <summary>Use source alpha and destination one.</summary>
	AdditiveAlpha,
}
