namespace PsoBB.Gui;

/// <summary>
/// One row in a list window.
/// </summary>
public sealed class UiListItem
{
	/// <summary>
	/// Creates a row with its text and enabled state.
	/// </summary>
	/// <param name="text">The row text.</param>
	/// <param name="enabled">Whether the row can be selected and activated.</param>
	public UiListItem(string text, bool enabled = true)
	{
		Text = text ?? string.Empty;
		Enabled = enabled;
	}

	/// <summary>Gets or sets the row text.</summary>
	public string Text { get; set; }

	/// <summary>Gets or sets a value indicating whether the row can be selected and activated.</summary>
	public bool Enabled { get; set; }
}
