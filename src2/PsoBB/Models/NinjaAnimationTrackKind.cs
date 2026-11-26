namespace PsoBB.Models;

/// <summary>
/// The stored keyframe record of an NMDM track.
/// </summary>
public enum NinjaAnimationTrackKind
{
	/// <summary>A 32-bit frame and three float components.</summary>
	Float3,
	/// <summary>A 32-bit frame and three 32-bit turn angles.</summary>
	Angle32,
	/// <summary>A 16-bit frame and three 16-bit turn angles.</summary>
	Angle16,
	/// <summary>A 32-bit frame and four float quaternion components.</summary>
	Quaternion,
}
