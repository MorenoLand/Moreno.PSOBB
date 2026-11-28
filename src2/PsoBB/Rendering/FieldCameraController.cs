using PsoBB.Game;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Scenes;

namespace PsoBB.Rendering;

/// <summary>
/// The field camera controller the original keeps in a single global: the eye and target the camera currently looks from and at,
/// the pair the active camera mode asks for, and the eye recorded when the camera snaps to the request.
/// </summary>
public sealed class FieldCameraController
{
	/// <summary>
	/// The number of per-viewport eye and target slots kept inside the controller.
	/// </summary>
	public const int SlotCount = 4;

	/// <summary>
	/// Gets or sets the active global field camera controller instance.
	/// </summary>
	[OriginalGlobal(0x00A48A54)]
	public static FieldCameraController? Current { get; set; }

	/// <summary>
	/// Gets or sets the global camera controller state flags.
	/// </summary>
	[OriginalGlobal(0x00A489FC)]
	public static uint Flags { get; set; }

	/// <summary>
	/// Gets or sets whether the next follow step should snap directly to the desired eye and target.
	/// </summary>
	[OriginalGlobal(0x00A48A44)]
	public static uint SnapRequested { get; set; }

	/// <summary>
	/// Gets or sets the horizontal right basis vector derived from the camera yaw angle.
	/// </summary>
	[OriginalGlobal(0x00A489E8)]
	public static Vector3 RightAxis { get; set; }

	/// <summary>
	/// Gets or sets the vertical up basis vector derived from the camera pitch angle.
	/// </summary>
	[OriginalGlobal(0x00A489DC)]
	public static Vector3 UpAxis { get; set; }

	/// <summary>
	/// Gets or sets the active camera mode index.
	/// </summary>
	[OriginalGlobal(0x00A489F4)]
	public static byte ActiveModeIndex { get; set; }

	/// <summary>
	/// Gets or sets the previous camera mode index before a temporary switch.
	/// </summary>
	[OriginalGlobal(0x00A489F5)]
	public static byte PreviousModeIndex { get; set; }

	/// <summary>
	/// Gets the thirteen camera mode instances indexed by mode number.
	/// </summary>
	[OriginalGlobal(0x00A48A00)]
	public static FieldCameraMode?[] Modes { get; } = new FieldCameraMode?[FieldCamera.ModeCount];

	/// <summary>
	/// Gets or sets the eye position published to the shared camera view state.
	/// </summary>
	[OriginalGlobal(0x00A48780)]
	public static Vector3 GlobalEye { get; set; }

	/// <summary>
	/// Gets or sets the normalized forward direction published to the shared camera view state.
	/// </summary>
	[OriginalGlobal(0x00A4878C)]
	public static Vector3 GlobalForward { get; set; }

	/// <summary>
	/// Gets or sets the inverted view transform captured after building the camera view.
	/// </summary>
	[OriginalGlobal(0x00A48980)]
	public static Matrix4x4 GlobalInverseViewMatrix { get; set; }

	/// <summary>
	/// Gets or sets the global camera up axis vector used during refresh passes.
	/// </summary>
	[OriginalGlobal(0x00A489CC)]
	public static Vector3 GlobalUpAxis { get; set; }

	/// <summary>
	/// Gets or sets the startup guard flag that suppresses uninitialized camera render refreshes when equal to one.
	/// </summary>
	[OriginalGlobal(0x00A16380)]
	public static int RenderRefreshDisabled { get; set; } = 1;

	/// <summary>
	/// Gets or sets the saved field-of-view value restored onto mode 5 when resetting the active target.
	/// </summary>
	[OriginalGlobal(0x00A48B24)]
	public static int StoredMode5FieldOfView { get; set; }

	/// <summary>
	/// Gets or sets whether the camera controller ran an active update on the current frame.
	/// </summary>
	public bool IsActiveFrame { get; set; }

	/// <summary>
	/// Gets the embedded scripted override request cleared when override flags become inactive.
	/// </summary>
	public FieldCameraOverrideRequest OverrideRequest { get; } = new();

	/// <summary>
	/// Gets or sets the target entity tracked by the controller.
	/// </summary>
	public PlayerCharacter? TargetEntity { get; set; }

	/// <summary>
	/// Gets or sets the yaw angle recorded after the previous mode update.
	/// </summary>
	public int AppliedYawAngle { get; set; }

