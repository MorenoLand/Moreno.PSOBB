using System.Buffers.Binary;
using PsoBB.Compression;

namespace PsoBB.Imaging;

/// <summary>
/// A PAE resource archive with its model, texture-list and texture sections.
/// </summary>
public sealed class PaeContainer
{
	private readonly byte[] _modelData;
	private readonly byte[] _textureListData;
	private readonly byte[] _textureData;
	private readonly XvmTexture[] _textures;

	private PaeContainer(
		ushort flags,
		uint decompressedSize,
		uint modelOffset,
		uint modelLength,
		uint textureListOffset,
		uint textureListLength,
		uint textureDataOffset,
		byte[] modelData,
		byte[] textureListData,
		byte[] textureData,
		XvmTexture[] textures)
	{
		Flags = flags;
		DecompressedSize = decompressedSize;
		ModelOffset = modelOffset;
		ModelLength = modelLength;
		TextureListOffset = textureListOffset;
		TextureListLength = textureListLength;
		TextureDataOffset = textureDataOffset;
		_modelData = modelData;
		_textureListData = textureListData;
		_textureData = textureData;
		_textures = textures;
	}

	/// <summary>Gets the header flags.</summary>
	public ushort Flags { get; }

	/// <summary>Gets a value indicating whether the payload is PRS-compressed.</summary>
	public bool IsCompressed => (Flags & 1) != 0;

	/// <summary>Gets the decompressed payload size stored in the header.</summary>
	public uint DecompressedSize { get; }

	/// <summary>Gets the offset of the model section.</summary>
	public uint ModelOffset { get; }

	/// <summary>Gets the length of the model section.</summary>
	public uint ModelLength { get; }

	/// <summary>Gets the offset of the texture-list section.</summary>
	public uint TextureListOffset { get; }

	/// <summary>Gets the length of the texture-list section.</summary>
	public uint TextureListLength { get; }

	/// <summary>Gets the offset of the embedded XVM texture archive.</summary>
	public uint TextureDataOffset { get; }

	/// <summary>Gets a copy of the model section.</summary>
	public ReadOnlyMemory<byte> ModelData => _modelData;

	/// <summary>Gets a copy of the texture-list section.</summary>
	public ReadOnlyMemory<byte> TextureListData => _textureListData;

	/// <summary>Gets a copy of the embedded XVM texture archive.</summary>
	public ReadOnlyMemory<byte> TextureData => _textureData;

	/// <summary>Gets the decoded textures in archive order.</summary>
	public IReadOnlyList<XvmTexture> Textures => _textures;

	/// <summary>
	/// Parses a PAE archive, decompressing its payload when the header says it is compressed.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <returns>The section ranges and decoded textures.</returns>
	/// <exception cref="TextureFormatException">A header, section range or texture is invalid.</exception>
	/// <exception cref="PrsFormatException">The compressed payload is malformed.</exception>
	[Original(0x0070E864)]
	public static PaeContainer Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < 0x20)
			throw new TextureFormatException("The PAE header is truncated.", data.Length);
		ushort flags = BinaryPrimitives.ReadUInt16LittleEndian(data[2..]);
		uint decompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		uint modelOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[0x0C..]);
		uint modelLength = BinaryPrimitives.ReadUInt32LittleEndian(data[0x10..]);
		uint textureListOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[0x14..]);
		uint textureListLength = BinaryPrimitives.ReadUInt32LittleEndian(data[0x18..]);
		uint textureDataOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[0x1C..]);
		byte[] baseData;
		if ((flags & 1) != 0)
		{
			if (decompressedSize == 0)
				throw new TextureFormatException("The PAE decompressed size is zero.", 4);
			baseData = new byte[decompressedSize];
			int written = PrsDecompressor.Decompress(data[0x20..], baseData);
			if (written != baseData.Length)
				Array.Resize(ref baseData, written);
		}
		else
		{
			baseData = data.ToArray();
		}
		ReadOnlySpan<byte> payload = baseData;
		byte[] modelData = ReadSection(payload, modelOffset, modelLength, 0x0C);
		byte[] textureListData = ReadSection(payload, textureListOffset, textureListLength, 0x14);
		if (textureDataOffset == 0 || textureDataOffset > payload.Length)
			throw new TextureFormatException("The PAE texture section offset is invalid.", 0x1C);
		byte[] textureData = payload[(int)textureDataOffset..].ToArray();
		XvmTexture[] textures = XvmTextureReader.Read(textureData).ToArray();
		return new PaeContainer(
			flags,
			decompressedSize,
			modelOffset,
			modelLength,
			textureListOffset,
			textureListLength,
			textureDataOffset,
			modelData,
			textureListData,
			textureData,
			textures);
	}

	/// <summary>
	/// Copies one section after checking its range.
	/// </summary>
	/// <param name="payload">The uncompressed archive.</param>
	/// <param name="offset">Section start.</param>
	/// <param name="length">Section length.</param>
	/// <param name="headerOffset">Header field offset for the error message.</param>
	/// <returns>The section bytes.</returns>
	/// <exception cref="TextureFormatException">The section lies outside the payload.</exception>
	private static byte[] ReadSection(ReadOnlySpan<byte> payload, uint offset, uint length, int headerOffset)
	{
		if (offset > payload.Length || length > payload.Length - offset)
			throw new TextureFormatException("The PAE section lies outside the payload.", headerOffset);
		return payload.Slice((int)offset, (int)length).ToArray();
	}
}
