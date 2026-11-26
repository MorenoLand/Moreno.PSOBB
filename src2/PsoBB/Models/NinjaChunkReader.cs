using System.Buffers.Binary;

namespace PsoBB.Models;

/// <summary>
/// Reads the Ninja IFF chunk stream used by models, texture lists and motion files.
/// </summary>
public static class NinjaChunkReader
{
	private const uint InputTag = 0x4E4A494E;
	private const uint ModelTag = 0x4E4A434D;
	private const uint TextureListTag = 0x4E4A544C;
	private const uint LightTag = 0x4E4A4C49;
	private const uint CameraTag = 0x4E4A4341;
	private const uint MotionTag = 0x4E4D444D;
	private const uint SoundTag = 0x4E53534D;
	private const uint PointerTableTag = 0x504F4630;

	/// <summary>
	/// Reads every chunk in order and applies each following POF0 pointer table to its chunk.
	/// </summary>
	/// <param name="data">The complete chunk stream.</param>
	/// <returns>The chunks with relocated bodies.</returns>
	/// <exception cref="ModelFormatException">A header, body range or pointer table is invalid.</exception>
	[Original(0x0083B124, "read_ninjalib_iff_chunk")]
	public static List<NinjaChunk> ReadAll(ReadOnlySpan<byte> data)
	{
		List<NinjaChunk> chunks = [];
		int position = 0;
		while (position < data.Length)
		{
			if (data.Length - position < 8)
				throw new ModelFormatException("The Ninja chunk header is truncated.", position);
			uint tag = BinaryPrimitives.ReadUInt32BigEndian(data[position..]);
			int bodySize = BinaryPrimitives.ReadInt32LittleEndian(data[(position + 4)..]);
			if (bodySize < 0 || bodySize > data.Length - position - 8)
				throw new ModelFormatException("The Ninja chunk body lies outside the stream.", position + 4);
			byte[] body = data.Slice(position + 8, bodySize).ToArray();
			int bodyOffset = position + 8;
			position += 8 + bodySize;
			if (tag == PointerTableTag)
			{
				if (chunks.Count == 0)
					throw new ModelFormatException("A POF0 table has no preceding chunk.", bodyOffset);
				NinjaChunk previous = chunks[^1];
				chunks[^1] = new NinjaChunk(previous.Type, ApplyPointerTable(previous.Body.Span, body, previous.Offset), previous.Offset);
				continue;
			}
			chunks.Add(new NinjaChunk(ReadType(tag, bodyOffset), body, bodyOffset));
		}
		return chunks;
	}

	/// <summary>
	/// Applies one POF0 pointer table to a copied chunk body.
	/// </summary>
	/// <param name="body">The chunk body that receives relocated pointers.</param>
	/// <param name="table">The POF0 body.</param>
	/// <param name="sourceOffset">The chunk header offset for error messages.</param>
	/// <param name="baseAddress">The address added to every stored chunk-relative pointer.</param>
	/// <returns>The relocated body.</returns>
	/// <exception cref="ModelFormatException">A table entry or pointer target lies outside the body.</exception>
	internal static byte[] ApplyPointerTable(ReadOnlySpan<byte> body, ReadOnlySpan<byte> table, int sourceOffset, int baseAddress = 0)
	{
		byte[] relocated = body.ToArray();
		int position = 0;
		int pointerOffset = 0;
		while (position < table.Length)
		{
			byte control = table[position++];
			int sizeCode = control & 0xC0;
			if (sizeCode == 0)
				continue;
			uint delta;
			if (sizeCode == 0x40)
			{
				delta = (uint)(control & 0x3F);
			}
			else if (sizeCode == 0x80)
			{
				if (position >= table.Length)
					throw new ModelFormatException("The POF0 two-byte entry is truncated.", sourceOffset + position);
				delta = (uint)((control & 0x3F) << 8) | table[position++];
			}
			else
			{
				if (table.Length - position < 3)
					throw new ModelFormatException("The POF0 four-byte entry is truncated.", sourceOffset + position);
				delta = (uint)(control & 0x3F) << 24 | (uint)table[position] << 16 | (uint)table[position + 1] << 8 | table[position + 2];
				position += 3;
			}
			long next = (long)pointerOffset + (long)delta * 4;
			if (next < 0 || next > relocated.Length - 4)
				throw new ModelFormatException("The POF0 pointer target lies outside the chunk body.", sourceOffset + pointerOffset);
			pointerOffset = (int)next;
			int value = BinaryPrimitives.ReadInt32LittleEndian(relocated.AsSpan(pointerOffset));
			if (value == 0)
				continue;
			long adjusted = (long)value + baseAddress;
			if (adjusted < 0 || adjusted > int.MaxValue)
				throw new ModelFormatException("The POF0 pointer value is invalid.", sourceOffset + pointerOffset);
			BinaryPrimitives.WriteInt32LittleEndian(relocated.AsSpan(pointerOffset), (int)adjusted);
		}
		return relocated;
	}

	/// <summary>
	/// Maps a four-character tag to its chunk type.
	/// </summary>
	/// <param name="tag">The big-endian tag value.</param>
	/// <param name="offset">The tag offset for error messages.</param>
	/// <returns>The chunk type.</returns>
	private static NinjaChunkType ReadType(uint tag, int offset) => tag switch
	{
		InputTag => NinjaChunkType.Input,
		ModelTag => NinjaChunkType.Model,
		TextureListTag => NinjaChunkType.TextureList,
		LightTag => NinjaChunkType.Light,
		CameraTag => NinjaChunkType.Camera,
		MotionTag => NinjaChunkType.Motion,
		SoundTag => NinjaChunkType.Sound,
		_ => throw new ModelFormatException($"The Ninja chunk tag 0x{tag:X8} is unknown.", offset - 8),
	};
}
