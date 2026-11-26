namespace PsoBB.Quests;

/// <summary>
/// Executes the bytecode of one quest script thread with the original instruction set and state.
/// </summary>
/// <remarks>
/// Every instruction is decoded from the script text and applied to a <see cref="QuestState"/>. Instructions outside the implemented set stop the VM with a <see cref="QuestVmException"/> that names the opcode and its position.
/// </remarks>
public sealed class QuestVm
{
	private const uint Prefix1 = 0xF8;
	private const uint Prefix2 = 0xF9;
	private const uint Prefix1Base = 0x100;
	private const uint Prefix2Base = 0x200;
	private const int MaximumOperandVector = 16;

	private readonly byte[] _text;
	private readonly uint[] _labels;
	private readonly QuestState _state = new();
	private readonly byte[] _registerVector = new byte[MaximumOperandVector];
	private readonly ushort[] _labelVector = new ushort[MaximumOperandVector];
	private int _instructionAddress;
	private uint _currentOpcode;

	/// <summary>
	/// Creates a VM for the script text and label table of a parsed quest.
	/// </summary>
	/// <param name="script">The parsed quest script.</param>
	/// <exception cref="ArgumentNullException"><paramref name="script"/> is <see langword="null"/>.</exception>
	public QuestVm(QuestScriptFile script)
	{
		ArgumentNullException.ThrowIfNull(script);
		_text = script.Text.ToArray();
		_labels = script.EntryPoints.ToArray();
		Reset();
	}

	/// <summary>Gets the thread state the VM reads and writes.</summary>
	public QuestState State => _state;

	/// <summary>Gets the offset of the most recently started instruction, or <c>-1</c> before the first step.</summary>
	public int LastInstructionAddress => _instructionAddress;

	/// <summary>Gets the most recently decoded opcode, including its prefix when present.</summary>
	public uint LastOpcode => _currentOpcode;

	/// <summary>
	/// Clears every register and stack and starts at label zero.
	/// </summary>
	public void Reset() => Reset(0);

	/// <summary>
	/// Clears every register and stack and starts at the given label.
	/// </summary>
	/// <param name="entryLabel">Zero-based label-table index to start from.</param>
	/// <exception cref="ArgumentOutOfRangeException">The label index is outside the label table.</exception>
	public void Reset(int entryLabel)
	{
		if (entryLabel < 0 || entryLabel > ushort.MaxValue || entryLabel >= _labels.Length)
			throw new ArgumentOutOfRangeException(nameof(entryLabel));
		_state.Clear();
		_state.ProgramCounter = _labels[entryLabel];
		_instructionAddress = -1;
		_currentOpcode = 0;
	}

	/// <summary>
	/// Executes one instruction and returns the thread's resulting yield state.
	/// </summary>
	/// <returns><see cref="QuestYieldReason.None"/> while the thread may continue, otherwise the reason it stopped.</returns>
	/// <exception cref="InvalidOperationException">The thread has yielded; call <see cref="Resume"/> first.</exception>
	/// <exception cref="QuestVmException">The instruction is not implemented, is truncated, or contains an invalid operand.</exception>
	public QuestYieldReason Step()
	{
		if (_state.YieldReason != QuestYieldReason.None)
			throw new InvalidOperationException("The quest thread has yielded; call Resume before stepping again.");
		if (_state.ProgramCounter >= (uint)_text.Length)
			throw new QuestVmException(QuestVmError.TruncatedInstruction, "The script position is outside the text section.", PositionAsAddress(), 0);
		_instructionAddress = (int)_state.ProgramCounter;
		_currentOpcode = 0;
		uint opcode = ReadByte();
		if (opcode == Prefix1)
		{
			_currentOpcode = Prefix1;
			opcode = Prefix1Base + ReadByte();
		}
		else if (opcode == Prefix2)
		{
			_currentOpcode = Prefix2;
			opcode = Prefix2Base + ReadByte();
		}
		_currentOpcode = opcode;
		Execute(opcode);
		return _state.YieldReason;
	}

	/// <summary>
	/// Executes instructions until the thread yields, returns or exits.
	/// </summary>
	/// <returns>The reason the thread stopped.</returns>
	[Original(0x006B0C98, "quest_thread_exec_until_yield")]
	public QuestYieldReason Run()
	{
		while (_state.YieldReason == QuestYieldReason.None)
			Step();
		return _state.YieldReason;
	}

