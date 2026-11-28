using PsoBB.Mathematics;

namespace PsoBB.Game;

/// <summary>
/// A ground contact returned by <see cref="IGroundCollision"/>.
/// </summary>
/// <param name="Position">The contact position.</param>
/// <param name="Normal">The surface normal at the contact point, when provided by the sweep.</param>
public readonly record struct GroundContact(Vector3 Position, Vector3 Normal = default);
