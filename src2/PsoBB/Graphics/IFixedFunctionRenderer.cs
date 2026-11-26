using System.Numerics;

namespace PsoBB.Graphics;

/// <summary>
/// The fixed-function lighting, material, texture-stage and vertex-blending operations a renderer may expose beyond <see cref="IRenderer"/>.
/// </summary>
public interface IFixedFunctionRenderer : IRenderer
{
	/// <summary>Sets one of the indexed model transforms used by vertex blending.</summary>
	/// <param name="index">The matrix index, from zero through 255.</param>
	/// <param name="transform">The row-major transform.</param>
	void SetWorldMatrix(int index, in Matrix4x4 transform);

	/// <summary>Sets the surface material used by fixed-function lighting.</summary>
	/// <param name="material">The material.</param>
	void SetMaterial(in Material material);

	/// <summary>Sets a fixed-function light.</summary>
	/// <param name="index">The light index, from zero through seven.</param>
	/// <param name="light">The light properties.</param>
	void SetLight(int index, in Light light);

	/// <summary>Enables or disables a fixed-function light.</summary>
	/// <param name="index">The light index, from zero through seven.</param>
	/// <param name="enabled">Whether the light illuminates geometry.</param>
	void SetLightEnabled(int index, bool enabled);

	/// <summary>Sets a texture-stage state by its original identifier.</summary>
	/// <param name="stage">The texture stage, starting at zero.</param>
	/// <param name="state">The texture-stage state identifier.</param>
	/// <param name="value">The state value.</param>
	void SetTextureStageState(int stage, uint state, uint value);
}
