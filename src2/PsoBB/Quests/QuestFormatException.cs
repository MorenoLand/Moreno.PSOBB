namespace PsoBB.Quests;

/// <summary>
/// Reports a quest file whose declared sections, chunks or entry points do not fit its bytes.
/// </summary>
public sealed class QuestFormatException : Exception
{
	/// <summary>
	/// Creates the exception for the invalid field at the given file offset.
	/// </summary>
	/// <param name="message">Description of the invalid part of the file.</param>
	/// <param name="offset">Offset in the quest file where validation stopped.</param>
	public QuestFormatException(string message, int offset)
		: base($"{message} (file offset 0x{offset:X}).")
	{
		Offset = offset;
	}

	/// <summary>
	/// Gets the file offset where validation stopped.
	/// </summary>
	public int Offset { get; }
}
