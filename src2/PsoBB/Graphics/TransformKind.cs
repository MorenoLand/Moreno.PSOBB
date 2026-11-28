namespace PsoBB.Graphics;

/// <summary>
/// The transform slots a renderer keeps for the vertex pipeline.
/// </summary>
public enum TransformKind
{
	/// <summary>The first model transform.</summary>
	World,
	/// <summary>The second model transform used by vertex blending.</summary>
	World1,
	/// <summary>The third model transform used by vertex blending.</summary>
	World2,
	/// <summary>The fourth model transform used by vertex blending.</summary>
	World3,
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
