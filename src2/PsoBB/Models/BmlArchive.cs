using System.Buffers.Binary;
using System.Text;
using PsoBB.Compression;
using PsoBB.Imaging;

namespace PsoBB.Models;

/// <summary>
/// A BML model archive with its header, file descriptors, model chunks, animations and textures.
/// </summary>
public sealed class BmlArchive
{
	private BmlArchive(uint flags, byte compressionType, bool hasTextures, BmlFile[] files)
	{
		Flags = flags;
		CompressionType = compressionType;
		HasTextures = hasTextures;
		Files = files;
	}

	/// <summary>Gets the first header word.</summary>
	public uint Flags { get; }

	/// <summary>Gets the stored compression marker; 'P' selects PRS.</summary>
	public byte CompressionType { get; }

	/// <summary>Gets a value indicating whether the archive carries texture archives.</summary>
	public bool HasTextures { get; }

	/// <summary>Gets the archive entries in descriptor order.</summary>
	public IReadOnlyList<BmlFile> Files { get; }

	/// <summary>
	/// Reads the BML header, descriptors and every compressed or stored entry.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <returns>The parsed archive.</returns>
	/// <exception cref="ModelFormatException">A header, descriptor, range or compressed stream is invalid.</exception>
	[Original(0x005B7A84, "LoadBML_005b7a84")]
	public static BmlArchive Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < 0x40)
			throw new ModelFormatException("The BML header is truncated.", data.Length);
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(data);
		uint fileCount = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		byte compressionType = data[8];
		bool hasTextures = data[9] != 0;
		if (compressionType is not 0 and not (byte)'P')
			throw new ModelFormatException("The BML compression marker is unsupported.", 8);
		if (fileCount > (uint)(data.Length - 0x40) / 0x40)
			throw new ModelFormatException("The BML descriptor count lies outside the archive.", 4);
		int dataOffset = Align(0x40 + (int)fileCount * 0x40, 0x800);
		if (dataOffset > data.Length)
			throw new ModelFormatException("The BML entry data lies outside the archive.", 4);
		BmlFile[] files = new BmlFile[(int)fileCount];
		int position = dataOffset;
		bool interleavedTextures = fileCount != 0 && BinaryPrimitives.ReadUInt32LittleEndian(data[(0x40 + 0x2C)..]) != 0;
		int fileAlignment = interleavedTextures ? 0x20 : 0x800;
		for (int index = 0; index < files.Length; index++)
		{
			int descriptorOffset = 0x40 + index * 0x40;
			string name = ReadName(data.Slice(descriptorOffset, 0x20));
			uint compressedSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(descriptorOffset + 0x20)..]);
			uint uncompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(descriptorOffset + 0x28)..]);
			uint texturesCompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(descriptorOffset + 0x2C)..]);
			uint texturesUncompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(descriptorOffset + 0x30)..]);
			byte[] stored = ReadEntry(data, ref position, compressedSize, compressionType == (byte)'P', uncompressedSize, descriptorOffset + 0x20);
			position = Align(position, fileAlignment);
			List<NinjaChunk> chunks = [];
			if (stored.Length != 0)
				chunks = NinjaChunkReader.ReadAll(stored);
			NinjaModel? model = chunks.Exists(chunk => chunk.Type == NinjaChunkType.Model) ? NinjaModelReader.Read(chunks) : null;
			NinjaTextureList? textureList = model?.Textures;
			if (textureList is null)
			{
				NinjaChunk? textureChunk = chunks.Find(chunk => chunk.Type == NinjaChunkType.TextureList);
				if (textureChunk is not null)
					textureList = NinjaTextureList.Parse(textureChunk.Body.Span, textureChunk.Offset + 8);
			}
			List<NinjaMotion> motions = [];
			if (model is not null)
			{
				foreach (NinjaChunk motionChunk in chunks)
				{
					if (motionChunk.Type == NinjaChunkType.Motion)
						motions.Add(NinjaMotion.Parse(motionChunk.Body, model.AnimatedNodeCount, motionChunk.Offset + 8));
				}
			}
			XvmTexture[] textures = [];
			if (texturesCompressedSize != 0)
			{
				byte[] textureBytes = ReadEntry(data, ref position, texturesCompressedSize, true, texturesUncompressedSize, descriptorOffset + 0x2C);
				position = Align(position, fileAlignment);
				textures = XvmTextureReader.Read(textureBytes).ToArray();
			}
			files[index] = new BmlFile(name, chunks, model, textureList, motions, textures);
		}
		NinjaModel? animationModel = null;
		foreach (BmlFile file in files)
		{
			if (file.Model is not null)
			{
				animationModel = file.Model;
				break;
			}
		}
		foreach (BmlFile file in files)
		{
			if (file.Motions.Count != 0)
				continue;
			List<NinjaMotion> motions = [];
			foreach (NinjaChunk motionChunk in file.Chunks)
			{
				if (motionChunk.Type == NinjaChunkType.Motion)
					motions.Add(NinjaMotion.Parse(motionChunk.Body, animationModel?.AnimatedNodeCount ?? 0, motionChunk.Offset + 8));
			}
			if (motions.Count != 0)
				file.Motions = motions;
		}
		return new BmlArchive(flags, compressionType, hasTextures, files);
	}

	/// <summary>
	/// Reads one stored entry and advances the data position.
	/// </summary>
	/// <param name="data">The archive.</param>
	/// <param name="position">The current data offset.</param>
	/// <param name="storedSize">The number of stored bytes.</param>
	/// <param name="compressed">Whether the stored bytes are PRS-compressed.</param>
	/// <param name="uncompressedSize">The declared decompressed size.</param>
	/// <param name="sourceOffset">The descriptor field offset for error messages.</param>
	/// <returns>The entry bytes.</returns>
	private static byte[] ReadEntry(ReadOnlySpan<byte> data, ref int position, uint storedSize, bool compressed, uint uncompressedSize, int sourceOffset)
	{
		if (storedSize > data.Length - position)
			throw new ModelFormatException("The BML entry lies outside the archive.", sourceOffset);
		ReadOnlySpan<byte> stored = data.Slice(position, (int)storedSize);
		position += (int)storedSize;
		if (!compressed)
			return stored.ToArray();
		if (uncompressedSize > int.MaxValue)
			throw new ModelFormatException("The BML decompressed size is invalid.", sourceOffset + 8);
		byte[] result = new byte[(int)uncompressedSize];
		int written = PrsDecompressor.Decompress(stored, result);
		if (written != result.Length)
			throw new ModelFormatException("The BML entry decompressed to a different size.", sourceOffset + 8);
		return result;
	}

	/// <summary>
	/// Reads a null-padded entry name.
	/// </summary>
	/// <param name="field">The 32-byte name field.</param>
	/// <returns>The name.</returns>
	private static string ReadName(ReadOnlySpan<byte> field)
	{
		int end = field.IndexOf((byte)0);
		return Encoding.Latin1.GetString(end < 0 ? field : field[..end]);
	}

	/// <summary>
	/// Rounds an offset up to an alignment.
	/// </summary>
	/// <param name="value">The offset.</param>
	/// <param name="alignment">The power-of-two alignment.</param>
	/// <returns>The aligned offset.</returns>
	private static int Align(int value, int alignment) => (value + alignment - 1) & ~(alignment - 1);
}
