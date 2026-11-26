using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// The per-mode eye and look-at offsets the original camera mode record adds to the player position.
/// </summary>
/// <remarks>
/// The thirteen shipped mode records live in the unported table at <c>0x009ACB70</c>; a host that recovers them supplies their offsets here.
/// </remarks>
/// <param name="EyeOffset">The offset added to the player position for the eye point.</param>
/// <param name="LookOffset">The offset added to the player position for the look-at point.</param>
public readonly record struct FieldCameraModeSettings(Vector3 EyeOffset, Vector3 LookOffset);
