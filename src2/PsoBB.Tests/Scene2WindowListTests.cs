using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x008193CC link order, the two 36/40-byte constructors and the 0x00792FE8 text lookup.
/// </summary>
public sealed class Scene2WindowListTests
{
	[Fact]
	public void TheFirstElementPointsAtItselfAndBecomesTheHead()
	{
		Scene2WindowList list = new();
		object owner = new();
		Scene2WindowElement element = new(list, owner);

		Assert.Same(element, list.Head);
		Assert.Same(element, element.Previous);
		Assert.Null(element.Next);
		Assert.Same(list, element.List);
		Assert.Same(owner, element.Owner);
	}

	[Fact]
	public void LaterElementsAppendAfterTheCurrentTail()
	{
		Scene2WindowList list = new();
		Scene2WindowElement first = new(list, null);
		Scene2WindowCursor second = new(list, null);
		Scene2WindowElement third = new(list, null);

		Assert.Same(first, list.Head);
		Assert.Same(third, first.Previous);
		Assert.Same(first, second.Previous);
		Assert.Same(second, third.Previous);
		Assert.Same(second, first.Next);
		Assert.Same(third, second.Next);
		Assert.Null(third.Next);
	}

	[Fact]
	public void TheElementConstructorsWriteTheShippedFields()
	{
		Scene2WindowList list = new();
		Scene2WindowElement element = new(list, null);
		Scene2WindowCursor cursor = new(list, null);

		Assert.Equal(0x24, Scene2WindowElement.AllocationSize);
		Assert.Equal(0x009A2D08u, Scene2WindowElement.DataAddress);
		Assert.Equal(-400f, element.Value);
		Assert.Equal(1, element.Flag);

		Assert.Equal(0x28, Scene2WindowCursor.AllocationSize);
		Assert.Equal(0x009A2D64u, Scene2WindowCursor.DataAddress);
		Assert.Equal(-1, cursor.Index);
		Assert.Equal(0.0025641026f, cursor.Rate);
		Assert.Equal(1, cursor.Flag);
	}

	[Fact]
	public void TheChildrenSlotsAreCreatedOnceAndReleased()
	{
		Scene2WindowChildren children = new();
		object owner = new();

		children.Ensure(owner);
		Scene2WindowElement element = children.Element!;
		Scene2WindowCursor cursor = children.Cursor!;
		Assert.Same(element, children.Element);
		Assert.Same(cursor, children.Cursor);
		Assert.Same(element, children.List.Head);
		Assert.Same(owner, element.Owner);

		children.Release();
		Assert.Null(children.Element);
		Assert.Null(children.Cursor);

		children.Ensure(owner);
		Assert.NotSame(element, children.Element);
		Assert.NotSame(cursor, children.Cursor);
	}

	[Fact]
	public void AnElementCannotBeLinkedTwice()
	{
		Scene2WindowList list = new();
		Scene2WindowElement element = new(list, null);

		Assert.Throws<InvalidOperationException>(() => list.Attach(element));
	}

	[Fact]
	public void TheTextLookupReadsTheIndirectListTable()
	{
		int[] sizes = new int[30];
		sizes[29] = 3;
		Dictionary<int, string[]> strings = new() { [29] = ["zero", "one", "two"] };
		UnitxtTable table = UnitxtTable.Open(TextSamples.Unitxt(sizes, strings));

		Assert.Equal("two", UnitxtLookup.Get(table, 29, 2));
		Assert.Equal("zero", UnitxtLookup.Get(table, 29, 0));
	}
}
