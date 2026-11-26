namespace PsoBB.Quests;

/// <summary>
/// The documented spawn-data chunk types in a quest <c>.dat</c> file.
/// </summary>
public enum QuestChunkType : uint
{
	/// <summary>End of the chunk stream.</summary>
	End = 0,

	/// <summary>Map objects, stored as 0x44-byte records.</summary>
	Objects = 1,

	/// <summary>Enemies, stored as 0x48-byte records.</summary>
	Enemies = 2,

	/// <summary>Events, stored as variable-length data.</summary>
	Events = 3,
}
