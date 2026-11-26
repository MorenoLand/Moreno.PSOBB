namespace PsoBB.Models;

/// <summary>
/// The render state accumulated up to and including one NJCM index buffer.
/// </summary>
public sealed class NinjaMaterial
{
	internal NinjaMaterial(
		int textureIndex,
		uint blendSource,
		uint blendDestination,
		uint addressU,
		uint addressV,
		uint ambientColor,
		uint diffuseColor,
		bool lighting,
		bool cameraSpaceNormals,
		uint ambientSource,
		uint diffuseSource,
		NinjaRenderStateArgument[] arguments)
	{
		TextureIndex = textureIndex;
		BlendSource = blendSource;
		BlendDestination = blendDestination;
		AddressU = addressU;
		AddressV = addressV;
		AmbientColor = ambientColor;
		DiffuseColor = diffuseColor;
		Lighting = lighting;
		CameraSpaceNormals = cameraSpaceNormals;
		AmbientSource = ambientSource;
		DiffuseSource = diffuseSource;
		Arguments = arguments;
	}

	/// <summary>Gets the selected texture-list index, or -1.</summary>
	public int TextureIndex { get; }

	/// <summary>Gets the source blend factor.</summary>
	public uint BlendSource { get; }

	/// <summary>Gets the destination blend factor.</summary>
	public uint BlendDestination { get; }

	/// <summary>Gets the horizontal texture address mode.</summary>
	public uint AddressU { get; }

	/// <summary>Gets the vertical texture address mode.</summary>
	public uint AddressV { get; }

	/// <summary>Gets the packed ambient color.</summary>
	public uint AmbientColor { get; }

	/// <summary>Gets the packed diffuse color.</summary>
	public uint DiffuseColor { get; }

	/// <summary>Gets a value indicating whether fixed-function lighting is enabled.</summary>
	public bool Lighting { get; }

	/// <summary>Gets a value indicating whether normals are transformed into camera space.</summary>
	public bool CameraSpaceNormals { get; }

	/// <summary>Gets the ambient material source.</summary>
	public uint AmbientSource { get; }

	/// <summary>Gets the diffuse material source.</summary>
	public uint DiffuseSource { get; }

	/// <summary>Gets the commands that produced this state.</summary>
	public IReadOnlyList<NinjaRenderStateArgument> Arguments { get; }
}
