using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the unitxt parser, the UTF-16 terminator rules and the title and account labels.
/// </summary>
public sealed class GameTextTests
{
	private static readonly int[] EnglishListSizes =
	[
		87, 946, 106, 866, 106, 19, 20, 47, 13, 6, 50, 384, 111, 25, 7, 150, 37, 29, 21, 84, 24, 3, 3, 45, 5, 14, 4, 31, 4, 35,
		1, 12, 15, 6, 3, 2, 1, 13, 1, 6, 1, 22, 10, 1, 8, 34, 3, 5, 2, 4, 2, 2, 10, 2, 21, 3, 1, 2, 9, 1, 1, 1, 17, 8, 1, 1, 58, 9, 7, 7, 40, 21, 11,
	];

	private static readonly string[] LoginScreenStrings =
	[
		"Cancel", "Confirm", "Login", "Start Game", "Exit Game", "Patch Download", "Register UserID",
		"Empty", "Input UserID", "UserID", "Password", "Save UserID and Password?", "Really OK?",
		"Current Status", "All Status", "Please press Enter-Key", "Patch download done.",
		"If you press Enter-Key then exit game.", "Patch download failed.",
		"If you press Enter-Key then return to title.", "There was no updated file.",
		"If you press Enter-Key then return to title.",
	];

	/// <summary>
	/// The English list structure and title labels are pinned to the retail table.
	/// </summary>
	[Fact]
	public void PinsTitleAndAccountLabels()
	{
		GameText text = CreateEnglishText();
		Assert.Equal(73, text.Table.ListCount);
		Assert.Equal(22, text.Table.GetListLength(GameText.LoginScreenList));
		Assert.Equal("Login", text.GetLoginScreenText(LoginScreenText.Login));
		Assert.Equal("Start Game", text.GetLoginScreenText(LoginScreenText.StartGame));
		Assert.Equal("Exit Game", text.GetLoginScreenText(LoginScreenText.ExitGame));
		Assert.Equal("Patch Download", text.GetLoginScreenText(LoginScreenText.PatchDownload));
		Assert.Equal("Register UserID", text.GetLoginScreenText(LoginScreenText.RegisterUserId));
		Assert.Equal(LoginScreenStrings, Enumerable.Range(0, LoginScreenStrings.Length).Select(index => text.GetString(GameText.LoginScreenList, index)).ToArray());
	}

	/// <summary>
	/// The title labels also carry their original list index and title list.
	/// </summary>
	[Fact]
	public void ExposesTheOriginalIds()
	{
		GameText text = CreateEnglishText();
		Assert.Equal(41, GameText.LoginScreenList);
		Assert.Equal(2, (int)LoginScreenText.Login);
		Assert.Equal(3, (int)LoginScreenText.StartGame);
		Assert.Equal(4, (int)LoginScreenText.ExitGame);
		Assert.Equal(5, (int)LoginScreenText.PatchDownload);
		Assert.Equal(6, (int)LoginScreenText.RegisterUserId);
		Assert.Equal("Login", text.GetString(41, 2));
	}

	/// <summary>
	/// Non-ASCII text is decoded as little-endian UTF-16 and stops at the first zero code unit.
	/// </summary>
	[Fact]
	public void ReadsUtf16AndStopsAtTheTerminator()
	{
		byte[] bundle = TextSamples.Unitxt([2], new Dictionary<int, string[]> { [0] = ["モノメイト", "Monomate"] }, true);
		UnitxtTable table = UnitxtTable.Open(bundle);
		Assert.Equal("モノメイト", table.GetString(0, 0));
		Assert.Equal("Monomate", table.GetString(0, 1));
		Assert.Equal(2, table.GetListLength(0));
	}

	/// <summary>
	/// A compressed unitxt bundle is decompressed before it is parsed.
	/// </summary>
	[Fact]
	public void DecompressesACompressedBundle()
	{
		byte[] bundle = TextSamples.Unitxt([1], new Dictionary<int, string[]> { [0] = ["Monomate"] });
		UnitxtTable table = UnitxtTable.OpenCompressed(ArchiveSamples.Compress(bundle));
		Assert.Equal("Monomate", table.GetString(0, 0));
		Assert.Equal(1, table.ListCount);
	}

	/// <summary>
	/// The locale to bundle mapping follows the client's language table.
	/// </summary>
	[Fact]
	public void MapsLocalesToBundles()
	{
		Assert.Equal("unitxt_j.prs", GameText.GetUnitxtFileName(GameTextLocale.Japanese));
		Assert.Equal("unitxt_e.prs", GameText.GetUnitxtFileName(GameTextLocale.English));
		Assert.Equal("unitxt_g.prs", GameText.GetUnitxtFileName(GameTextLocale.German));
		Assert.Equal("unitxt_f.prs", GameText.GetUnitxtFileName(GameTextLocale.French));
		Assert.Equal("unitxt_s.prs", GameText.GetUnitxtFileName(GameTextLocale.Spanish));
		Assert.Equal("unitxt_cs.prs", GameText.GetUnitxtFileName(GameTextLocale.ChineseSimplified));
		Assert.Equal("unitxt_ct.prs", GameText.GetUnitxtFileName(GameTextLocale.ChineseTraditional));
		Assert.Throws<ArgumentOutOfRangeException>(() => GameText.GetUnitxtFileName((GameTextLocale)7));
	}

