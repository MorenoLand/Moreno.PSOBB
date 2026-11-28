namespace PsoBB.Chat;

/// <summary>
/// One editing action accepted by the chat entry.
/// </summary>
public enum ChatEditKey
{
	/// <summary>Inserts the supplied character at the cursor.</summary>
	Character,

	/// <summary>Moves the cursor one character to the left.</summary>
	Left,

	/// <summary>Moves the cursor one character to the right.</summary>
	Right,

	/// <summary>Removes the character before the cursor.</summary>
	Backspace,

	/// <summary>Removes the character at the cursor.</summary>
	Delete,
}
