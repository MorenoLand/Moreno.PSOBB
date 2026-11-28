namespace PsoBB.Rendering;

/// <summary>
/// The face-culling mode a scene surface requests, using the original cull-mode order.
/// </summary>
public enum SceneCullMode
{
	/// <summary>Draw both faces.</summary>
	None,
	/// <summary>Cull clockwise faces.</summary>
	Clockwise,
	/// <summary>Cull counter-clockwise faces.</summary>
	CounterClockwise,
}