	/// <summary>
	/// Every typed accessor reads the list the original function reads.
	/// </summary>
	[Fact]
	public void MapsAccessorsToTheirOriginalLists()
	{
		int[] sizes = new int[73];
		foreach (int list in new[] { 1, 2, 3, 5, 6, 7, 8, 9, 11, 15, 72 })
			sizes[list] = 1;
		sizes[2] = 109;
		sizes[4] = 109;
		sizes[12] = 6;
		Dictionary<int, string[]> strings = new()
		{
			[1] = ["item"],
			[2] = [.. Enumerable.Range(0, 109).Select(index => $"normal{index}")],
			[3] = ["item description"],
			[4] = [.. Enumerable.Range(0, 109).Select(index => $"ultimate{index}")],
			[5] = ["technique"],
			[6] = ["technique description"],
			[7] = ["action description"],
			[8] = ["class"],
			[9] = ["photon blast"],
			[11] = ["menu"],
			[12] = ["Meseta", "one", "two", "type20", "type40", "type80"],
			[15] = ["group15"],
			[72] = ["section"],
		};
		UnitxtTable table = UnitxtTable.Open(TextSamples.Unitxt(sizes, strings));
		Assert.Equal("item", table.GetItemName(0));
		Assert.Equal("item description", table.GetItemDescription(0));
		Assert.Equal("technique", table.GetTechniqueName(0));
		Assert.Equal("technique description", table.GetTechniqueDescription(0));
		Assert.Equal("action description", table.GetActionDescription(0));
		Assert.Equal("class", table.GetClassName(0));
		Assert.Equal("photon blast", table.GetPhotonBlastName(0));
		Assert.Equal("menu", table.GetMenuString(0));
		Assert.Equal("group15", table.GetGroup15String(0));
		Assert.Equal("section", table.GetSectionIdName(0));
		Assert.Equal("Meseta", table.Meseta);
		Assert.Equal("normal0", table.GetMonsterName(0, 2));
		Assert.Equal("ultimate0", table.GetMonsterName(0, 3));
		Assert.Equal("normal0", table.GetMonsterName(-5, 2));
		Assert.Equal("normal0", table.GetMonsterName(200, 2));
		Assert.Equal("type20", table.GetCharacterClassTypeName(0x20));
		Assert.Equal("type40", table.GetCharacterClassTypeName(0x40));
		Assert.Equal("type80", table.GetCharacterClassTypeName(0x80));
		Assert.Null(table.GetCharacterClassTypeName(0));
	}

	/// <summary>
	/// Lookups outside the table are rejected instead of returning a fallback string.
	/// </summary>
	[Fact]
	public void RejectsOutOfRangeLookups()
	{
		GameText text = CreateEnglishText();
		Assert.Throws<ArgumentOutOfRangeException>(() => text.GetString(-1, 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => text.GetString(73, 0));
		Assert.Throws<ArgumentOutOfRangeException>(() => text.GetString(41, 22));
		Assert.Throws<ArgumentOutOfRangeException>(() => text.Table.GetListLength(73));
	}

	/// <summary>
	/// Truncated and inconsistent tables are rejected.
	/// </summary>
	/// <param name="bundle">The malformed decompressed bundle.</param>
	[Theory]
	[MemberData(nameof(MalformedTables))]
	public void RejectsMalformedTables(byte[] bundle) => Assert.Throws<UnitxtFormatException>(() => UnitxtTable.Open(bundle));

	/// <summary>
	/// Provides malformed bundle headers, offset tables and string ends.
	/// </summary>
	/// <returns>One row per malformed bundle.</returns>
	public static List<object[]> MalformedTables() =>
	[
		new object[] { Array.Empty<byte>() },
		new object[] { new byte[] { 0, 0, 0, 0 } },
		new object[] { new byte[] { 0xFF, 0xFF, 0xFF, 0xFF } },
		new object[] { new byte[] { 2, 0, 0, 0, 1, 0, 0, 0 } },
		new object[] { new byte[] { 1, 0, 0, 0, 1, 0, 0, 0 } },
		new object[] { new byte[] { 1, 0, 0, 0, 1, 0, 0, 0, 100, 0, 0, 0 } },
		new object[] { new byte[] { 1, 0, 0, 0, 1, 0, 0, 0, 12, 0, 0, 0, 0x41, 0 } },
		new object[] { new byte[] { 0xFF, 0xFF, 0xFF, 0x7F, 0, 0, 0, 0 } },
	];

	/// <summary>
	/// A stream that is not PRS is rejected before parsing.
	/// </summary>
	[Fact]
	public void RejectsAnInvalidCompressedBundle() => Assert.Throws<UnitxtFormatException>(() => UnitxtTable.OpenCompressed([0xFF]));

	private static GameText CreateEnglishText()
	{
		Dictionary<int, string[]> strings = new() { [GameText.LoginScreenList] = LoginScreenStrings };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(EnglishListSizes, strings, true)));
	}
}
