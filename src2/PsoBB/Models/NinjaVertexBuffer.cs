using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// One vertex array from an NJCM mesh.
/// </summary>
public sealed class NinjaVertexBuffer
{
	private NinjaVertexBuffer(uint format, int stride, NinjaVertex[] vertices, ReadOnlyMemory<byte> data)
	{
		Format = format;
		Stride = stride;
		Vertices = vertices;
		Data = data;
	}

	/// <summary>Gets the original vertex format word, including the translucent flag.</summary>
	public uint Format { get; }

	/// <summary>Gets the stored byte stride of one vertex.</summary>
	public int Stride { get; }

	/// <summary>Gets the decoded vertices.</summary>
	public IReadOnlyList<NinjaVertex> Vertices { get; }

	/// <summary>Gets the original vertex bytes in their stored stride.</summary>
	public ReadOnlyMemory<byte> Data { get; }

	/// <summary>Gets the Direct3D flexible vertex format code that matches <see cref="Format"/>.</summary>
	public uint FlexibleVertexFormat => NinjaVertexFormat.ToFlexibleVertexFormat(Format);

	/// <summary>Gets a value indicating whether the translucent geometry pass uses this buffer.</summary>
	public bool IsTranslucent => (Format & 0x10000) != 0;

	/// <summary>Gets a value indicating whether the vertices carry normals.</summary>
	public bool HasNormals
	{
		get
		{
			uint format = Format & 0xFFFF;
			return format is 2 or 3 or 6 or 7;
		}
	}

	/// <summary>Gets a value indicating whether the vertices carry texture coordinates.</summary>
	public bool HasTextureCoordinates
	{
		get
		{
			uint format = Format & 0xFFFF;
			return format is 1 or 3 or 5 or 7;
		}
	}

	/// <summary>Gets a value indicating whether the vertices carry colors.</summary>
	public bool HasColors
	{
		get
		{
			uint format = Format & 0xFFFF;
			return format is 4 or 5 or 6 or 7;
		}
	}

	/// <summary>
	/// Encodes the decoded vertices back into the original flexible vertex format.
	/// </summary>
	/// <returns>The vertex bytes with the stored stride.</returns>
	public byte[] Encode()
	{
		byte[] data = new byte[Stride * Vertices.Count];
		for (int index = 0; index < Vertices.Count; index++)
			WriteVertex(data.AsSpan(index * Stride), Vertices[index], Format & 0xFFFF);
		return data;
	}

	/// <summary>
	/// Decodes the vertices at a body-relative offset.
	/// </summary>
	/// <param name="body">The NJCM body.</param>
	/// <param name="offset">The body-relative vertex-data offset.</param>
	/// <param name="format">The vertex format word.</param>
	/// <param name="stride">The stored vertex stride.</param>
	/// <param name="count">The vertex count.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The decoded buffer.</returns>
	/// <exception cref="ModelFormatException">The format, stride, count or data range is invalid.</exception>
	internal static NinjaVertexBuffer Read(ReadOnlySpan<byte> body, int offset, uint format, int stride, int count, int sourceOffset)
	{
		uint layout = format & 0xFFFF;
		int expected = LayoutSize(layout, sourceOffset + offset);
		if (stride < expected)
			throw new ModelFormatException("The vertex stride is smaller than its format.", sourceOffset + offset);
		if (count < 0 || count > (body.Length - offset) / stride)
			throw new ModelFormatException("The vertex count lies outside the chunk.", sourceOffset + offset);
		NinjaVertex[] vertices = new NinjaVertex[count];
		for (int index = 0; index < count; index++)
			vertices[index] = ReadVertex(body.Slice(offset + index * stride, expected), layout);
		return new NinjaVertexBuffer(format, stride, vertices, body.Slice(offset, count * stride).ToArray());
	}

	/// <summary>
	/// Reads one vertex in its format's field order.
	/// </summary>
	/// <param name="vertex">The vertex bytes.</param>
	/// <param name="layout">The format number without flag bits.</param>
	/// <returns>The decoded vertex.</returns>
	private static NinjaVertex ReadVertex(ReadOnlySpan<byte> vertex, uint layout)
	{
		Vector3 position = ReadVector(vertex);
		Vector3 normal = default;
		float u = 0;
		float v = 0;
		byte r = 0;
		byte g = 0;
		byte b = 0;
		byte a = 0;
		switch (layout)
		{
			case 1:
				u = ReadSingle(vertex, 12);
				v = ReadSingle(vertex, 16);
				break;
			case 2:
				normal = ReadVector(vertex[12..]);
				break;
			case 3:
				normal = ReadVector(vertex[12..]);
				u = ReadSingle(vertex, 24);
				v = ReadSingle(vertex, 28);
				break;
			case 4:
				r = vertex[12];
				g = vertex[13];
				b = vertex[14];
				a = vertex[15];
				break;
			case 5:
				r = vertex[12];
				g = vertex[13];
				b = vertex[14];
				a = vertex[15];
				u = ReadSingle(vertex, 16);
				v = ReadSingle(vertex, 20);
				break;
			case 6:
				r = vertex[12];
				g = vertex[13];
				b = vertex[14];
				a = vertex[15];
				normal = ReadVector(vertex[16..]);
				break;
			default:
				normal = ReadVector(vertex[12..]);
				r = vertex[24];
				g = vertex[25];
				b = vertex[26];
				a = vertex[27];
				u = ReadSingle(vertex, 28);
				v = ReadSingle(vertex, 32);
				break;
		}
		return new NinjaVertex(position, normal, u, v, r, g, b, a);
	}

