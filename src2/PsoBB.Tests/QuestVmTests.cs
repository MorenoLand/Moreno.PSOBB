using System.Buffers.Binary;
using PsoBB.Quests;

namespace PsoBB.Tests;

/// <summary>
/// Checks the quest virtual machine against synthetic scripts assembled in the quest container format.
/// </summary>
public sealed class QuestVmTests
{
	private sealed class ScriptBuilder
	{
		private readonly List<byte> _text = [];
		private readonly Dictionary<int, uint> _labels = [];

		public int Position => _text.Count;

		public void Mark(int label) => _labels[label] = (uint)_text.Count;

		public void Emit(params byte[] values) => _text.AddRange(values);

		public void EmitWord(uint value)
		{
			_text.Add((byte)value);
			_text.Add((byte)(value >> 8));
		}

		public void EmitDword(uint value)
		{
			_text.Add((byte)value);
			_text.Add((byte)(value >> 8));
			_text.Add((byte)(value >> 16));
			_text.Add((byte)(value >> 24));
		}

		public int LabelOffset(int label) => (int)_labels[label];

		public QuestVm Build()
		{
			int count = _labels.Count == 0 ? 1 : _labels.Keys.Max() + 1;
			uint[] labels = new uint[count];
			foreach ((int label, uint offset) in _labels)
				labels[label] = offset;
			byte[] text = [.. _text];
			int labelBytes = labels.Length * 4;
			int totalSize = QuestScriptFile.HeaderLength + text.Length + labelBytes;
			byte[] file = new byte[totalSize];
			BinaryPrimitives.WriteUInt32LittleEndian(file, QuestScriptFile.HeaderLength);
			BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(4), (uint)(QuestScriptFile.HeaderLength + text.Length));
			BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(8), (uint)totalSize);
			text.CopyTo(file, QuestScriptFile.HeaderLength);
			for (int index = 0; index < labels.Length; index++)
				BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(QuestScriptFile.HeaderLength + text.Length + index * 4), labels[index]);
			return new QuestVm(QuestScriptFile.Parse(file));
		}
	}

	private static QuestVm CreateVm(params byte[] text)
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(text);
		return script.Build();
	}

	private static void Exit(ScriptBuilder script)
	{
		script.Emit(0x03, 0x00, 0x00, 0x00, 0x00);
	}

	/// <summary>
	/// The load, move, set, clear, reverse and no-operation instructions change registers as the original does.
	/// </summary>
	[Fact]
	public void ExecutesRegisterInstructions()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 0x44, 0x33, 0x22, 0x11);
		script.Emit(0x0A, 0x02, 0xAB);
		script.Emit(0x0B, 0x03, 0x34, 0x12);
		script.Emit(0x08, 0x04, 0x01);
		script.Emit(0x10, 0x05);
		script.Emit(0x09, 0x06, 0x05, 0x00, 0x00, 0x00);
		script.Emit(0x11, 0x06);
		script.Emit(0x10, 0x07);
		script.Emit(0x12, 0x07);
		script.Emit(0x12, 0x08);
		script.Emit(0x00);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.Exit, vm.Run());
		Assert.Equal(0x11223344u, vm.State.Registers[1]);
		Assert.Equal(0xABu, vm.State.Registers[2]);
		Assert.Equal(0x1234u, vm.State.Registers[3]);
		Assert.Equal(0x11223344u, vm.State.Registers[4]);
		Assert.Equal(1u, vm.State.Registers[5]);
		Assert.Equal(0u, vm.State.Registers[6]);
		Assert.Equal(0u, vm.State.Registers[7]);
		Assert.Equal(1u, vm.State.Registers[8]);
	}

	/// <summary>
	/// The integer arithmetic instructions wrap at 32 bits and keep the signed or unsigned operator of the original.
	/// </summary>
	[Fact]
	public void ExecutesIntegerArithmetic()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 100, 0, 0, 0);
		script.Emit(0x09, 0x02, 7, 0, 0, 0);
		script.Emit(0x18, 0x01, 0x02);
		script.Emit(0x1A, 0x01, 0x02);
		script.Emit(0x1C, 0x01, 0x02);
		script.Emit(0x1E, 0x01, 0x02);
		script.Emit(0x19, 0x01, 5, 0, 0, 0);
		script.Emit(0x1B, 0x01, 10, 0, 0, 0);
		script.Emit(0x1D, 0x01, 3, 0, 0, 0);
		script.Emit(0x1F, 0x01, 4, 0, 0, 0);
		script.Emit(0x09, 0x01, 0xAB, 0, 0, 0);
		script.Emit(0x21, 0x01, 0x0F, 0, 0, 0);
		script.Emit(0x23, 0x01, 0x30, 0, 0, 0);
		script.Emit(0x25, 0x01, 0xFF, 0, 0, 0);
		script.Emit(0x09, 0x01, 0x47, 0, 0, 0);
		script.Emit(0x09, 0x04, 0xF0, 0, 0, 0);
		script.Emit(0x20, 0x01, 0x04);
		script.Emit(0x22, 0x01, 0x04);
		script.Emit(0x24, 0x01, 0x04);
		script.Emit(0x09, 0x01, 100, 0, 0, 0);
		script.Emit(0x26, 0x01, 0x02);
		script.Emit(0x09, 0x01, 0xFF, 0xFF, 0xFF, 0xFF);
		script.Emit(0x09, 0x02, 3, 0, 0, 0);
		script.Emit(0x26, 0x01, 0x02);
		script.Emit(0x27, 0x01, 0x10, 0, 0, 0);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(100u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(7u, vm.State.Registers[2]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(107u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(100u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(700u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(100u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(105u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(95u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(285u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(71u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xABu, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0x0Bu, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0x3Bu, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xC4u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0x47u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xF0u, vm.State.Registers[4]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0x40u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xF0u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(100u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(2u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xFFFFFFFFu, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(3u, vm.State.Registers[2]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0xFFFFFFFFu, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(15u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.Exit, vm.Step());
	}

	/// <summary>
	/// An unconditional jump and a call address labels relative to the script text.
	/// </summary>
	[Fact]
	public void ExecutesJumpAndCall()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x28);
		script.EmitWord(1);
		script.Emit(0x09, 0x00, 0xAA, 0, 0, 0);
		script.Mark(1);
		script.Emit(0x29);
		script.EmitWord(2);
		int afterCall = script.Position;
		script.Emit(0x09, 0x00, 0xBB, 0, 0, 0);
		Exit(script);
		script.Mark(2);
		script.Emit(0x09, 0x01, 0x55, 0, 0, 0);
		script.Emit(0x01);
		QuestVm vm = script.Build();
		int called = script.LabelOffset(2);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)script.LabelOffset(1), vm.State.ProgramCounter);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)called, vm.State.ProgramCounter);
		Assert.Equal(1, vm.State.CallStackDepth);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0x55u, vm.State.Registers[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)afterCall, vm.State.ProgramCounter);
		Assert.Equal(0, vm.State.CallStackDepth);
	}

	/// <summary>
	/// Conditional jumps use signed or unsigned comparison as the opcode specifies.
	/// </summary>
	[Theory]
	[InlineData(0x2C, 7u, 7u, true)]
	[InlineData(0x2C, 7u, 8u, false)]
	[InlineData(0x2D, 7u, 7u, true)]
	[InlineData(0x2D, 7u, 8u, false)]
	[InlineData(0x2E, 7u, 8u, true)]
	[InlineData(0x2E, 7u, 7u, false)]
	[InlineData(0x2F, 7u, 8u, true)]
	[InlineData(0x2F, 7u, 7u, false)]
	[InlineData(0x30, 0xFFFFFFFFu, 1u, true)]
	[InlineData(0x30, 1u, 0xFFFFFFFFu, false)]
	[InlineData(0x31, 0xFFFFFFFFu, 1u, true)]
	[InlineData(0x31, 1u, 0xFFFFFFFFu, false)]
	[InlineData(0x32, 0xFFFFFFFFu, 0u, false)]
	[InlineData(0x32, 1u, 0xFFFFFFFFu, true)]
	[InlineData(0x33, 0xFFFFFFFFu, 0u, false)]
	[InlineData(0x33, 1u, 0xFFFFFFFFu, true)]
	[InlineData(0x34, 1u, 0xFFFFFFFFu, true)]
	[InlineData(0x34, 0xFFFFFFFFu, 1u, false)]
	[InlineData(0x35, 1u, 0xFFFFFFFFu, true)]
	[InlineData(0x35, 0xFFFFFFFFu, 1u, false)]
	[InlineData(0x36, 0xFFFFFFFFu, 0u, true)]
	[InlineData(0x36, 0u, 0xFFFFFFFFu, false)]
	[InlineData(0x37, 0xFFFFFFFFu, 0u, true)]
	[InlineData(0x37, 0u, 0xFFFFFFFFu, false)]
	[InlineData(0x38, 5u, 5u, true)]
	[InlineData(0x38, 4u, 5u, false)]
	[InlineData(0x39, 5u, 5u, true)]
	[InlineData(0x39, 4u, 5u, false)]
	[InlineData(0x3A, 0xFFFFFFFFu, 0xFFFFFFFFu, true)]
	[InlineData(0x3A, 0xFFFFFFFFu, 0u, false)]
	[InlineData(0x3B, 0xFFFFFFFFu, 0xFFFFFFFFu, true)]
	[InlineData(0x3B, 0xFFFFFFFFu, 0u, false)]
	[InlineData(0x3C, 5u, 5u, true)]
	[InlineData(0x3C, 6u, 5u, false)]
	[InlineData(0x3D, 5u, 5u, true)]
	[InlineData(0x3D, 6u, 5u, false)]
	[InlineData(0x3E, 0xFFFFFFFFu, 0u, true)]
	[InlineData(0x3E, 0u, 0xFFFFFFFFu, false)]
	[InlineData(0x3F, 0xFFFFFFFFu, 0u, true)]
	[InlineData(0x3F, 0u, 0xFFFFFFFFu, false)]
	public void ExecutesConditionalJumps(byte opcode, uint left, uint right, bool jump)
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, (byte)left, (byte)(left >> 8), (byte)(left >> 16), (byte)(left >> 24));
		script.Emit(0x09, 0x02, (byte)right, (byte)(right >> 8), (byte)(right >> 16), (byte)(right >> 24));
		script.Emit(opcode, 0x01);
		if (opcode is 0x2D or 0x2F or 0x31 or 0x33 or 0x35 or 0x37 or 0x39 or 0x3B or 0x3D or 0x3F)
			script.EmitDword(right);
		else
			script.Emit(0x02);
		script.EmitWord(1);
		int fallthrough = script.Position;
		script.Emit(0x09, 0x04, 0x34, 0x12, 0, 0);
		Exit(script);
		script.Mark(1);
		script.Emit(0x09, 0x03, 0xCD, 0xAB, 0, 0);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)(jump ? script.LabelOffset(1) : fallthrough), vm.State.ProgramCounter);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)(jump ? 0xABCD : 0x1234), vm.State.Registers[jump ? 3 : 4]);
	}

	/// <summary>
	/// The two register-list jumps require every listed register to be set or clear.
	/// </summary>
	[Fact]
	public void ExecutesRegisterListJumps()
	{
		ScriptBuilder onJump = new();
		onJump.Mark(0);
		onJump.Emit(0x09, 0x01, 1, 0, 0, 0);
		onJump.Emit(0x09, 0x02, 1, 0, 0, 0);
		onJump.Emit(0x2A);
		onJump.EmitWord(1);
		onJump.Emit(0x02, 0x01, 0x02);
		Exit(onJump);
		onJump.Mark(1);
		Exit(onJump);
		QuestVm onJumpVm = onJump.Build();
		Assert.Equal(QuestYieldReason.None, onJumpVm.Step());
		Assert.Equal(QuestYieldReason.None, onJumpVm.Step());
		Assert.Equal(QuestYieldReason.None, onJumpVm.Step());
		Assert.Equal((uint)onJump.LabelOffset(1), onJumpVm.State.ProgramCounter);

		ScriptBuilder onFall = new();
		onFall.Mark(0);
		onFall.Emit(0x09, 0x01, 1, 0, 0, 0);
		onFall.Emit(0x2A);
		onFall.EmitWord(1);
		onFall.Emit(0x02, 0x01, 0x02);
		int onFallthrough = onFall.Position;
		Exit(onFall);
		onFall.Mark(1);
		Exit(onFall);
		QuestVm onFallVm = onFall.Build();
		Assert.Equal(QuestYieldReason.None, onFallVm.Step());
		Assert.Equal(QuestYieldReason.None, onFallVm.Step());
		Assert.Equal((uint)onFallthrough, onFallVm.State.ProgramCounter);

		ScriptBuilder offJump = new();
		offJump.Mark(0);
		offJump.Emit(0x2B);
		offJump.EmitWord(1);
		offJump.Emit(0x02, 0x01, 0x02);
		Exit(offJump);
		offJump.Mark(1);
		Exit(offJump);
		QuestVm offJumpVm = offJump.Build();
		Assert.Equal(QuestYieldReason.None, offJumpVm.Step());
		Assert.Equal((uint)offJump.LabelOffset(1), offJumpVm.State.ProgramCounter);

		ScriptBuilder offFall = new();
		offFall.Mark(0);
		offFall.Emit(0x09, 0x02, 1, 0, 0, 0);
		offFall.Emit(0x2B);
		offFall.EmitWord(1);
		offFall.Emit(0x02, 0x01, 0x02);
		int offFallthrough = offFall.Position;
		Exit(offFall);
		offFall.Mark(1);
		Exit(offFall);
		QuestVm offFallVm = offFall.Build();
		Assert.Equal(QuestYieldReason.None, offFallVm.Step());
		Assert.Equal(QuestYieldReason.None, offFallVm.Step());
		Assert.Equal((uint)offFallthrough, offFallVm.State.ProgramCounter);

		QuestVm emptyOn = CreateVm(0x2A, 0x00, 0x00, 0x00);
		Assert.Equal(QuestYieldReason.None, emptyOn.Step());
		Assert.Equal(0u, emptyOn.State.ProgramCounter);
		QuestVm emptyOff = CreateVm(0x2B, 0x00, 0x00, 0x00);
		Assert.Equal(QuestYieldReason.None, emptyOff.Step());
		Assert.Equal(0u, emptyOff.State.ProgramCounter);
	}

	/// <summary>
	/// The indexed switch jumps to the selected label and falls through when the index is outside the list.
	/// </summary>
	[Theory]
	[InlineData(0u, 1)]
	[InlineData(1u, 2)]
	[InlineData(2u, 3)]
	[InlineData(3u, -1)]
	[InlineData(0xFFFFFFFFu, -1)]
	public void ExecutesSwitchJump(uint index, int targetLabel)
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, (byte)index, (byte)(index >> 8), (byte)(index >> 16), (byte)(index >> 24));
		script.Emit(0x40, 0x01, 0x03);
		script.EmitWord(1);
		script.EmitWord(2);
		script.EmitWord(3);
		int fallthrough = script.Position;
		Exit(script);
		script.Mark(1);
		Exit(script);
		script.Mark(2);
		Exit(script);
		script.Mark(3);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)(targetLabel < 0 ? fallthrough : script.LabelOffset(targetLabel)), vm.State.ProgramCounter);
	}

	/// <summary>
	/// The indexed switch call pushes the return position and jumps like the plain switch.
	/// </summary>
	[Fact]
	public void ExecutesSwitchCall()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 1, 0, 0, 0);
		script.Emit(0x41, 0x01, 0x02);
		script.EmitWord(1);
		script.EmitWord(2);
		int fallthrough = script.Position;
		Exit(script);
		script.Mark(1);
		Exit(script);
		script.Mark(2);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)script.LabelOffset(2), vm.State.ProgramCounter);
		Assert.Equal(1, vm.State.CallStackDepth);
		Assert.Equal((uint)fallthrough, vm.State.CallStack[0]);
	}

	/// <summary>
	/// Push and pop move register values through the call stack, including the block forms.
	/// </summary>
	[Fact]
	public void ExecutesStackInstructions()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 0x11, 0, 0, 0);
		script.Emit(0x42, 0x01);
		script.Emit(0x43, 0x02);
		script.Emit(0x09, 0x01, 0x21, 0, 0, 0);
		script.Emit(0x09, 0x02, 0x22, 0, 0, 0);
		script.Emit(0x09, 0x03, 0x23, 0, 0, 0);
		script.Emit(0x44, 0x01, 0x03, 0, 0, 0);
		script.Emit(0x45, 0x04, 0x03, 0, 0, 0);
		Exit(script);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(1, vm.State.CallStackDepth);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0, vm.State.CallStackDepth);
		Assert.Equal(0x11u, vm.State.Registers[2]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(3, vm.State.CallStackDepth);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0, vm.State.CallStackDepth);
		Assert.Equal(0x21u, vm.State.Registers[4]);
		Assert.Equal(0x22u, vm.State.Registers[5]);
		Assert.Equal(0x23u, vm.State.Registers[6]);
	}

	/// <summary>
	/// The argument instructions fill the argument stack and the variadic call moves it into registers.
	/// </summary>
	[Fact]
	public void ExecutesArgumentInstructions()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 0x77, 0, 0, 0);
		script.Emit(0x48, 0x01);
		script.Emit(0x49, 0x44, 0x33, 0x22, 0x11);
		script.Emit(0x4A, 0xAB);
		script.Emit(0x4B, 0x34, 0x12);
		script.Emit(0x07);
		script.EmitWord(1);
		script.Emit(0x01);
		Exit(script);
		script.Mark(1);
		script.Emit(0x01);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(1, vm.State.ArgumentCount);
		Assert.Equal(0x77u, vm.State.Arguments[0]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(2, vm.State.ArgumentCount);
		Assert.Equal(0x11223344u, vm.State.Arguments[1]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(3, vm.State.ArgumentCount);
		Assert.Equal(0xABu, vm.State.Arguments[2]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(4, vm.State.ArgumentCount);
		Assert.Equal(0x1234u, vm.State.Arguments[3]);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal((uint)script.LabelOffset(1), vm.State.ProgramCounter);
		Assert.Equal(0x77u, vm.State.Registers[1]);
		Assert.Equal(0x11223344u, vm.State.Registers[2]);
		Assert.Equal(0xABu, vm.State.Registers[3]);
		Assert.Equal(0x1234u, vm.State.Registers[4]);
		Assert.Equal(0, vm.State.ArgumentCount);
		Assert.Equal(1, vm.State.CallStackDepth);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0, vm.State.CallStackDepth);
	}

	/// <summary>
	/// The variadic start and end instructions save and restore registers one through seven.
	/// </summary>
	[Fact]
	public void ExecutesVariadicStackInstructions()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		for (int register = 1; register <= 7; register++)
			script.Emit(0x09, (byte)register, (byte)register, 0, 0, 0);
		script.Emit(0x05);
		script.Emit(0x49, 1, 0, 0, 0);
		for (int register = 1; register <= 7; register++)
			script.Emit(0x09, (byte)register, 0xEE, 0, 0, 0);
		script.Emit(0x06);
		Exit(script);
		QuestVm vm = script.Build();
		for (int register = 1; register <= 7; register++)
		{
			Assert.Equal(QuestYieldReason.None, vm.Step());
			Assert.Equal((uint)register, vm.State.Registers[register]);
		}
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(7, vm.State.CallStackDepth);
		Assert.Equal(0, vm.State.ArgumentCount);
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(1, vm.State.ArgumentCount);
		for (int register = 1; register <= 7; register++)
		{
			Assert.Equal(QuestYieldReason.None, vm.Step());
			Assert.Equal(0xEEu, vm.State.Registers[register]);
		}
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(0, vm.State.CallStackDepth);
		for (int register = 1; register <= 7; register++)
			Assert.Equal((uint)register, vm.State.Registers[register]);
	}

	/// <summary>
	/// The sync, return and exit instructions stop the thread with their own reason.
	/// </summary>
	[Fact]
	public void ExecutesYieldInstructions()
	{
		QuestVm sync = CreateVm(0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00);
		Assert.Equal(QuestYieldReason.Sync, sync.Step());
		Assert.Throws<InvalidOperationException>(() => sync.Step());
		sync.Resume();
		Assert.Equal(QuestYieldReason.None, sync.Step());
		Assert.Equal(QuestYieldReason.Exit, sync.Step());

		QuestVm returned = CreateVm(0x01);
		Assert.Equal(QuestYieldReason.Return, returned.Run());
		Assert.Equal(0, returned.State.CallStackDepth);

		QuestVm exited = CreateVm(0x03, 0x12, 0x34, 0x56, 0x78);
		Assert.Equal(QuestYieldReason.Exit, exited.Run());
		Assert.Equal(5u, exited.State.ProgramCounter);
	}

	/// <summary>
	/// Reset clears registers, stacks, position and yield state and restarts at the requested label.
	/// </summary>
	[Fact]
	public void ResetClearsState()
	{
		ScriptBuilder script = new();
		script.Mark(0);
		script.Emit(0x09, 0x01, 5, 0, 0, 0);
		script.Emit(0x49, 9, 0, 0, 0);
		script.Emit(0x42, 0x01);
		script.Emit(0x02);
		script.Mark(1);
		script.Emit(0x03, 0, 0, 0, 0);
		QuestVm vm = script.Build();
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.None, vm.Step());
		Assert.Equal(QuestYieldReason.Sync, vm.Step());
		Assert.Equal(5u, vm.State.Registers[1]);
		Assert.Equal(1, vm.State.CallStackDepth);
		Assert.Equal(1, vm.State.ArgumentCount);
		vm.Reset();
		Assert.Equal(QuestYieldReason.None, vm.State.YieldReason);
		Assert.Equal(0u, vm.State.ProgramCounter);
		Assert.Equal(0, vm.State.CallStackDepth);
		Assert.Equal(0, vm.State.ArgumentCount);
		Assert.Equal(0u, vm.State.Registers[1]);
		Assert.Equal(-1, vm.LastInstructionAddress);
		Assert.Equal(0u, vm.LastOpcode);
		vm.Reset(1);
		Assert.Equal((uint)script.LabelOffset(1), vm.State.ProgramCounter);
		Assert.Throws<ArgumentOutOfRangeException>(() => vm.Reset(2));
	}

	/// <summary>
	/// Truncated instructions and operand vectors report the opcode and the instruction position.
	/// </summary>
	[Fact]
	public void RejectsMalformedOperands()
	{
		QuestVm truncatedImmediate = CreateVm(0x09, 0x01, 0x02, 0x03);
		QuestVmException immediate = Assert.Throws<QuestVmException>(() => truncatedImmediate.Step());
		Assert.Equal(QuestVmError.TruncatedInstruction, immediate.Error);
		Assert.Equal(0, immediate.Address);
		Assert.Equal(0x09u, immediate.Opcode);

		QuestVm truncatedPrefix = CreateVm(0xF8);
		QuestVmException prefix = Assert.Throws<QuestVmException>(() => truncatedPrefix.Step());
		Assert.Equal(QuestVmError.TruncatedInstruction, prefix.Error);
		Assert.Equal(0xF8u, prefix.Opcode);

		QuestVm truncatedLabel = CreateVm(0x28, 0x01);
		QuestVmException label = Assert.Throws<QuestVmException>(() => truncatedLabel.Step());
		Assert.Equal(QuestVmError.TruncatedInstruction, label.Error);
		Assert.Equal(0x28u, label.Opcode);

		QuestVm largeRegisterList = CreateVm(0x2A, 0x00, 0x00, 17);
		QuestVmException registers = Assert.Throws<QuestVmException>(() => largeRegisterList.Step());
		Assert.Equal(QuestVmError.InvalidOperand, registers.Error);

		QuestVm largeLabelList = CreateVm(0x40, 0x01, 17);
		QuestVmException labels = Assert.Throws<QuestVmException>(() => largeLabelList.Step());
		Assert.Equal(QuestVmError.InvalidOperand, labels.Error);
	}

	/// <summary>
	/// Labels outside the table, division by zero and overflowing stacks stop with their own diagnostic.
	/// </summary>
	[Fact]
	public void RejectsInvalidRuntimeState()
	{
		QuestVm missingLabel = CreateVm(0x28, 0x05, 0x00);
		QuestVmException label = Assert.Throws<QuestVmException>(() => missingLabel.Step());
		Assert.Equal(QuestVmError.InvalidLabel, label.Error);
		Assert.Equal(0x28u, label.Opcode);

		QuestVm division = CreateVm(0x09, 0x01, 1, 0, 0, 0, 0x09, 0x02, 0, 0, 0, 0, 0x1E, 0x01, 0x02);
		Assert.Equal(QuestYieldReason.None, division.Step());
		Assert.Equal(QuestYieldReason.None, division.Step());
		QuestVmException divide = Assert.Throws<QuestVmException>(() => division.Step());
		Assert.Equal(QuestVmError.ArithmeticFault, divide.Error);

		QuestVm stack = CreateVm(0x44, 0x01, 65, 0, 0, 0);
		QuestVmException overflow = Assert.Throws<QuestVmException>(() => stack.Step());
		Assert.Equal(QuestVmError.CallStackOverflow, overflow.Error);

		ScriptBuilder arguments = new();
		arguments.Mark(0);
		for (int index = 0; index < 9; index++)
			arguments.Emit(0x4A, 0x01);
		Exit(arguments);
		QuestVm argumentVm = arguments.Build();
		for (int index = 0; index < 8; index++)
			Assert.Equal(QuestYieldReason.None, argumentVm.Step());
		QuestVmException argumentOverflow = Assert.Throws<QuestVmException>(() => argumentVm.Step());
		Assert.Equal(QuestVmError.ArgumentStackOverflow, argumentOverflow.Error);

		QuestVm finished = CreateVm(0x00);
		Assert.Equal(QuestYieldReason.None, finished.Step());
		QuestVmException end = Assert.Throws<QuestVmException>(() => finished.Step());
		Assert.Equal(QuestVmError.TruncatedInstruction, end.Error);
	}

	/// <summary>
	/// Instructions outside the implemented set stop at the opcode with an explicit diagnostic.
	/// </summary>
	[Theory]
	[InlineData(new byte[] { 0x04 }, 0x04u)]
	[InlineData(new byte[] { 0x0C }, 0x0Cu)]
	[InlineData(new byte[] { 0x0E }, 0x0Eu)]
	[InlineData(new byte[] { 0x50 }, 0x50u)]
	[InlineData(new byte[] { 0xFF }, 0xFFu)]
	[InlineData(new byte[] { 0xF8, 0xFF }, 0x1FFu)]
	[InlineData(new byte[] { 0xF9, 0x10 }, 0x210u)]
	public void RejectsUnimplementedOpcodes(byte[] text, uint opcode)
	{
		QuestVm vm = CreateVm(text);
		QuestVmException error = Assert.Throws<QuestVmException>(() => vm.Step());
		Assert.Equal(QuestVmError.UnimplementedOpcode, error.Error);
		Assert.Equal(0, error.Address);
		Assert.Equal(opcode, error.Opcode);
		Assert.Contains($"0x{opcode:X}", error.Message, StringComparison.Ordinal);
	}

	/// <summary>
	/// The duplicated table slots execute the same remainder and move operations as their canonical opcodes.
	/// </summary>
	[Fact]
	public void ExecutesDuplicateTableSlots()
	{
		QuestVm remainder = CreateVm(0x09, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x02, 3, 0, 0, 0, 0xE9, 0x01, 0x02);
		Assert.Equal(QuestYieldReason.None, remainder.Step());
		Assert.Equal(QuestYieldReason.None, remainder.Step());
		Assert.Equal(QuestYieldReason.None, remainder.Step());
		Assert.Equal(0xFFFFFFFFu, remainder.State.Registers[1]);

		QuestVm remainderImmediate = CreateVm(0x09, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0x01, 3, 0, 0, 0);
		Assert.Equal(QuestYieldReason.None, remainderImmediate.Step());
		Assert.Equal(QuestYieldReason.None, remainderImmediate.Step());
		Assert.Equal(0u, remainderImmediate.State.Registers[1]);

		QuestVm move = CreateVm(0x09, 0x01, 7, 0, 0, 0, 0xF9, 0x03, 0x02, 0x01);
		Assert.Equal(QuestYieldReason.None, move.Step());
		Assert.Equal(QuestYieldReason.None, move.Step());
		Assert.Equal(7u, move.State.Registers[2]);
	}
}
