namespace PsoBB.Quests;

/// <summary>
/// The registers, call stack, argument stack and position of one quest script thread.
/// </summary>
public sealed class QuestState
{
	/// <summary>The number of 32-bit registers available to a script.</summary>
	public const int RegisterCount = 256;

	/// <summary>The number of 32-bit values the call stack holds.</summary>
	public const int CallStackCapacity = 64;

	/// <summary>The number of values the argument stack holds.</summary>
	public const int ArgumentStackCapacity = 8;

	private readonly uint[] _registers = new uint[RegisterCount];
	private readonly uint[] _callStack = new uint[CallStackCapacity];
	private readonly uint[] _arguments = new uint[ArgumentStackCapacity];

	/// <summary>Gets the register file.</summary>
	public ReadOnlySpan<uint> Registers => _registers;

	/// <summary>Gets the values currently on the call stack, oldest first.</summary>
	public ReadOnlySpan<uint> CallStack => _callStack.AsSpan(0, CallStackDepth);

	/// <summary>Gets the values currently on the argument stack, oldest first.</summary>
	public ReadOnlySpan<uint> Arguments => _arguments.AsSpan(0, ArgumentCount);

	/// <summary>Gets the number of values on the call stack.</summary>
	public int CallStackDepth { get; internal set; }

	/// <summary>Gets the number of values on the argument stack.</summary>
	public int ArgumentCount { get; internal set; }

	/// <summary>Gets the offset of the next instruction from the start of the script text.</summary>
	public uint ProgramCounter { get; internal set; }

	/// <summary>Gets the reason the thread stopped, or <see cref="QuestYieldReason.None"/> while it may run.</summary>
	public QuestYieldReason YieldReason { get; internal set; }

	internal Span<uint> RegisterStorage => _registers;

	internal Span<uint> CallStackStorage => _callStack;

	internal Span<uint> ArgumentStorage => _arguments;

	internal void Clear()
	{
		Array.Clear(_registers);
		Array.Clear(_callStack);
		Array.Clear(_arguments);
		CallStackDepth = 0;
		ArgumentCount = 0;
		ProgramCounter = 0;
		YieldReason = QuestYieldReason.None;
	}
}