	/// <summary>
	/// Gets the per-slot eye positions maintained for immediate mode updates.
	/// </summary>
	public Vector3[] SlotEyes { get; } = new Vector3[SlotCount];

	/// <summary>
	/// Gets the per-slot target positions maintained for immediate mode updates.
	/// </summary>
	public Vector3[] SlotTargets { get; } = new Vector3[SlotCount];

	/// <summary>
	/// Gets or sets whether the camera eye sweep struck map geometry on the last collision pass.
	/// </summary>
	public bool HasCollisionHit { get; set; }

	/// <summary>
	/// Gets or sets the active vertical field-of-view angle in 16-bit turn units.
	/// </summary>
	public int FieldOfView { get; set; } = 0x3555;

	/// <summary>
	/// Gets or sets the eye position the active camera mode asks for.
	/// </summary>
	public Vector3 DesiredEye { get; set; }

	/// <summary>
	/// Gets or sets the target position the active camera mode asks for.
	/// </summary>
	public Vector3 DesiredTarget { get; set; }

	/// <summary>
	/// Gets or sets the eye position the camera currently looks from.
	/// </summary>
	public Vector3 Eye { get; set; }

	/// <summary>
	/// Gets or sets the target position the camera currently looks at.
	/// </summary>
	public Vector3 Target { get; set; }

	/// <summary>
	/// Gets or sets the camera pitch angle in 16-bit turn units.
	/// </summary>
	public int PitchAngle { get; set; }

