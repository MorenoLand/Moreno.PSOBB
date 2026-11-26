using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// One vertex buffer of a map mesh: its original vertex format, stride, count and bytes.
/// </summary>
public sealed class MapVertexBuffer
{
	/// <summary>The fixed width of one vertex-buffer record.</summary>
	public const int EntrySize = 0x10;

	private readonly byte[] _data;

	private MapVertexBuffer(uint vertexFormat, uint stride, uint count, byte[] data)
	{
		VertexFormat = vertexFormat;
		Stride = stride;
		Count = count;
		_data = data;
	}

	/// <summary>Gets the original flexible vertex format code.</summary>
	public uint VertexFormat { get; }

	/// <summary>Gets the number of bytes per vertex.</summary>
	public uint Stride { get; }

	/// <summary>Gets the number of vertices.</summary>
	public uint Count { get; }

	/// <summary>Gets a copy of the vertex bytes.</summary>
	public ReadOnlyMemory<byte> Data => _data;

	/// <summary>
	/// Parses one vertex-buffer record.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The parsed buffer.</returns>
	/// <exception cref="SceneFormatException">The record or its vertex bytes lie outside the image.</exception>
	internal static MapVertexBuffer Parse(byte[] data, int offset, string context)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"A vertex buffer of {context} is truncated.", offset);
		uint vertexFormat = BinaryPrimitives.ReadUInt32LittleEndian(image[offset..]);
		int dataOffset = MapRenderGeometryFile.ReadOffset(image, offset + 4, $"{context} vertex buffer data");
		uint stride = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 8)..]);
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x0C)..]);
		long length = (long)stride * count;
		if (length > int.MaxValue || dataOffset < 0 || dataOffset > image.Length || length > image.Length - dataOffset)
			throw new SceneFormatException($"The vertex bytes of {context} at 0x{dataOffset:X} do not fit the image.", offset + 4);
		return new MapVertexBuffer(vertexFormat, stride, count, image.Slice(dataOffset, (int)length).ToArray());
	}
}
