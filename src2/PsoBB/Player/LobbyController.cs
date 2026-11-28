using PsoBB.Game;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Rendering;

namespace PsoBB.Player;

/// <summary>
/// Drives the local player from the input manager and emits the movement subcommands the field player does.
/// </summary>
/// <remarks>
/// The movement threshold, walk and run speeds, heading interpolation and one-frame step come from <see cref="PlayerMovement"/>; the camera heading comes from <see cref="FieldCamera.Heading"/>. A transition into standing sends the stop record through <see cref="LobbyWorld.SendStop"/>; transitions into walking and running send their records. The ground query, the map collision service and the camera mode table stay with the host.
/// </remarks>
public sealed class LobbyController
{
	private readonly InputManager _input;
	private readonly InputManagerPlayerInput _adapter;
	private readonly PlayerCharacter _player;
	private readonly IGroundCollision _ground;
	private readonly LobbyWorld? _world;

	/// <summary>
	/// Creates a controller over the input manager, player, camera and ground query.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <param name="player">The local player to advance.</param>
	/// <param name="camera">The camera whose heading the movement is measured against.</param>
	/// <param name="ground">The ground query passed to the movement step.</param>
	/// <param name="world">The lobby world that carries the outgoing movement records, or null for an offline field.</param>
	/// <exception cref="ArgumentNullException">A required argument is null.</exception>
	public LobbyController(InputManager input, PlayerCharacter player, FieldCamera camera, IGroundCollision ground, LobbyWorld? world = null)
	{
		_input = input ?? throw new ArgumentNullException(nameof(input));
		_player = player ?? throw new ArgumentNullException(nameof(player));
		Camera = camera ?? throw new ArgumentNullException(nameof(camera));
		_ground = ground ?? throw new ArgumentNullException(nameof(ground));
		_world = world;
		_adapter = new InputManagerPlayerInput(input);
	}

	/// <summary>Gets the input layer the controller reads.</summary>
	public InputManager Input => _input;

	/// <summary>Gets the local player the controller advances.</summary>
	public PlayerCharacter Player => _player;

	/// <summary>Gets the camera whose heading is used for movement.</summary>
	public FieldCamera Camera { get; }

	/// <summary>Gets the lobby world that receives the movement records, or <see langword="null"/> for an offline field.</summary>
	public LobbyWorld? World => _world;

	/// <summary>Gets or sets a value indicating whether movement uses the walk speed.</summary>
	public bool Walk { get; set; }

	/// <summary>
	/// Reads one frame of movement, advances the player, emits a state-change record and follows the player with the camera.
	/// </summary>
	public void Update()
	{
		_adapter.CameraHeading = Camera.Heading;
		_adapter.Walk = Walk;
		PlayerMovementState previous = _player.MovementState;
		_player.Update(_adapter.ReadIntent(), _ground);
		if (previous != PlayerMovementState.Standing && _player.MovementState == PlayerMovementState.Standing)
			_world?.SendStop();
		else if (previous != _player.MovementState)
		{
			if (_player.MovementState == PlayerMovementState.Walking)
				_world?.SendWalk();
			else if (_player.MovementState == PlayerMovementState.Running)
				_world?.SendRun();
		}
		Camera.Follow(_player);
	}
}