	/// <summary>
	/// Gets or sets the camera yaw angle in 16-bit turn units.
	/// </summary>
	public int YawAngle { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied when moving the current eye toward the desired eye.
	/// </summary>
	public float EyeSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied when moving the current target toward the desired target.
	/// </summary>
	public float TargetSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the eye recorded when the camera last snapped to its requested position.
	/// </summary>
	public Vector3 SnappedEye { get; set; }

	/// <summary>
	/// Gets or sets the per-frame target offset applied when stepping a camera shake.
	/// </summary>
	public Vector3 Offset { get; set; }

	/// <summary>
	/// Gets or sets the remaining frames for the vertical camera offset oscillation.
	/// </summary>
	public uint OffsetCountdown { get; set; }

	/// <summary>
	/// Gets or sets the vertical amplitude per remaining frame of the offset oscillation.
	/// </summary>
	public float OffsetAmplitude { get; set; }

	/// <summary>
	/// Restores every camera controller global to its data-image initial value for test isolation.
	/// </summary>
	public static void ResetGlobals()
	{
		Current = null;
		Flags = 0;
		SnapRequested = 0;
		RightAxis = default;
		UpAxis = default;
		ActiveModeIndex = 0;
		PreviousModeIndex = 0;
		Array.Clear(Modes);
		GlobalEye = default;
		GlobalForward = default;
		GlobalInverseViewMatrix = default;
		GlobalUpAxis = default;
		RenderRefreshDisabled = 1;
		StoredMode5FieldOfView = 0;
	}

	/// <summary>
	/// Moves a point toward a desired point by a distance proportional to the remaining gap, capping large steps at twelve units.
	/// </summary>
	/// <param name="current">The point to advance in place when stepping.</param>
	/// <param name="desired">The destination point, overwritten with the current point when the step reaches or exceeds the gap.</param>
	/// <param name="speed">The smoothing speed multiplier.</param>
	/// <returns><see langword="true"/> when the step reached or exceeded the gap.</returns>
	[Original(0x004D63B0)]
	public static bool StepTowards(ref Vector3 current, ref Vector3 desired, float speed)
	{
		float distance = Vector3.Subtract(current, desired).Length();
		double step = 0.16f * (double)distance * speed;
		if (!(distance > step))
		{
			desired = current;
			return true;
		}
		if (!(step < 5.0))
			step = 12.0f;
		current = Vector3.MoveTowards(current, desired, (float)step, out _);
		return false;
	}

	/// <summary>
	/// Snaps the eye and target immediately when requested, or steps each smoothly toward its desired position.
	/// </summary>
	[Original(0x004D3D14)]
	public void SmoothFollowDesired()
	{
		if ((SnapRequested & 1u) != 0)
		{
			SnapToDesired();
			SnapRequested = 0;
			return;
		}
		Vector3 eye = Eye;
		Vector3 desiredEye = DesiredEye;
		StepTowards(ref eye, ref desiredEye, EyeSmoothing);
		Eye = eye;
		DesiredEye = desiredEye;
		Vector3 target = Target;
		Vector3 desiredTarget = DesiredTarget;
		StepTowards(ref target, ref desiredTarget, TargetSmoothing);
		Target = target;
		DesiredTarget = desiredTarget;
	}

	/// <summary>
	/// Snaps the eye directly to the desired position and steps the target smoothly toward its desired position.
	/// </summary>
	[Original(0x004D3C98)]
	public void SnapEyeAndSmoothTarget()
	{
		Eye = DesiredEye;
		SnappedEye = DesiredEye;
		FieldCameraMode? mode = Modes[ActiveModeIndex];
		if (mode is not null && (mode.Flags & 0x10u) == 0)
			Target = Target with { Y = DesiredTarget.Y };
		Vector3 target = Target;
		Vector3 desiredTarget = DesiredTarget;
		StepTowards(ref target, ref desiredTarget, TargetSmoothing);
		Target = target;
		DesiredTarget = desiredTarget;
	}

	/// <summary>
	/// Advances the camera override flags for the next frame and clears the override request once no override flags remain active.
	/// </summary>
	[Original(0x004D3EF4)]
	public static void AdvanceFlagsAndClearOverride()
	{
		uint flags = Flags & ~0x8A0u;
		if ((flags & 2u) != 0)
		{
			flags &= ~2u;
			flags |= 0x100u;
		}
		else if ((flags & 0x100u) != 0)
		{
			flags |= 0x80u;
			flags &= ~0x100u;
		}
		flags &= ~0x40u;
		Flags = flags;
		if ((flags & 0x180u) == 0 && Current is FieldCameraController current)
			current.OverrideRequest.Clear();
	}

	/// <summary>
	/// Recomputes the horizontal right and vertical up basis vectors from the camera's yaw and pitch angles.
	/// </summary>
	[Original(0x004D3FB0)]
	public void UpdateOrientationAxes()
	{
		RightAxis = Matrix4x4.Identity.RotateY(YawAngle).TransformDirection(new Vector3(1.0f, 0.0f, 0.0f));
		UpAxis = Matrix4x4.Identity.RotateX(PitchAngle).TransformDirection(new Vector3(0.0f, 1.0f, 0.0f));
	}

	/// <summary>
	/// Advances the vertical camera offset countdown by one frame and updates the active offset.
	/// </summary>
	[Original(0x004D3DF4)]
	public void StepOffsetCountdown()
	{
		if (OffsetCountdown == 0)
			return;

		uint remaining = OffsetCountdown - 1;
		OffsetCountdown = remaining;
		int scaled = unchecked((int)(remaining * 40u));
		int angle = FloatingPointMath.TruncateToInt32((scaled * 65536.0) / 360.0);
		float amplitude = (float)(remaining * (double)OffsetAmplitude);
		float vertical = (float)(FixedPointTrigonometry.Sine(angle) * amplitude);
		Offset = new Vector3(0.0f, vertical, 0.0f);
	}

	/// <summary>
	/// Moves the camera straight to the requested eye and target, without smoothing, and records the eye.
	/// </summary>
	[Original(0x004D3E90)]
	public void SnapToDesired()
	{
		Eye = DesiredEye;
		Target = DesiredTarget;
		SnappedEye = DesiredEye;
	}

	/// <summary>
	/// Selects the active camera mode by index and runs its activation handler.
	/// </summary>
	/// <param name="modeIndex">The zero-based camera mode index.</param>
	[Original(0x004D3AA0)]
	public static void SelectMode(byte modeIndex)
	{
		ActiveModeIndex = modeIndex;
		if (modeIndex < Modes.Length)
			Modes[modeIndex]?.OnActivated();
	}

	/// <summary>
	/// Evaluates camera mode transitions and target re-attachment for the current frame.
	/// </summary>
	[Original(0x004D3974)]
	public void UpdateModeSelection()
	{
		uint flags = Flags;
		if ((flags & 0xCu) != 0 && (flags & 0x20u) == 0 && (flags & 0x80u) == 0 && (flags & 0x800u) == 0)
			return;

		if ((flags & 2u) != 0)
		{
			SelectMode(unchecked((byte)(OverrideRequest.ModeOffset + 9)));
			return;
		}

		if ((flags & 0xA0u) == 0)
			return;

		SelectMode(PreviousModeIndex);
		PlayerCharacter? player = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		if (player is null)
			return;

		if (Modes[ActiveModeIndex] is FieldCameraMode activeMode)
		{
			if (Current is FieldCameraController current)
				current.TargetEntity = player;
			activeMode.AttachTarget(player);
			Flags |= 0x800u;
		}

		FieldCameraMode? defaultMode = Modes[0];
		if (defaultMode is not null)
			defaultMode.AttachTarget(player);

		if (Current is FieldCameraController controller && defaultMode is not null)
		{
			controller.SlotEyes[0] = defaultMode.Eye;
			controller.SlotTargets[0] = defaultMode.Target;
		}
	}

	/// <summary>
	/// Sweeps from the snapped eye toward the desired eye against world collision geometry.
	/// </summary>
	/// <param name="ground">The collision query used for the sweep.</param>
	[Original(0x004D3BA8)]
	public void ResolveSnappedCollision(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		GroundContact? contact = ground.Sweep(SnappedEye, DesiredEye, 0x901);
		if (contact is GroundContact hit)
		{
			Vector3 delta = Vector3.Subtract(DesiredEye, SnappedEye);
			if (delta.Length() != 0.0f)
				Vector3.Normalize(ref delta);
			SnappedEye = Vector3.Subtract(hit.Position, delta);
			HasCollisionHit = true;
		}
		else
		{
			SnappedEye = Eye;
			HasCollisionHit = false;
		}
	}

	/// <summary>
	/// Refines the camera eye and snapped eye after a primary collision hit by sweeping from target to eye.
	/// </summary>
	/// <param name="ground">The collision query used for the sweep.</param>
	[Original(0x004D3D6C)]
	public void ResolveTargetCollision(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		_ = Scene2TransitionOverlay.GetDisplayId();
		if (!HasCollisionHit)
			return;
		GroundContact? contact = ground.Sweep(Target, Eye, 0x901);
		if (contact is GroundContact hit)
		{
			Eye = hit.Position;
			SnappedEye = new Vector3(
				(float)((double)hit.Position.X + hit.Normal.X),
				(float)((double)hit.Position.Y + hit.Normal.Y),
				(float)((double)hit.Position.Z + hit.Normal.Z));
		}
	}

	/// <summary>
	/// Returns the active shake offset vector.
	/// </summary>
	[Original(0x004D433C)]
	public Vector3 GetOffset() => Offset;

	/// <summary>
	/// Returns the embedded camera override request.
	/// </summary>
	[Original(0x004D4344)]
	public FieldCameraOverrideRequest GetOverrideRequest() => OverrideRequest;

	/// <summary>
	/// Returns the low 16 bits of the current local player display slot.
	/// </summary>
	[Original(0x004D30CC)]
	public static ushort GetCurrentDisplaySlot() => unchecked((ushort)Scene2TransitionOverlay.DisplayId);

	/// <summary>
	/// Returns the attached target entity's client slot index, or <see cref="ushort.MaxValue"/> when no target is bound.
	/// </summary>
	[Original(0x004D30D4)]
	public static ushort GetCurrentTargetClientId() =>
		Current?.TargetEntity is { } entity ? unchecked((ushort)entity.PlayerIndex) : ushort.MaxValue;

	/// <summary>
	/// Returns the currently active camera mode index.
	/// </summary>
	[Original(0x004D30F4)]
	public static byte GetCurrentModeIndex() => ActiveModeIndex;

	/// <summary>
	/// Enters a temporary camera mode when none is active, remembering the previous non-temporary mode and activating the new mode.
	/// </summary>
	/// <param name="modeIndex">The mode index to activate temporarily.</param>
	/// <returns><see langword="true"/> when the temporary mode was entered; <see langword="false"/> if one was already active.</returns>
	[Original(0x004D3180)]
	public static bool RequestTemporaryMode(byte modeIndex)
	{
		if ((Flags & 8u) != 0)
			return false;
		Flags |= 8u;
		if (modeIndex != ActiveModeIndex && ActiveModeIndex != 5 && ActiveModeIndex != 9)
			PreviousModeIndex = ActiveModeIndex;
		ActiveModeIndex = modeIndex;
		if (modeIndex < Modes.Length)
			Modes[modeIndex]?.OnActivated();
		return true;
	}

	/// <summary>
	/// Marks an active temporary camera mode for restoration on the next mode selection pass.
	/// </summary>
	[Original(0x004D31DC)]
	public static void ReleaseTemporaryMode()
	{
		if ((Flags & 8u) != 0)
			Flags = (Flags & ~0x28u) | 0x20u;
	}

	/// <summary>
	/// Clears lock flags, restores saved mode 5 field of view if applicable, and rebinds the local player entity to the active and default modes.
	/// </summary>
	[Original(0x004D3250)]
	public static void RestoreDefaultTargetAndMode()
	{
		if ((Flags & 4u) != 0)
		{
			uint flags = Flags & ~4u;
			if (ActiveModeIndex == 5 && Modes[5] is { } mode5 && StoredMode5FieldOfView != 0)
				mode5.FieldOfView = StoredMode5FieldOfView;
			Flags = flags | 0x20u;
		}
		PlayerCharacter? player = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		if (player is null)
			return;
		if (Modes[ActiveModeIndex] is FieldCameraMode activeMode)
		{
			if (Current is { } current)
				current.TargetEntity = player;
			activeMode.AttachTarget(player);
			Flags |= 0x800u;
		}
		FieldCameraMode? defaultMode = Modes[0];
		if (defaultMode is not null)
			defaultMode.AttachTarget(player);
		if (Current is { } controller && defaultMode is not null)
		{
			controller.SlotEyes[0] = defaultMode.Eye;
			controller.SlotTargets[0] = defaultMode.Target;
		}
	}

	/// <summary>
	/// Copies override request eye, target, and field-of-view parameters onto the active mode when mode lock flags are active.
	/// </summary>
	/// <param name="request">The override request carrying desired eye, target, and field-of-view settings.</param>
	[Original(0x004D3374)]
	public static void ApplyOverrideRequestToActiveMode(FieldCameraOverrideRequest request)
	{
		ArgumentNullException.ThrowIfNull(request);
		if ((Flags & 0xCu) == 0)
			return;
		if (Modes[ActiveModeIndex] is FieldCameraMode mode)
		{
			mode.Eye = request.Eye;
			mode.Target = request.Target;
			mode.FieldOfView = request.FieldOfViewDegrees;
		}
	}

	/// <summary>
	/// Binds <paramref name="entity"/> as the active and default mode camera target when non-null.
	/// </summary>
	/// <param name="entity">The target player entity to bind.</param>
	[Original(0x004D2FB4)]
	public static void BindTargetEntity(PlayerCharacter? entity)
	{
		if (entity is null)
			return;
		if (Modes[ActiveModeIndex] is FieldCameraMode activeMode)
		{
			if (Current is { } current)
				current.TargetEntity = entity;
			activeMode.AttachTarget(entity);
			Flags |= 0x800u;
		}
		FieldCameraMode? defaultMode = Modes[0];
		if (defaultMode is not null)
			defaultMode.AttachTarget(entity);
		if (Current is { } controller && defaultMode is not null)
		{
			controller.SlotEyes[0] = defaultMode.Eye;
			controller.SlotTargets[0] = defaultMode.Target;
		}
	}

	/// <summary>
	/// Locks the active camera mode onto <paramref name="entity"/> and invokes its target lock callback.
	/// </summary>
	/// <param name="entity">The target player entity, or <see langword="null"/>.</param>
	/// <param name="parameter">The mode-specific lock parameter.</param>
	[Original(0x004D307C)]
	public static void LockModeToTarget(PlayerCharacter? entity, int parameter)
	{
		if (Modes[ActiveModeIndex] is not FieldCameraMode activeMode)
			return;
		if (Current is { } current)
			current.TargetEntity = entity;
		activeMode.TargetEntity = entity;
		if (entity is not null)
			activeMode.TargetClientId = unchecked((ushort)entity.PlayerIndex);
		activeMode.OnTargetLocked(entity, parameter);
		Flags |= 0x800u;
	}

	/// <summary>
	/// Starts one of the three preset camera offset shakes on the active controller.
	/// </summary>
	/// <param name="preset">The preset index (0 small, 1 heavy, 2 medium).</param>
	/// <param name="notifyRumble">Optional callback receiving the matching controller rumble strength and frame count.</param>
	[Original(0x004D4288)]
	public static void TriggerPresetShake(int preset, Action<short, short>? notifyRumble = null)
	{
		if (Current is not FieldCameraController current)
			return;
		switch (preset)
		{
			case 0:
				current.OffsetAmplitude = 0.0175f;
				current.OffsetCountdown = 20;
				notifyRumble?.Invoke(96, 20);
				break;
			case 1:
				current.OffsetAmplitude = 0.175f;
				current.OffsetCountdown = 30;
				notifyRumble?.Invoke(160, 30);
				break;
			case 2:
				current.OffsetAmplitude = 0.05f;
				current.OffsetCountdown = 30;
				notifyRumble?.Invoke(224, 30);
				break;
		}
	}

	/// <summary>
	/// Starts a custom camera offset shake with the given amplitude and frame duration.
	/// </summary>
	/// <param name="amplitude">The vertical oscillation amplitude per remaining frame.</param>
	/// <param name="duration">The duration in frames.</param>
	/// <param name="notifyRumble">Optional callback receiving the controller rumble strength and frame count.</param>
	[Original(0x004D430C)]
	public static void TriggerCustomShake(float amplitude, uint duration, Action<short, short>? notifyRumble = null)
	{
		if (Current is not FieldCameraController current)
			return;
		current.OffsetAmplitude = amplitude;
		current.OffsetCountdown = duration;
		notifyRumble?.Invoke(96, unchecked((short)duration));
	}

	/// <summary>
	/// Converts a camera forward direction vector into 16-bit fixed-point pitch and yaw angles.
	/// </summary>
	/// <param name="direction">The direction vector from eye toward target.</param>
	/// <param name="pitch">Receives the pitch angle in 16-bit turn units.</param>
	/// <param name="yaw">Receives the yaw angle in 16-bit turn units.</param>
	[Original(0x004D6448)]
	public static void ComputeAnglesFromDirection(Vector3 direction, out int pitch, out int yaw)
	{
		const double TwoPi = 6.283184051513672;
		const double TurnScale = 65536.0;
		yaw = FloatingPointMath.TruncateToInt32(Math.Atan2(-(double)direction.X, -(double)direction.Z) * TurnScale / TwoPi);
		float horizontal = FloatingPointMath.SquareRoot((float)((double)direction.X * direction.X + (double)direction.Z * direction.Z));
		pitch = FloatingPointMath.TruncateToInt32(Math.Atan2((double)direction.Y, (double)horizontal) * TurnScale / TwoPi);
	}

	/// <summary>
	/// Runs the active camera mode update, collision sweeps, smoothing, projection update, and post-update hooks.
	/// </summary>
	/// <param name="ground">The collision query used when the active mode enables world collision.</param>
	/// <param name="updateProjection">Optional callback replacing the default field projection calculation.</param>
	[Original(0x004D3ABC)]
	public void UpdateActiveMode(IGroundCollision ground, Func<int, float, float, float, float>? updateProjection = null)
	{
		ArgumentNullException.ThrowIfNull(ground);
		if (Modes[ActiveModeIndex] is not FieldCameraMode mode)
			return;

		if ((Flags & 0x800u) == 0)
			mode.OnUpdate();

		if ((Flags & 2u) != 0)
			mode.OnOverride(false);
		else if ((Flags & 0x80u) != 0)
			mode.OnOverride(true);

		mode.ApplyToController();

		if ((Flags & 0x820u) != 0)
		{
			SnapToDesired();
		}
		else
		{
			if ((mode.Flags & 1u) != 0)
				ResolveSnappedCollision(ground);

			if ((mode.Flags & 4u) != 0)
				SmoothFollowDesired();
			else if ((mode.Flags & 8u) != 0)
				SnapEyeAndSmoothTarget();
			else
				SnapToDesired();

			if ((mode.Flags & 1u) != 0)
				ResolveTargetCollision(ground);

			StepOffsetCountdown();
		}

		if (updateProjection is not null)
			updateProjection(FieldOfView, 1.1333334f, 1.0f, 21000.0f);
		else
			CameraProjection.CreateFieldProjection(FieldOfView, 1.1333334f, 1.0f, 21000.0f, 480, out _, out _);

		mode.OnPostUpdate();
		AppliedYawAngle = YawAngle;
	}

	/// <summary>
	/// Runs a full per-frame field camera update, advancing mode state, publishing global view vectors, and updating orientation axes.
	/// </summary>
	/// <param name="ground">The collision query used when the active mode enables world collision.</param>
	/// <param name="transformStack">Optional matrix stack used to capture the inverse view matrix.</param>
	/// <param name="updateProjection">Optional projection callback forwarded to <see cref="UpdateActiveMode"/>.</param>
	[Original(0x004D386C)]
	public void Update(
		IGroundCollision ground,
		TransformationStack? transformStack = null,
		Func<int, float, float, float, float>? updateProjection = null)
	{
		ArgumentNullException.ThrowIfNull(ground);
		IsActiveFrame = true;
		UpdateModeSelection();
		UpdateActiveMode(ground, updateProjection);
		AdvanceFlagsAndClearOverride();

		if (Current is FieldCameraController current)
		{
			Vector3 forward = new(
				(float)((double)current.Target.X - current.Eye.X + Offset.X),
				(float)((double)current.Target.Y - current.Eye.Y + Offset.Y),
				(float)((double)current.Target.Z - current.Eye.Z + Offset.Z));
			GlobalEye = Eye;
			if (forward.LengthSquared() != 0.0)
				Vector3.Normalize(ref forward);
			GlobalForward = forward;
			_ = forward.Length();
		}

		if (transformStack is not null)
			GlobalInverseViewMatrix = transformStack.CaptureInverseCurrent();

		UpdateOrientationAxes();
	}

	/// <summary>
	/// Reapplies the current projection and look-at transform when no active update ran this frame.
	/// </summary>
	/// <param name="transformStack">Optional matrix stack receiving the look-at view transform.</param>
	/// <param name="updateProjection">Optional projection callback.</param>
	[Original(0x004D4048)]
	public void RenderRefresh(
		TransformationStack? transformStack = null,
		Func<int, float, float, float, float>? updateProjection = null)
	{
		if (RenderRefreshDisabled == 1)
			return;

		if (!IsActiveFrame)
		{
			Vector3 eye = GlobalEye;
			Vector3 target = new(
				(float)((double)GlobalForward.X + eye.X),
				(float)((double)GlobalForward.Y + eye.Y),
				(float)((double)GlobalForward.Z + eye.Z));
			Vector3 diff = new(
				(float)((double)eye.X - target.X),
				(float)((double)eye.Y - target.Y),
				(float)((double)eye.Z - target.Z));
			if (diff.LengthSquared() == 0.0)
				target = target with { Z = (float)((double)target.Z + 1.0) };
			if (diff.X == 0.0f && diff.Z == 0.0f)
				target = target with { Z = (float)((double)target.Z + 1.0) };

			if (updateProjection is not null)
				updateProjection(FieldOfView, 1.1333334f, 1.0f, 21000.0f);
			else
				CameraProjection.CreateFieldProjection(FieldOfView, 1.1333334f, 1.0f, 21000.0f, 480, out _, out _);

			CameraView.ApplyLookAt(eye, target, GlobalUpAxis, transformStack);
		}

		IsActiveFrame = false;
	}

	/// <summary>
	/// Rebuilds the projection and look-at view transform with an optional world-space eye offset.
	/// </summary>
	/// <param name="offset">Optional offset added to the published camera eye.</param>
	/// <param name="transformStack">Optional matrix stack receiving the look-at view transform.</param>
	/// <param name="updateProjection">Optional projection callback.</param>
	[Original(0x004D4164)]
	public static void ApplyViewOffset(
		Vector3? offset,
		TransformationStack? transformStack = null,
		Func<int, float, float, float, float>? updateProjection = null)
	{
		Vector3 eye = offset is { } delta
			? new Vector3(
				(float)((double)GlobalEye.X + delta.X),
				(float)((double)GlobalEye.Y + delta.Y),
				(float)((double)GlobalEye.Z + delta.Z))
			: GlobalEye;
		Vector3 target = new(
			(float)((double)GlobalForward.X + eye.X),
			(float)((double)GlobalForward.Y + eye.Y),
			(float)((double)GlobalForward.Z + eye.Z));
		_ = new Vector3(
			(float)((double)eye.X - target.X),
			(float)((double)eye.Y - target.Y),
			(float)((double)eye.Z - target.Z)).LengthSquared();
		int fov = Current?.FieldOfView ?? 0x3555;
		if (updateProjection is not null)
			updateProjection(fov, 1.1333334f, 1.0f, 21000.0f);
		else
			CameraProjection.CreateFieldProjection(fov, 1.1333334f, 1.0f, 21000.0f, 480, out _, out _);
		CameraView.ApplyLookAt(eye, target, GlobalUpAxis, transformStack);
	}
}
