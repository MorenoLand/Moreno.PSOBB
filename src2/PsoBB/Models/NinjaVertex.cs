using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// One model vertex with its position, normal, texture coordinate and vertex color.
/// </summary>
/// <param name="Position">The model-space position.</param>
/// <param name="Normal">The model-space normal, or zero when the vertex format has none.</param>
/// <param name="U">The horizontal texture coordinate.</param>
/// <param name="V">The vertical texture coordinate.</param>
/// <param name="R">The red channel.</param>
/// <param name="G">The green channel.</param>
/// <param name="B">The blue channel.</param>
/// <param name="A">The alpha channel.</param>
public readonly record struct NinjaVertex(Vector3 Position, Vector3 Normal, float U, float V, byte R, byte G, byte B, byte A);
