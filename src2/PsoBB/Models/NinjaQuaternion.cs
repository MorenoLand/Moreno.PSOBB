namespace PsoBB.Models;

/// <summary>
/// A quaternion rotation stored by an NJCM node whose evaluation flags select quaternion angles.
/// </summary>
/// <param name="X">The first vector component.</param>
/// <param name="Y">The second vector component.</param>
/// <param name="Z">The third vector component.</param>
/// <param name="W">The scalar component.</param>
public readonly record struct NinjaQuaternion(float X, float Y, float Z, float W);
