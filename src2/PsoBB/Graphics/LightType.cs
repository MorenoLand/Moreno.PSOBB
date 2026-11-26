namespace PsoBB.Graphics;

/// <summary>
/// The kinds of fixed-function light the original client could enable.
/// </summary>
public enum LightType : uint
{
	/// <summary>A light at a position that radiates in every direction.</summary>
	Point = 1,
	/// <summary>A point light restricted to a cone.</summary>
	Spot = 2,
	/// <summary>A light with a direction and no position or attenuation.</summary>
	Directional = 3,
}