	/// <summary>
	/// Clears a yield so the next step continues from the saved position.
	/// </summary>
	public void Resume() => _state.YieldReason = QuestYieldReason.None;

	private int PositionAsAddress() => _state.ProgramCounter > int.MaxValue ? int.MaxValue : (int)_state.ProgramCounter;

	[Original(0x006B4948, "quest_read_objcode_1")]
	private byte ReadByte()
	{
		if (_state.ProgramCounter >= (uint)_text.Length)
			throw new QuestVmException(QuestVmError.TruncatedInstruction, "The script ended before an instruction or operand was complete.", _instructionAddress, _currentOpcode);
		return _text[_state.ProgramCounter++];
	}

	[Original(0x006B10F8, "quest_read_objcode_2")]
	private ushort ReadUInt16()
	{
		uint low = ReadByte();
		uint high = ReadByte();
		return (ushort)(low | (high << 8));
	}

	[Original(0x006B10A0, "quest_read_objcode_4")]
	private uint ReadUInt32()
	{
		uint value = ReadByte();
		value |= (uint)ReadByte() << 8;
		value |= (uint)ReadByte() << 16;
		value |= (uint)ReadByte() << 24;
		return value;
	}

	private uint ResolveLabel(ushort label)
	{
		if (label >= _labels.Length)
			throw new QuestVmException(QuestVmError.InvalidLabel, $"The label index {label} is outside the script's label table.", _instructionAddress, _currentOpcode);
		uint target = _labels[label];
		if (target >= (uint)_text.Length)
			throw new QuestVmException(QuestVmError.InvalidLabel, $"The label index {label} points outside the script text.", _instructionAddress, _currentOpcode);
		return target;
	}

	private void JumpTo(ushort label) => _state.ProgramCounter = ResolveLabel(label);

	[Original(0x006B1F04, "quest_stack_push")]
	private void PushCallStack(uint value)
	{
		if (_state.CallStackDepth >= QuestState.CallStackCapacity)
			throw new QuestVmException(QuestVmError.CallStackOverflow, "The call stack has no room for another value.", _instructionAddress, _currentOpcode);
		_state.CallStackStorage[_state.CallStackDepth++] = value;
	}

	[Original(0x006B16C0, "quest_stack_pop")]
	private uint PopCallStack()
	{
		if (_state.CallStackDepth <= 0)
			return 0;
		return _state.CallStackStorage[--_state.CallStackDepth];
	}

	private void PushArgument(uint value)
	{
		if (_state.ArgumentCount >= QuestState.ArgumentStackCapacity)
			throw new QuestVmException(QuestVmError.ArgumentStackOverflow, "The argument stack has no room for another value.", _instructionAddress, _currentOpcode);
		_state.ArgumentStorage[_state.ArgumentCount++] = value;
	}

