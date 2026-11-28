using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// A recorded cutscene camera waypoint storing occupancy along with eye and target positions.
/// </summary>
/// <param name="IsOccupied">Whether this waypoint slot holds a recorded pose.</param>
/// <param name="Eye">The recorded camera eye position.</param>
/// <param name="Target">The recorded camera look-at target position.</param>
public readonly record struct FieldCameraWaypoint(bool IsOccupied, Vector3 Eye, Vector3 Target);

/// <summary>
/// Manages the 128-slot camera path recording buffer used to capture and preview cutscene camera poses.
/// </summary>
public sealed class FieldCameraPathRecorder
{
	/// <summary>
	/// Total number of waypoint slots in the client's camera path buffer.
	/// </summary>
	public const int MaxWaypoints = 128;

	/// <summary>
	/// Gets the shared 128-slot recorded camera waypoint table at <c>0x00A48A74</c>.
	/// </summary>
	[OriginalGlobal(0x00A48A74)]
	public static FieldCameraWaypoint[] Waypoints { get; } = new FieldCameraWaypoint[MaxWaypoints];

	/// <summary>
	/// Gets or sets the active cursor index within <see cref="Waypoints"/>.
	/// </summary>
	public int Cursor { get; set; }

	/// <summary>
	/// Gets or sets the total number of valid recorded waypoints.
	/// </summary>
	public int Count { get; set; }

	/// <summary>
	/// Clears every waypoint slot in <see cref="Waypoints"/> for test isolation.
	/// </summary>
	public static void ResetGlobals() => Array.Clear(Waypoints);

	/// <summary>
	/// Captures the active camera controller's current eye and target at <see cref="Cursor"/> when below <see cref="MaxWaypoints"/>.
	/// </summary>
	[Original(0x004D5248)]
	public void RecordKeyframe()
	{
		if (Cursor >= MaxWaypoints || FieldCameraController.Current is not FieldCameraController controller)
			return;
		Waypoints[Cursor] = new FieldCameraWaypoint(true, controller.Eye, controller.Target);
	}

	/// <summary>
	/// Aligns orbit camera mode six to view the waypoint at <see cref="Cursor"/> when within <c>[0, Count - 1]</c>.
	/// </summary>
	[Original(0x004D5150)]
	public void PreviewRecordedKeyframe()
	{
		if (Cursor < 0 || Cursor > Count - 1)
			return;
		FieldCameraWaypoint waypoint = Waypoints[Cursor];
		FieldCameraOrbitMode.AlignToView(waypoint.Eye, waypoint.Target);
	}
}
