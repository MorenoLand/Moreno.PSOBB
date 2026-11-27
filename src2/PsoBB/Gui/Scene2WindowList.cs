namespace PsoBB.Gui;

/// <summary>
/// The linked element list the interface base constructor at <c>0x008193CC</c> maintains.
/// </summary>
/// <remarks>
/// The owner stores the first element at offset 24. The first element points its previous field at
/// itself; later elements append after the current previous field and the owner keeps the newest
/// element there, so the previous field of the head is the list tail.
/// </remarks>
public sealed class Scene2WindowList
{
	/// <summary>Gets the first element, or <see langword="null"/>.</summary>
	public Scene2WindowNode? Head { get; private set; }

	/// <summary>
	/// Links an element into the list at the position <c>0x008193CC</c> uses.
	/// </summary>
	/// <param name="node">The element to link.</param>
	/// <exception cref="ArgumentNullException"><paramref name="node"/> is null.</exception>
	/// <exception cref="InvalidOperationException">The element already belongs to a list.</exception>
	public void Attach(Scene2WindowNode node)
	{
		ArgumentNullException.ThrowIfNull(node);
		if (node.List is not null)
			throw new InvalidOperationException("The element already belongs to a list.");
		node.List = this;
		Scene2WindowNode? head = Head;
		if (head is null)
		{
			node.Previous = node;
			node.Next = null;
			Head = node;
			return;
		}
		Scene2WindowNode tail = head.Previous!;
		node.Previous = tail;
		tail.Next = node;
		head.Previous = node;
		node.Next = null;
	}
}

/// <summary>
/// One element with the fields the <c>0x008193CC</c> base constructor writes.
/// </summary>
public class Scene2WindowNode
{
	/// <summary>Gets the owner data pointer the caller passes.</summary>
	public object? Owner { get; }

	/// <summary>Gets the previous element.</summary>
	public Scene2WindowNode? Previous { get; internal set; }

	/// <summary>Gets the next element.</summary>
	public Scene2WindowNode? Next { get; internal set; }

	/// <summary>Gets the list that owns the element, or <see langword="null"/>.</summary>
	public Scene2WindowList? List { get; internal set; }

	/// <summary>
	/// Creates the element and links it into <paramref name="list"/>.
	/// </summary>
	/// <param name="list">The owning list.</param>
	/// <param name="owner">The owner data pointer, or <see langword="null"/>.</param>
	/// <exception cref="ArgumentNullException"><paramref name="list"/> is null.</exception>
	[Original(0x008193CC)]
	public Scene2WindowNode(Scene2WindowList list, object? owner)
	{
		ArgumentNullException.ThrowIfNull(list);
		Owner = owner;
		list.Attach(this);
	}

	/// <summary>Creates an unlinked element for a derived constructor.</summary>
	protected Scene2WindowNode()
	{
	}
}

/// <summary>
/// The 36-byte element created by <c>0x004010B0</c>.
/// </summary>
/// <remarks>
/// The constructor sets the data pointer at <c>0x009A2D08</c>, the value <c>-400.0</c> at offset
/// 28 and the flag one at offset 32.
/// </remarks>
public sealed class Scene2WindowElement : Scene2WindowNode
{
	/// <summary>The allocation size.</summary>
	public const int AllocationSize = 0x24;

	/// <summary>Gets the constant data pointer address.</summary>
	public const uint DataAddress = 0x009A2D08;

	/// <summary>Gets the value stored at offset 28.</summary>
	public float Value { get; } = -400f;

	/// <summary>Gets the flag stored at offset 32.</summary>
	public int Flag { get; } = 1;

	/// <summary>
	/// Creates and links the element.
	/// </summary>
	/// <param name="list">The owning list.</param>
	/// <param name="owner">The owner data pointer, or <see langword="null"/>.</param>
	/// <exception cref="ArgumentNullException"><paramref name="list"/> is null.</exception>
	[Original(0x004010B0)]
	public Scene2WindowElement(Scene2WindowList list, object? owner)
		: base(list, owner)
	{
	}
}

/// <summary>
/// The 40-byte element created by <c>0x004012CC</c>.
/// </summary>
/// <remarks>
/// The constructor sets the data pointer at <c>0x009A2D64</c>, the index <c>-1</c> at offset 28,
/// the rate <c>0.0025641026</c> at offset 32 and the flag one at offset 36.
/// </remarks>
public sealed class Scene2WindowCursor : Scene2WindowNode
{
	/// <summary>The allocation size.</summary>
	public const int AllocationSize = 0x28;

	/// <summary>Gets the constant data pointer address.</summary>
	public const uint DataAddress = 0x009A2D64;

	/// <summary>Gets the index stored at offset 28.</summary>
	public int Index { get; } = -1;

	/// <summary>Gets the rate stored at offset 32.</summary>
	public float Rate { get; } = 0.0025641026f;

	/// <summary>Gets the flag stored at offset 36.</summary>
	public int Flag { get; } = 1;

	/// <summary>
	/// Creates and links the element.
	/// </summary>
	/// <param name="list">The owning list.</param>
	/// <param name="owner">The owner data pointer, or <see langword="null"/>.</param>
	/// <exception cref="ArgumentNullException"><paramref name="list"/> is null.</exception>
	[Original(0x004012CC)]
	public Scene2WindowCursor(Scene2WindowList list, object? owner)
		: base(list, owner)
	{
	}
}
