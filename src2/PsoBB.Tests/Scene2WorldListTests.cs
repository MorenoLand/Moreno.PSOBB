using System.Buffers.Binary;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x004170AC world-list row parser and both filter values.
/// </summary>
public sealed class Scene2WorldListTests
{
	[Fact]
	public void ParsesTheSevenFieldsAndKeepsTheNormalFilter()
	{
		Scene2WorldList list = Scene2WorldList.Create(["Alpha Beta 7 Gamma 8 9 0", "Other Row 1 Name 2 3 4"], episode4: false);

		Assert.Equal(1, list.Count);
		Scene2WorldListRow row = list.Rows[0];
		Assert.Equal("Alpha", row.Name1);
		Assert.Equal("Beta", row.Name2);
		Assert.Equal(7, row.Value1);
		Assert.Equal("Gamma", row.Name3);
		Assert.Equal(8, row.Value2);
		Assert.Equal(9, row.Value3);
		Assert.Equal(0, row.Filter);
	}

	[Fact]
	public void TheEpisodeFourFilterKeepsOnlyTheFourRows()
	{
		Scene2WorldList list = Scene2WorldList.Create(["A B 1 C 2 3 0", "D E 1 F 2 3 4", "END"], episode4: true);

		Assert.Equal(1, list.Count);
		Assert.Equal("D", list.Rows[0].Name1);
		Assert.Equal(4, list.Rows[0].Filter);
	}

	[Fact]
	public void ShortLinesDefaultTheFilterToZero()
	{
		Scene2WorldList list = Scene2WorldList.Create(["A B", "C D 1 E 2 3 0"], episode4: false);

		Assert.Equal(2, list.Count);
		Assert.Equal(0, list.Rows[0].Filter);
		Assert.Equal(string.Empty, list.Rows[0].Name3);
	}

	[Fact]
	public void TheObjectHasTheOriginalSizeAndEmptyListByDefault()
	{
		Scene2WorldList list = Scene2WorldList.Create([], episode4: false);

		Assert.Equal(0x824, list.Data.Length);
		Assert.Equal(0, list.Count);
		Assert.Equal(0, list.FirstListFlags);
		Assert.Equal(0x00AF35A0u, Scene2WorldList.Vtable);
		Assert.Equal(0x00AF35A0u, BinaryPrimitives.ReadUInt32LittleEndian(list.Data));
	}
}
