namespace PsoBB.Quests;

/// <summary>
/// Reports a quest instruction that cannot be executed, with the opcode and the position that produced it.
/// </summary>
public sealed class QuestVmException : Exception
{
	/// <summary>
	/// Creates the exception for the instruction that stopped execution.
	/// </summary>
	/// <param name="error">The condition that stopped execution.</param>
	/// <param name="message">Description of the condition.</param>
	/// <param name="address">Offset of the instruction from the start of the script text.</param>
	/// <param name="opcode">The decoded opcode, including its 0xF8 or 0xF9 prefix.</param>
	public QuestVmException(QuestVmError error, string message, int address, uint opcode)
		: base($"{message} (opcode 0x{opcode:X}, text offset 0x{address:X}).")
	{
		Error = error;
		Address = address;
		Opcode = opcode;
	}

	/// <summary>Gets the condition that stopped execution.</summary>
	public QuestVmError Error { get; }

	/// <summary>Gets the offset of the instruction from the start of the script text.</summary>
	public int Address { get; }

	/// <summary>Gets the decoded opcode, including its prefix when present.</summary>
	public uint Opcode { get; }
}
