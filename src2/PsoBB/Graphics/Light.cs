using System.Numerics;

namespace PsoBB.Graphics;

/// <summary>
/// One fixed-function light source: its type, colors, position, direction, range and attenuation.
/// </summary>
public readonly record struct Light
{
	/// <summary>
	/// Creates a light source.
	/// </summary>
	/// <param name="type">The light shape.</param>
	/// <param name="diffuse">The diffuse color the light emits.</param>
	/// <param name="specular">The specular color the light emits.</param>
	/// <param name="ambient">The ambient color the light emits.</param>
	/// <param name="position">World-space position; ignored by directional lights.</param>
	/// <param name="direction">World-space direction the light points; used by directional and spot lights.</param>
	/// <param name="range">Distance beyond which the light has no effect; ignored by directional lights.</param>
	/// <param name="falloff">Spotlight falloff between the inner and outer cones.</param>
	/// <param name="attenuation0">Constant distance attenuation.</param>
	/// <param name="attenuation1">Linear distance attenuation.</param>
	/// <param name="attenuation2">Quadratic distance attenuation.</param>
	/// <param name="theta">Fully lit spotlight cone angle in radians.</param>
	/// <param name="phi">Outer spotlight cone angle in radians.</param>
	public Light(
		LightType type,
		Vector4 diffuse,
		Vector4 specular,
		Vector4 ambient,
		Vector3 position,
		Vector3 direction,
		float range,
		float falloff,
		float attenuation0,
		float attenuation1,
		float attenuation2,
		float theta,
		float phi)
	{
		Type = type;
		Diffuse = diffuse;
		Specular = specular;
		Ambient = ambient;
		Position = position;
		Direction = direction;
		Range = range;
		Falloff = falloff;
		Attenuation0 = attenuation0;
		Attenuation1 = attenuation1;
		Attenuation2 = attenuation2;
		Theta = theta;
		Phi = phi;
	}

	/// <summary>Gets the light shape.</summary>
	public LightType Type { get; }
	/// <summary>Gets the diffuse color the light emits.</summary>
	public Vector4 Diffuse { get; }
	/// <summary>Gets the specular color the light emits.</summary>
	public Vector4 Specular { get; }
	/// <summary>Gets the ambient color the light emits.</summary>
	public Vector4 Ambient { get; }
	/// <summary>Gets the world-space position.</summary>
	public Vector3 Position { get; }
	/// <summary>Gets the world-space direction the light points.</summary>
	public Vector3 Direction { get; }
	/// <summary>Gets the distance beyond which the light has no effect.</summary>
	public float Range { get; }
	/// <summary>Gets the spotlight falloff.</summary>
	public float Falloff { get; }
	/// <summary>Gets the constant attenuation.</summary>
	public float Attenuation0 { get; }
	/// <summary>Gets the linear attenuation.</summary>
	public float Attenuation1 { get; }
	/// <summary>Gets the quadratic attenuation.</summary>
	public float Attenuation2 { get; }
	/// <summary>Gets the fully lit spotlight cone angle in radians.</summary>
	public float Theta { get; }
	/// <summary>Gets the outer spotlight cone angle in radians.</summary>
	public float Phi { get; }

	/// <summary>
	/// Gets the light a device holds before the client assigns one: a disabled point light with no color.
	/// </summary>
	public static Light Default => new(LightType.Point, Vector4.Zero, Vector4.Zero, Vector4.Zero, Vector3.Zero, Vector3.Zero, 0, 0, 0, 0, 0, 0, 0);
}
