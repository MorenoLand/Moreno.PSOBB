namespace PsoBB.Text;

/// <summary>
/// The colours referenced by the client's tab-prefixed text colour commands.
/// </summary>
/// <remarks>
/// The original table is indexed by the command character, so the one-digit commands use the
/// entries at the ASCII positions of '/' through '9'. An empty table leaves the current colour
/// unchanged. The G command falls back to the client's gold colour.
/// </remarks>
public sealed class TextColorTable
{
	/// <summary>The gold colour used by the G command when no UI colour table is installed.</summary>
	public const uint DefaultGold = 0xFFFFEA00;

	private readonly uint[] _colors;

	/// <summary>
	/// Creates a colour table.
	/// </summary>
	/// <param name="colors">The colours indexed by command character.</param>
	/// <param name="gold">The colour used by the G command.</param>
	/// <exception cref="ArgumentNullException"><paramref name="colors"/> is null.</exception>
	public TextColorTable(IReadOnlyList<uint> colors, uint gold = DefaultGold)
	{
		ArgumentNullException.ThrowIfNull(colors);
		_colors = [.. colors];
		Gold = gold;
	}

	/// <summary>Gets the colour used by the G command.</summary>
	public uint Gold { get; }

	/// <summary>
	/// Returns the colour stored at a command character.
	/// </summary>
	/// <param name="command">The command character.</param>
	/// <param name="color">The colour, or the unchanged input when the table has no entry.</param>
	/// <returns><see langword="true"/> when the table contains the entry.</returns>
	public bool TryGet(char command, out uint color)
	{
		int index = command;
		if (index >= 0 && index < _colors.Length)
		{
			color = _colors[index];
			return true;
		}
		color = 0;
		return false;
	}
}
