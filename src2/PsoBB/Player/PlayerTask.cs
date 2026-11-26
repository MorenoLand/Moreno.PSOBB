using PsoBB.Game;
using PsoBB.Game.Tasks;

namespace PsoBB.Player;

/// <summary>
/// Runs the local player's movement and animation once per task update.
/// </summary>
public sealed class PlayerTask : GameTask
{
	private readonly PlayerCharacter _character;
	private readonly IPlayerInput _input;
	private readonly IGroundCollision _ground;

	/// <summary>
	/// Creates a task over a player, its input source and the ground query.
	/// </summary>
	/// <param name="character">The player to advance.</param>
	/// <param name="input">The movement input source.</param>
	/// <param name="ground">The ground query.</param>
	/// <param name="name">The diagnostic task name.</param>
	/// <exception cref="ArgumentNullException">An argument is null.</exception>
	public PlayerTask(PlayerCharacter character, IPlayerInput input, IGroundCollision ground, string? name = "player")
		: base(name)
	{
		_character = character ?? throw new ArgumentNullException(nameof(character));
		_input = input ?? throw new ArgumentNullException(nameof(input));
		_ground = ground ?? throw new ArgumentNullException(nameof(ground));
	}

	/// <summary>Gets the player this task advances.</summary>
	public PlayerCharacter Character => _character;

	/// <summary>
	/// Advances the player once.
	/// </summary>
	public override void RunTask() => _character.Update(_input.ReadIntent(), _ground);
}
