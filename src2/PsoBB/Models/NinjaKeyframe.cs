namespace PsoBB.Models;

/// <summary>
/// One animation keyframe. Translation and scale tracks store model-space values; rotation tracks
/// store both the original 1/65536-turn angles and those angles converted to radians.
/// </summary>
/// <param name="Frame">The frame index.</param>
/// <param name="X">The first component, in radians for angle tracks.</param>
/// <param name="Y">The second component, in radians for angle tracks.</param>
/// <param name="Z">The third component, in radians for angle tracks.</param>
/// <param name="W">The quaternion scalar component, or zero for the other track kinds.</param>
/// <param name="AngleX">The first original angle, or zero for the other track kinds.</param>
/// <param name="AngleY">The second original angle, or zero for the other track kinds.</param>
/// <param name="AngleZ">The third original angle, or zero for the other track kinds.</param>
public readonly record struct NinjaKeyframe(uint Frame, float X, float Y, float Z, float W = 0, int AngleX = 0, int AngleY = 0, int AngleZ = 0);
