namespace PsoBB.Gui;

/// <summary>
/// The element and cursor slots created at <c>0x00403784</c> and released at <c>0x00404A34</c>.
/// </summary>
/// <remarks>
/// The owner list receives one <see cref="Scene2WindowElement"/> and one <see cref="Scene2WindowCursor"/>
/// the first time <see cref="Ensure"/> runs. Release clears both slots; the next ensure creates new
/// nodes because the original destroys the old objects.
/// </remarks>
public sealed class Scene2WindowChildren
{
	/// <summary>Gets the list that owns the created nodes.</summary>
	public Scene2WindowList List { get; } = new();

	/// <summary>Gets the element at offset 100, or <see langword="null"/>.</summary>
	public Scene2WindowElement? Element { get; private set; }

	/// <summary>Gets the cursor at offset 104, or <see langword="null"/>.</summary>
	public Scene2WindowCursor? Cursor { get; private set; }

	/// <summary>
	/// Creates the element and cursor when their slots are empty.
	/// </summary>
	/// <param name="owner">The owner data pointer the constructors store.</param>
	[Original(0x00403784)]
	public void Ensure(object? owner)
	{
		Element ??= new Scene2WindowElement(List, owner);
		Cursor ??= new Scene2WindowCursor(List, owner);
	}

	/// <summary>
	/// Releases the element and cursor slots.
	/// </summary>
	[Original(0x00404A34)]
	public void Release()
	{
		Element = null;
		Cursor = null;
	}
}
