using System.Numerics;

namespace PsoBB.Scenes;

/// <summary>
/// The screen container shared by character making and the title screen: four player slots and
/// thirteen screen constructors.
/// </summary>
/// <remarks>
/// The original allocates a 468-byte container at <c>0x4D3408</c>, creates every screen from the
/// table at <c>0x9ACB70</c>, and activates one screen through <c>0x4D30FC</c>. Screens zero through
/// three are the four player preview slots; the remaining screens are the creation categories.
/// Scene 1 selects screen 9 through the same container.
/// </remarks>
public sealed class CharacterPreview
{
	/// <summary>The number of screen constructors in the original table.</summary>
	public const int ScreenCount = 13;

	/// <summary>The number of player preview slots.</summary>
	public const int PlayerCount = 4;

	/// <summary>The screen the character-making scene activates on entry.</summary>
	public const int InitialScreen = 8;

	/// <summary>The screen the title scene selects on entry.</summary>
	public const int TitleScreen = 9;

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
	private int _selectedScreen;
	private uint _status;
	private Vector3 _requestedPosition;
	private Vector3 _requestedDirection;
	private Vector3 _screenPosition;
	private Vector3 _screenDirection;

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

	/// <summary>Gets the selected screen index.</summary>
	public int SelectedScreen => _selectedScreen;

	/// <summary>Gets the shared screen status word that gates activation and transform writes.</summary>
	public uint Status => _status;

	/// <summary>Gets the last position passed to the transform writer, whether or not it was applied.</summary>
	public Vector3 RequestedPosition => _requestedPosition;

	/// <summary>Gets the last direction passed to the transform writer, whether or not it was applied.</summary>
	public Vector3 RequestedDirection => _requestedDirection;

	/// <summary>Gets the applied screen position, or zero before an activation opens the transform gate.</summary>
	public Vector3 ScreenPosition => _screenPosition;

	/// <summary>Gets the applied screen direction, or zero before an activation opens the transform gate.</summary>
	public Vector3 ScreenDirection => _screenDirection;

	/// <summary>
	/// Selects one screen by index and marks the container selected.
	/// </summary>
	/// <param name="index">The screen index from zero through twelve.</param>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the table.</exception>
	[Original(0x004D30FC, "CharacterMakingPreview_SelectScreen_004d30fc")]
	public void SelectScreen(int index)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(index);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, ScreenCount);
		_selectedScreen = index;
		_status |= 0x800;
	}

	/// <summary>
	/// Selects one screen when the activation bit is clear, then sets that bit. A second call does
	/// nothing until the container state is reset.
	/// </summary>
	/// <param name="index">The screen index from zero through twelve.</param>
	/// <returns><see langword="true"/> when this call activated the screen.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the table.</exception>
	[Original(0x004D31F4, "CharacterMakingPreview_ActivateScreen_004d31f4")]
	public bool ActivateScreen(int index)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(index);
		ArgumentOutOfRangeException.ThrowIfGreaterThanOrEqual(index, ScreenCount);
		if ((_status & 4) != 0)
			return false;
		_status |= 4;
		_selectedScreen = index;
		return true;
	}

	/// <summary>
	/// Records a requested position and direction and applies them when the transform gate is open.
	/// </summary>
	/// <param name="position">The requested screen position.</param>
	/// <param name="direction">The requested screen direction.</param>
	[Original(0x004D33C0, "CharacterMakingPreview_SetTransform_004d33c0")]
	public void SetScreenTransform(Vector3 position, Vector3 direction)
	{
		_requestedPosition = position;
		_requestedDirection = direction;
		if ((_status & 0xC) == 0)
			return;
		_screenPosition = position;
		_screenDirection = direction;
	}

	/// <summary>
	/// Restores the selection and transform state the resource group initialiser clears.
	/// </summary>
	/// <remarks>This is the selection and status portion of the reset at <c>0x4D471C</c>.</remarks>
	public void ResetState()
	{
		_selectedScreen = 0;
		_status = 0;
		_requestedPosition = Vector3.Zero;
		_requestedDirection = Vector3.Zero;
		_screenPosition = Vector3.Zero;
		_screenDirection = Vector3.Zero;
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
