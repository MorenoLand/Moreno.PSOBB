namespace PsoBB.Gui;

/// <summary>
/// A static text element: a rectangle that draws its text and optionally grows to the measured width.
/// </summary>
/// <remarks>
/// The original label measures its text while updating and draws it through the shared text
/// window. A caller supplies the position, colour and texture; the control never selects a layout.
/// </remarks>
public class UiLabel : UiControl
{
	/// <summary>
	/// Creates a label that is not a focus target.
	/// </summary>
	public UiLabel() => Focusable = false;

	/// <summary>
	/// Gets or sets a value indicating whether the width follows the measured text width.
	/// </summary>
	public bool AutoSize { get; set; }

	/// <summary>
	/// Measures the label text and updates the width when <see cref="AutoSize"/> is set.
	/// </summary>
	/// <param name="deltaSeconds">The frame duration.</param>
	[Original(0x0073A4EC)]
	public override void Update(float deltaSeconds)
	{
		if (!AutoSize)
			return;
		float width = MeasureText(Text);
		if (width > 0f)
			Size = new(width, Size.Y);
	}

	/// <summary>
	/// Draws the label background and then its text.
	/// </summary>
	/// <param name="drawList">The list that receives the quads.</param>
	[Original(0x0073A524)]
	public override void Draw(UiDrawList drawList)
	{
		base.Draw(drawList);
		DrawText(drawList, Text, TextColor, Size.X);
	}
}
