namespace PsoBB.Scenes;

/// <summary>
/// One constructor in the character-making table at <c>0x9ACB70</c> and the fields its
/// constructor stores before any screen update runs.
/// </summary>
/// <param name="Index">The table index from zero through twelve.</param>
/// <param name="ConstructorAddress">The original constructor address.</param>
/// <param name="ObjectSize">The byte count passed to the original allocator.</param>
/// <param name="Scale">The float stored at object offset <c>0x6C</c>, or zero when the constructor leaves it at its base value.</param>
/// <param name="Group">The value stored at object offset <c>0x38</c>.</param>
/// <param name="IsPlayerSlot">Whether the entry is one of the four player preview constructors.</param>
public sealed record CharacterCreationScreen(
	int Index,
	uint ConstructorAddress,
	int ObjectSize,
	float Scale,
	int Group,
	bool IsPlayerSlot)
{
	/// <summary>The number of entries in the constructor table.</summary>
	public const int Count = 13;

	/// <summary>The number of player preview constructors.</summary>
	public const int PlayerCount = 4;

	/// <summary>The constructor used by the four player preview slots.</summary>
	public const uint PlayerConstructor = 0x004D7E70;

	/// <summary>The constructor of the screen the scene activates on entry.</summary>
	public const uint InitialConstructor = 0x004EB2C0;

	/// <summary>The screen index the scene activates on entry.</summary>
	public const int InitialIndex = 8;

	/// <summary>
	/// The table in constructor order. Sizes and field values come from the constructors at
	/// <c>0x4D62BC</c>, <c>0x4D665C</c>, <c>0x4D71C4</c>, <c>0x4D1D48</c>, <c>0x4EB2C0</c>,
	/// <c>0x4D5A14</c>, <c>0x4D6E88</c>, <c>0x4D16B0</c> and <c>0x4D1A3C</c>.
	/// </summary>
	[OriginalGlobal(0x009ACB70)]
	public static IReadOnlyList<CharacterCreationScreen> All { get; } = Array.AsReadOnly<CharacterCreationScreen>(
	[
		new(0, PlayerConstructor, 272, 0f, 5, true),
		new(1, PlayerConstructor, 272, 0f, 5, true),
		new(2, PlayerConstructor, 272, 0f, 5, true),
		new(3, PlayerConstructor, 272, 0f, 5, true),
		new(4, 0x004D62BC, 112, 10f, 0, false),
		new(5, 0x004D665C, 168, 0f, 0, false),
		new(6, 0x004D71C4, 112, 20f, 0, false),
		new(7, 0x004D1D48, 116, 0f, 0, false),
		new(8, InitialConstructor, 144, 30f, 0, false),
		new(9, 0x004D5A14, 108, 0f, 4, false),
		new(10, 0x004D6E88, 108, 0f, 4, false),
		new(11, 0x004D16B0, 108, 0f, 5, false),
		new(12, 0x004D1A3C, 304, 0f, 0x15, false),
	]);
}
