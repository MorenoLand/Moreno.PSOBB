using PsoBB.Mathematics;

namespace PsoBB.Game;

/// <summary>
/// A ground contact returned by <see cref="IGroundCollision"/>.
/// </summary>
/// <param name="Position">The contact position.</param>
public readonly record struct GroundContact(Vector3 Position);
