using System.Numerics;

namespace PsoBB.Player;

/// <summary>
/// One frame of player movement input.
/// </summary>
/// <param name="Move">The movement vector: X is right and Y is forward, clamped to the unit square.</param>
/// <param name="CameraHeading">The camera heading in 16-bit turn units.</param>
/// <param name="Walk">Whether the player explicitly requested walking instead of running.</param>
public readonly record struct PlayerMovementIntent(Vector2 Move, int CameraHeading, bool Walk);
