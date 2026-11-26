using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One map light entry: two direction vectors, three intensities and the diffuse and ambient colours.
/// </summary>
/// <param name="Direction1">The primary light direction.</param>
/// <param name="Direction2">The secondary light direction.</param>
/// <param name="SpecularIntensity">The specular intensity.</param>
/// <param name="DiffuseIntensity">The diffuse intensity.</param>
/// <param name="AmbientIntensity">The ambient intensity.</param>
/// <param name="DiffuseColor">The diffuse colour components.</param>
/// <param name="AmbientColor">The ambient colour components.</param>
public readonly record struct MapLightEntry(
	Vector3 Direction1,
	Vector3 Direction2,
	float SpecularIntensity,
	float DiffuseIntensity,
	float AmbientIntensity,
	Vector3 DiffuseColor,
	Vector3 AmbientColor);
