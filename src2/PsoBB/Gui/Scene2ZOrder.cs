namespace PsoBB.Gui;

/// <summary>
/// The z-order list and the relink at <c>0x0073ECE0</c>.
/// </summary>
/// <remarks>
/// The node key is at offset 28 and its value at offset 84. The relink first sets the value to
/// <c>-1.3</c>, detaches the node when the theme flag is set, then inserts it before the first node
/// whose key is not greater than the new key. Every node the scan passes receives the
/// <c>-0.3</c> delta, and the new node receives one delta for each node that follows it.
/// </remarks>
public sealed class Scene2ZList
{
	/// <summary>Gets or sets the first node.</summary>
	public Scene2ZNode? Head { get; set; }

	/// <summary>
	/// Appends a node for a test or a host-built list.
	/// </summary>
	/// <param name="node">The node to append.</param>
	/// <exception cref="ArgumentNullException"><paramref name="node"/> is null.</exception>
	public void Append(Scene2ZNode node)
	{
		ArgumentNullException.ThrowIfNull(node);
		node.List = this;
		node.Value = -1.3f;
		Scene2ZNode? tail = Head;
		if (tail is null)
		{
			node.Previous = node;
			node.Next = null;
			Head = node;
			return;
		}
		while (tail.Next is not null)
			tail = tail.Next;
		node.Previous = tail;
		tail.Next = node;
		node.Next = null;
		Head!.Previous = node;
	}
}

/// <summary>
/// One z-order node.
/// </summary>
public sealed class Scene2ZNode
{
	/// <summary>The value the relink writes before it checks the theme.</summary>
	public const float InitialValue = -1.3f;

	/// <summary>The delta the relink applies.</summary>
	public const float Delta = -0.3f;

	/// <summary>Gets or sets the owning list.</summary>
	public Scene2ZList? List { get; set; }

	/// <summary>Gets or sets the previous node.</summary>
	public Scene2ZNode? Previous { get; set; }

	/// <summary>Gets or sets the next node.</summary>
	public Scene2ZNode? Next { get; set; }

	/// <summary>Gets or sets the sort key at offset 28.</summary>
	public float Key { get; set; }

	/// <summary>Gets or sets the value at offset 84.</summary>
	public float Value { get; set; }

	/// <summary>
	/// Reinserts the node in key order.
	/// </summary>
	/// <exception cref="InvalidOperationException">The node has no list.</exception>
	[Original(0x0073ECE0)]
	public void Relink()
	{
		Value = InitialValue;
		if (!Scene2WindowState.HasTheme())
			return;
		if (Previous == this)
			return;
		Scene2ZList list = List ?? throw new InvalidOperationException("The node has no list.");
		if (ReferenceEquals(this, list.Head))
		{
			list.Head = Next;
			if (Previous is not null)
				Previous.Next = null;
			if (Next is not null)
				Next.Previous = Previous;
		}
		else if (Previous is not null)
		{
			Previous.Next = Next;
			Scene2ZNode next = Next ?? list.Head!;
			if (next is not null)
				next.Previous = Previous;
		}
		float key = Key;
		Scene2ZGlobal.Accumulator += Delta;
		Scene2ZNode? scan = list.Head;
		if (scan is null)
		{
			InsertAtTail(list, Previous);
			return;
		}
		while (true)
		{
			Scene2ZNode tail = scan;
			if (key >= scan.Key)
				break;
			scan.Value += Delta;
			scan = scan.Next;
			if (scan is null)
			{
				InsertAtTail(list, tail);
				return;
			}
		}
		if (ReferenceEquals(scan, list.Head))
			list.Head = this;
		Previous = scan.Previous;
		Next = scan;
		Scene2ZNode? before = scan.Previous;
		if (before?.Next is not null)
			before.Next = this;
		scan.Previous = this;
		Scene2ZNode? following = scan;
		while (following is not null)
		{
			Value += Delta;
			following = following.Next;
		}
	}

	private void InsertAtTail(Scene2ZList list, Scene2ZNode? tail)
	{
		if (tail is null)
		{
			list.Head = this;
			Next = null;
			Previous = null;
			return;
		}
		tail.Next = this;
		list.Head!.Previous = this;
		Next = null;
		Previous = tail;
	}
}

/// <summary>
/// The accumulator at <c>0x00A98528</c>.
/// </summary>
public static class Scene2ZGlobal
{
	/// <summary>Gets or sets the float accumulator.</summary>
	[OriginalGlobal(0x00A98528)]
	public static float Accumulator { get; set; }
}
