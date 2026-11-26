namespace PsoBB.Gui;

/// <summary>
/// One row in a list window.
/// </summary>
public sealed class UiListItem
{
	/// <summary>
	/// Creates a row with its text, enabled state, data value and optional colour.
	/// </summary>
	/// <param name="text">The row text.</param>
	/// <param name="enabled">Whether the row can be selected and activated.</param>
	/// <param name="data">The value the original stores beside the row's state word.</param>
	/// <param name="color">The row text colour in 0xAARRGGBB form, or <see langword="null"/> to use the list colours.</param>
	public UiListItem(string text, bool enabled = true, int data = 0, uint? color = null)
	{
		Text = text ?? string.Empty;
		Enabled = enabled;
		Data = data;
		Color = color;
	}

	/// <summary>Gets or sets the row text.</summary>
	public string Text { get; set; }

	/// <summary>Gets or sets a value indicating whether the row can be selected and activated.</summary>
	public bool Enabled { get; set; }

	/// <summary>Gets or sets the value returned when this row is selected.</summary>
	public int Data { get; set; }

	/// <summary>Gets or sets the row text colour in 0xAARRGGBB form, or <see langword="null"/> to use the list colours.</summary>
	public uint? Color { get; set; }
}
