namespace PsoBB.Game.Tasks;

/// <summary>
/// The flags a task node carries while it waits in the scene tree.
/// </summary>
[Flags]
public enum GameTaskFlags : ushort
{
	/// <summary>
	/// No flag is set.
	/// </summary>
	None = 0,
	/// <summary>
	/// The node is deleted at its next update slot.
	/// </summary>
	QueueDestruction = 0x0001,
	/// <summary>
	/// The node deletes its children at its next update slot and then runs once.
	/// </summary>
	ChildQueueDestruction = 0x0002,
	/// <summary>
	/// The node stops updating until its suspension is cleared.
	/// </summary>
	SuspendUpdate = 0x0004,
	/// <summary>
	/// An ancestor pauses the node externally, for example while a menu is open.
	/// </summary>
	PauseUpdate = 0x0008,
	/// <summary>
	/// The mask that makes the scheduler skip a node's update.
	/// </summary>
	DisallowUpdate = 0x000F,
	/// <summary>
	/// The node is skipped by the render traversal.
	/// </summary>
	DisallowRender = 0x0010,
	/// <summary>
	/// A destructor already started for the node.
	/// </summary>
	DisallowDestruction = 0x0020,
	/// <summary>
	/// The node is skipped by the shadow traversal.
	/// </summary>
	DisallowRenderShadows = 0x0100,
	/// <summary>
	/// The node draws in the later deferred-object pass.
	/// </summary>
	DeferRender = 0x0200,
	/// <summary>
	/// The node never enters the deferred-object pass.
	/// </summary>
	NoDeferRender = 0x0400,
}
