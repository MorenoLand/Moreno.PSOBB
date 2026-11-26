using PsoBB.Mathematics;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the light table entry layout and map-id lookup.
/// </summary>
public sealed class MapLightTableTests
{
	/// <summary>
	/// Direction, intensity and colour fields land at their documented offsets.
	/// </summary>
	[Fact]
	public void ParsesAnEntry()
	{
		MapLightTable table = MapLightTable.Parse(SceneSamples.Lights());
		Assert.Equal(1, table.Count);
		MapLightEntry entry = table.GetEntry(0);
		Assert.Equal(new Vector3(1, 0, 0), entry.Direction1);
		Assert.Equal(new Vector3(0, 1, 0), entry.Direction2);
		Assert.Equal(0.5f, entry.SpecularIntensity);
		Assert.Equal(0.75f, entry.DiffuseIntensity);
		Assert.Equal(0.25f, entry.AmbientIntensity);
		Assert.Equal(new Vector3(0.1f, 0.2f, 0.3f), entry.DiffuseColor);
		Assert.Equal(new Vector3(0.4f, 0.5f, 0.6f), entry.AmbientColor);
	}

	/// <summary>
	/// A partial final entry is rejected.
	/// </summary>
	[Fact]
	public void RejectsAPartialEntry()
	{
		byte[] data = [.. SceneSamples.Lights(), 0];
		Assert.Throws<SceneFormatException>(() => MapLightTable.Parse(data));
	}

	/// <summary>
	/// A map identifier with no entry is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnUnknownMapId()
	{
		MapLightTable table = MapLightTable.Parse(SceneSamples.Lights());
		Assert.Throws<ArgumentOutOfRangeException>(() => table.GetEntry(1));
	}
}