	private void Execute(uint opcode)
	{
		switch (opcode)
		{
			case 0x00: return;
			case 0x01: ExecuteReturn(); return;
			case 0x02: ExecuteSync(); return;
			case 0x03: ExecuteExit(); return;
			case 0x05: ExecuteVaStart(); return;
			case 0x06: ExecuteVaEnd(); return;
			case 0x07: ExecuteVaCall(); return;
			case 0x08: ExecuteMoveRegister(); return;
			case 0x09: ExecuteLoadImmediate(); return;
			case 0x0A: ExecuteLoadByte(); return;
			case 0x0B: ExecuteLoadWord(); return;
			case 0x10: ExecuteSet(); return;
			case 0x11: ExecuteClear(); return;
			case 0x12: ExecuteReverse(); return;
			case 0x18: ExecuteAdd(); return;
			case 0x19: ExecuteAddImmediate(); return;
			case 0x1A: ExecuteSubtract(); return;
			case 0x1B: ExecuteSubtractImmediate(); return;
			case 0x1C: ExecuteMultiply(); return;
			case 0x1D: ExecuteMultiplyImmediate(); return;
			case 0x1E: ExecuteDivide(); return;
			case 0x1F: ExecuteDivideImmediate(); return;
			case 0x20: ExecuteAnd(); return;
			case 0x21: ExecuteAndImmediate(); return;
			case 0x22: ExecuteOr(); return;
			case 0x23: ExecuteOrImmediate(); return;
			case 0x24: ExecuteXor(); return;
			case 0x25: ExecuteXorImmediate(); return;
			case 0x26: case 0xE9: ExecuteRemainder(); return;
			case 0x27: case 0xEA: ExecuteRemainderImmediate(); return;
			case 0x28: ExecuteJump(); return;
			case 0x29: ExecuteCall(); return;
			case 0x2A: ExecuteJumpOn(); return;
			case 0x2B: ExecuteJumpOff(); return;
			case 0x2C: ExecuteJumpEqual(); return;
			case 0x2D: ExecuteJumpEqualImmediate(); return;
			case 0x2E: ExecuteJumpNotEqual(); return;
			case 0x2F: ExecuteJumpNotEqualImmediate(); return;
			case 0x30: ExecuteJumpGreaterUnsigned(); return;
			case 0x31: ExecuteJumpGreaterImmediateUnsigned(); return;
			case 0x32: ExecuteJumpGreater(); return;
			case 0x33: ExecuteJumpGreaterImmediate(); return;
			case 0x34: ExecuteJumpLessUnsigned(); return;
			case 0x35: ExecuteJumpLessImmediateUnsigned(); return;
			case 0x36: ExecuteJumpLess(); return;
			case 0x37: ExecuteJumpLessImmediate(); return;
			case 0x38: ExecuteJumpGreaterOrEqualUnsigned(); return;
			case 0x39: ExecuteJumpGreaterOrEqualImmediateUnsigned(); return;
			case 0x3A: ExecuteJumpGreaterOrEqual(); return;
			case 0x3B: ExecuteJumpGreaterOrEqualImmediate(); return;
			case 0x3C: ExecuteJumpLessOrEqualUnsigned(); return;
			case 0x3D: ExecuteJumpLessOrEqualImmediateUnsigned(); return;
			case 0x3E: ExecuteJumpLessOrEqual(); return;
			case 0x3F: ExecuteJumpLessOrEqualImmediate(); return;
			case 0x40: ExecuteSwitchJump(); return;
			case 0x41: ExecuteSwitchCall(); return;
			case 0x42: ExecuteStackPush(); return;
			case 0x43: ExecuteStackPop(); return;
			case 0x44: ExecuteStackPushMultiple(); return;
			case 0x45: ExecuteStackPopMultiple(); return;
			case 0x48: ExecuteArgumentPushRegister(); return;
			case 0x49: ExecuteArgumentPushImmediate(); return;
			case 0x4A: ExecuteArgumentPushByte(); return;
			case 0x4B: ExecuteArgumentPushWord(); return;
			case 0x203: ExecuteMoveRegister(); return;
			default:
				throw new QuestVmException(QuestVmError.UnimplementedOpcode, "This VM does not implement the instruction.", _instructionAddress, opcode);
		}
	}

	[Original(0x006B16A0, "opcode_ret")]
	private void ExecuteReturn()
	{
		if (_state.CallStackDepth > 0)
			_state.ProgramCounter = PopCallStack();
		else
			_state.YieldReason = QuestYieldReason.Return;
	}

	[Original(0x006B16E0, "opcode_sync")]
	private void ExecuteSync() => _state.YieldReason = QuestYieldReason.Sync;

	[Original(0x006B9974)]
	private void ExecuteExit()
	{
		ReadUInt32();
		_state.YieldReason = QuestYieldReason.Exit;
	}

	[Original(0x006B892C, "opcode_va_start")]
	private void ExecuteVaStart()
	{
		_state.ArgumentCount = 0;
		for (int register = 1; register <= 7; register++)
			PushCallStack(_state.RegisterStorage[register]);
	}

	[Original(0x006B8990, "opcode_va_end")]
	private void ExecuteVaEnd()
	{
		for (int register = 7; register >= 1; register--)
			_state.RegisterStorage[register] = PopCallStack();
	}

	[Original(0x006B8A64, "opcode_va_call")]
	private void ExecuteVaCall()
	{
		ushort label = ReadUInt16();
		for (int register = 1; register <= 7; register++)
			_state.RegisterStorage[register] = _state.ArgumentStorage[register - 1];
		_state.ArgumentCount = 0;
		PushCallStack(_state.ProgramCounter);
		JumpTo(label);
	}

