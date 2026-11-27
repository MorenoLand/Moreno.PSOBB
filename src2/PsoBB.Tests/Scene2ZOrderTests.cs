using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x0073ECE0 z-order detach and key insertion.
/// </summary>
[Collection("Game state")]
public sealed class Scene2ZOrderTests : IDisposable
{
	public Scene2ZOrderTests()
	{
		Scene2WindowState.ThemeFlag = 1;
		Scene2ZGlobal.Accumulator = 0;
	}

	public void Dispose()
	{
		Scene2WindowState.ThemeFlag = 0;
		Scene2ZGlobal.Accumulator = 0;
	}

	[Fact]
	public void TheThemeGateOnlyWritesTheInitialValue()
	{
		Scene2WindowState.ThemeFlag = 0;
		Scene2ZList list = new();
		Scene2ZNode node = new() { Key = 5 };
		list.Append(node);

		node.Relink();

		Assert.Equal(Scene2ZNode.InitialValue, node.Value);
		Assert.Same(node, list.Head);
		Assert.Equal(0, Scene2ZGlobal.Accumulator);
	}

	[Fact]
	public void TheNodeMovesBeforeTheFirstNotGreaterKeyAndTheScanLosesDelta()
	{
		Scene2ZList list = new();
		Scene2ZNode head = new() { Key = 20 };
		Scene2ZNode tail = new() { Key = 10 };
		Scene2ZNode middle = new() { Key = 15 };
		list.Append(head);
		list.Append(tail);
		list.Append(middle);

		middle.Relink();

		Assert.Same(head, list.Head);
		Assert.Same(middle, head.Next);
		Assert.Same(tail, middle.Next);
		Assert.Equal(Scene2ZNode.InitialValue + Scene2ZNode.Delta, head.Value, 5);
		Assert.Equal(Scene2ZNode.InitialValue + Scene2ZNode.Delta, middle.Value, 5);
		Assert.Equal(Scene2ZNode.InitialValue, tail.Value, 5);
		Assert.Equal(Scene2ZNode.Delta, Scene2ZGlobal.Accumulator, 5);
	}

	[Fact]
	public void AKeyAboveTheHeadBecomesTheNewHeadAndPaysForEveryFollowingNode()
	{
		Scene2ZList list = new();
		Scene2ZNode head = new() { Key = 20 };
		Scene2ZNode tail = new() { Key = 10 };
		Scene2ZNode top = new() { Key = 25 };
		list.Append(head);
		list.Append(tail);
		list.Append(top);

		top.Relink();

		Assert.Same(top, list.Head);
		Assert.Same(head, top.Next);
		Assert.Same(tail, head.Next);
		Assert.Equal(Scene2ZNode.InitialValue + 2 * Scene2ZNode.Delta, top.Value, 5);
	}

	[Fact]
	public void AKeyBelowTheTailIsAppendedAfterTheScan()
	{
		Scene2ZList list = new();
		Scene2ZNode head = new() { Key = 20 };
		Scene2ZNode tail = new() { Key = 10 };
		Scene2ZNode low = new() { Key = 5 };
		list.Append(head);
		list.Append(tail);
		list.Append(low);

		low.Relink();

		Assert.Same(head, list.Head);
		Assert.Same(tail, head.Next);
		Assert.Same(low, tail.Next);
		Assert.Null(low.Next);
		Assert.Equal(Scene2ZNode.InitialValue + Scene2ZNode.Delta, head.Value, 5);
		Assert.Equal(Scene2ZNode.InitialValue + Scene2ZNode.Delta, tail.Value, 5);
		Assert.Equal(Scene2ZNode.InitialValue, low.Value, 5);
	}

	[Fact]
	public void ANodeWithoutAListIsRejected()
	{
		Scene2ZNode node = new() { Key = 1, Previous = new Scene2ZNode() };

		Assert.Throws<InvalidOperationException>(node.Relink);
	}
}
