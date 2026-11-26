using System.Buffers.Binary;
using PsoBB.Data;
using PsoBB.Platform;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic <c>fmt2</c> maps for the map draw tests.
/// </summary>
public static class MapRendererTestData
{
	private const int ChunkOffset = 0x18;
	private const int StaticTreeOffset = 0x4C;
	private const int NodeOffset = 0x5C;
	private const int ChildOffset = 0x90;
	private const int MeshOffset = 0xC4;
	private const int VertexTableOffset = 0xE0;
	private const int IndexTableOffset = 0xF0;
	private const int AlphaTableOffset = 0x104;
	private const int VertexDataOffset = 0x118;
	private const int IndexDataOffset = 0x130;
	private const int AlphaDataOffset = 0x138;
	private const int ArgumentsOffset = 0x140;
	private const int TextureListOffset = 0x160;
	private const int TextureEntryOffset = 0x168;
	private const int TextureObjectOffset = 0x174;
	private const int TextureRecordOffset = 0x194;

	/// <summary>
	/// Builds a map scene with one chunk, one static tree and one mesh node.
	/// </summary>
	/// <param name="options">The values to write into the synthetic map.</param>
	/// <returns>The loaded map.</returns>
	public static MapScene Scene(MapGeometryOptions? options = null)
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "scene/map_testn.rel", Geometry(options ?? new MapGeometryOptions()));
		SceneSamples.AddFile(files, "scene/map_testc.rel", SceneSamples.Collision());
		SceneSamples.AddFile(files, "scene/map_testbm.bin", SceneSamples.RoomGraph());
		using DataFileRegistry registry = new(files);
		return new SceneLoader(registry).Load(MapSceneFiles.ForFloor("map_test", "map_test_00"));
	}

	/// <summary>
	/// Builds a map scene whose geometry has no chunks.
	/// </summary>
	/// <returns>The loaded empty map.</returns>
	public static MapScene EmptyScene()
	{
		byte[] body = new byte[0x18];
		"fmt2"u8.CopyTo(body);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(4), 0x40);
		BinaryPrimitives.WriteSingleLittleEndian(body.AsSpan(0x0C), 100.0f);
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "scene/map_testn.rel", SceneSamples.Rel(body, 0));
		SceneSamples.AddFile(files, "scene/map_testc.rel", SceneSamples.Collision());
		SceneSamples.AddFile(files, "scene/map_testbm.bin", SceneSamples.RoomGraph());
		using DataFileRegistry registry = new(files);
		return new SceneLoader(registry).Load(MapSceneFiles.ForFloor("map_test", "map_test_00"));
	}

	/// <summary>
	/// Builds the REL bytes for a synthetic map.
	/// </summary>
	/// <param name="options">The values to write into the synthetic map.</param>
	/// <returns>The complete REL file.</returns>
	public static byte[] Geometry(MapGeometryOptions options)
	{
		byte[] data = new byte[0x1C4];
		"fmt2"u8.CopyTo(data);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 0x40);
		BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(8), 1);
		BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(0x0C), 100.0f);
		WriteUInt32(data, 0x10, ChunkOffset);
		WriteUInt32(data, 0x14, TextureListOffset);
		WriteUInt32(data, ChunkOffset, 7);
		WriteFloats(data, ChunkOffset + 4, options.ChunkX, options.ChunkY, options.ChunkZ);
		WriteUInt32(data, ChunkOffset + 0x10, (uint)options.ChunkRotationX);
		WriteUInt32(data, ChunkOffset + 0x14, (uint)options.ChunkRotationY);
		WriteUInt32(data, ChunkOffset + 0x18, (uint)options.ChunkRotationZ);
		WriteF32(data, ChunkOffset + 0x1C, 400.0f);
		WriteUInt32(data, ChunkOffset + 0x20, StaticTreeOffset);
		WriteUInt32(data, ChunkOffset + 0x28, 1);
		WriteUInt32(data, ChunkOffset + 0x30, options.ChunkFlags);
		WriteUInt32(data, StaticTreeOffset, NodeOffset);
		WriteUInt32(data, StaticTreeOffset + 0xC, options.TreeFlags);
		WriteNode(data, NodeOffset, options.NodeFlags, options.NodeX, options.NodeY, options.NodeZ, options.NodeRotationX, options.NodeRotationY, options.NodeRotationZ, options.WithChild ? ChildOffset : 0);
		WriteNode(data, ChildOffset, options.ChildFlags, options.ChildX, options.ChildY, options.ChildZ, 0, 0, 0, 0);
		WriteUInt32(data, MeshOffset, 0);
		WriteUInt32(data, MeshOffset + 4, VertexTableOffset);
		WriteUInt32(data, MeshOffset + 8, 1);
		WriteUInt32(data, MeshOffset + 0xC, IndexTableOffset);
		WriteUInt32(data, MeshOffset + 0x10, 1);
		WriteUInt32(data, MeshOffset + 0x14, options.WithAlpha ? (uint)AlphaTableOffset : 0);
		WriteUInt32(data, MeshOffset + 0x18, options.WithAlpha ? 1u : 0u);
		WriteUInt32(data, VertexTableOffset, 0x112);
		WriteUInt32(data, VertexTableOffset + 4, VertexDataOffset);
		WriteUInt32(data, VertexTableOffset + 8, 12);
		WriteUInt32(data, VertexTableOffset + 0xC, 2);
		WriteUInt32(data, IndexTableOffset, options.WithTexture ? (uint)ArgumentsOffset : 0);
		WriteUInt32(data, IndexTableOffset + 4, options.WithTexture ? 2u : 0u);
		WriteUInt32(data, IndexTableOffset + 8, IndexDataOffset);
		WriteUInt32(data, IndexTableOffset + 0xC, 3);
		WriteUInt32(data, AlphaTableOffset, 0);
		WriteUInt32(data, AlphaTableOffset + 4, 0);
		WriteUInt32(data, AlphaTableOffset + 8, AlphaDataOffset);
		WriteUInt32(data, AlphaTableOffset + 0xC, 3);
		WriteUInt32(data, AlphaTableOffset + 0x10, 0);
		for (int index = 0; index < 24; index++)
			data[VertexDataOffset + index] = (byte)index;
		WriteUInt16(data, IndexDataOffset, 0);
		WriteUInt16(data, IndexDataOffset + 2, 1);
		WriteUInt16(data, IndexDataOffset + 4, 0);
		WriteUInt16(data, AlphaDataOffset, 1);
		WriteUInt16(data, AlphaDataOffset + 2, 0);
		WriteUInt16(data, AlphaDataOffset + 4, 1);
		if (options.WithTexture)
		{
			WriteUInt32(data, ArgumentsOffset, MapRenderStateArgument.TextureState);
			WriteUInt32(data, ArgumentsOffset + 4, 0);
			WriteUInt32(data, ArgumentsOffset + 8, 0);
			WriteUInt32(data, ArgumentsOffset + 0xC, 0);
			WriteUInt32(data, ArgumentsOffset + 0x10, MapRenderStateArgument.AddressState);
			WriteUInt32(data, ArgumentsOffset + 0x14, 3);
			WriteUInt32(data, ArgumentsOffset + 0x18, 2);
			WriteUInt32(data, ArgumentsOffset + 0x1C, 0);
			WriteUInt32(data, TextureListOffset, TextureEntryOffset);
			WriteUInt32(data, TextureListOffset + 4, 1);
			WriteUInt32(data, TextureEntryOffset, 0x1BC);
			WriteUInt32(data, TextureEntryOffset + 8, TextureObjectOffset);
			"wall\0"u8.CopyTo(data.AsSpan(0x1BC));
			WriteUInt32(data, TextureObjectOffset + 0xC, TextureRecordOffset);
			WriteUInt32(data, TextureRecordOffset + 0x20, options.GlobalTextureIndex);
		}
		return SceneSamples.Rel(
			data,
			0,
			0x10, 0x14,
			ChunkOffset + 0x20,
			StaticTreeOffset,
			NodeOffset + 4, NodeOffset + 0x2C,
			MeshOffset + 4, MeshOffset + 0xC, MeshOffset + 0x14,
			VertexTableOffset + 4,
			IndexTableOffset, IndexTableOffset + 8,
			AlphaTableOffset + 8,
			TextureListOffset, TextureEntryOffset + 8, TextureObjectOffset + 0xC);
	}

	private static void WriteNode(byte[] data, int offset, uint flags, float x, float y, float z, int rotationX, int rotationY, int rotationZ, int child)
	{
		WriteUInt32(data, offset, flags);
		WriteUInt32(data, offset + 4, MeshOffset);
		WriteFloats(data, offset + 8, x, y, z);
		WriteUInt32(data, offset + 0x14, (uint)rotationX);
		WriteUInt32(data, offset + 0x18, (uint)rotationY);
		WriteUInt32(data, offset + 0x1C, (uint)rotationZ);
		WriteFloats(data, offset + 0x20, 1, 1, 1);
		WriteUInt32(data, offset + 0x2C, (uint)child);
	}

	private static void WriteUInt16(byte[] data, int offset, ushort value) => BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset), value);

	private static void WriteUInt32(byte[] data, int offset, uint value) => BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(offset), value);

	private static void WriteF32(byte[] data, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(offset), value);

	private static void WriteFloats(byte[] data, int offset, params float[] values)
	{
		for (int index = 0; index < values.Length; index++)
			WriteF32(data, offset + index * 4, values[index]);
	}
}

