using PsoBB.Game.Tasks;
using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Per-frame task that smoothly pans the cutscene camera target from the current target toward a ray along a destination eye.
/// </summary>
public sealed class FieldCameraLinearPanTask : GameTask
{
	/// <summary>
	/// Initializes a linear cutscene camera pan task from the active controller pose and <paramref name="destinationEye"/>.
	/// </summary>
	/// <param name="destinationEye">Desired destination eye position defining the pan direction.</param>
	/// <param name="moveFrames">Number of movement frames (zero clamps to one).</param>
	/// <param name="holdFrames">Additional hold frames after reaching the pan destination.</param>
	/// <param name="parent">Optional parent task node.</param>
	[Original(0x004D5B98)]
	public FieldCameraLinearPanTask(
		Vector3 destinationEye,
		ushort moveFrames,
		ushort holdFrames,
		GameTask? parent = null)
	{
		if (parent is not null)
			SetParent(parent);

		FieldCameraController? controller = FieldCameraController.Current;
		Vector3 eye = controller?.Eye ?? default;
		Vector3 target = controller?.Target ?? default;

		float eyeToTargetDistance = (float)Vector3.Distance(eye, target);
		StartTarget = destinationEye;
		EndTarget = target;
		MoveFrames = moveFrames == 0 ? (ushort)1 : moveFrames;
		HoldFrames = holdFrames;

		Vector3 direction = new(
			destinationEye.X - eye.X,
			destinationEye.Y - eye.Y,
			destinationEye.Z - eye.Z);
		if (direction.Length() != 0.0f)
			Vector3.Normalize(ref direction);

		Vector3 projected = new(
			(float)((double)direction.X * eyeToTargetDistance + eye.X),
			(float)((double)direction.Y * eyeToTargetDistance + eye.Y),
			(float)((double)direction.Z * eyeToTargetDistance + eye.Z));
		StartTarget = projected;

		double panDistance = Vector3.Distance(projected, target);
		StepSpeed = (float)(panDistance / (double)MoveFrames);
		ElapsedFrames = 0;

		FieldCameraFollowMode.SetCutsceneFixedView(eye, target);
	}

	/// <summary>Gets or sets the step distance moved per update toward <see cref="StartTarget"/>.</summary>
	public float StepSpeed { get; set; }

	/// <summary>Gets or sets the elapsed update frame count.</summary>
	public ushort ElapsedFrames { get; set; }

	/// <summary>Gets or sets the movement duration in frames.</summary>
	public ushort MoveFrames { get; set; }

	/// <summary>Gets or sets the hold duration in frames after movement completes.</summary>
	public ushort HoldFrames { get; set; }

	/// <summary>Gets or sets the target position computed along the pan ray.</summary>
	public Vector3 StartTarget { get; set; }

	/// <summary>Gets or sets the active interpolated look-at target position.</summary>
	public Vector3 EndTarget { get; set; }

	/// <summary>
	/// Allocates and attaches a new linear camera pan task to <paramref name="parent"/>.
	/// </summary>
	/// <param name="destinationEye">Desired destination eye position defining the pan direction.</param>
	/// <param name="moveFrames">Number of movement frames (zero clamps to one).</param>
	/// <param name="holdFrames">Additional hold frames after reaching the pan destination.</param>
	/// <param name="parent">Optional parent task node.</param>
	/// <returns>The created <see cref="FieldCameraLinearPanTask"/> instance.</returns>
	[Original(0x004D5B20)]
	public static FieldCameraLinearPanTask Create(
		Vector3 destinationEye,
		ushort moveFrames,
		ushort holdFrames,
		GameTask? parent = null) =>
		new(destinationEye, moveFrames, holdFrames, parent);

	/// <inheritdoc />
	[Original(0x004D5AAC)]
	public override void RunTask()
	{
		Vector3 nextTarget = Vector3.MoveTowards(EndTarget, StartTarget, StepSpeed, out _);
		EndTarget = nextTarget;
		if (FieldCameraController.CutsceneViewFlags == 1 && FieldCameraController.Current is FieldCameraController controller)
			FieldCameraFollowMode.SetCutsceneFixedView(controller.Eye, nextTarget);

		ElapsedFrames = unchecked((ushort)(ElapsedFrames + 1));
		if (ElapsedFrames == unchecked((ushort)(MoveFrames + HoldFrames)) || FieldCameraController.CutsceneViewFlags == 0)
			QueueDestruction();
	}
}
