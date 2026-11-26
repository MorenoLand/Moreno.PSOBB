using System.Text;
using PsoBB.Gui;

namespace PsoBB.Scenes;

/// <summary>
/// The character-name line: the edit box, the twelve-character limit and the original commit rules.
/// </summary>
/// <remarks>
/// The original validates the wide string when the name screen confirms. The host supplies the
/// composed edit-box text; the input-method round-trip comparison at <c>0x813F0C</c> is not ported.
/// </remarks>
public sealed class CharacterNameEntry : IDisposable
{
	/// <summary>The maximum number of characters copied by the original name check.</summary>
	public const int MaxLength = 12;

	private readonly UiEditBox _editBox = new() { MaxLength = MaxLength };

	/// <summary>Gets the edit box that receives the name.</summary>
	public UiEditBox EditBox => _editBox;

	/// <summary>Gets the current uncommitted text.</summary>
	public string Text => _editBox.Text;

	/// <summary>Gets a value indicating whether the edit box is accepting characters.</summary>
	public bool IsEditing => _editBox.IsEditing;

	/// <summary>
	/// Starts editing and places the caret at the end of the current text.
	/// </summary>
	/// <returns><see langword="true"/> when the box can be edited.</returns>
	public bool BeginEdit() => _editBox.BeginEdit();

	/// <summary>
	/// Commits the edit box and applies the original trimming and character rules.
	/// </summary>
	/// <param name="name">The accepted name, or the empty string when the line is rejected.</param>
	/// <returns><see langword="true"/> when a non-empty name was accepted.</returns>
	public bool TryCommit(out string name)
	{
		_editBox.CommitInput();
		name = Normalize(_editBox.Text);
		if (name.Length == 0)
			return false;
		_editBox.SetText(name);
		return true;
	}

	/// <summary>
	/// Applies the original twelve-character truncation, leading tab and space removal, and
	/// graphic-character filter.
	/// </summary>
	/// <param name="source">The input line.</param>
	/// <returns>The accepted name, or the empty string when no graphic character remains.</returns>
	[Original(0x004E732C, "CharacterName_Normalize_004e732c")]
	public static string Normalize(string? source)
	{
		if (string.IsNullOrEmpty(source))
			return "";
		string line = source.Length > MaxLength ? source[..MaxLength] : source;
		int start = 0;
		while (start < line.Length && line[start] is '\t' or ' ' or '\u3000')
			start++;
		if (start == line.Length)
			return "";
		StringBuilder filtered = new(line.Length);
		for (int index = start; index < line.Length; index++)
		{
			char character = line[index];
			if (character != '\0' && IsGraphic(character))
				filtered.Append(character);
		}
		return filtered.ToString();
	}

	/// <summary>
	/// Returns whether a character is single-byte or a half-width katakana character.
	/// </summary>
	/// <param name="character">The character to test.</param>
	/// <returns><see langword="true"/> for codes below 256 or in the half-width katakana range.</returns>
	[Original(0x004E7308, "CharacterName_IsSingleByteOrHalfWidth_004e7308")]
	public static bool IsSingleByteOrHalfWidth(char character) => character < 256 || (character >= '\uFF61' && character <= '\uFF91');

	private static bool IsGraphic(char character) => !char.IsControl(character) && !char.IsWhiteSpace(character);

	/// <summary>Releases the edit box.</summary>
	public void Dispose() => _editBox.Dispose();
}
