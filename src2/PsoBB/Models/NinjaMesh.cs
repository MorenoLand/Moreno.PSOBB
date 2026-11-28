using System.Buffers.Binary;
using PsoBB.Graphics;

namespace PsoBB.Models;

/// <summary>
/// One NJCM mesh with its vertex arrays, opaque index arrays and translucent index arrays.
/// </summary>
public sealed class NinjaMesh
{
	internal NinjaMesh(uint flags, NinjaVertexBuffer[] vertexBuffers, NinjaIndexBuffer[] indexBuffers, NinjaIndexBuffer[] alphaIndexBuffers)
	{
		Flags = flags;
		VertexBuffers = vertexBuffers;
		IndexBuffers = indexBuffers;
		AlphaIndexBuffers = alphaIndexBuffers;
		OpaqueMaterials = BuildMaterials(indexBuffers);
		AlphaMaterials = BuildMaterials(alphaIndexBuffers);
	}

	/// <summary>Gets the mesh flags.</summary>
	public uint Flags { get; }

	/// <summary>Gets the vertex arrays addressed by the index buffers.</summary>
	public IReadOnlyList<NinjaVertexBuffer> VertexBuffers { get; }

	/// <summary>Gets the opaque triangle-strip index buffers.</summary>
	public IReadOnlyList<NinjaIndexBuffer> IndexBuffers { get; }

	/// <summary>Gets the translucent triangle-strip index buffers.</summary>
	public IReadOnlyList<NinjaIndexBuffer> AlphaIndexBuffers { get; }

	/// <summary>Gets the accumulated material state for each opaque index buffer.</summary>
	public IReadOnlyList<NinjaMaterial> OpaqueMaterials { get; }

	/// <summary>Gets the accumulated material state for each translucent index buffer.</summary>
	public IReadOnlyList<NinjaMaterial> AlphaMaterials { get; }

	/// <summary>Gets every texture-list index selected by the render-state commands.</summary>
	public IEnumerable<int> TextureIndices
	{
		get
		{
			foreach (NinjaIndexBuffer buffer in IndexBuffers)
				foreach (NinjaRenderStateArgument argument in buffer.RenderStateArguments)
					if (argument.TextureIndex >= 0)
						yield return argument.TextureIndex;
			foreach (NinjaIndexBuffer buffer in AlphaIndexBuffers)
				foreach (NinjaRenderStateArgument argument in buffer.RenderStateArguments)
					if (argument.TextureIndex >= 0)
						yield return argument.TextureIndex;
		}
	}

