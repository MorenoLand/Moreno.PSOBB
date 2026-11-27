namespace PsoBB.Text;

/// <summary>
/// The indirect unitxt string lookup at <c>0x00792FE8</c>.
/// </summary>
public static class UnitxtLookup
{
	/// <summary>
	/// Returns the string stored at <paramref name="list"/> and <paramref name="index"/> through the
	/// pointer table the original keeps at <c>0x00A9CD50</c>.
	/// </summary>
	/// <param name="table">The parsed unitxt table.</param>
	/// <param name="list">The list index.</param>
	/// <param name="index">The string index inside the list.</param>
	/// <returns>The stored string.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="table"/> is null.</exception>
	public static string Get(UnitxtTable table, int list, int index)
	{
		ArgumentNullException.ThrowIfNull(table);
		return table.GetString(list, index);
	}
}
