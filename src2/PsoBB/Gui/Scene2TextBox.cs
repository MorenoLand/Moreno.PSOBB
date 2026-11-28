namespace PsoBB.Gui;

/// <summary>
/// The state-9 message box created at <c>0x00402F0C</c>: a thirty-line text window and an optional
/// two-record option control.
/// </summary>
/// <remarks>
/// The text window uses the descriptors at <c>0x008F87CC</c>/<c>0x008F87D4</c> with the thirty
/// columns written at <c>0x009F3248</c>. The option control uses the <c>0x009F310C</c> template
/// with the two columns written at <c>0x009F30EC</c>; its records carry the values zero and one.
/// The actual text-box drawing and the base-window layout remain host seams.
/// </remarks>
public sealed class Scene2TextBox
{
	/// <summary>The text-window line count.</summary>
	public const int LineCount = Scene2TextWindow.LineCount;

	/// <summary>The option-record count.</summary>
	public const int OptionCount = 2;

	/// <summary>The option record flags.</summary>
	public const int OptionFlags = 5;

	/// <summary>Gets the text window.</summary>
	public Scene2TextWindow Box { get; }

	/// <summary>Gets the option control, or <see langword="null"/> when the selection is -1.</summary>
	public Scene2TextControl? Options { get; }

	/// <summary>Gets the message text passed to the window.</summary>
	public string? Text { get; }

	/// <summary>Gets the first option label.</summary>
	public string? OptionA { get; }

	/// <summary>Gets the second option label.</summary>
	public string? OptionB { get; }

	private Scene2TextBox(string? text, int selection, string? optionA, string? optionB, IUiTextSurface surface)
	{
		Text = text;
		OptionA = optionA;
		OptionB = optionB;
		Box = Scene2TextWindow.CreateDefault(LineCount);
		if (text is not null)
			Box.AddLine(text, 3, -1, surface);
		Box.RefreshChildren();
		Box.UpdatePosition();
		if (selection == -1)
			return;
		Options = Scene2TextControl.CreateDefault(OptionCount);
		Options.AddRecord(optionA ?? string.Empty, OptionFlags, 0, surface);
		Options.AddRecord(optionB ?? string.Empty, OptionFlags, 1, surface);
		Options.MeasureLayout(0);
		Options.PlaceChildren();
		Options.Select(selection);
		Options.Flags132 &= ~4;
	}

	/// <summary>
	/// Builds the message box and its optional option control.
	/// </summary>
	/// <param name="text">The message text, or <see langword="null"/>.</param>
	/// <param name="selection">The selected option, or -1 to omit the option control.</param>
	/// <param name="optionA">The first option label, or <see langword="null"/>.</param>
	/// <param name="optionB">The second option label, or <see langword="null"/>.</param>
	/// <param name="surface">The surface that supplies the glyph advance.</param>
	/// <returns>The message box state.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="surface"/> is null.</exception>
	[Original(0x00402F0C)]
	public static Scene2TextBox Create(string? text, int selection, string? optionA, string? optionB, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(surface);
		return new Scene2TextBox(text, selection, optionA, optionB, surface);
	}
}
