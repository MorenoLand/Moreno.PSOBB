using System.Buffers.Binary;
using PsoBB.Gui;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x007BE1D4 option index, the 0x007BE1BC table and the 0x00719914 theme flag.
/// </summary>
[Collection("Game state")]
public sealed class CharacterOptionTableTests : IDisposable
{
	public CharacterOptionTableTests()
	{
		CharacterSaveLoad.Reset();
		Scene2WindowState.ThemeFlag = 0;
	}

	public void Dispose()
	{
		CharacterSaveLoad.Reset();
		Scene2WindowState.ThemeFlag = 0;
	}

	[Fact]
	public void AnAbsentSystemRecordUsesIndexOne()
	{
		Assert.Equal(1, CharacterOptionTable.Index());
		Assert.Equal(51f, CharacterOptionTable.Value());
	}

	[Fact]
	public void TheUpperOptionBitsSelectTheTableEntry()
	{
		byte[] system = new byte[CharacterSaveLoad.SystemChunkLength];
		CharacterSaveLoad.SystemRecord = system;

		BinaryPrimitives.WriteInt32LittleEndian(system.AsSpan(16), 0x200);
		Assert.Equal(2, CharacterOptionTable.Index());
		Assert.Equal(68f, CharacterOptionTable.Value());

		BinaryPrimitives.WriteInt32LittleEndian(system.AsSpan(16), 0x300);
		Assert.Equal(3, CharacterOptionTable.Index());
		Assert.Equal(0f, CharacterOptionTable.Value());
	}

	[Fact]
	public void AShortSystemRecordUsesIndexOne()
	{
		CharacterSaveLoad.SystemRecord = new byte[19];

		Assert.Equal(1, CharacterOptionTable.Index());
	}

	[Fact]
	public void TheThemeFlagReportsNonZero()
	{
		Assert.False(Scene2WindowState.HasTheme());
		Scene2WindowState.ThemeFlag = 1;
		Assert.True(Scene2WindowState.HasTheme());
	}
}
