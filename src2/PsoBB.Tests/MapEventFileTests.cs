using System.Buffers.Binary;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the event header, wave events and clear-event tail.
/// </summary>
public sealed class MapEventFileTests
{
	/// <summary>
	/// The header and one event are decoded while the clear-event bytes stay intact.
	/// </summary>
	[Fact]
	public void ParsesEventsAndPreservesClearEvents()
	{
		MapEventFile file = MapEventFile.Parse(SceneSamples.Events());
		Assert.Equal(0u, file.Marker);
		MapEvent mapEvent = Assert.Single(file.Events);
		Assert.Equal(0x44Eu, mapEvent.EventId);
		Assert.Equal(0x1A00, mapEvent.Flags);
		Assert.Equal(3, mapEvent.Section);
		Assert.Equal(2, mapEvent.WaveNumber);
		Assert.Equal(30u, mapEvent.Delay);
		Assert.Equal(0u, mapEvent.ClearEventsIndex);
		Assert.Equal([0xAA, 0xBB, 0xCC, 0xDD], file.ClearEvents.ToArray());
		Assert.True(file.TrailingBytes.IsEmpty);
	}

	/// <summary>
	/// Bytes beyond the declared table size are kept separately.
	/// </summary>
	[Fact]
	public void PreservesBytesBeyondTheDeclaredSize()
	{
		byte[] data = [.. SceneSamples.Events(), 0x55, 0x66];
		MapEventFile file = MapEventFile.Parse(data);
		Assert.Equal([0x55, 0x66], file.TrailingBytes.ToArray());
	}

	/// <summary>
	/// An event count larger than the declared byte size is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnEventCountBeyondTheTable()
	{
		byte[] data = SceneSamples.Events();
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(8), 0x100);
		Assert.Throws<SceneFormatException>(() => MapEventFile.Parse(data));
	}

	/// <summary>
	/// A declared table size past the file is rejected.
	/// </summary>
	[Fact]
	public void RejectsATableSizePastTheFile()
	{
		byte[] data = SceneSamples.Events();
		BinaryPrimitives.WriteUInt32LittleEndian(data, 0x1000);
		Assert.Throws<SceneFormatException>(() => MapEventFile.Parse(data));
	}
}
