using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Rendering;

/// <summary>
/// Tracks the field camera mode index and builds the view and projection the original camera manager passes to the renderer.
/// </summary>
/// <remarks>
/// The original manager creates thirteen camera mode objects and keeps the active index at <c>0x00A489F4</c>. The mode table at <c>0x009ACB70</c>, its per-mode offsets at <c>0x009ACE60</c> and the collision sweep behind <c>0x0077FFFC</c> are not lifted, so the host supplies <see cref="Settings"/> and the camera stops at that boundary: no offset, smoothing or collision is invented. Without settings the camera keeps its host-set position and follows the player only as a look target.
/// </remarks>
public sealed class FieldCamera
{
	/// <summary>The number of camera mode objects the original manager constructs.</summary>
	public const int ModeCount = 13;

	/// <summary>The mode index the manager initialises.</summary>
	public const byte DefaultMode = 0;

	/// <summary>The mode index that keeps the previous mode unchanged.</summary>
	public const byte ModeFive = 5;

	/// <summary>The second mode index that keeps the previous mode unchanged.</summary>
	public const byte ModeNine = 9;

	private Vector3 _position;
	private Vector3 _target;

	/// <summary>
	/// Creates a camera at the supplied eye and look-at points with the original field-of-view and clip distances.
	/// </summary>
	/// <param name="position">The eye point.</param>
	/// <param name="target">The absolute look-at point.</param>
	public FieldCamera(Vector3 position, Vector3 target)
	{
		_position = position;
		_target = target;
	}

	/// <summary>Gets the active mode index, from zero through twelve.</summary>
	public byte Mode { get; private set; } = DefaultMode;

	/// <summary>Gets the mode index stored before the last switch, or <see langword="null"/> before one.</summary>
	public byte? PreviousMode { get; private set; }

	/// <summary>Gets or sets the host-supplied mode record; the lifted mode table is not ported.</summary>
	public FieldCameraModeSettings? Settings { get; set; }

	/// <summary>Gets the camera heading in 16-bit turn units.</summary>
	public ushort Heading { get; private set; }

	/// <summary>Gets the eye point.</summary>
	public Vector3 Position => _position;

	/// <summary>Gets the absolute look-at point.</summary>
	public Vector3 Target => _target;

	/// <summary>Gets whether a host-supplied mode record gives the follow offsets.</summary>
	public bool HasModeSettings => Settings is not null;

	/// <summary>Gets whether the original collision sweep that trims the camera distance is available.</summary>
	public bool CollisionAvailable => false;

	/// <summary>Gets the camera the field submitter passes to the map and model renderers.</summary>
	public SceneCamera Camera => new(_position, _target, new Vector3(0, 1, 0), SceneCamera.DefaultFieldOfViewAngle, SceneCamera.DefaultFieldOfViewAspect, SceneCamera.DefaultNearPlane, SceneCamera.DefaultFarPlane);

	/// <summary>
	/// Selects a mode index as the camera manager does in its direct mode setter.
	/// </summary>
	/// <param name="mode">The mode index, from zero through twelve.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="mode"/> is outside the mode range.</exception>
	public void SelectMode(byte mode)
	{
		if (mode >= ModeCount)
			throw new ArgumentOutOfRangeException(nameof(mode), mode, "A camera mode index must be between zero and twelve.");
		Mode = mode;
	}

	/// <summary>
	/// Switches modes and keeps the outgoing index unless it is five or nine, as the camera manager's previous-mode field does.
	/// </summary>
	/// <param name="mode">The new mode index, from zero through twelve.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="mode"/> is outside the mode range.</exception>
	public void SwitchMode(byte mode)
	{
		if (mode >= ModeCount)
			throw new ArgumentOutOfRangeException(nameof(mode), mode, "A camera mode index must be between zero and twelve.");
		if (Mode != ModeFive && Mode != ModeNine)
			PreviousMode = Mode;
		Mode = mode;
	}

	/// <summary>Sets the camera heading in 16-bit turn units.</summary>
	/// <param name="heading">The heading the movement layer measures input against.</param>
	public void SetHeading(ushort heading) => Heading = heading;

	/// <summary>
	/// Applies the supplied mode offsets to the player position and stores the eye and look-at points.
	/// </summary>
	/// <param name="player">The local player the camera follows.</param>
	/// <exception cref="ArgumentNullException"><paramref name="player"/> is null.</exception>
	public void Follow(PlayerCharacter player)
	{
		ArgumentNullException.ThrowIfNull(player);
		if (Settings is not FieldCameraModeSettings settings)
		{
			_target = player.Position;
			return;
		}
		_position = Vector3.Add(player.Position, settings.EyeOffset);
		_target = Vector3.Add(player.Position, settings.LookOffset);
	}

	/// <summary>
	/// Moves the eye point without changing the follow target.
	/// </summary>
	/// <param name="position">The new eye point.</param>
	public void SetPosition(Vector3 position) => _position = position;

	/// <summary>
	/// Moves the look-at point without changing the eye point.
	/// </summary>
	/// <param name="target">The new look-at point.</param>
	public void SetTarget(Vector3 target) => _target = target;
}
