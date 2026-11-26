namespace PsoBB.Game.Tasks;

/// <summary>
/// The per-frame state of the root task.
/// </summary>
[Flags]
public enum TaskSchedulerFlags : uint
{
	/// <summary>
	/// No frame phase is active.
	/// </summary>
	None = 0,
	/// <summary>
	/// The root is running the update pass.
	/// </summary>
	Updating = 0x0001,
	/// <summary>
	/// The root is running the render pass.
	/// </summary>
	Rendering = 0x0002,
	/// <summary>
	/// The root is running the scene render passes.
	/// </summary>
	ScenePasses = 0x0010,
	/// <summary>
	/// The root is running the object layer passes.
	/// </summary>
	ObjectLayers = 0x0020,
	/// <summary>
	/// The root is drawing the map layer.
	/// </summary>
	Layer02 = 0x0040,
	/// <summary>
	/// The update pass finished during this frame.
	/// </summary>
	Updated = 0x0080,
	/// <summary>
	/// The render pass finished during this frame.
	/// </summary>
	Rendered = 0x0100,
	/// <summary>
	/// The root is drawing deferred objects.
	/// </summary>
	DeferredObjects = 0x0200,
}
