namespace PsoBB.Quests;

/// <summary>
/// The kind of condition that stopped a quest script step.
/// </summary>
public enum QuestVmError
{
	/// <summary>The instruction is not implemented by this VM.</summary>
	UnimplementedOpcode,

	/// <summary>The script ended before an instruction or operand was complete.</summary>
	TruncatedInstruction,

	/// <summary>A label does not resolve to a position inside the script.</summary>
	InvalidLabel,

	/// <summary>An operand vector exceeds the size the VM accepts.</summary>
	InvalidOperand,

	/// <summary>Pushing a value would exceed the call stack.</summary>
	CallStackOverflow,

	/// <summary>Pushing a value would exceed the argument stack.</summary>
	ArgumentStackOverflow,

	/// <summary>An integer division or remainder used zero as the divisor.</summary>
	ArithmeticFault,
}