	/// <summary>
	/// Returns the byte size of one vertex for a format number.
	/// </summary>
	/// <param name="layout">The format number without flag bits.</param>
	/// <param name="offset">The format offset for error messages.</param>
	/// <returns>The vertex size.</returns>
	/// <exception cref="ModelFormatException">The format number is not supported.</exception>
	private static int LayoutSize(uint layout, int offset) => layout switch
	{
		1 => 20,
		2 => 24,
		3 => 32,
		4 => 16,
		5 => 24,
		6 => 28,
		7 => 36,
		_ => throw new ModelFormatException($"The vertex format {layout} is unsupported.", offset),
	};

	/// <summary>
	/// Writes one vertex in its format's field order.
	/// </summary>
	/// <param name="destination">The destination stride.</param>
	/// <param name="vertex">The decoded vertex.</param>
	/// <param name="layout">The format number without flag bits.</param>
	private static void WriteVertex(Span<byte> destination, NinjaVertex vertex, uint layout)
	{
		WriteVector(destination, vertex.Position);
		switch (layout)
		{
			case 1:
				WriteSingle(destination, 12, vertex.U);
				WriteSingle(destination, 16, vertex.V);
				break;
			case 2:
				WriteVector(destination[12..], vertex.Normal);
				break;
			case 3:
				WriteVector(destination[12..], vertex.Normal);
				WriteSingle(destination, 24, vertex.U);
				WriteSingle(destination, 28, vertex.V);
				break;
			case 4:
				WriteColor(destination, 12, vertex);
				break;
			case 5:
				WriteColor(destination, 12, vertex);
				WriteSingle(destination, 16, vertex.U);
				WriteSingle(destination, 20, vertex.V);
				break;
			case 6:
				WriteColor(destination, 12, vertex);
				WriteVector(destination[16..], vertex.Normal);
				break;
			default:
				WriteVector(destination[12..], vertex.Normal);
				WriteColor(destination, 24, vertex);
				WriteSingle(destination, 28, vertex.U);
				WriteSingle(destination, 32, vertex.V);
				break;
		}
	}

	/// <summary>
	/// Writes a three-component float vector.
	/// </summary>
	/// <param name="destination">The destination.</param>
	/// <param name="value">The vector.</param>
	private static void WriteVector(Span<byte> destination, Vector3 value)
	{
		WriteSingle(destination, 0, value.X);
		WriteSingle(destination, 4, value.Y);
		WriteSingle(destination, 8, value.Z);
	}

	/// <summary>
	/// Writes the four packed colour bytes.
	/// </summary>
	/// <param name="destination">The destination stride.</param>
	/// <param name="offset">The colour offset.</param>
	/// <param name="vertex">The decoded vertex.</param>
	private static void WriteColor(Span<byte> destination, int offset, NinjaVertex vertex)
	{
		destination[offset] = vertex.R;
		destination[offset + 1] = vertex.G;
		destination[offset + 2] = vertex.B;
		destination[offset + 3] = vertex.A;
	}

	/// <summary>
	/// Writes one little-endian float.
	/// </summary>
	/// <param name="destination">The destination.</param>
	/// <param name="offset">The field offset.</param>
	/// <param name="value">The value.</param>
	private static void WriteSingle(Span<byte> destination, int offset, float value) =>
		BinaryPrimitives.WriteSingleLittleEndian(destination[offset..], value);

	/// <summary>
	/// Reads a three-component float vector.
	/// </summary>
	/// <param name="data">The vector bytes.</param>
	/// <returns>The vector.</returns>
	private static Vector3 ReadVector(ReadOnlySpan<byte> data) =>
		new(ReadSingle(data, 0), ReadSingle(data, 4), ReadSingle(data, 8));

	/// <summary>
	/// Reads one little-endian float.
	/// </summary>
	/// <param name="data">The source bytes.</param>
	/// <param name="offset">The field offset.</param>
	/// <returns>The value.</returns>
	private static float ReadSingle(ReadOnlySpan<byte> data, int offset) =>
		BinaryPrimitives.ReadSingleLittleEndian(data[offset..]);
}