	/// <summary>
	/// Reads a mesh descriptor and all arrays it references.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="offset">The mesh descriptor offset.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The parsed mesh.</returns>
	/// <exception cref="ModelFormatException">A pointer, count or array lies outside the chunk.</exception>
	internal static NinjaMesh Read(ReadOnlySpan<byte> body, int offset, int sourceOffset)
	{
		if (body.Length - offset < 0x1C)
			throw new ModelFormatException("The NJCM mesh descriptor is truncated.", sourceOffset + offset);
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(body[offset..]);
		uint vertexBuffersOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 4)..]);
		uint vertexBufferCount = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 8)..]);
		uint indexBuffersOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 12)..]);
		uint indexBufferCount = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 16)..]);
		uint alphaIndexBuffersOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 20)..]);
		uint alphaIndexBufferCount = BinaryPrimitives.ReadUInt32LittleEndian(body[(offset + 24)..]);
		if (vertexBufferCount > int.MaxValue || vertexBufferCount > (uint)body.Length / 0x10)
			throw new ModelFormatException("The mesh vertex-buffer count is invalid.", sourceOffset + offset + 8);
		if (vertexBuffersOffset > body.Length || vertexBufferCount * 0x10 > body.Length - vertexBuffersOffset)
			throw new ModelFormatException("The mesh vertex-buffer array lies outside the chunk.", sourceOffset + offset + 4);
		if (indexBufferCount > int.MaxValue || indexBufferCount > (uint)body.Length / 0x14)
			throw new ModelFormatException("The mesh index-buffer count is invalid.", sourceOffset + offset + 16);
		if (indexBuffersOffset > body.Length || indexBufferCount * 0x14 > body.Length - indexBuffersOffset)
			throw new ModelFormatException("The mesh index-buffer array lies outside the chunk.", sourceOffset + offset + 12);
		if (alphaIndexBufferCount > int.MaxValue || alphaIndexBufferCount > (uint)body.Length / 0x14)
			throw new ModelFormatException("The mesh alpha-buffer count is invalid.", sourceOffset + offset + 24);
		if (alphaIndexBuffersOffset > body.Length || alphaIndexBufferCount * 0x14 > body.Length - alphaIndexBuffersOffset)
			throw new ModelFormatException("The mesh alpha-buffer array lies outside the chunk.", sourceOffset + offset + 20);
		NinjaVertexBuffer[] vertexBuffers = new NinjaVertexBuffer[(int)vertexBufferCount];
		for (int index = 0; index < vertexBuffers.Length; index++)
		{
			int descriptorOffset = (int)vertexBuffersOffset + index * 0x10;
			uint format = BinaryPrimitives.ReadUInt32LittleEndian(body[descriptorOffset..]);
			uint dataOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[(descriptorOffset + 4)..]);
			int stride = BinaryPrimitives.ReadInt32LittleEndian(body[(descriptorOffset + 8)..]);
			int count = BinaryPrimitives.ReadInt32LittleEndian(body[(descriptorOffset + 12)..]);
			if (dataOffset > body.Length)
				throw new ModelFormatException("The vertex data lies outside the chunk.", sourceOffset + descriptorOffset + 4);
			vertexBuffers[index] = NinjaVertexBuffer.Read(body, (int)dataOffset, format, stride, count, sourceOffset + descriptorOffset);
		}
		NinjaIndexBuffer[] indexBuffers = ReadIndexBuffers(body, (int)indexBuffersOffset, (int)indexBufferCount, vertexBuffers.Length, false, sourceOffset);
		NinjaIndexBuffer[] alphaIndexBuffers = ReadIndexBuffers(body, (int)alphaIndexBuffersOffset, (int)alphaIndexBufferCount, vertexBuffers.Length, true, sourceOffset);
		ValidateIndices(indexBuffers, vertexBuffers, sourceOffset + offset);
		ValidateIndices(alphaIndexBuffers, vertexBuffers, sourceOffset + offset);
		return new NinjaMesh(flags, vertexBuffers, indexBuffers, alphaIndexBuffers);
	}

	/// <summary>
	/// Rejects an index that addresses a vertex beyond its selected buffer.
	/// </summary>
	/// <param name="buffers">The index buffers.</param>
	/// <param name="vertexBuffers">The mesh vertex buffers.</param>
	/// <param name="sourceOffset">The mesh offset for error messages.</param>
	private static void ValidateIndices(NinjaIndexBuffer[] buffers, NinjaVertexBuffer[] vertexBuffers, int sourceOffset)
	{
		foreach (NinjaIndexBuffer buffer in buffers)
		{
			int vertexCount = vertexBuffers[buffer.VertexBufferIndex].Vertices.Count;
			foreach (ushort index in buffer.Indices)
			{
				if (index >= vertexCount)
					throw new ModelFormatException("The triangle strip index addresses a missing vertex.", sourceOffset);
			}
		}
	}

	/// <summary>
	/// Accumulates render-state commands so each index buffer receives the state in force at its draw.
	/// </summary>
	/// <param name="buffers">The index buffers in draw order.</param>
	/// <returns>One material per index buffer.</returns>
	private static NinjaMaterial[] BuildMaterials(NinjaIndexBuffer[] buffers)
	{
		NinjaMaterial[] materials = new NinjaMaterial[buffers.Length];
		int textureIndex = -1;
		uint blendSource = RenderStateId.BlendOne;
		uint blendDestination = RenderStateId.BlendZero;
		uint addressU = 1;
		uint addressV = 1;
		uint ambientColor = 0;
		uint diffuseColor = 0;
		bool lighting = true;
		bool cameraSpaceNormals = false;
		uint ambientSource = 0;
		uint diffuseSource = 0;
		for (int index = 0; index < buffers.Length; index++)
		{
			NinjaIndexBuffer buffer = buffers[index];
			foreach (NinjaRenderStateArgument argument in buffer.RenderStateArguments)
			{
				switch (argument.Type)
				{
					case 2:
						blendSource = argument.Argument1;
						blendDestination = argument.Argument2;
						break;
					case 3:
						textureIndex = (int)argument.Argument1;
						break;
					case 4:
						addressU = argument.Argument1;
						addressV = argument.Argument2;
						break;
					case 5:
						ambientColor = argument.Argument1;
						diffuseColor = argument.Argument2;
						break;
					case 6:
						lighting = argument.Argument1 != 0;
						break;
					case 7:
						cameraSpaceNormals = argument.Argument1 != 0;
						break;
					case 8:
						ambientSource = argument.Argument1;
						diffuseSource = argument.Argument2;
						break;
				}
			}
			materials[index] = new NinjaMaterial(
				textureIndex,
				blendSource,
				blendDestination,
				addressU,
				addressV,
				ambientColor,
				diffuseColor,
				lighting,
				cameraSpaceNormals,
				ambientSource,
				diffuseSource,
				buffer.RenderStateArguments.ToArray());
		}
		return materials;
	}

	/// <summary>
	/// Reads one array of index-buffer descriptors.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="offset">The first descriptor offset.</param>
	/// <param name="count">The descriptor count.</param>
	/// <param name="vertexBufferCount">The number of vertex buffers in the mesh.</param>
	/// <param name="isAlpha">Whether the descriptors belong to the translucent set.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The parsed index buffers.</returns>
	private static NinjaIndexBuffer[] ReadIndexBuffers(ReadOnlySpan<byte> body, int offset, int count, int vertexBufferCount, bool isAlpha, int sourceOffset)
	{
		NinjaIndexBuffer[] buffers = new NinjaIndexBuffer[count];
		for (int index = 0; index < count; index++)
			buffers[index] = NinjaIndexBuffer.Read(body, offset + index * 0x14, vertexBufferCount, isAlpha, sourceOffset);
		return buffers;
	}
}
