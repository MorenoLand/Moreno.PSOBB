namespace PsoBB.Models;

/// <summary>
/// One animation keyframe. Translation and scale tracks store model-space values; rotation tracks
/// store radians converted from the original 1/65536-turn angle units.
/// </summary>
/// <param name="Frame">The frame index.</param>
/// <param name="X">The first component.</param>
/// <param name="Y">The second component.</param>
/// <param name="Z">The third component.</param>
public readonly record struct NinjaKeyframe(uint Frame, float X, float Y, float Z);
