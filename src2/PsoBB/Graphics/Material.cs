using System.Numerics;

namespace PsoBB.Graphics;

/// <summary>
/// The fixed-function surface material: how much ambient, diffuse, specular and emitted light it reflects.
/// </summary>
public readonly record struct Material
{
	/// <summary>
	/// Creates a material.
	/// </summary>
	/// <param name="diffuse">The diffuse reflectance.</param>
	/// <param name="ambient">The ambient reflectance.</param>
	/// <param name="specular">The specular reflectance.</param>
	/// <param name="emissive">The emitted color.</param>
	/// <param name="power">The specular highlight sharpness.</param>
	public Material(Vector4 diffuse, Vector4 ambient, Vector4 specular, Vector4 emissive, float power)
	{
		Diffuse = diffuse;
		Ambient = ambient;
		Specular = specular;
		Emissive = emissive;
		Power = power;
	}

	/// <summary>Gets the diffuse reflectance.</summary>
	public Vector4 Diffuse { get; }
	/// <summary>Gets the ambient reflectance.</summary>
	public Vector4 Ambient { get; }
	/// <summary>Gets the specular reflectance.</summary>
	public Vector4 Specular { get; }
	/// <summary>Gets the emitted color.</summary>
	public Vector4 Emissive { get; }
	/// <summary>Gets the specular highlight sharpness.</summary>
	public float Power { get; }

	/// <summary>
	/// Gets the device's initial material, which reflects nothing.
	/// </summary>
	public static Material Default => new(Vector4.Zero, Vector4.Zero, Vector4.Zero, Vector4.Zero, 0);
}
