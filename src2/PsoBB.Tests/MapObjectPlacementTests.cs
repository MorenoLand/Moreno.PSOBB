using PsoBB.Mathematics;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks object placement fields and the partial-record tail.
/// </summary>
public sealed class MapObjectPlacementTests
{
	/// <summary>
	/// Both records expose their type, section, transform and parameters.
	/// </summary>
	[Fact]
	public void ParsesObjectsAndParameters()
	{
		MapObjectPlacementFile file = MapObjectPlacementFile.Parse(SceneSamples.Objects());
		Assert.Equal(2, file.Objects.Count);
		MapObjectPlacement first = file.Objects[0];
		Assert.Equal(0x1234, first.ObjectId);
		Assert.Equal(2, first.Flags);
		Assert.Equal(0x1111, first.EntityIndex);
		Assert.Equal(8, first.EntityVariant);
		Assert.Equal(0x2222, first.AlternateEntityIndex);
		Assert.Equal(5, first.Section);
		Assert.Equal(new Vector3(-1.5f, 2.5f, 3.5f), first.Position);
		Assert.Equal(10, first.RotationX);
		Assert.Equal(20, first.RotationY);
		Assert.Equal(30, first.RotationZ);
		Assert.Equal(1, first.Parameter1);
		Assert.Equal(6, first.Parameter6);
		Assert.Equal(0x5678, file.Objects[1].ObjectId);
		Assert.Equal(new Vector3(10, 20, 30), file.Objects[1].Position);
	}

	/// <summary>
	/// The original divides the length by the record size, so a partial record is trailing data.
	/// </summary>
	[Fact]
	public void PreservesAPartialRecord()
	{
		byte[] data = [.. SceneSamples.Objects(), 0x7F];
		MapObjectPlacementFile file = MapObjectPlacementFile.Parse(data);
		Assert.Equal(2, file.Objects.Count);
		Assert.Equal([0x7F], file.TrailingBytes.ToArray());
	}

	/// <summary>
	/// A file shorter than one record has no objects and keeps every byte.
	/// </summary>
	[Fact]
	public void KeepsAFileShorterThanOneRecord()
	{
		byte[] data = [1, 2, 3];
		MapObjectPlacementFile file = MapObjectPlacementFile.Parse(data);
		Assert.Empty(file.Objects);
		Assert.Equal(data, file.TrailingBytes.ToArray());
	}
}
