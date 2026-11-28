using System.Buffers.Binary;
using System.Text;
using PsoBB.Imaging;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic texture archives so the tests never depend on game data.
/// </summary>
internal static class TextureTestData
{
	/// <summary>
	/// Creates one PVRT chunk.
	/// </summary>
	/// <param name="dataFormat">Pixel storage layout.</param>
	/// <param name="pixelFormat">Pixel color layout.</param>
	/// <param name="width">Texture width.</param>
	/// <param name="height">Texture height.</param>
	/// <param name="pixels">Pixel bytes.</param>
	/// <returns>The complete chunk.</returns>
	internal static byte[] Pvr(PvrDataFormat dataFormat, PvrPixelFormat pixelFormat, int width, int height, byte[] pixels)
	{
		byte[] chunk = new byte[0x10 + pixels.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(chunk, PvrTexture.Magic);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(4), (uint)(8 + pixels.Length));
		chunk[8] = (byte)dataFormat;
		chunk[9] = (byte)pixelFormat;
		BinaryPrimitives.WriteUInt16LittleEndian(chunk.AsSpan(0x0A), (ushort)width);
		BinaryPrimitives.WriteUInt16LittleEndian(chunk.AsSpan(0x0C), (ushort)height);
		pixels.CopyTo(chunk, 0x10);
		return chunk;
	}

	/// <summary>
	/// Creates a PVM archive from entry metadata and complete PVRT chunks.
	/// </summary>
	/// <param name="flags">Optional entry fields.</param>
	/// <param name="entries">Entry rows: index, name, entry format, dimensions word, global index.</param>
	/// <param name="chunks">Complete PVRT chunks in entry order.</param>
	/// <returns>The complete archive.</returns>
	internal static byte[] Pvm(PvmArchiveFlags flags, (ushort Index, string Name, ushort Format, ushort Dimensions, uint GlobalIndex)[] entries, byte[][] chunks)
	{
		using MemoryStream entryStream = new();
		foreach (var entry in entries)
		{
			WriteUInt16(entryStream, entry.Index);
			if ((flags & PvmArchiveFlags.Filenames) != 0)
			{
				byte[] name = new byte[0x1C];
				Encoding.ASCII.GetBytes(entry.Name).CopyTo(name, 0);
				entryStream.Write(name);
			}
			if ((flags & PvmArchiveFlags.Formats) != 0)
				WriteUInt16(entryStream, entry.Format);
			if ((flags & PvmArchiveFlags.Dimensions) != 0)
				WriteUInt16(entryStream, entry.Dimensions);
			if ((flags & PvmArchiveFlags.GlobalIndices) != 0)
				WriteUInt32(entryStream, entry.GlobalIndex);
		}
		byte[] entryBytes = entryStream.ToArray();
		int dataStart = Align(0x0C + entryBytes.Length, 16);
		using MemoryStream archive = new();
		WriteUInt32(archive, PvmArchive.Magic);
		WriteUInt32(archive, (uint)(dataStart - 8));
		WriteUInt16(archive, (ushort)flags);
		WriteUInt16(archive, (ushort)entries.Length);
		archive.Write(entryBytes);
		archive.Write(new byte[dataStart - 0x0C - entryBytes.Length]);
		foreach (byte[] chunk in chunks)
		{
			archive.Write(chunk);
			int padding = Align(chunk.Length, 16) - chunk.Length;
			archive.Write(new byte[padding]);
		}
		return archive.ToArray();
	}

