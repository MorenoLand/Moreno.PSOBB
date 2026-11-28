using System.Buffers.Binary;

namespace PsoBB.Models;

/// <summary>
/// One triangle-strip index buffer and the render-state commands that precede its draw.
/// </summary>
public sealed class NinjaIndexBuffer
{
	private NinjaIndexBuffer(ushort[] indices, NinjaRenderStateArgument[] arguments, int vertexBufferIndex, bool isAlpha)
	{
		Indices = indices;
		RenderStateArguments = arguments;
		VertexBufferIndex = vertexBufferIndex;
		IsAlpha = isAlpha;
	}

	/// <summary>Gets the triangle-strip indices.</summary>
	public IReadOnlyList<ushort> Indices { get; }

	/// <summary>Gets the render-state commands in dispatch order.</summary>
	public IReadOnlyList<NinjaRenderStateArgument> RenderStateArguments { get; }

	/// <summary>Gets the vertex buffer that the indices address.</summary>
	public int VertexBufferIndex { get; }

	/// <summary>Gets a value indicating whether this buffer belongs to the translucent pass.</summary>
	public bool IsAlpha { get; }

	/// <summary>
	/// Creates one decoded strip buffer for the retail chunk-model path.
	/// </summary>
	/// <param name="indices">The triangle-strip indices.</param>
	/// <param name="arguments">The accumulated render-state commands.</param>
	/// <param name="vertexBufferIndex">The vertex buffer that the indices address.</param>
	/// <param name="isAlpha">Whether the buffer belongs to the translucent pass.</param>
	/// <returns>The index buffer.</returns>
	internal static NinjaIndexBuffer Create(ushort[] indices, NinjaRenderStateArgument[] arguments, int vertexBufferIndex, bool isAlpha) => new(indices, arguments, vertexBufferIndex, isAlpha);

	/// <summary>
	/// Reads one index-buffer descriptor.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="offset">The descriptor offset.</param>
	/// <param name="vertexBufferCount">The number of vertex buffers in the mesh.</param>
	/// <param name="isAlpha">Whether the descriptor belongs to the translucent set.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The index buffer.</returns>
	/// <exception cref="ModelFormatException">A pointer, count or index lies outside the chunk.</exception>
	internal static NinjaIndexBuffer Read(ReadOnlySpan<byte> body, int offset, int vertexBufferCount, bool isAlpha, int sourceOffset)
	{
		if (body.Length - offset < 0x14)
			throw new ModelFormatException("The NJCM index-buffer descriptor is truncated.", sourceOffset + offset);
		uint argumentsOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[offset..]);
		uint argumentCount = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 4)..]);
		uint indicesOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 8)..]);
		uint indexCount = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 12)..]);
		int vertexBufferIndex = BinaryPrimitives.ReadInt32LittleEndian(body[(offset + 16)..]);
		if (vertexBufferIndex < 0 || vertexBufferIndex >= vertexBufferCount)
			throw new ModelFormatException("The index buffer selects an unknown vertex buffer.", sourceOffset + offset + 16);
		if (argumentCount > int.MaxValue || argumentCount > (uint)body.Length / 0x10)
			throw new ModelFormatException("The render-state argument count is invalid.", sourceOffset + offset + 4);
		if (argumentsOffset > body.Length || argumentCount * 0x10 > body.Length - argumentsOffset)
			throw new ModelFormatException("The render-state argument array lies outside the chunk.", sourceOffset + offset);
		if (indexCount > int.MaxValue || indexCount > (uint)body.Length / 2)
			throw new ModelFormatException("The index count is invalid.", sourceOffset + offset + 12);
		if (indicesOffset > body.Length || indexCount * 2 > body.Length - indicesOffset)
			throw new ModelFormatException("The index array lies outside the chunk.", sourceOffset + offset + 12);
		NinjaRenderStateArgument[] arguments = new NinjaRenderStateArgument[(int)argumentCount];
		for (int index = 0; index < arguments.Length; index++)
		{
			int argumentOffset = (int)argumentsOffset + index * 0x10;
			arguments[index] = new NinjaRenderStateArgument(
				BinaryPrimitives.ReadUInt32LittleEndian(body[argumentOffset..]),
				BinaryPrimitives.ReadUInt32LittleEndian(body[(argumentOffset + 4)..]),
				BinaryPrimitives.ReadUInt32LittleEndian(body[(argumentOffset + 8)..]),
				BinaryPrimitives.ReadUInt32LittleEndian(body[(argumentOffset + 12)..]));
		}
		ushort[] indices = new ushort[(int)indexCount];
		for (int index = 0; index < indices.Length; index++)
			indices[index] = BinaryPrimitives.ReadUInt16LittleEndian(body[((int)indicesOffset + index * 2)..]);
		return new NinjaIndexBuffer(indices, arguments, vertexBufferIndex, isAlpha);
	}
}