	[Original(0x006B170C, "opcode_flet")]
	private void ExecuteMoveRegister()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] = _state.RegisterStorage[source];
	}

	[Original(0x006B1724, "opcode_leti")]
	private void ExecuteLoadImmediate()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] = ReadUInt32();
	}

	[Original(0x006B1738, "opcode_letb")]
	private void ExecuteLoadByte()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] = ReadByte();
	}

	[Original(0x006B174C, "opcode_letw")]
	private void ExecuteLoadWord()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] = ReadUInt16();
	}

	[Original(0x006B179C, "opcode_set")]
	private void ExecuteSet() => _state.RegisterStorage[ReadByte()] = 1;

	[Original(0x006B17B0, "opcode_clear")]
	private void ExecuteClear() => _state.RegisterStorage[ReadByte()] = 0;

	[Original(0x006B17C4, "opcode_rev")]
	private void ExecuteReverse()
	{
		int register = ReadByte();
		_state.RegisterStorage[register] = _state.RegisterStorage[register] == 0 ? 1u : 0u;
	}

	[Original(0x006B1888, "opcode_add")]
	private void ExecuteAdd()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] + _state.RegisterStorage[source]);
	}

	[Original(0x006B18A0, "opcode_addi")]
	private void ExecuteAddImmediate()
	{
		int destination = ReadByte();
		uint value = ReadUInt32();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] + value);
	}

	[Original(0x006B18B4, "opcode_sub")]
	private void ExecuteSubtract()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] - _state.RegisterStorage[source]);
	}

	[Original(0x006B18D0, "opcode_subi")]
	private void ExecuteSubtractImmediate()
	{
		int destination = ReadByte();
		uint value = ReadUInt32();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] - value);
	}

	[Original(0x006B18E8, "opcode_mul")]
	private void ExecuteMultiply()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] * _state.RegisterStorage[source]);
	}

	[Original(0x006B1908, "opcode_muli")]
	private void ExecuteMultiplyImmediate()
	{
		int destination = ReadByte();
		uint value = ReadUInt32();
		_state.RegisterStorage[destination] = unchecked(_state.RegisterStorage[destination] * value);
	}

	[Original(0x006B1920, "opcode_div")]
	private void ExecuteDivide()
	{
		int destination = ReadByte();
		int source = ReadByte();
		int divisor = (int)_state.RegisterStorage[source];
		if (divisor == 0)
			throw new QuestVmException(QuestVmError.ArithmeticFault, "The instruction divides by zero.", _instructionAddress, _currentOpcode);
		_state.RegisterStorage[destination] = (uint)((int)_state.RegisterStorage[destination] / divisor);
	}

	[Original(0x006B1944, "opcode_divi")]
	private void ExecuteDivideImmediate()
	{
		int destination = ReadByte();
		int divisor = (int)ReadUInt32();
		if (divisor == 0)
			throw new QuestVmException(QuestVmError.ArithmeticFault, "The instruction divides by zero.", _instructionAddress, _currentOpcode);
		_state.RegisterStorage[destination] = (uint)((int)_state.RegisterStorage[destination] / divisor);
	}

	[Original(0x006B1964, "opcode_and")]
	private void ExecuteAnd()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] &= _state.RegisterStorage[source];
	}

	[Original(0x006B197C, "opcode_andi")]
	private void ExecuteAndImmediate()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] &= ReadUInt32();
	}

	[Original(0x006B1990, "opcode_or")]
	private void ExecuteOr()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] |= _state.RegisterStorage[source];
	}

	[Original(0x006B19A8, "opcode_ori")]
	private void ExecuteOrImmediate()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] |= ReadUInt32();
	}

	[Original(0x006B19BC, "opcode_xor")]
	private void ExecuteXor()
	{
		int destination = ReadByte();
		int source = ReadByte();
		_state.RegisterStorage[destination] ^= _state.RegisterStorage[source];
	}

	[Original(0x006B19D4, "opcode_xori")]
	private void ExecuteXorImmediate()
	{
		int destination = ReadByte();
		_state.RegisterStorage[destination] ^= ReadUInt32();
	}

	[Original(0x006B19E8, "opcode_res")]
	private void ExecuteRemainder()
	{
		int destination = ReadByte();
		int source = ReadByte();
		int divisor = (int)_state.RegisterStorage[source];
		if (divisor == 0)
			throw new QuestVmException(QuestVmError.ArithmeticFault, "The instruction divides by zero.", _instructionAddress, _currentOpcode);
		_state.RegisterStorage[destination] = (uint)((int)_state.RegisterStorage[destination] % divisor);
	}

	[Original(0x006B1A0C, "opcode_modi")]
	private void ExecuteRemainderImmediate()
	{
		int destination = ReadByte();
		uint divisor = ReadUInt32();
		if (divisor == 0)
			throw new QuestVmException(QuestVmError.ArithmeticFault, "The instruction divides by zero.", _instructionAddress, _currentOpcode);
		_state.RegisterStorage[destination] %= divisor;
	}

	[Original(0x006B1A2C, "opcode_jmp_on")]
	private void ExecuteJumpOn()
	{
		ushort label = ReadUInt16();
		int count = ReadByte();
		ReadRegisterVector(count);
		for (int index = 0; index < count; index++)
		{
			if (_state.RegisterStorage[_registerVector[index]] == 0)
				return;
		}
		JumpTo(label);
	}

	[Original(0x006B1AC8, "opcode_jmp_off")]
	private void ExecuteJumpOff()
	{
		ushort label = ReadUInt16();
		int count = ReadByte();
		ReadRegisterVector(count);
		for (int index = 0; index < count; index++)
		{
			if (_state.RegisterStorage[_registerVector[index]] != 0)
				return;
		}
		JumpTo(label);
	}

	private void ReadRegisterVector(int count)
	{
		if (count > MaximumOperandVector)
			throw new QuestVmException(QuestVmError.InvalidOperand, $"The instruction lists {count} registers but the VM accepts at most {MaximumOperandVector}.", _instructionAddress, _currentOpcode);
		for (int index = 0; index < count; index++)
			_registerVector[index] = ReadByte();
	}

	[Original(0x006B1E98, "opcode_jmp")]
	private void ExecuteJump() => JumpTo(ReadUInt16());

	[Original(0x006B1EDC, "opcode_call")]
	private void ExecuteCall()
	{
		ushort label = ReadUInt16();
		PushCallStack(_state.ProgramCounter);
		JumpTo(label);
	}

	[Original(0x006B1B24, "opcode_jmp_eq")]
	private void ExecuteJumpEqual()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] == _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1B50, "opcode_jmpi_eq")]
	private void ExecuteJumpEqualImmediate()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] == right)
			JumpTo(label);
	}

	[Original(0x006B1B78, "opcode_jmp_neq")]
	private void ExecuteJumpNotEqual()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] != _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1BA4, "opcode_jmpi_neq")]
	private void ExecuteJumpNotEqualImmediate()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] != right)
			JumpTo(label);
	}

	[Original(0x006B1BCC, "opcode_ujmp_gt")]
	private void ExecuteJumpGreaterUnsigned()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] > _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1BF8, "opcode_ujmpi_gt")]
	private void ExecuteJumpGreaterImmediateUnsigned()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] > right)
			JumpTo(label);
	}

	[Original(0x006B1C20, "opcode_jmp_gt")]
	private void ExecuteJumpGreater()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] > (int)_state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1C4C, "opcode_jmpi_gt")]
	private void ExecuteJumpGreaterImmediate()
	{
		int left = ReadByte();
		int right = (int)ReadUInt32();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] > right)
			JumpTo(label);
	}

	[Original(0x006B1C74, "opcode_ujmp_lt")]
	private void ExecuteJumpLessUnsigned()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] < _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1CA0, "opcode_ujmpi_lt")]
	private void ExecuteJumpLessImmediateUnsigned()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] < right)
			JumpTo(label);
	}

	[Original(0x006B1CC8, "opcode_jmp_lt")]
	private void ExecuteJumpLess()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] < (int)_state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1CF4, "opcode_jmpi_lt")]
	private void ExecuteJumpLessImmediate()
	{
		int left = ReadByte();
		int right = (int)ReadUInt32();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] < right)
			JumpTo(label);
	}

	[Original(0x006B1D1C, "opcode_ujmp_gte")]
	private void ExecuteJumpGreaterOrEqualUnsigned()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] >= _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1D48, "opcode_ujmpi_gte")]
	private void ExecuteJumpGreaterOrEqualImmediateUnsigned()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] >= right)
			JumpTo(label);
	}

	[Original(0x006B1D70, "opcode_jmp_gte")]
	private void ExecuteJumpGreaterOrEqual()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] >= (int)_state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1D9C, "opcode_jmpi_gte")]
	private void ExecuteJumpGreaterOrEqualImmediate()
	{
		int left = ReadByte();
		int right = (int)ReadUInt32();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] >= right)
			JumpTo(label);
	}

	[Original(0x006B1DC4, "opcode_ujmp_lte")]
	private void ExecuteJumpLessOrEqualUnsigned()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] <= _state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1DF0, "opcode_ujmpi_lte")]
	private void ExecuteJumpLessOrEqualImmediateUnsigned()
	{
		int left = ReadByte();
		uint right = ReadUInt32();
		ushort label = ReadUInt16();
		if (_state.RegisterStorage[left] <= right)
			JumpTo(label);
	}

	[Original(0x006B1E18, "opcode_jmp_lte")]
	private void ExecuteJumpLessOrEqual()
	{
		int left = ReadByte();
		int right = ReadByte();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] <= (int)_state.RegisterStorage[right])
			JumpTo(label);
	}

	[Original(0x006B1E44, "opcode_jmpi_lte")]
	private void ExecuteJumpLessOrEqualImmediate()
	{
		int left = ReadByte();
		int right = (int)ReadUInt32();
		ushort label = ReadUInt16();
		if ((int)_state.RegisterStorage[left] <= right)
			JumpTo(label);
	}

	[Original(0x006B1E6C, "opcode_switch_jmp")]
	private void ExecuteSwitchJump()
	{
		int value = ReadSwitchValue(out int count);
		if (value >= 0 && value < count)
			JumpTo(_labelVector[value]);
	}

	[Original(0x006B1EB0, "opcode_switch_call")]
	private void ExecuteSwitchCall()
	{
		int value = ReadSwitchValue(out int count);
		if (value >= 0 && value < count)
		{
			PushCallStack(_state.ProgramCounter);
			JumpTo(_labelVector[value]);
		}
	}

	private int ReadSwitchValue(out int count)
	{
		int register = ReadByte();
		count = ReadByte();
		if (count > MaximumOperandVector)
			throw new QuestVmException(QuestVmError.InvalidOperand, $"The instruction lists {count} labels but the VM accepts at most {MaximumOperandVector}.", _instructionAddress, _currentOpcode);
		for (int index = 0; index < count; index++)
			_labelVector[index] = ReadUInt16();
		return (int)_state.RegisterStorage[register];
	}

	[Original(0x006B1F1C, "opcode_stack_push")]
	private void ExecuteStackPush() => PushCallStack(_state.RegisterStorage[ReadByte()]);

	[Original(0x006B1F34, "opcode_stack_pop")]
	private void ExecuteStackPop() => _state.RegisterStorage[ReadByte()] = PopCallStack();

	[Original(0x006B1F48, "opcode_stack_pushm")]
	private void ExecuteStackPushMultiple()
	{
		int start = ReadByte();
		int count = (int)ReadUInt32();
		if (count <= 0)
			return;
		if (_state.CallStackDepth > QuestState.CallStackCapacity - count)
			throw new QuestVmException(QuestVmError.CallStackOverflow, "The call stack has no room for the requested values.", _instructionAddress, _currentOpcode);
		for (int index = 0; index < count; index++)
			PushCallStack(_state.RegisterStorage[(byte)(start + index)]);
	}

	[Original(0x006B200C, "opcode_stack_popm")]
	private void ExecuteStackPopMultiple()
	{
		int start = ReadByte();
		int count = (int)ReadUInt32();
		if (count <= 0)
			return;
		int register = (byte)(start + count);
		for (int index = 0; index < count; index++)
		{
			register = (byte)(register - 1);
			_state.RegisterStorage[register] = PopCallStack();
		}
	}

	[Original(0x006B8AD0, "opcode_arg_pushr")]
	private void ExecuteArgumentPushRegister() => PushArgument(_state.RegisterStorage[ReadByte()]);

	[Original(0x006B8AF4, "opcode_arg_pushl__arg_pushs")]
	private void ExecuteArgumentPushImmediate() => PushArgument(ReadUInt32());

	[Original(0x006B8B10, "opcode_arg_pushb")]
	private void ExecuteArgumentPushByte() => PushArgument(ReadByte());

	[Original(0x006B8B2C, "opcode_arg_pushw")]
	private void ExecuteArgumentPushWord() => PushArgument(ReadUInt16());
}