	/// <summary>
	/// Creates a PVPL palette.
	/// </summary>
	/// <param name="pixelFormat">Palette color layout.</param>
	/// <param name="colors">Raw palette colors.</param>
	/// <returns>The complete palette file.</returns>
	internal static byte[] Pvp(PvrPixelFormat pixelFormat, ushort[] colors)
	{
		byte[] data = new byte[0x10 + colors.Length * 2];
		BinaryPrimitives.WriteUInt32LittleEndian(data, PvpPalette.Magic);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), (uint)data.Length);
		data[8] = (byte)pixelFormat;
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x0E), (ushort)colors.Length);
		for (int index = 0; index < colors.Length; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x10 + index * 2), colors[index]);
		return data;
	}

	/// <summary>
	/// Creates an XVM archive with one compressed texture per chunk.
	/// </summary>
	/// <param name="chunks">Complete XVRT chunks.</param>
	/// <returns>The complete archive.</returns>
	internal static byte[] Xvm(byte[][] chunks)
	{
		using MemoryStream archive = new();
		WriteUInt32(archive, 0x484D5658);
		WriteUInt32(archive, 4);
		WriteUInt32(archive, (uint)chunks.Length);
		archive.Write(new byte[0]);
		foreach (byte[] chunk in chunks)
			archive.Write(chunk);
		return archive.ToArray();
	}

	/// <summary>
	/// Creates one XVRT chunk.
	/// </summary>
	/// <param name="format">Compression format.</param>
	/// <param name="globalIndex">Texture cache index.</param>
	/// <param name="width">Texture width.</param>
	/// <param name="height">Texture height.</param>
	/// <param name="blocks">Compressed block bytes.</param>
	/// <returns>The complete chunk.</returns>
	internal static byte[] Xvr(XvmTextureFormat format, uint globalIndex, int width, int height, byte[] blocks)
	{
		byte[] chunk = new byte[0x40 + blocks.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(chunk, 0x54525658);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(4), (uint)(chunk.Length - 8));
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(0x0C), (uint)format);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(0x10), globalIndex);
		BinaryPrimitives.WriteUInt16LittleEndian(chunk.AsSpan(0x14), (ushort)width);
		BinaryPrimitives.WriteUInt16LittleEndian(chunk.AsSpan(0x16), (ushort)height);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(0x18), (uint)blocks.Length);
		blocks.CopyTo(chunk, 0x40);
		return chunk;
	}

	/// <summary>
	/// Creates one DXT1 block.
	/// </summary>
	/// <param name="first">First RGB565 endpoint.</param>
	/// <param name="second">Second RGB565 endpoint.</param>
	/// <param name="indices">Sixteen two-bit indices.</param>
	/// <returns>The eight-byte block.</returns>
	internal static byte[] Dxt1Block(ushort first, ushort second, byte[] indices)
	{
		byte[] block = new byte[8];
		BinaryPrimitives.WriteUInt16LittleEndian(block, first);
		BinaryPrimitives.WriteUInt16LittleEndian(block.AsSpan(2), second);
		uint bits = 0;
		for (int pixel = 0; pixel < 16; pixel++)
			bits |= (uint)(indices[pixel] & 3) << (pixel * 2);
		BinaryPrimitives.WriteUInt32LittleEndian(block.AsSpan(4), bits);
		return block;
	}

	/// <summary>
	/// Creates one DXT3 block with explicit four-bit alpha.
	/// </summary>
	/// <param name="alphaCodes">Sixteen four-bit alpha codes.</param>
	/// <param name="first">First RGB565 endpoint.</param>
	/// <param name="second">Second RGB565 endpoint.</param>
	/// <param name="indices">Sixteen two-bit color indices.</param>
	/// <returns>The sixteen-byte block.</returns>
	internal static byte[] Dxt3Block(byte[] alphaCodes, ushort first, ushort second, byte[] indices)
	{
		byte[] block = new byte[16];
		for (int pixel = 0; pixel < 16; pixel++)
		{
			if ((pixel & 1) == 0)
				block[pixel / 2] = (byte)(alphaCodes[pixel] & 0x0F);
			else
				block[pixel / 2] |= (byte)((alphaCodes[pixel] & 0x0F) << 4);
		}
		Dxt1Block(first, second, indices).CopyTo(block, 8);
		return block;
	}

	/// <summary>
	/// Creates one DXT5 block with explicit alpha endpoints and color endpoints.
	/// </summary>
	/// <param name="alpha0">First alpha endpoint.</param>
	/// <param name="alpha1">Second alpha endpoint.</param>
	/// <param name="alphaCodes">Sixteen three-bit alpha codes.</param>
	/// <param name="first">First RGB565 endpoint.</param>
	/// <param name="second">Second RGB565 endpoint.</param>
	/// <param name="indices">Sixteen two-bit color indices.</param>
	/// <returns>The sixteen-byte block.</returns>
	internal static byte[] Dxt5Block(byte alpha0, byte alpha1, byte[] alphaCodes, ushort first, ushort second, byte[] indices)
	{
		byte[] block = new byte[16];
		block[0] = alpha0;
		block[1] = alpha1;
		ulong bits = 0;
		for (int pixel = 0; pixel < 16; pixel++)
			bits |= (ulong)(alphaCodes[pixel] & 7) << (pixel * 3);
		for (int index = 0; index < 6; index++)
			block[2 + index] = (byte)(bits >> (index * 8));
		Dxt1Block(first, second, indices).CopyTo(block, 8);
		return block;
	}

	/// <summary>
	/// Creates an uncompressed PAE archive.
	/// </summary>
	/// <param name="model">Model section bytes.</param>
	/// <param name="textureList">Texture-list section bytes.</param>
	/// <param name="xvm">Embedded XVM archive.</param>
	/// <returns>The complete archive.</returns>
	internal static byte[] Pae(byte[] model, byte[] textureList, byte[] xvm)
	{
		uint modelOffset = 0x20;
		uint textureListOffset = modelOffset + (uint)model.Length;
		uint textureDataOffset = textureListOffset + (uint)textureList.Length;
		using MemoryStream archive = new();
		WriteUInt16(archive, 1);
		WriteUInt16(archive, 0);
		WriteUInt32(archive, textureDataOffset + (uint)xvm.Length);
		WriteUInt32(archive, 0);
		WriteUInt32(archive, modelOffset);
		WriteUInt32(archive, (uint)model.Length);
		WriteUInt32(archive, textureListOffset);
		WriteUInt32(archive, (uint)textureList.Length);
		WriteUInt32(archive, textureDataOffset);
		archive.Write(model);
		archive.Write(textureList);
		archive.Write(xvm);
		return archive.ToArray();
	}

	/// <summary>
	/// Creates a PAE archive whose payload is a literal-only PRS stream.
	/// </summary>
	/// <param name="model">Model section bytes.</param>
	/// <param name="textureList">Texture-list section bytes.</param>
	/// <param name="xvm">Embedded XVM archive.</param>
	/// <returns>The complete archive.</returns>
	internal static byte[] CompressedPae(byte[] model, byte[] textureList, byte[] xvm)
	{
		uint modelOffset = 0;
		uint textureListOffset = (uint)model.Length;
		uint textureDataOffset = textureListOffset + (uint)textureList.Length;
		using MemoryStream payload = new();
		payload.Write(model);
		payload.Write(textureList);
		payload.Write(xvm);
		int padding = (8 - (int)payload.Length % 8) % 8;
		payload.Write(new byte[padding]);
		byte[] raw = payload.ToArray();
		byte[] compressed = LiteralPrs(raw);
		using MemoryStream archive = new();
		WriteUInt16(archive, 1);
		WriteUInt16(archive, 1);
		WriteUInt32(archive, (uint)raw.Length);
		WriteUInt32(archive, 0);
		WriteUInt32(archive, modelOffset);
		WriteUInt32(archive, (uint)model.Length);
		WriteUInt32(archive, textureListOffset);
		WriteUInt32(archive, (uint)textureList.Length);
		WriteUInt32(archive, textureDataOffset);
		archive.Write(compressed);
		return archive.ToArray();
	}

	/// <summary>
	/// Encodes bytes as a PRS stream of literal groups and a terminator.
	/// </summary>
	/// <param name="data">A payload whose length is a multiple of eight.</param>
	/// <returns>The compressed stream.</returns>
	private static byte[] LiteralPrs(byte[] data)
	{
		using MemoryStream stream = new();
		for (int offset = 0; offset < data.Length; offset += 8)
		{
			stream.WriteByte(0xFF);
			stream.Write(data, offset, 8);
		}
		stream.WriteByte(0x02);
		stream.WriteByte(0);
		stream.WriteByte(0);
		return stream.ToArray();
	}

	/// <summary>
	/// Reads one BGRA pixel from a decoded image.
	/// </summary>
	/// <param name="image">The decoded image.</param>
	/// <param name="x">Column.</param>
	/// <param name="y">Row.</param>
	/// <returns>The packed little-endian BGRA value.</returns>
	internal static uint Pixel(TextureImage image, int x, int y) =>
		BinaryPrimitives.ReadUInt32LittleEndian(image.Pixels.Span.Slice((y * image.Width + x) * 4, 4));

	/// <summary>
	/// Packs a BGRA color for comparison with <see cref="Pixel"/>.
	/// </summary>
	/// <param name="blue">Blue channel.</param>
	/// <param name="green">Green channel.</param>
	/// <param name="red">Red channel.</param>
	/// <param name="alpha">Alpha channel.</param>
	/// <returns>The packed little-endian BGRA value.</returns>
	internal static uint Bgra(byte blue, byte green, byte red, byte alpha) =>
		(uint)(blue | green << 8 | red << 16 | alpha << 24);

	/// <summary>
	/// Rounds a value up to the next multiple.
	/// </summary>
	/// <param name="value">The value to align.</param>
	/// <param name="alignment">The required alignment.</param>
	/// <returns>The aligned value.</returns>
	private static int Align(int value, int alignment) => (value + alignment - 1) & ~(alignment - 1);

	private static void WriteUInt16(Stream stream, ushort value)
	{
		Span<byte> bytes = stackalloc byte[2];
		BinaryPrimitives.WriteUInt16LittleEndian(bytes, value);
		stream.Write(bytes);
	}

	private static void WriteUInt32(Stream stream, uint value)
	{
		Span<byte> bytes = stackalloc byte[4];
		BinaryPrimitives.WriteUInt32LittleEndian(bytes, value);
		stream.Write(bytes);
	}
}
