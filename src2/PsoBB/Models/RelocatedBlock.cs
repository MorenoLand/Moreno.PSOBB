using System.Buffers.Binary;

namespace PsoBB.Models;

/// <summary>
/// A relocated asset block: pointer values are offsets from the block start and the trailer holds
/// the pointer-table location, pointer count and payload offset.
/// </summary>
public sealed class RelocatedBlock
{
	private readonly byte[] _data;
	private readonly byte[] _payload;

	private RelocatedBlock(byte[] data, byte[] payload, int pointerCount, int bodyOffset)
	{
		_data = data;
		_payload = payload;
		PointerCount = pointerCount;
		BodyOffset = bodyOffset;
	}

	/// <summary>Gets a copy of the relocated block.</summary>
	public ReadOnlyMemory<byte> Data => _data;

	/// <summary>Gets the payload, with pointers rebased to the payload start.</summary>
	public ReadOnlyMemory<byte> Payload => _payload;

	/// <summary>Gets the number of pointer values that were rewritten.</summary>
	public int PointerCount { get; }

	/// <summary>Gets the byte offset of the payload inside the block.</summary>
	public int BodyOffset { get; }

	/// <summary>
	/// Reads a block and rewrites every pointer listed by its trailing table.
	/// </summary>
	/// <param name="data">The complete block, including its pointer table and trailer.</param>
	/// <returns>The relocated block and its payload offset.</returns>
	/// <exception cref="ModelFormatException">The trailer, table or a pointer target is invalid.</exception>
	[Original(0x005BA264, "HandleRewriteAssetPointers_005ba264")]
	public static RelocatedBlock Parse(ReadOnlySpan<byte> data) => Parse(data, 0);

	/// <summary>
	/// Reads a block and adds the supplied base address to every listed pointer.
	/// </summary>
	/// <param name="data">The complete block.</param>
	/// <param name="baseAddress">The address represented by offset zero.</param>
	/// <returns>The relocated block and its payload offset.</returns>
	/// <exception cref="ModelFormatException">The trailer, table or a pointer target is invalid.</exception>
	internal static RelocatedBlock Parse(ReadOnlySpan<byte> data, int baseAddress)
	{
		if (data.Length < 0x20)
			throw new ModelFormatException("The relocated block trailer is truncated.", data.Length);
		uint pointerCount = BinaryPrimitives.ReadUInt32LittleEndian(data[(data.Length - 0x1C)..]);
		uint tableOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[(data.Length - 0x20)..]);
		uint bodyOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[(data.Length - 0x10)..]);
		if (pointerCount > int.MaxValue || pointerCount > (uint)data.Length / 2)
			throw new ModelFormatException("The relocated block pointer count is invalid.", data.Length - 0x1C);
		if (tableOffset > data.Length || pointerCount * 2 > data.Length - tableOffset)
			throw new ModelFormatException("The relocated block pointer table lies outside the block.", data.Length - 0x20);
		if (bodyOffset > data.Length)
			throw new ModelFormatException("The relocated block payload offset is invalid.", data.Length - 0x10);
		byte[] relocated = data.ToArray();
		List<int> pointerFields = new((int)pointerCount);
		int position = 0;
		for (int index = 0; index < (int)pointerCount; index++)
		{
			int delta = BinaryPrimitives.ReadUInt16LittleEndian(relocated.AsSpan((int)tableOffset + index * 2));
			long target = (long)position + (long)delta * 4;
			if (target > relocated.Length - 4)
				throw new ModelFormatException("The relocated block pointer target lies outside the block.", (int)tableOffset + index * 2);
			position = (int)target;
			pointerFields.Add(position);
			uint value = BinaryPrimitives.ReadUInt32LittleEndian(relocated.AsSpan(position));
			if (value == 0)
				continue;
			long adjusted = (long)value + baseAddress;
			if (adjusted < 0 || adjusted > int.MaxValue)
				throw new ModelFormatException("The relocated block pointer value is invalid.", position);
			if (baseAddress == 0 && value > relocated.Length)
				throw new ModelFormatException("The relocated block pointer value lies outside the block.", position);
			BinaryPrimitives.WriteInt32LittleEndian(relocated.AsSpan(position), (int)adjusted);
		}
		byte[] payload = relocated[(int)bodyOffset..];
		if (baseAddress == 0)
		{
			foreach (int field in pointerFields)
			{
				if (field < (int)bodyOffset || field > relocated.Length - 4)
					continue;
				int value = BinaryPrimitives.ReadInt32LittleEndian(payload.AsSpan(field - (int)bodyOffset));
				if (value == 0)
					continue;
				long adjusted = (long)value - bodyOffset;
				if (adjusted < 0)
					continue;
				BinaryPrimitives.WriteInt32LittleEndian(payload.AsSpan(field - (int)bodyOffset), (int)adjusted);
			}
		}
		return new RelocatedBlock(relocated, payload, (int)pointerCount, (int)bodyOffset);
	}
}
