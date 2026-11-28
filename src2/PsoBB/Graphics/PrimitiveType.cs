namespace PsoBB.Graphics;

/// <summary>
/// The primitive shapes a draw call assembles from its vertices.
/// </summary>
public enum PrimitiveType
{
	/// <summary>Independent points.</summary>
	PointList,
	/// <summary>Independent line segments.</summary>
	LineList,
	/// <summary>A connected line strip.</summary>
	LineStrip,
	/// <summary>Independent triangles.</summary>
	TriangleList,
	/// <summary>A connected triangle strip.</summary>
	TriangleStrip,
	/// <summary>A connected triangle fan.</summary>
	TriangleFan,
}
