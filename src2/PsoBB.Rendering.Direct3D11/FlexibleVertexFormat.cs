namespace PsoBB.Rendering.Direct3D11;

/// <summary>The position layout encoded by a flexible vertex format.</summary>
internal enum VertexPositionFormat
{
	/// <summary>The format does not declare a position.</summary>
	None,
	/// <summary>A three-float position transformed by the world, view and projection matrices.</summary>
	Xyz,
	/// <summary>A four-float position already in screen space.</summary>
	XyzRhw,
	/// <summary>A three-float position with one blend weight.</summary>
	XyzBlend1,
	/// <summary>A three-float position with two blend weights.</summary>
	XyzBlend2,
	/// <summary>A three-float position with three blend weights.</summary>
	XyzBlend3,
	/// <summary>A three-float position with four blend weights.</summary>
	XyzBlend4,
	/// <summary>A three-float position with five blend weights.</summary>
	XyzBlend5,
}

/// <summary>
/// The layout described by a Direct3D 8 flexible vertex format code, with element offsets and sizes.
/// </summary>
internal readonly struct FlexibleVertexFormat
{
	private const uint PositionMask = 0x000E;
	private const uint Xyz = 0x0002;
	private const uint XyzRhw = 0x0004;
	private const uint Normal = 0x0010;
	private const uint PointSize = 0x0020;
	private const uint Diffuse = 0x0040;
	private const uint Specular = 0x0080;
	private const uint TextureCountMask = 0x0F00;
	private const uint LastBetaUByte4 = 0x1000;
	private const uint LastBetaUByte4Direct3D9 = 0x2000;
	private const uint LastBetaColor = 0x8000;

	private FlexibleVertexFormat(VertexPositionFormat position, int blendWeightCount, bool packedLastWeight, bool hasNormal, bool hasPointSize, bool hasDiffuse, bool hasSpecular, int textureCoordinateCount, int textureCoordinateSize, int size)
	{
		Position = position;
		BlendWeightCount = blendWeightCount;
		PackedLastWeight = packedLastWeight;
		HasNormal = hasNormal;
		HasPointSize = hasPointSize;
		HasDiffuse = hasDiffuse;
		HasSpecular = hasSpecular;
		TextureCoordinateCount = textureCoordinateCount;
		TextureCoordinateSize = textureCoordinateSize;
		Size = size;
	}

	/// <summary>Gets the position layout.</summary>
	public VertexPositionFormat Position { get; }
	/// <summary>Gets the number of blend weights, or zero.</summary>
	public int BlendWeightCount { get; }
	/// <summary>Gets whether the last blend weight is a packed four-byte value.</summary>
	public bool PackedLastWeight { get; }
	/// <summary>Gets whether the format declares a normal.</summary>
	public bool HasNormal { get; }
	/// <summary>Gets whether the format declares a point size.</summary>
	public bool HasPointSize { get; }
	/// <summary>Gets whether the format declares a diffuse color.</summary>
	public bool HasDiffuse { get; }
	/// <summary>Gets whether the format declares a specular color.</summary>
	public bool HasSpecular { get; }
	/// <summary>Gets the number of texture coordinate sets.</summary>
	public int TextureCoordinateCount { get; }
	/// <summary>Gets the number of floats in the first texture coordinate set.</summary>
	public int TextureCoordinateSize { get; }
	/// <summary>Gets the number of bytes the format declares.</summary>
	public int Size { get; }

	/// <summary>Gets whether the position is already in screen space.</summary>
	public bool IsPreTransformed => Position == VertexPositionFormat.XyzRhw;

	/// <summary>
	/// Parses a flexible vertex format code and checks it against the vertex stride.
	/// </summary>
	/// <param name="code">The original flexible vertex format code.</param>
	/// <param name="stride">The number of bytes per vertex.</param>
	/// <returns>The parsed layout.</returns>
	/// <exception cref="ArgumentException">The format has no supported position or does not fit the stride.</exception>
	public static FlexibleVertexFormat Parse(uint code, int stride)
	{
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(stride);
		uint positionCode = code & PositionMask;
		VertexPositionFormat position = positionCode switch
		{
			Xyz => VertexPositionFormat.Xyz,
			XyzRhw => VertexPositionFormat.XyzRhw,
			0x0006 => VertexPositionFormat.XyzBlend1,
			0x0008 => VertexPositionFormat.XyzBlend2,
			0x000A => VertexPositionFormat.XyzBlend3,
			0x000C => VertexPositionFormat.XyzBlend4,
			0x000E => VertexPositionFormat.XyzBlend5,
			_ => VertexPositionFormat.None,
		};
		if (position == VertexPositionFormat.None)
			throw new ArgumentException($"The vertex format 0x{code:X} does not declare a supported position.", nameof(code));
		int blendWeightCount = position switch
		{
			VertexPositionFormat.XyzBlend1 => 1,
			VertexPositionFormat.XyzBlend2 => 2,
			VertexPositionFormat.XyzBlend3 => 3,
			VertexPositionFormat.XyzBlend4 => 4,
			VertexPositionFormat.XyzBlend5 => 5,
			_ => 0,
		};
		int textureCoordinateCount = (int)((code & TextureCountMask) >> 8);
		if (textureCoordinateCount > 8)
			throw new ArgumentException($"The vertex format 0x{code:X} declares more than eight texture coordinate sets.", nameof(code));
		int textureCoordinateSize = textureCoordinateCount == 0 ? 0 : DecodeTextureCoordinateSize((code >> 16) & 0x3);
		bool hasNormal = (code & Normal) != 0;
		bool hasPointSize = (code & PointSize) != 0;
		bool hasDiffuse = (code & Diffuse) != 0;
		bool hasSpecular = (code & Specular) != 0;
		int size = position == VertexPositionFormat.XyzRhw ? 16 : 12;
		size += blendWeightCount * 4;
		if (hasNormal)
			size += 12;
		if (hasPointSize)
			size += 4;
		if (hasDiffuse)
			size += 4;
		if (hasSpecular)
			size += 4;
		for (int index = 0; index < textureCoordinateCount; index++)
			size += DecodeTextureCoordinateSize((code >> (16 + index * 2)) & 0x3) * 4;
		if (size > stride)
			throw new ArgumentException($"The vertex format 0x{code:X} needs {size} bytes but the stride is {stride}.", nameof(stride));
		bool packedLastWeight = blendWeightCount > 0 && (code & (LastBetaUByte4 | LastBetaUByte4Direct3D9 | LastBetaColor)) != 0;
		return new FlexibleVertexFormat(position, blendWeightCount, packedLastWeight, hasNormal, hasPointSize, hasDiffuse, hasSpecular, textureCoordinateCount, textureCoordinateSize, size);
	}

	private static int DecodeTextureCoordinateSize(uint encodedSize) => encodedSize switch
	{
		0 => 2,
		1 => 3,
		2 => 4,
		_ => 1,
	};
}
