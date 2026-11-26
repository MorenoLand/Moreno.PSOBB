namespace PsoBB.Scenes;

/// <summary>
/// The character-making preview container: four player slots and thirteen screen constructors.
/// </summary>
/// <remarks>
/// The original allocates a 468-byte container at <c>0x4D3408</c>, creates every screen from the
/// table at <c>0x9ACB70</c>, and activates one screen through <c>0x4D30FC</c>. Screens zero through
/// three are the four player preview slots; the remaining screens are the creation categories.
/// </remarks>
public sealed class CharacterPreview
{
	/// <summary>The number of screen constructors in the original table.</summary>
	public const int ScreenCount = 13;

	/// <summary>The number of player preview slots.</summary>
	public const int PlayerCount = 4;

	/// <summary>The screen the scene activates on entry.</summary>
	public const int InitialScreen = 8;

	/// <summary>The original screen-constructor table at <c>0x9ACB70</c>.</summary>
	[OriginalGlobal(0x009ACB70)]
	public static IReadOnlyList<uint> ScreenConstructors { get; } = Array.AsReadOnly<uint>(
	[
		0x004D7E70, 0x004D7E70, 0x004D7E70, 0x004D7E70,
		0x004D62BC, 0x004D665C, 0x004D71C4, 0x004D1D48,
		0x004EB2C0, 0x004D5A14, 0x004D6E88, 0x004D16B0, 0x004D1A3C,
	]);

	private readonly Screen[] _screens;
	private readonly Player[] _players;
	private int _selectedScreen = -1;

	/// <summary>
	/// Creates the thirteen screens and four player preview slots.
	/// </summary>
	[Original(0x004D3408, "CharacterMakingPreview_004d3408")]
	public CharacterPreview()
	{
		_screens = new Screen[ScreenCount];
		for (int index = 0; index < _screens.Length; index++)
			_screens[index] = new Screen(index, ScreenConstructors[index]);
		_players = new Player[PlayerCount];
		for (int index = 0; index < _players.Length; index++)
			_players[index] = new Player(index);
	}

	/// <summary>Gets the thirteen screens in constructor order.</summary>
	public IReadOnlyList<Screen> Screens => _screens;

	/// <summary>Gets the four player preview slots.</summary>
	public IReadOnlyList<Player> Players => _players;

	/// <summary>Gets the active screen index, or minus one before a selection.</summary>
	public int SelectedScreen => _selectedScreen;

	/// <summary>
	/// Activates one screen by index.
	/// </summary>
	/// <param name="index">The screen index from zero through twelve.</param>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the table.</exception>
	[Original(0x004D30FC, "CharacterMakingPreview_SelectScreen_004d30fc")]
	public void SelectScreen(int index)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(index);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, ScreenCount);
		_selectedScreen = index;
	}

	/// <summary>One screen constructor and its index.</summary>
	/// <param name="Index">The screen index.</param>
	/// <param name="ConstructorAddress">The original constructor address.</param>
	public sealed record Screen(int Index, uint ConstructorAddress)
	{
		/// <summary>Gets a value indicating whether this screen is a player preview slot.</summary>
		public bool IsPlayerSlot => Index < PlayerCount;
	}

	/// <summary>One player preview slot.</summary>
	/// <param name="Index">The zero-based slot index.</param>
	public sealed record Player(int Index);
}
