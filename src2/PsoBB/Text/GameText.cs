namespace PsoBB.Text;

/// <summary>
/// The client's text lookup surface: one locale's unitxt table plus the title and account labels.
/// </summary>
public sealed class GameText
{
	/// <summary>The list that holds title and account-panel strings.</summary>
	public const int LoginScreenList = 41;

	/// <summary>
	/// Creates the text surface for one parsed table.
	/// </summary>
	/// <param name="table">The locale's unitxt table.</param>
	public GameText(UnitxtTable table)
	{
		ArgumentNullException.ThrowIfNull(table);
		Table = table;
	}

	/// <summary>Gets the parsed unitxt table.</summary>
	public UnitxtTable Table { get; }

	/// <summary>
	/// Gets one original string from the table.
	/// </summary>
	/// <param name="list">The zero-based list index.</param>
	/// <param name="index">The zero-based string index inside the list.</param>
	/// <returns>The string without its terminator.</returns>
	public string GetString(int list, int index) => Table.GetString(list, index);

	/// <summary>
	/// Gets a title or account-panel label from list 41.
	/// </summary>
	/// <param name="text">The label to read.</param>
	/// <returns>The original label.</returns>
	public string GetLoginScreenText(LoginScreenText text) => Table.GetString(LoginScreenList, (int)text);

	/// <summary>
	/// Returns the unitxt file name the client loads for a locale.
	/// </summary>
	/// <param name="locale">The locale.</param>
	/// <returns>The lower-case bundle name in the client's data archive.</returns>
	[Original(0x00793304, "LoadLanguageAssets")]
	public static string GetUnitxtFileName(GameTextLocale locale) => locale switch
	{
		GameTextLocale.Japanese => "unitxt_j.prs",
		GameTextLocale.English => "unitxt_e.prs",
		GameTextLocale.German => "unitxt_g.prs",
		GameTextLocale.French => "unitxt_f.prs",
		GameTextLocale.Spanish => "unitxt_s.prs",
		GameTextLocale.ChineseSimplified => "unitxt_cs.prs",
		GameTextLocale.ChineseTraditional => "unitxt_ct.prs",
		_ => throw new ArgumentOutOfRangeException(nameof(locale), locale, "The client has no named unitxt bundle for this locale."),
	};
}
