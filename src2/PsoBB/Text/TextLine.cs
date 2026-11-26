namespace PsoBB.Text;

/// <summary>
/// One laid-out line: its source characters and its painted width.
/// </summary>
/// <param name="Start">The first source character of the line.</param>
/// <param name="Length">The number of source characters, including a trailing newline.</param>
/// <param name="Width">The painted width in pixels.</param>
public readonly record struct TextLine(int Start, int Length, float Width);
