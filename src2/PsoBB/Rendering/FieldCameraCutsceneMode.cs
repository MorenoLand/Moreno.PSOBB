using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Keyframed Ninja cutscene camera mode (mode five) with optional up-vector roll support.
/// </summary>
public sealed class FieldCameraCutsceneMode : FieldCameraMode
{
	/// <summary>
	/// Initializes cutscene camera mode five and zeroes its origin, roll, and playback frame state.
	/// </summary>
	[Original(0x004D66D0)]
	public FieldCameraCutsceneMode()
	{
		Flags = 0;
		FieldCameraController.CutsceneOverrideFieldOfView = 0;
		FieldCameraController.StoredMode5FieldOfView = 0;
		IsPlaybackActive = false;
		IsRollEnabled = false;
		CutsceneFlags = 0;
		CurrentFrame = 0.0f;
		FrameStep = 0.0f;
		CameraOrigin = default;
		MotionOrigin = default;
		MotionYawAngle = 0;
		RollAngle = 0;
	}

	/// <summary>Gets or sets the base origin offset added when transforming world-relative cutscene motion.</summary>
	public Vector3 CameraOrigin { get; set; }

	/// <summary>Gets or sets an auxiliary float paired with the camera origin.</summary>
	public float OriginScale { get; set; }

	/// <summary>Gets or sets the secondary motion origin vector.</summary>
	public Vector3 MotionOrigin { get; set; }

	/// <summary>Gets or sets an auxiliary float paired with the secondary motion origin.</summary>
	public float MotionScale { get; set; }

	/// <summary>Gets or sets the world-space yaw rotation applied to non-object-relative cutscene camera paths.</summary>
	public int MotionYawAngle { get; set; }

	/// <summary>Gets or sets the keyframed camera roll angle around the view axis in 16-bit turn units.</summary>
	public int RollAngle { get; set; }

	/// <summary>Gets or sets the active cutscene frame number.</summary>
	public float CurrentFrame { get; set; }

	/// <summary>Gets or sets the frame advance increment per update.</summary>
	public float FrameStep { get; set; }

	/// <summary>Gets or sets whether keyframed cutscene playback is active.</summary>
	public bool IsPlaybackActive { get; set; }

	/// <summary>Gets or sets whether roll output is enabled.</summary>
	public bool IsRollEnabled { get; set; }

	/// <summary>Gets or sets cutscene completion flags (bit 0 indicates end of non-looping clip).</summary>
	public ushort CutsceneFlags { get; set; }

	/// <summary>
	/// Advances the keyframed cutscene camera using an explicit sampled keyframe callback or default pose.
	/// </summary>
	[Original(0x004D68A0)]
	public override void OnUpdate() =>
		UpdateFromSample(Eye, Vector3.Subtract(Target, Eye), RollAngle, FieldOfView, clipFlags: 0, frameCount: 1);

	/// <summary>
	/// Evaluates a sampled keyframe pose <paramref name="position"/> and <paramref name="direction"/>, updating eye, target, roll, and playback clock.
	/// </summary>
	/// <param name="position">Sampled keyframe eye position or offset.</param>
	/// <param name="direction">Sampled keyframe forward or relative direction vector.</param>
	/// <param name="roll">Sampled keyframe roll angle in 16-bit turn units.</param>
	/// <param name="fieldOfView">Sampled field-of-view angle in 16-bit turn units.</param>
	/// <param name="clipFlags">Motion header flag bits (bit 2 normalized world target vs rotated origin, bit 5 loop, bit 7 point-at mode).</param>
	/// <param name="frameCount">Total keyframe count in the active clip.</param>
	public void UpdateFromSample(
		Vector3 position,
		Vector3 direction,
		int roll,
		int fieldOfView,
		uint clipFlags,
		int frameCount)
	{
		FieldOfView = FieldCameraController.CutsceneOverrideFieldOfView == -1
			? fieldOfView
			: FieldCameraController.CutsceneOverrideFieldOfView;
		RollAngle = roll;
		if ((clipFlags & 4u) != 0)
		{
			if ((clipFlags & 0x80u) != 0)
			{
				FieldOfView = 14017;
				Vector3 flat = new(direction.X, 0.0f, direction.Z);
				if (flat.LengthSquared() != 0.0f)
					Vector3.Normalize(ref flat);
				Eye = new Vector3(
					(float)((double)position.X - flat.X * 40.0),
					position.Y,
					(float)((double)position.Z - flat.Z * 40.0));
				Target = new Vector3(
					(float)((double)direction.X + position.X),
					(float)((double)direction.Y + position.Y),
					(float)((double)position.Z + direction.Z));
			}
			else
			{
				Target = new Vector3(
					(float)((double)direction.X + position.X),
					(float)((double)direction.Y + position.Y),
					(float)((double)direction.Z + position.Z));
				Eye = position;
			}
		}
		else
		{
			Vector3 pos = position;
			Vector3 dir = direction;
			if (dir.LengthSquared() != 0.0f)
				Vector3.Normalize(ref dir);
			Matrix4x4 rotation = Matrix4x4.Identity.RotateY(MotionYawAngle);
			Vector3 posRot = rotation.TransformDirection(pos);
			Vector3 dirRot = rotation.TransformDirection(dir);
			Vector3 eye = new(
				(float)((double)posRot.X + CameraOrigin.X),
				(float)((double)posRot.Y + CameraOrigin.Y),
				(float)((double)posRot.Z + CameraOrigin.Z));
			Eye = eye;
			Target = new Vector3(
				(float)((double)dirRot.X + eye.X),
				(float)((double)eye.Y + dirRot.Y),
				(float)((double)dirRot.Z + eye.Z));
		}

		float nextFrame = (float)((double)CurrentFrame + FrameStep);
		CurrentFrame = nextFrame;
		double endFrame = frameCount - 1;
		if (endFrame < nextFrame || nextFrame >= 5000.0f)
		{
			if ((clipFlags & 0x20u) != 0)
				CurrentFrame = 0.0f;
			else
			{
				CurrentFrame = (float)endFrame;
				CutsceneFlags |= 1;
			}
		}
	}

	/// <summary>
	/// Updates controller angles from mode eye/target, rotates the camera up axis by <see cref="RollAngle"/> when nonzero, and applies the view transform.
	/// </summary>
	[Original(0x004D6BC0)]
	public override void OnPostUpdate()
	{
		if (FieldCameraController.Current is not FieldCameraController controller)
			return;
		Vector3 direction = new(
			(float)((double)Target.X - Eye.X),
			(float)((double)Target.Y - Eye.Y),
			(float)((double)Target.Z - Eye.Z));
		Vector3 up = new(0.0f, 1.0f, 0.0f);
		FieldCameraController.ComputeAnglesFromDirection(direction, out int pitch, out int yaw);
		controller.PitchAngle = pitch;
		controller.YawAngle = yaw;
		if (RollAngle != 0)
		{
			float horizontalSq = (float)((double)direction.X * direction.X + (double)direction.Z * direction.Z);
			_ = FloatingPointMath.SquareRoot(horizontalSq);
			const double TwoPi = 6.283184051513672;
			int rollYaw = FloatingPointMath.TruncateToInt32(Math.Atan2((double)direction.X, (double)direction.Z) * 65536.0 / TwoPi);
			up = Matrix4x4.Identity.RotateY(rollYaw).RotateZ(RollAngle).TransformDirection(up);
		}
		CameraView.ApplyLookAt(controller.Eye, controller.Target, up);
		FieldCameraController.GlobalEye = controller.Eye;
	}
}
