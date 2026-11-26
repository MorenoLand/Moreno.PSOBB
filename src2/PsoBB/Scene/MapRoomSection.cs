namespace PsoBB.Scene;

/// <summary>
/// One room section and the section identifiers visible from it.
/// </summary>
public sealed class MapRoomSection
{
	private readonly ushort[] _visibleSections;

	internal MapRoomSection(uint sectionId, ushort[] visibleSections)
	{
		SectionId = sectionId;
		_visibleSections = visibleSections;
	}

	/// <summary>Gets the section identifier.</summary>
	public uint SectionId { get; }

	/// <summary>Gets the sections visible from this room, including itself where the file lists it.</summary>
	public IReadOnlyList<ushort> VisibleSections => _visibleSections;
}