/// <summary>
/// The values written into a synthetic map draw fixture.
/// </summary>
public sealed record MapGeometryOptions
{
	/// <summary>Gets or sets the chunk flags.</summary>
	public uint ChunkFlags { get; init; } = 0x10000;

	/// <summary>Gets or sets the chunk origin.</summary>
	public float ChunkX { get; init; } = 10.0f;

	/// <summary>Gets or sets the chunk Y origin.</summary>
	public float ChunkY { get; init; } = 20.0f;

	/// <summary>Gets or sets the chunk Z origin.</summary>
	public float ChunkZ { get; init; } = 30.0f;

	/// <summary>Gets or sets the chunk X rotation.</summary>
	public int ChunkRotationX { get; init; }

	/// <summary>Gets or sets the chunk Y rotation.</summary>
	public int ChunkRotationY { get; init; }

	/// <summary>Gets or sets the chunk Z rotation.</summary>
	public int ChunkRotationZ { get; init; }

	/// <summary>Gets or sets the static tree flags.</summary>
	public uint TreeFlags { get; init; }

	/// <summary>Gets or sets the mesh node evaluation flags.</summary>
	public uint NodeFlags { get; init; }

	/// <summary>Gets or sets the mesh node translation.</summary>
	public float NodeX { get; init; } = 1.0f;

