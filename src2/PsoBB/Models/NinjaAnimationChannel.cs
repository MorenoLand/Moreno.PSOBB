namespace PsoBB.Models;

/// <summary>
/// The channel a motion track drives.
/// </summary>
public enum NinjaAnimationChannel
{
	/// <summary>A float translation track.</summary>
	Translation,
	/// <summary>A fixed-angle rotation track.</summary>
	Rotation,
	/// <summary>A float scale track.</summary>
	Scale,
	/// <summary>A track whose channel is not one of the three pose channels.</summary>
	Other,
}
