namespace PsoBB.Game.Tasks;

/// <summary>
/// A node in the client's per-frame task tree.
/// </summary>
/// <remarks>
/// Children run in insertion order and depth first. A node may be added, removed or queued for
/// destruction from inside another node's update because the pump remembers the next sibling first.
/// </remarks>
public class GameTask : IDisposable
{
	private ushort _flags;
	private bool _disposed;
	private GameTask? _previous;
	private GameTask? _next;
	private GameTask? _firstChild;

	/// <summary>
	/// Creates a detached task node.
	/// </summary>
	/// <param name="name">The diagnostic name.</param>
	[Original(0x008193CC, "TObject::TObject")]
	public GameTask(string? name = null)
	{
		Name = name;
		_previous = this;
	}

	/// <summary>
	/// Gets or sets the diagnostic name.
	/// </summary>
	public string? Name { get; set; }

	/// <summary>
	/// Gets or sets the node flags.
	/// </summary>
	public GameTaskFlags Flags
	{
		get => (GameTaskFlags)_flags;
		set => _flags = (ushort)value;
	}

	/// <summary>
	/// Gets or sets the identity the original assigns to the node.
	/// </summary>
	public ushort Id { get; set; }

	/// <summary>
	/// Gets the parent node, or <see langword="null"/> for a root.
	/// </summary>
	public GameTask? Parent { get; private set; }

	/// <summary>
	/// Gets the previous sibling, which is the tail of the list for the first child.
	/// </summary>
	public GameTask? PreviousSibling => _previous;

	/// <summary>
	/// Gets the next sibling.
	/// </summary>
	public GameTask? NextSibling => _next;

	/// <summary>
	/// Gets the first child.
	/// </summary>
	public GameTask? FirstChild => _firstChild;

	/// <summary>
	/// Gets a value indicating whether this node was disposed.
	/// </summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Adds <paramref name="child"/> as the last child.
	/// </summary>
	/// <param name="child">The node to attach.</param>
	/// <exception cref="ArgumentNullException"><paramref name="child"/> is null.</exception>
	public void Add(GameTask child)
	{
		ArgumentNullException.ThrowIfNull(child);
		child.SetParent(this);
	}

	/// <summary>
	/// Moves this node under <paramref name="parent"/> and appends it after the existing children.
	/// </summary>
	/// <param name="parent">The new parent, or <see langword="null"/> to detach the node.</param>
	[Original(0x008172D4, "TObject::set_parent")]
	public void SetParent(GameTask? parent)
	{
		RemoveFromParent();
		AddToParent(parent);
	}

	/// <summary>
	/// Detaches this node from its parent.
	/// </summary>
	public void RemoveFromParent()
	{
		GameTask? parent = Parent;
		if (parent is null)
			return;
		GameTask previous = _previous ?? this;
		if (previous == this)
			parent._firstChild = null;
		else if (parent._firstChild == this)
		{
			parent._firstChild = _next;
			previous._next = null;
			if (_next is not null)
				_next._previous = previous;
		}
		else
		{
			previous._next = _next;
			if (_next is not null)
				_next._previous = previous;
			else if (parent._firstChild is not null)
				parent._firstChild._previous = previous;
		}
		Parent = null;
	}

	/// <summary>
	/// Runs this node's update and then the update of every descendant.
	/// </summary>
	[Original(0x00817574, "TObject::run_tasks")]
	public void RunTasks()
	{
		GameTask? child = _firstChild;
		while (_firstChild is not null && child is not null)
		{
			GameTask node = child;
			child = node._next;
			if (node._disposed)
				continue;
			if ((node._flags & (ushort)GameTaskFlags.DisallowUpdate) != 0)
			{
				if ((node._flags & (ushort)GameTaskFlags.QueueDestruction) != 0)
				{
					node._flags &= unchecked((ushort)~(ushort)GameTaskFlags.QueueDestruction);
					if ((node._flags & (ushort)GameTaskFlags.DisallowDestruction) == 0)
						node.Dispose();
				}
				else
				{
					if ((node._flags & (ushort)GameTaskFlags.ChildQueueDestruction) != 0)
					{
						node.DeleteChildren();
						node.RunTask();
						node._flags &= unchecked((ushort)~(ushort)GameTaskFlags.ChildQueueDestruction);
					}
					if ((node._flags & (ushort)GameTaskFlags.SuspendUpdate) != 0)
						continue;
					if ((node._flags & (ushort)GameTaskFlags.PauseUpdate) != 0)
						continue;
				}
			}
			else
			{
				node.RunTask();
				node.RunTasks();
			}
		}
	}

	/// <summary>
	/// Runs this node's per-frame update; derived tasks override it.
	/// </summary>
	public virtual void RunTask()
	{
	}

	/// <summary>
	/// Disposes every direct child.
	/// </summary>
	[Original(0x00817284, "TObject::delete_children")]
	public void DeleteChildren()
	{
		while (_firstChild is not null)
		{
			GameTask child = _firstChild;
			if (child._disposed || (child._flags & (ushort)GameTaskFlags.DisallowDestruction) != 0)
				return;
			child.Dispose();
		}
	}

