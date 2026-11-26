using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// Reads the Ninja IFF chunks of a decompressed BML entry, skipping the POF0 pointer-fixup chunk that follows a body.
/// </summary>
public static class BmlChunkReader
{
	private const uint Pof0 = 0x504F4630;

	/// <summary>
	/// Reads every Ninja chunk from one decompressed BML entry.
	/// </summary>
	/// <param name="data">The decompressed entry bytes.</param>
	/// <returns>The chunks in file order with copied bodies.</returns>
	/// <exception cref="SceneFormatException">A chunk header, body or POF0 chunk lies outside the entry.</exception>
	[Original(0x0083B124, "read_ninjalib_iff_chunk")]
	public static NinjaChunk[] Read(ReadOnlySpan<byte> data)
	{
		List<NinjaChunk> chunks = [];
		int offset = 0;
		while (offset < data.Length)
		{
			if (data.Length - offset < 8)
				throw new SceneFormatException("A Ninja chunk header is truncated.", offset);
			uint fourCc = BinaryPrimitives.ReadUInt32BigEndian(data[offset..]);
			uint size = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
			if (fourCc == Pof0)
				throw new SceneFormatException("A POF0 chunk appears where a Ninja chunk was expected.", offset);
			if (!Enum.IsDefined(typeof(NinjaChunkType), fourCc))
				throw new SceneFormatException($"The Ninja chunk type 0x{fourCc:X8} is not recognised.", offset);
			if (size > data.Length - offset - 8)
				throw new SceneFormatException($"The Ninja chunk at 0x{offset:X} declares {size} bytes past the entry end.", offset + 4);
			byte[] body = data.Slice(offset + 8, (int)size).ToArray();
			chunks.Add(new NinjaChunk((NinjaChunkType)fourCc, body));
			offset += 8 + (int)size;
			if (data.Length - offset < 8)
				continue;
			if (BinaryPrimitives.ReadUInt32BigEndian(data[offset..]) != Pof0)
				continue;
			uint fixupSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
			if (fixupSize > data.Length - offset - 8)
				throw new SceneFormatException($"The POF0 chunk at 0x{offset:X} declares {fixupSize} bytes past the entry end.", offset + 4);
			offset += 8 + (int)fixupSize;
		}
		return [.. chunks];
	}
}
