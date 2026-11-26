namespace PsoBB.Text;

/// <summary>
/// The locale tables the client loads from <c>unitxt_*.prs</c>.
/// </summary>
/// <remarks>The client has an eighth table, <c>unitxt_h.prs</c>, whose language the evidence does not name; it is not part of this enum.</remarks>
public enum GameTextLocale
{
	/// <summary>Japanese, <c>unitxt_j.prs</c>.</summary>
	Japanese = 0,
	/// <summary>English, <c>unitxt_e.prs</c>.</summary>
	English = 1,
	/// <summary>German, <c>unitxt_g.prs</c>.</summary>
	German = 2,
	/// <summary>French, <c>unitxt_f.prs</c>.</summary>
	French = 3,
	/// <summary>Spanish, <c>unitxt_s.prs</c>.</summary>
	Spanish = 4,
	/// <summary>Simplified Chinese, <c>unitxt_cs.prs</c>.</summary>
	ChineseSimplified = 5,
	/// <summary>Traditional Chinese, <c>unitxt_ct.prs</c>.</summary>
	ChineseTraditional = 6,
}
