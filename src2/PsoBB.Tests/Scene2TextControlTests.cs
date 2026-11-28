using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x00735708 text control state, the 0x00736510 index setter and the 0x0073B1E8 words.
/// </summary>
public sealed class Scene2TextControlTests
{
	[Fact]
	public void TheControlAllocatesOneZeroedRecordPerCapacity()
	{
		Scene2TextControl control = new(5);

		Assert.Equal(5, control.Capacity);
		Assert.Equal(5 * Scene2TextControl.RecordLength, control.Records.Length);
		Assert.All(control.Records, value => Assert.Equal(0, value));
		Assert.Equal(0, control.CurrentIndex);
		Assert.Equal(0, control.Count);
	}

	[Fact]
	public void TheIndexMovesOnlyInsideTheCapacity()
	{
		Scene2TextControl control = new(3);

		Assert.Equal(2, control.Select(2));
		Assert.Equal(2, control.CurrentIndex);
		Assert.Equal(3, control.Select(3));
		Assert.Equal(2, control.CurrentIndex);
		Assert.Equal(-1, control.Select(-1));
		Assert.Equal(2, control.CurrentIndex);
	}

	[Fact]
	public void ADescriptorStoresItsTwoWordsAndValue()
	{
		Scene2TextControl.Bind([0x11, 0x22], 0x33);

		Assert.Equal(0x11, Scene2TextControl.DescriptorFirst);
		Assert.Equal(0x22, Scene2TextControl.DescriptorSecond);
		Assert.Equal(0x33, Scene2TextControl.DescriptorValue);
		Assert.Throws<ArgumentException>(() => Scene2TextControl.Bind([1], 2));
	}

	[Fact]
	public void ANegativeCapacityIsRejected()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => new Scene2TextControl(-1));
	}
}
