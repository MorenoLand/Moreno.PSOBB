using System.Buffers.Binary;
using PsoBB.Save;

namespace PsoBB.Gui;

/// <summary>
/// The state written by the thirteen cell constructors at <c>0x0072ACF4</c> through <c>0x0072E17C</c>.
/// </summary>
/// <remarks>
/// Each constructor starts from the shared bases at <c>0x00729838</c> or <c>0x0072AD30</c> and copies
/// the cell words into the documented byte offsets. The renderer vtables are not part of this state.
/// Type three uses <see cref="CharacterOptionTable.Value"/> and the 0.5 scale.
/// </remarks>
public sealed class Scene2CellState
{
	/// <summary>The largest cell allocation.</summary>
	public const int Length = 0x68;

	/// <summary>The base word at offset four.</summary>
	public const int FlagsOffset = 4;

	/// <summary>The base word at offset six.</summary>
	public const int KindOffset = 6;

	/// <summary>Gets the state bytes.</summary>
	public byte[] Data { get; } = new byte[Length];

	/// <summary>Gets the cell type.</summary>
	public int Type { get; }

	private Scene2CellState(int type, short kind)
	{
		Type = type;
		BinaryPrimitives.WriteUInt16LittleEndian(Data.AsSpan(FlagsOffset), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(Data.AsSpan(KindOffset), unchecked((ushort)kind));
	}

	/// <summary>
	/// Builds the state for one cell.
	/// </summary>
	/// <param name="type">The cell type from the grid table.</param>
	/// <param name="cell">The cell words, with the type at index zero.</param>
	/// <param name="kind">The base kind word.</param>
	/// <returns>The cell state.</returns>
	/// <exception cref="ArgumentException">The type or word count is invalid.</exception>
	public static Scene2CellState Create(int type, ReadOnlySpan<int> cell, short kind)
	{
		if ((uint)type >= (uint)Scene2CellGrid.Layouts.Count)
			throw new ArgumentException($"Cell type {type} is outside the table.", nameof(type));
		if (cell.Length < 1)
			throw new ArgumentException("A cell needs its type word.", nameof(cell));
		Scene2CellState state = new(type, kind);
		switch (type)
		{
			case 0: state.InitType0(cell); break;
			case 1: state.InitType1(cell); break;
			case 2: state.InitType2(cell); break;
			case 3: state.InitType3(cell); break;
			case 4: state.InitType4(cell); break;
			case 5: state.InitType5(cell); break;
			case 6: state.InitType6(cell); break;
			case 7: state.InitType7(cell); break;
			case 8: state.InitType8(); break;
			case 9: state.InitType9(); break;
			case 10: state.InitType10(cell); break;
			case 11: state.InitType11(cell); break;
			case 12: state.InitType12(); break;
		}
		return state;
	}

	/// <summary>Gets or sets the flag word at offset four.</summary>
	public ushort Flags
	{
		get => BinaryPrimitives.ReadUInt16LittleEndian(Data.AsSpan(FlagsOffset));
		set => BinaryPrimitives.WriteUInt16LittleEndian(Data.AsSpan(FlagsOffset), value);
	}

	/// <summary>Gets or sets the text at offset 32.</summary>
	public string? Text { get; set; }

	/// <summary>Gets or sets the value at offset 28.</summary>
	public int TextOffset28 { get; set; }

	/// <summary>Gets or sets the position float at offset 40.</summary>
	public float TextPosition { get; set; }

	/// <summary>
	/// Writes the 900000 value at offset 28, as <c>0x0072E0E4</c> does.
	/// </summary>
	[Original(0x0072E0E4)]
	public void ResetValue() => SetFloat(28, 900000f);

	/// <summary>
	/// Stores the text and merges the flags at <c>0x0072DB60</c>.
	/// </summary>
	/// <param name="text">The text, or <see langword="null"/>.</param>
	/// <param name="flags">The caller flags.</param>
	/// <exception cref="NotSupportedException">The 0x400 markup path is not ported.</exception>
	[Original(0x0072DB60)]
	public void SetText(string? text, int flags)
	{
		int stored = flags;
		if (Text is not null && (Flags & 0x20) != 0)
		{
			Text = null;
			Flags = (ushort)(Flags & ~0x20);
		}
		if ((flags & 0x400) != 0)
			throw new NotSupportedException("The 0x0072DB60 markup path is not ported.");
		if (text is not null && (stored & 0x20) != 0)
		{
			Text = text;
			Flags = (ushort)(Flags | 0x20);
		}
		else
		{
			Text = text;
		}
		if (TextPosition > 0f)
			TextOffset28 = 0;
		Flags = (ushort)((stored & 0x2C1) | (Flags & 0xF52E));
	}

	private int Int(int offset) => BinaryPrimitives.ReadInt32LittleEndian(Data.AsSpan(offset));
	private void SetInt(int offset, int value) => BinaryPrimitives.WriteInt32LittleEndian(Data.AsSpan(offset), value);
	private void SetFloat(int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(Data.AsSpan(offset), value);
	private void SetWord(int offset, int value) => BinaryPrimitives.WriteUInt16LittleEndian(Data.AsSpan(offset), unchecked((ushort)value));

	[Original(0x0072AD30)]
	private void InitBaseWithZeros()
	{
		SetInt(8, 0);
		SetInt(12, 0);
		SetInt(16, 0);
		SetInt(20, 0);
	}

	[Original(0x0072ACF4)]
	private void InitType0(ReadOnlySpan<int> source)
	{
		SetInt(8, source[1]);
		SetInt(12, source[2]);
		SetInt(16, source[3]);
		SetInt(20, source[4]);
	}

	[Original(0x007298C8)]
	private void InitType1(ReadOnlySpan<int> source)
	{
		SetInt(28, 0);
		SetInt(12, source[1]);
		SetInt(16, source[2]);
		SetInt(8, source[3]);
		SetInt(20, source[6]);
		SetInt(24, source[4]);
		SetWord(FlagsOffset, source[5]);
		SetInt(32, source[7]);
		SetInt(36, source[8]);
	}

	[Original(0x00729F3C)]
	private void InitType2(ReadOnlySpan<int> source)
	{
		InitType1(source);
		SetWord(40, Int(36));
		SetFloat(96, source[9]);
		SetFloat(100, source[10]);
		SetInt(44, Int(24));
		SetWord(42, 0);
	}

	[Original(0x0072CB9C)]
	private void InitType4(ReadOnlySpan<int> source)
	{
		InitBaseWithZeros();
		SetInt(8, source[1]);
		SetInt(12, source[2]);
		SetInt(24, source[3]);
		SetWord(FlagsOffset, source[5]);
		SetInt(28, source[4]);
		SetInt(32, source[6]);
	}

	[Original(0x0072CF54)]
	private void InitType5(ReadOnlySpan<int> source)
	{
		InitType4(source);
		float value = Int(32);
		SetFloat(40, value);
		SetFloat(36, value);
		SetInt(44, 0);
	}

	[Original(0x0072D8C0)]
	private void InitType3(ReadOnlySpan<int> source)
	{
		InitBaseWithZeros();
		SetInt(8, source[1]);
		SetInt(12, source[2]);
		SetInt(24, source[3]);
		SetInt(28, 0);
		SetWord(FlagsOffset, source[5]);
		SetInt(36, source[4]);
		float value = CharacterOptionTable.Value();
		if ((BinaryPrimitives.ReadUInt16LittleEndian(Data.AsSpan(FlagsOffset)) & 4) != 0)
			value *= 0.5f;
		SetFloat(40, value);
		if (value <= 0f)
			SetInt(28, 1230748160);
		SetInt(32, source[6]);
	}

	[Original(0x0072E52C)]
	private void InitType6(ReadOnlySpan<int> source)
	{
		SetInt(8, source[1]);
		SetInt(12, source[2]);
		SetInt(16, source[3]);
		SetInt(20, source[4]);
		SetFloat(28, BitConverter.Int32BitsToSingle(source[5]) / 256f);
		SetFloat(32, BitConverter.Int32BitsToSingle(source[6]) / 256f);
		SetFloat(36, (BitConverter.Int32BitsToSingle(source[3]) + BitConverter.Int32BitsToSingle(source[5])) / 256f);
		SetFloat(40, (BitConverter.Int32BitsToSingle(source[4]) + BitConverter.Int32BitsToSingle(source[6])) / 256f);
		SetInt(24, source[7]);
		SetInt(44, source[8]);
		SetInt(48, source[9]);
		SetInt(52, source[10]);
		SetWord(FlagsOffset, source[11]);
	}

	[Original(0x0072E5B4)]
	private void InitType7(ReadOnlySpan<int> source)
	{
		SetInt(8, source[1]);
		SetInt(12, source[2]);
		SetInt(16, source[3]);
		SetInt(20, source[4]);
		SetInt(28, source[5]);
		SetInt(32, source[6]);
		SetInt(36, source[7]);
		SetInt(40, source[8]);
		SetInt(24, source[9]);
		SetInt(44, source[10]);
		SetInt(48, source[11]);
		SetInt(52, source[12]);
		SetWord(FlagsOffset, source[13]);
	}

	[Original(0x0072AE28)]
	private void InitType8()
	{
		InitBaseWithZeros();
		Data[28] = 54;
		Data[29] = 54;
		SetFloat(20, 14f);
		SetInt(32, 0);
		SetInt(36, 0);
		SetInt(40, -1);
		SetInt(44, -1);
		SetInt(48, -1);
		SetInt(52, -1);
		SetInt(24, 0);
	}

	[Original(0x0072E8F8)]
	private void InitType9()
	{
		InitBaseWithZeros();
		SetInt(28, 0);
		SetInt(32, 0);
		SetFloat(20, 14f);
		SetInt(24, 0);
		SetInt(36, -1);
	}

	[Original(0x0072D7C8)]
	private void InitType10(ReadOnlySpan<int> source)
	{
		SetInt(8, source[1]);
		SetInt(16, 0);
		SetInt(12, source[2]);
	}

	[Original(0x0072D194)]
	private void InitType11(ReadOnlySpan<int> source)
	{
		SetInt(8, source[1]);
		SetInt(16, -1);
		SetInt(12, source[2]);
		SetInt(20, 0);
		SetInt(24, 0);
		SetInt(28, 0);
		SetInt(32, 0);
	}

	[Original(0x0072E17C)]
	private void InitType12()
	{
		InitBaseWithZeros();
		Data[29] = 0xFF;
		Data[30] = 0xFF;
		SetFloat(20, 14f);
		Data[31] = 0xFF;
		Data[32] = 0xFF;
		Data[33] = 0xFF;
		Data[28] = 54;
		SetInt(36, 0);
		SetInt(24, 0);
		SetInt(40, 0);
	}
}
