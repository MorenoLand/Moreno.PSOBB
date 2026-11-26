namespace PsoBB.Graphics;

/// <summary>
/// The transform slots a renderer keeps for the vertex pipeline.
/// </summary>
public enum TransformKind
{
	/// <summary>The model transform.</summary>
	World,
	/// <summary>The camera transform.</summary>
	View,
	/// <summary>The projection transform.</summary>
	Projection,
	/// <summary>The first texture-coordinate transform.</summary>
	Texture0,
	/// <summary>The second texture-coordinate transform.</summary>
	Texture1,
	/// <summary>The third texture-coordinate transform.</summary>
	Texture2,
	/// <summary>The fourth texture-coordinate transform.</summary>
	Texture3,
}