	/// <summary>
	/// Detaches this node and disposes its descendants once.
	/// </summary>
	[Original(0x008170D8, "TObject::~TObject")]
	public void Dispose()
	{
		if (_disposed || (_flags & (ushort)GameTaskFlags.DisallowDestruction) != 0)
			return;
		_disposed = true;
		_flags |= (ushort)GameTaskFlags.DisallowDestruction;
		DeleteChildren();
		RemoveFromParent();
	}

	/// <summary>
	/// Counts every descendant of this node.
	/// </summary>
	/// <returns>The descendant count, excluding this node.</returns>
	[Original(0x0081737C, "TObject::get_node_count")]
	public int NodeCount()
	{
		int count = 0;
		for (GameTask? child = _firstChild; child is not null; child = child._next)
			count += child.NodeCount() + 1;
		return count;
	}

	/// <summary>
	/// Reports whether this node and every ancestor remain unqueued for destruction.
	/// </summary>
	/// <returns><see langword="true"/> when no node on the parent chain is queued.</returns>
	[Original(0x008173B4, "TObject::all_parents_unqueued_for_destruction")]
	public bool AllParentsUnqueuedForDestruction()
	{
		for (GameTask? parent = this; parent is not null; parent = parent.Parent)
			if ((parent._flags & (ushort)GameTaskFlags.QueueDestruction) != 0)
				return false;
		return true;
	}

	/// <summary>
	/// Toggles the deferred-render flag and reports whether the node entered the deferred pass.
	/// </summary>
	/// <returns><see langword="true"/> when the flag was set; <see langword="false"/> when it cleared.</returns>
	[Original(0x008173D0, "TObject::defer_render")]
	public bool DeferRender()
	{
		if ((_flags & (ushort)GameTaskFlags.NoDeferRender) != 0)
			return false;
		if ((_flags & (ushort)GameTaskFlags.DeferRender) == 0)
		{
			_flags |= (ushort)GameTaskFlags.DeferRender;
			return true;
		}
		_flags &= unchecked((ushort)~(ushort)GameTaskFlags.DeferRender);
		return false;
	}

	/// <summary>
	/// Queues this node for deletion at its next update slot.
	/// </summary>
	public void QueueDestruction() => _flags |= (ushort)GameTaskFlags.QueueDestruction;

	/// <summary>
	/// Queues the children for deletion at this node's next update slot, then runs the node once.
	/// </summary>
	public void QueueChildDestruction() => _flags |= (ushort)GameTaskFlags.ChildQueueDestruction;

	/// <summary>
	/// Suspends this node's update.
	/// </summary>
	public void SuspendUpdate() => _flags |= (ushort)GameTaskFlags.SuspendUpdate;

	/// <summary>
	/// Clears a suspension.
	/// </summary>
	public void ClearUpdateSuspension() => _flags &= unchecked((ushort)~(ushort)GameTaskFlags.SuspendUpdate);

	/// <summary>
	/// Pauses this node's update from outside the node.
	/// </summary>
	public void PauseUpdate() => _flags |= (ushort)GameTaskFlags.PauseUpdate;

	/// <summary>
	/// Resumes a paused update.
	/// </summary>
	public void ResumeUpdate() => _flags &= unchecked((ushort)~(ushort)GameTaskFlags.PauseUpdate);

	/// <summary>
	/// Toggles the pause flag.
	/// </summary>
	public void TogglePause()
	{
		if ((_flags & (ushort)GameTaskFlags.PauseUpdate) == 0)
			_flags |= (ushort)GameTaskFlags.PauseUpdate;
		else
			_flags &= unchecked((ushort)~(ushort)GameTaskFlags.PauseUpdate);
	}

	/// <summary>
	/// Allows the render traversal to draw this node.
	/// </summary>
	public void AllowRendering() => _flags &= unchecked((ushort)~(ushort)GameTaskFlags.DisallowRender);

	/// <summary>
	/// Skips this node during the render traversal.
	/// </summary>
	public void DisallowRendering() => _flags |= (ushort)GameTaskFlags.DisallowRender;

	/// <summary>
	/// Allows the shadow traversal to draw this node.
	/// </summary>
	public void AllowRenderingShadows() => _flags &= unchecked((ushort)~(ushort)GameTaskFlags.DisallowRenderShadows);

	/// <summary>
	/// Skips this node during the shadow traversal.
	/// </summary>
	public void DisallowRenderingShadows() => _flags |= (ushort)GameTaskFlags.DisallowRenderShadows;

	/// <summary>
	/// Marks this node for the deferred-object pass.
	/// </summary>
	public void SetRenderDeferred() => _flags |= (ushort)GameTaskFlags.DeferRender;

	/// <summary>
	/// Clears the deferred-object mark.
	/// </summary>
	public void ClearRenderDeferred() => _flags &= unchecked((ushort)~(ushort)GameTaskFlags.DeferRender);

	/// <summary>
	/// Reports whether the deferred-object mark is set.
	/// </summary>
	/// <returns><see langword="true"/> when the node is deferred.</returns>
	public bool IsRenderDeferred() => (_flags & (ushort)GameTaskFlags.DeferRender) != 0;

	private void AddToParent(GameTask? parent)
	{
		Parent = parent;
		if (parent is null)
		{
			_previous = this;
			_next = null;
			return;
		}
		GameTask? first = parent._firstChild;
		if (first is null)
		{
			_previous = this;
			_next = null;
			parent._firstChild = this;
			return;
		}
		_previous = first._previous ?? first;
		_next = null;
		_previous._next = this;
		first._previous = this;
	}
}
