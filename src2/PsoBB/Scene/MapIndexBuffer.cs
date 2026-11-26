using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// One index buffer of a map mesh, with its render-state arguments and decoded 16-bit indices.
/// </summary>
public sealed class MapIndexBuffer
{
	/// <summary>The fixed width of one index-buffer record.</summary>
	public const int EntrySize = 0x14;

	/// <summary>The width of one render-state argument.</summary>
	public const int RenderStateArgumentSize = 0x10;

	private readonly MapRenderStateArgument[] _arguments;
	private readonly byte[] _renderStateArguments;
	private readonly ushort[] _indices;

	private MapIndexBuffer(byte[] renderStateArguments, MapRenderStateArgument[] arguments, uint vertexBufferIndex, ushort[] indices)
	{
		_renderStateArguments = renderStateArguments;
		_arguments = arguments;
		VertexBufferIndex = vertexBufferIndex;
		_indices = indices;
	}

	/// <summary>Gets the number of indices.</summary>
	public int IndexCount => _indices.Length;

	/// <summary>Gets the 16-bit indices in draw order.</summary>
	public IReadOnlyList<ushort> Indices => _indices;

	/// <summary>Gets the indices as a contiguous span for surface construction.</summary>
	public ReadOnlyMemory<ushort> IndicesMemory => _indices;

	/// <summary>Gets the decoded render-state arguments that accompany this buffer.</summary>
	public IReadOnlyList<MapRenderStateArgument> Arguments => _arguments;

	/// <summary>Gets the vertex-buffer table entry this buffer draws with.</summary>
	public uint VertexBufferIndex { get; }

	/// <summary>Gets the raw render-state argument records that accompany this buffer.</summary>
	public ReadOnlyMemory<byte> RenderStateArguments => _renderStateArguments;

	/// <summary>
	/// Parses one index-buffer record.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="context">Description used in error messages.</param>
	/// <returns>The parsed buffer.</returns>
	/// <exception cref="SceneFormatException">The record, arguments or indices lie outside the image.</exception>
	internal static MapIndexBuffer Parse(byte[] data, int offset, string context)
	{
		ReadOnlySpan<byte> image = data;
		if (offset < 0 || offset > image.Length - EntrySize)
			throw new SceneFormatException($"An index buffer of {context} is truncated.", offset);
		int argumentsOffset = MapRenderGeometryFile.ReadOffset(image, offset, $"{context} index arguments");
		uint argumentCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 4)..]);
		int indexOffset = MapRenderGeometryFile.ReadOffset(image, offset + 8, $"{context} index data");
		uint indexCount = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x0C)..]);
		uint vertexBufferIndex = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + 0x10)..]);
		MapRenderGeometryFile.ValidateTable(image, argumentsOffset, argumentCount, RenderStateArgumentSize, $"{context} index arguments");
		if (indexCount > int.MaxValue / 2)
			throw new SceneFormatException($"The index count {indexCount} of {context} exceeds the readable range.", offset + 0x0C);
		int indexLength = (int)indexCount * 2;
		if (indexOffset < 0 || indexOffset > image.Length || indexLength > image.Length - indexOffset)
			throw new SceneFormatException($"The index data of {context} at 0x{indexOffset:X} does not fit the image.", offset + 8);
		byte[] arguments = image.Slice(argumentsOffset, (int)argumentCount * RenderStateArgumentSize).ToArray();
		MapRenderStateArgument[] decoded = new MapRenderStateArgument[argumentCount];
		for (int index = 0; index < decoded.Length; index++)
		{
			int argumentOffset = index * RenderStateArgumentSize;
			decoded[index] = new MapRenderStateArgument(
				BinaryPrimitives.ReadUInt32LittleEndian(arguments.AsSpan(argumentOffset)),
				BinaryPrimitives.ReadUInt32LittleEndian(arguments.AsSpan(argumentOffset + 4)),
				BinaryPrimitives.ReadUInt32LittleEndian(arguments.AsSpan(argumentOffset + 8)));
		}
		ushort[] indices = new ushort[indexCount];
		for (int index = 0; index < indices.Length; index++)
			indices[index] = BinaryPrimitives.ReadUInt16LittleEndian(image[(indexOffset + index * 2)..]);
		return new MapIndexBuffer(arguments, decoded, vertexBufferIndex, indices);
	}
}