	/// <summary>Gets or sets the mesh node Y translation.</summary>
	public float NodeY { get; init; } = 2.0f;

	/// <summary>Gets or sets the mesh node Z translation.</summary>
	public float NodeZ { get; init; } = 3.0f;

	/// <summary>Gets or sets the mesh node X rotation.</summary>
	public int NodeRotationX { get; init; }

	/// <summary>Gets or sets the mesh node Y rotation.</summary>
	public int NodeRotationY { get; init; }

	/// <summary>Gets or sets the mesh node Z rotation.</summary>
	public int NodeRotationZ { get; init; }

	/// <summary>Gets or sets a value indicating whether the node has a child mesh node.</summary>
	public bool WithChild { get; init; }

	/// <summary>Gets or sets the child node evaluation flags.</summary>
	public uint ChildFlags { get; init; }

	/// <summary>Gets or sets the child node translation.</summary>
	public float ChildX { get; init; } = 4.0f;

	/// <summary>Gets or sets the child node Y translation.</summary>
	public float ChildY { get; init; } = 5.0f;

	/// <summary>Gets or sets the child node Z translation.</summary>
	public float ChildZ { get; init; } = 6.0f;

	/// <summary>Gets or sets a value indicating whether the mesh has an alpha index buffer.</summary>
	public bool WithAlpha { get; init; }

	/// <summary>Gets or sets a value indicating whether the opaque index buffer selects a scene texture.</summary>
	public bool WithTexture { get; init; }

	/// <summary>Gets or sets the texture-list entry's global index.</summary>
	public uint GlobalTextureIndex { get; init; } = 0x303;
}
