using System.Buffers.Binary;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the big-endian room table and its shared visible-section indices.
/// </summary>
public sealed class MapRoomGraphTests
{
	/// <summary>
	/// Both records resolve their links through the shared index array.
	/// </summary>
	[Fact]
	public void ParsesSectionsAndVisibleLinks()
	{
		MapRoomGraph graph = MapRoomGraph.Parse(SceneSamples.RoomGraph());
		Assert.Equal(2, graph.Sections.Count);
		Assert.Equal(1u, graph.Sections[0].SectionId);
		Assert.Equal([1, 2], graph.Sections[0].VisibleSections);
		Assert.Equal(2u, graph.Sections[1].SectionId);
		Assert.Equal([1, 2], graph.Sections[1].VisibleSections);
	}

	/// <summary>
	/// The vr2b table stores the same record layout little-endian.
	/// </summary>
	[Fact]
	public void ParsesTheLittleEndianTable()
	{
		MapRoomGraph graph = MapRoomGraph.Parse(SceneSamples.LittleEndianRoomGraph());
		Assert.True(graph.IsLittleEndian);
		Assert.Equal(10u, graph.Sections[0].SectionId);
		Assert.Equal([10, 20], graph.Sections[0].VisibleSections);
		Assert.Equal(20u, graph.Sections[1].SectionId);
	}

	/// <summary>
	/// A different marker is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnUnknownMarker()
	{
		byte[] data = SceneSamples.RoomGraph();
		"vr3b"u8.CopyTo(data);
		Assert.Throws<SceneFormatException>(() => MapRoomGraph.Parse(data));
	}

	/// <summary>
	/// An index range outside the shared array is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnIndexRangeOutsideTheArray()
	{
		byte[] data = SceneSamples.RoomGraph();
		BinaryPrimitives.WriteUInt32BigEndian(data.AsSpan(16), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => MapRoomGraph.Parse(data));
	}

	/// <summary>
	/// An odd index-array byte length is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnOddIndexArray()
	{
		byte[] data = [.. SceneSamples.RoomGraph(), 0];
		Assert.Throws<SceneFormatException>(() => MapRoomGraph.Parse(data));
	}
}
