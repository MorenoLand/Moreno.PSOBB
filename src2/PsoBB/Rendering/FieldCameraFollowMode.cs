using PsoBB.Audio;
using PsoBB.Game;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Scenes;

namespace PsoBB.Rendering;

/// <summary>
/// Empty ground collision implementation used when a mode update does not supply a world collision provider.
/// </summary>
internal sealed class EmptyGroundCollision : IGroundCollision
{
	public static EmptyGroundCollision Instance { get; } = new();

	public GroundContact? Sweep(Vector3 from, Vector3 to, int mask) => null;
}

/// <summary>
/// Third-person player-following field camera used by operating modes zero through three.
/// </summary>
public class FieldCameraFollowMode : FieldCameraMode
{
	private static readonly (Vector3 Eye, Vector3 Target, int FieldOfView)[] StagePresetViews =
	[
		(new Vector3(28.0f, 100.0f, 176.0f), new Vector3(13.0f, 102.0f, 132.0f), 0x3555),
		(new Vector3(-191.0f, 102.0f, 115.0f), new Vector3(-165.0f, 94.0f, 97.0f), 0x3555),
		(new Vector3(331.0f, -19.0f, -45.0f), new Vector3(322.0f, -15.0f, -62.0f), 0x3555),
	];

	/// <summary>
	/// Initializes the follow camera mode, attaches the local player when present, and resets offset and tracking state.
	/// </summary>
	[Original(0x004D72D4)]
	public FieldCameraFollowMode()
	{
		Flags = 5;
		FieldCameraController.CutsceneViewFlags = 0;
		FieldCameraController.CutsceneTargetClientId = -1;
		PlayerCharacter? localPlayer = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		TargetEntity = localPlayer;
		if (localPlayer is not null)
			TargetClientId = unchecked((ushort)localPlayer.PlayerIndex);
		InitializeTargetView();
		PresetEyeOffset = default;
		PresetTargetOffset = default;
		IdleFrames = 0;
		TurnState = 0;
		BehaviorFlags = 0;
		FirstPersonActive = 0;
		SnapBehindRequested = 0;
		AimHeightOffset = 0.0f;
		DesiredYawAngle = 0;
		LookAheadCollisionPoint = default;
		Distance = 0.0f;
	}

	/// <summary>Gets or sets the world-space look-ahead collision point.</summary>
	public Vector3 LookAheadCollisionPoint { get; set; }

	/// <summary>Gets or sets the current scalar distance value tracked by the follow mode.</summary>
	public float Distance { get; set; }

	/// <summary>Gets or sets the preset camera eye offset relative to the target entity.</summary>
	public Vector3 PresetEyeOffset { get; set; }

	/// <summary>Gets or sets the preset camera target offset relative to the target entity.</summary>
	public Vector3 PresetTargetOffset { get; set; }

	/// <summary>Gets or sets the count of consecutive idle frames since last target movement.</summary>
	public int IdleFrames { get; set; }

	/// <summary>Gets or sets the automatic follow yaw turn state (0 idle, 1 tracking, 2 recentering).</summary>
	public int TurnState { get; set; }

	/// <summary>Gets or sets the follow-mode behavior bitmask (look-ahead hit, distance, snapshot, close hit).</summary>
	public uint BehaviorFlags { get; set; }

	/// <summary>Gets or sets whether the camera is in first-person or zoomed close state.</summary>
	public int FirstPersonActive { get; set; }

	/// <summary>Gets or sets whether a camera snap behind the player was requested.</summary>
	public int SnapBehindRequested { get; set; }

	/// <summary>Gets or sets the vertical aim offset applied during look-target smoothing.</summary>
	public float AimHeightOffset { get; set; }

	/// <summary>Gets or sets the desired horizontal yaw angle in 16-bit turn units.</summary>
	public int DesiredYawAngle { get; set; }

	/// <summary>Gets or sets the half-second idle turn delay threshold multiplier.</summary>
	public short IdleTurnThresholdSeconds { get; set; }

	/// <summary>
	/// Records the desired yaw angle in 16-bit turn units.
	/// </summary>
	/// <param name="yaw">The desired yaw angle.</param>
	[Original(0x004D1824)]
	public virtual void SetDesiredYaw(int yaw) => DesiredYawAngle = yaw;

	/// <summary>
	/// Attaches <paramref name="entity"/> and snaps the eye and target using default ground collision rules.
	/// </summary>
	/// <param name="entity">The target player entity.</param>
	[Original(0x004D74D8)]
	protected override void OnTargetAttached(PlayerCharacter entity) => AttachTargetWithCollision(entity, EmptyGroundCollision.Instance);

	/// <summary>
	/// Computes the initial behind-player eye and target for <paramref name="entity"/> and resolves any collision along the segment.
	/// </summary>
	/// <param name="entity">The target player entity, or <see langword="null"/>.</param>
	/// <param name="ground">The collision query used to push the eye forward out of geometry.</param>
	public void AttachTargetWithCollision(PlayerCharacter? entity, IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		if (entity is null)
			return;
		int presetIndex = FieldCameraController.FollowPresetIndex;
		FieldCameraModeSettings preset = FieldCameraController.FollowPresets[presetIndex];
		int yaw = entity.Heading + 0x8000;
		YawAngle = yaw;
		Vector3 rotated = Matrix4x4.Identity.RotateY(yaw).TransformDirection(new Vector3(0.0f, 0.0f, preset.EyeOffset.Z));
		Vector3 target = new(entity.Position.X, (float)((double)entity.Position.Y + preset.LookOffset.Y), entity.Position.Z);
		Vector3 eye = new((float)((double)entity.Position.X + rotated.X), (float)((double)rotated.Y + target.Y), (float)((double)entity.Position.Z + rotated.Z));
		Target = target;
		Eye = eye;
		GroundContact? hit = ground.Sweep(target, eye, 0x100);
		if (hit is GroundContact contact)
		{
			Vector3 delta = Vector3.Subtract(eye, target);
			if (delta.LengthSquared() != 0.0f)
				Vector3.Normalize(ref delta);
			Eye = Vector3.Subtract(contact.Position, delta);
		}
	}

	/// <summary>
	/// Sets target-relative eye offsets from <paramref name="entity"/> and clamps the eye onto any colliding surface.
	/// </summary>
	/// <param name="entity">The target player entity, or <see langword="null"/>.</param>
	/// <param name="offset">The offset from the target look point to the eye.</param>
	/// <param name="ground">Optional collision query used to clamp the resulting eye segment.</param>
	[Original(0x004D7614)]
	public void SetRelativeOffsets(PlayerCharacter? entity, Vector3 offset, IGroundCollision? ground = null)
	{
		if (entity is null)
			return;
		FieldCameraModeSettings preset = FieldCameraController.FollowPresets[FieldCameraController.FollowPresetIndex];
		Vector3 target = new(entity.Position.X, (float)((double)entity.Position.Y + preset.LookOffset.Y), entity.Position.Z);
		Vector3 eye = new((float)((double)target.X + offset.X), (float)((double)target.Y + offset.Y), (float)((double)target.Z + offset.Z));
		Target = target;
		Eye = eye;
		GroundContact? hit = (ground ?? EmptyGroundCollision.Instance).Sweep(target, eye, 0x100);
		if (hit is GroundContact contact)
			Eye = contact.Position;
	}

	/// <summary>
	/// Initializes the mode's yaw, eye, and target from the local player or stage camera defaults.
	/// </summary>
	/// <param name="ground">Optional collision query (unused beyond compatibility with vtable calls).</param>
	[Original(0x004D86F4)]
	public void InitializeTargetView(IGroundCollision? ground = null)
	{
		_ = ground;
		PlayerCharacter? localPlayer = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		int operationMode = SoundSelection.CurrentMode();
		if (localPlayer is not null)
		{
			int yaw = localPlayer.Heading + 0x8000;
			YawAngle = yaw;
			FieldCameraModeSettings preset = FieldCameraController.FollowPresets[FieldCameraController.FollowPresetIndex];
			Vector3 rotated = Matrix4x4.Identity.RotateY(yaw).TransformDirection(new Vector3(0.0f, 0.0f, preset.EyeOffset.Z));
			Vector3 target = new(localPlayer.Position.X, (float)((double)localPlayer.Position.Y + preset.LookOffset.Y), localPlayer.Position.Z);
			Vector3 eye = new((float)((double)localPlayer.Position.X + rotated.X), (float)((double)rotated.Y + target.Y), (float)((double)localPlayer.Position.Z + rotated.Z));
			Target = target;
			Eye = eye;
			return;
		}
		if (operationMode == 0 || operationMode == 0x2D)
		{
			(Vector3 eye, Vector3 target, int fov) = StagePresetViews[0];
			Eye = eye;
			Target = target;
			FieldOfView = fov;
		}
		else if (operationMode == 0x0F)
		{
			(Vector3 eye, Vector3 target, int fov) = StagePresetViews[1];
			Eye = eye;
			Target = target;
			FieldOfView = fov;
		}
		else if (operationMode == 0x12)
		{
			(Vector3 eye, Vector3 target, int fov) = StagePresetViews[2];
			Eye = eye;
			Target = target;
			FieldOfView = fov;
		}
	}

	/// <summary>
	/// Configures smoothing speeds and collision behavior flags when locking onto a target entity.
	/// </summary>
	/// <param name="entity">The target player entity, or <see langword="null"/>.</param>
	/// <param name="parameter">The lock-on mode parameter.</param>
	[Original(0x004D88E8)]
	public override void OnTargetLocked(PlayerCharacter? entity, int parameter)
	{
		OnTargetLockedWithCollision(EmptyGroundCollision.Instance);
	}

	/// <summary>
	/// Configures smoothing speeds, look-ahead collision flags, and default offsets against <paramref name="ground"/>.
	/// </summary>
	/// <param name="ground">The collision query used by look-ahead collision tests.</param>
	/// <param name="canCenterView">Optional predicate indicating whether camera recentering input is allowed.</param>
	/// <param name="centerButtonDown">Optional predicate indicating whether the center-camera input is held.</param>
	public void OnTargetLockedWithCollision(
		IGroundCollision ground,
		Func<bool>? canCenterView = null,
		Func<bool>? centerButtonDown = null)
	{
		ArgumentNullException.ThrowIfNull(ground);
		Flags = 5;
		EyeSmoothing = SoundSelection.CurrentMode() == 2 ? 0.56f : 0.67f;
		if (FieldCameraController.Current is FieldCameraController controller)
		{
			if (controller.Target.PlanarDistanceSquared(controller.Eye) < 529.0)
				BehaviorFlags &= ~4u;
			else
				BehaviorFlags |= 4u;
		}
		if (ResolveLookAheadCollision(ground) && TargetEntity is not null && FieldCameraController.Current is FieldCameraController current)
		{
			double distSq = current.Eye.PlanarDistanceSquared(TargetEntity.Position);
			BehaviorFlags |= 1u;
			if (distSq <= 400.0)
				BehaviorFlags |= 0x11u;
		}
		else
		{
			BehaviorFlags &= ~0x11u;
		}
		ResetToFieldState(canCenterView, centerButtonDown);
	}

	/// <summary>
	/// Applies any active cutscene camera override if enabled.
	/// </summary>
	/// <returns><see langword="true"/> when a cutscene view was applied; otherwise <see langword="false"/>.</returns>
	[Original(0x004D7998)]
	public bool TryApplyCutsceneView()
	{
		byte flags = FieldCameraController.CutsceneViewFlags;
		if (flags == 0)
			return false;
		Flags = 0;
		Eye = FieldCameraController.CutsceneEye;
		if ((flags & 2) != 0)
		{
			PlayerCharacter? player = PlayerCharacter.GetSlot(unchecked((ushort)FieldCameraController.CutsceneTargetClientId));
			if (player is not null)
				Target = new Vector3(player.Position.X, (float)(19.8f + (double)player.Position.Y), player.Position.Z);
		}
		else
		{
			Target = FieldCameraController.CutsceneTarget;
		}
		return true;
	}

	/// <summary>
	/// Updates the horizontal yaw angle smoothly according to player motion and look-ahead collision flags.
	/// </summary>
	[Original(0x004D7A1C)]
	public void UpdateFollowYaw()
	{
		if (TargetEntity is not PlayerCharacter entity)
			return;
		Vector3 delta = Vector3.Subtract(entity.Position, entity.PreviousPosition);
		bool isMoving = delta.LengthSquared() >= 0.25f;
		switch (TurnState)
		{
			case 0:
				if (isMoving)
					TurnState = 1;
				if (((uint)entity.CollisionFlags & 0x100020u) != 0 || entity.ActionId == 8)
					IdleFrames = 0;
				if (IdleFrames > 250)
					TurnState = 2;
				break;
			case 1:
				IdleFrames = 0;
				if ((BehaviorFlags & 1u) != 0)
				{
					if ((BehaviorFlags & 0x10u) != 0)
					{
						EyeSmoothing = 0.05f;
						YawAngle = FieldCameraController.StepAngleTowards(YawAngle, DesiredYawAngle, 364);
					}
					else
					{
						EyeSmoothing = 0.68f;
						int opposite = entity.Heading + 0x8000;
						SetDesiredYaw(opposite);
						YawAngle = opposite;
					}
				}
				else
				{
					int speed = (BehaviorFlags & 4u) != 0 ? 2 : 5;
					if (entity.LockedTargetDistanceSquared is not float lockedDistSq || lockedDistSq > 4900.0f)
						YawAngle = FieldCameraController.StepAngleTowards(YawAngle, DesiredYawAngle, speed);
				}
				if (!isMoving)
					TurnState = 0;
				break;
			case 2:
				SetDesiredYaw(entity.Heading + 0x8000);
				YawAngle = FieldCameraController.StepAngleTowards(YawAngle, DesiredYawAngle, 3);
				if (isMoving)
				{
					TurnState = 1;
					IdleFrames = 0;
				}
				break;
		}
	}

	/// <summary>
	/// Applies an active scripted rail yaw bias onto <see cref="FieldCameraMode.YawAngle"/>.
	/// </summary>
	/// <param name="railDirection">The rail direction sign (positive or negative).</param>
	/// <param name="railWeight">The rail strength when greater than <c>0.2f</c>.</param>
	[Original(0x004D7C04)]
	public void ApplyRailYaw(short railDirection, float railWeight)
	{
		if (railWeight > 0.2f)
		{
			float scaled = railWeight * 2.5f;
			double angleDelta = 65536.0 * (double)(short)(int)scaled / 360.0;
			int updated = railDirection <= 0
				? YawAngle - (int)angleDelta
				: YawAngle + (int)angleDelta;
			YawAngle = unchecked((ushort)updated);
		}
	}

	/// <summary>
	/// Computes <see cref="FieldCameraMode.Eye"/> by rotating <see cref="PresetEyeOffset"/> by <see cref="FieldCameraMode.YawAngle"/> around the target entity.
	/// </summary>
	[Original(0x004D7CE4)]
	public void ComputeEyeFromYaw()
	{
		if (TargetEntity is not PlayerCharacter entity)
			return;
		Vector3 rotated = Matrix4x4.Identity.RotateY(YawAngle).TransformDirection(PresetEyeOffset);
		Eye = new Vector3(
			(float)((double)rotated.X + entity.Position.X),
			(float)((double)rotated.Y + entity.Position.Y),
			(float)((double)rotated.Z + entity.Position.Z));
	}

	/// <summary>
	/// Computes <see cref="FieldCameraMode.Target"/> from the entity's position, motion lead, rotated target offset, and vertical aim offset.
	/// </summary>
	/// <param name="inCombatCameraArea">Whether the area permits vertical first-person aim adjustment.</param>
	[Original(0x004D7D40)]
	public void ComputeTargetAndVerticalAim(bool inCombatCameraArea = false)
	{
		if (TargetEntity is not PlayerCharacter entity)
			return;
		Vector3 velocity = Vector3.Subtract(entity.Position, entity.PreviousPosition);
		_ = velocity.LengthSquared();
		Vector3 rotated = Matrix4x4.Identity.RotateY(entity.Heading + 0x8000).TransformDirection(PresetTargetOffset);
		Target = new Vector3(
			(float)((double)velocity.X * 18.0 + rotated.X + entity.Position.X),
			(float)((double)rotated.Y + entity.Position.Y),
			(float)(18.0 * (double)velocity.Z + rotated.Z + entity.Position.Z));
		if (inCombatCameraArea)
		{
			float heightOffset = AimHeightOffset;
			FieldCameraController.SmoothScalar(ref heightOffset, FirstPersonActive != 0 ? -3.0f : 0.0f, 1.4f);
			AimHeightOffset = heightOffset;
		}
		Target = Target with { Y = (float)((double)Target.Y + AimHeightOffset) };
	}

	/// <summary>
	/// Clears the first-person state flag on follow mode zero when active.
	/// </summary>
	[Original(0x004D7E4C)]
	public static void ExitFirstPerson()
	{
		if (FieldCameraController.ActiveModeIndex == 0 && FieldCameraController.Modes[0] is FieldCameraFollowMode follow)
			follow.FirstPersonActive = 0;
	}

	/// <summary>
	/// Applies external eye and target offsets and sets the desired yaw angle while flagging snapshot state.
	/// </summary>
	/// <param name="eyeOffset">The target-relative eye offset.</param>
	/// <param name="targetOffset">The entity-relative look-target offset.</param>
	/// <param name="yaw">The desired yaw angle in 16-bit turn units.</param>
	[Original(0x004D8354)]
	public void ApplyExternalView(Vector3 eyeOffset, Vector3 targetOffset, int yaw)
	{
		BehaviorFlags |= 8u;
		SetDesiredYaw(yaw);
		PresetTargetOffset = targetOffset;
		PresetEyeOffset = eyeOffset;
	}

	/// <summary>
	/// Checks whether placing the follow eye offset at <paramref name="yaw"/> hits world geometry between controller eye/target and player.
	/// </summary>
	/// <param name="yaw">The candidate yaw angle in 16-bit turn units.</param>
	/// <param name="ground">The ground collision query.</param>
	/// <returns><see langword="true"/> when either line-of-sight sweep strikes geometry.</returns>
	[Original(0x004D847C)]
	public bool IsPresetAngleBlocked(int yaw, IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		if (FieldCameraController.Current is not FieldCameraController controller || TargetEntity is not PlayerCharacter entity)
			return false;
		Vector3 rotated = Matrix4x4.Identity
			.RotateY(yaw)
			.TransformDirection(new Vector3(PresetEyeOffset.X, PresetEyeOffset.Y, (float)(7.0 + (double)PresetEyeOffset.Z)));
		Vector3 probe = new(
			(float)((double)entity.Position.X + rotated.X),
			(float)(12.0 + (double)entity.Position.Y + rotated.Y),
			(float)((double)entity.Position.Z + rotated.Z));
		return ground.Sweep(controller.Eye, probe, 0x100) is not null
			|| ground.Sweep(probe, controller.Target, 0x100) is not null;
	}

	/// <summary>
	/// Enters first-person close follow on mode zero and picks whichever quarter-turn angle behind the player is unobstructed.
	/// </summary>
	/// <param name="ground">The ground collision query.</param>
	[Original(0x004D83F4)]
	public static void TrySnapFirstPersonPreset(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		if (FieldCameraController.ActiveModeIndex != 0 || FieldCameraController.Modes[0] is not FieldCameraFollowMode follow)
			return;
		follow.FirstPersonActive = 1;
		if (follow.TargetEntity is not PlayerCharacter entity)
			return;
		int plusAngle = entity.Heading + 24576;
		int minusAngle = entity.Heading - 24576;
		int primary;
		int secondary;
		if (Angle.Difference(unchecked((ushort)follow.YawAngle), unchecked((ushort)plusAngle))
			<= Angle.Difference(unchecked((ushort)follow.YawAngle), unchecked((ushort)minusAngle)))
		{
			primary = plusAngle;
			secondary = minusAngle;
		}
		else
		{
			primary = minusAngle;
			secondary = plusAngle;
		}
		if (!follow.IsPresetAngleBlocked(primary, ground))
			follow.YawAngle = primary;
		else if (!follow.IsPresetAngleBlocked(secondary, ground))
			follow.YawAngle = secondary;
	}

	/// <summary>
	/// Flags mode zero to snap its yaw directly behind the target on the next update.
	/// </summary>
	[Original(0x004D8598)]
	public static void RequestSnapBehind()
	{
		if (FieldCameraController.ActiveModeIndex == 0 && FieldCameraController.Modes[0] is FieldCameraFollowMode follow)
			follow.SnapBehindRequested = 1;
	}

	/// <summary>
	/// Applies external eye and target offsets to the active follow mode (0 through 3) using the local player heading.
	/// </summary>
	/// <param name="eyeOffset">The target-relative eye offset.</param>
	/// <param name="targetOffset">The entity-relative look-target offset.</param>
	[Original(0x004D85BC)]
	public static void SetExternalView(Vector3 eyeOffset, Vector3 targetOffset)
	{
		PlayerCharacter? localPlayer = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		int yaw = localPlayer is not null ? localPlayer.Heading + 0x8000 : 0x8000;
		byte modeIndex = FieldCameraController.ActiveModeIndex;
		if (modeIndex <= 3 && FieldCameraController.Modes[modeIndex] is FieldCameraFollowMode follow)
			follow.ApplyExternalView(eyeOffset, targetOffset, yaw);
	}

	/// <summary>
	/// Enables a fixed world-space cutscene eye and target override.
	/// </summary>
	/// <param name="eye">The cutscene camera eye position.</param>
	/// <param name="target">The cutscene camera look target.</param>
	[Original(0x004D8610)]
	public static void SetCutsceneFixedView(Vector3 eye, Vector3 target)
	{
		FieldCameraController.CutsceneViewFlags |= 1;
		FieldCameraController.CutsceneEye = eye;
		FieldCameraController.CutsceneTarget = target;
	}

	/// <summary>
	/// Forwards a fixed cutscene eye and target override to <see cref="SetCutsceneFixedView"/>.
	/// </summary>
	/// <param name="eye">The cutscene camera eye position.</param>
	/// <param name="target">The cutscene camera look target.</param>
	[Original(0x004D5D48)]
	public static void ApplyCutsceneFixedView(Vector3 eye, Vector3 target) => SetCutsceneFixedView(eye, target);

	/// <summary>
	/// Enables a cutscene view from a fixed eye looking at the player in <paramref name="targetClientId"/>.
	/// </summary>
	/// <param name="eye">The cutscene camera eye position.</param>
	/// <param name="targetClientId">The player slot identifier to look at.</param>
	[Original(0x004D865C)]
	public static void SetCutscenePlayerView(Vector3 eye, short targetClientId)
	{
		FieldCameraController.CutsceneViewFlags |= 2;
		FieldCameraController.CutsceneEye = eye;
		FieldCameraController.CutsceneTargetClientId = targetClientId;
	}

	/// <summary>
	/// Clears all cutscene camera overrides and rebinds the local player entity as the camera target.
	/// </summary>
	[Original(0x004D869C)]
	public static void ClearCutsceneView()
	{
		FieldCameraController.CutsceneViewFlags = 0;
		FieldCameraController.CutsceneTargetClientId = -1;
		FieldCameraController.BindTargetEntity(PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId()));
	}

	/// <summary>
	/// Sweeps ahead of the moving target entity to detect obstructions between camera eye and predicted target point.
	/// </summary>
	/// <param name="ground">The ground collision query.</param>
	/// <returns><see langword="true"/> when the look-ahead sweep hits geometry; otherwise <see langword="false"/>.</returns>
	[Original(0x004D235C)]
	public bool ResolveLookAheadCollision(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		int next = StepState + 1;
		int limit = unchecked((short)(30 * IdleTurnThresholdSeconds));
		StepState = limit + 30 == next ? limit : next;
		if (TargetEntity is not PlayerCharacter entity || FieldCameraController.Current is not FieldCameraController controller)
			return false;
		Vector3 delta = Vector3.Subtract(entity.Position, entity.PreviousPosition);
		float moveDistance = delta.Length();
		double probeDistance;
		if (moveDistance < 1.0f)
		{
			Vector3 cameraForward = Matrix4x4.Identity.RotateY(controller.YawAngle).TransformDirection(new Vector3(0.0f, 0.0f, -1.0f));
			Vector3 playerForward = Matrix4x4.Identity.RotateY(entity.Heading).TransformDirection(new Vector3(0.0f, 0.0f, -1.0f));
			float alignment = (float)Vector3.Dot(cameraForward, playerForward);
			probeDistance = FloatingPointMath.Absolute(alignment) <= 0.25f ? moveDistance * 13.0f : 0.0f;
		}
		else
		{
			probeDistance = moveDistance * 13.0f;
		}
		Vector3 sweepDirection = Vector3.Subtract(controller.Eye, controller.Target);
		if (sweepDirection.Length() != 0.0f)
			Vector3.Normalize(ref sweepDirection);
		Vector3 probeEnd = new(
			(float)((double)sweepDirection.X * probeDistance + entity.Position.X),
			controller.Target.Y,
			(float)((double)probeDistance * sweepDirection.Z + entity.Position.Z));
		GroundContact? hit = ground.Sweep(controller.Eye, probeEnd, 0x100);
		if (hit is not GroundContact contact)
			return false;
		LookAheadCollisionPoint = new Vector3(
			(float)((double)contact.Position.X - ((double)sweepDirection.X + sweepDirection.X)),
			(float)((double)contact.Position.Y - ((double)sweepDirection.Y + sweepDirection.Y)),
			(float)((double)contact.Position.Z - ((double)sweepDirection.Z + sweepDirection.Z)));
		return true;
	}

	/// <summary>
	/// Resets offsets to the active follow preset and snaps the desired yaw behind the target when requested.
	/// </summary>
	/// <param name="canCenterView">Optional predicate indicating whether preset cycling input is enabled.</param>
	/// <param name="centerButtonDown">Optional predicate indicating whether a preset cycle step should occur.</param>
	/// <param name="nextPresetPressed">Optional flag cycling to the next preset.</param>
	/// <param name="prevPresetPressed">Optional flag cycling to the previous preset.</param>
	[Original(0x004D80A4)]
	public void ResetToFieldState(
		Func<bool>? canCenterView = null,
		Func<bool>? centerButtonDown = null,
		bool nextPresetPressed = false,
		bool prevPresetPressed = false)
	{
		int operationMode = SoundSelection.CurrentMode();
		if (operationMode == 11 || operationMode == 30 || operationMode == 33)
			return;
		if ((BehaviorFlags & 8u) == 0)
		{
			if (canCenterView?.Invoke() ?? false)
			{
				if (nextPresetPressed)
					FieldCameraController.SelectNextFollowPreset();
				else if (prevPresetPressed)
					FieldCameraController.SelectPreviousFollowPreset();
			}
			_ = centerButtonDown;
			if (TargetEntity is not null)
				SetDesiredYaw(TargetEntity.Heading + 0x8000);
			FieldCameraModeSettings preset = FieldCameraController.FollowPresets[FieldCameraController.FollowPresetIndex];
			PresetEyeOffset = preset.EyeOffset;
			PresetTargetOffset = preset.LookOffset;
		}
		BehaviorFlags &= ~8u;
	}

	/// <summary>
	/// Advances the third-person follow camera for the current frame.
	/// </summary>
	[Original(0x004D7698)]
	public override void OnUpdate() => UpdateFollow(EmptyGroundCollision.Instance);

	/// <summary>
	/// Advances the third-person follow camera using explicit area and input queries for host integration.
	/// </summary>
	/// <param name="ground">The ground collision query (preserved for signature symmetry).</param>
	/// <param name="inCombatCameraArea">Whether combat vertical aim adjustment is enabled in the current area.</param>
	/// <param name="railDirection">Active scripted rail direction sign.</param>
	/// <param name="railWeight">Active scripted rail weight.</param>
	/// <param name="forceSnapBehind">Whether the user pressed the snap-camera-behind input.</param>
	public void UpdateFollow(
		IGroundCollision ground,
		bool inCombatCameraArea = false,
		short railDirection = 0,
		float railWeight = 0.0f,
		bool forceSnapBehind = false)
	{
		_ = ground;
		PlayerCharacter? resolvedTarget = PlayerCharacter.GetSlot(TargetClientId);
		TargetEntity = resolvedTarget;
		if (resolvedTarget is null)
		{
			PlayerCharacter? local = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
			TargetEntity = local;
			if (local is not null)
				TargetClientId = unchecked((ushort)local.PlayerIndex);
			Flags = 0;
			return;
		}
		PlayerCharacter? localPlayer = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		if (localPlayer is not null && (resolvedTarget.MapId != localPlayer.MapId ||
			(TargetClientId != Scene2TransitionOverlay.GetDisplayId() && (resolvedTarget.StatusFlags & 0x4000u) != 0)))
		{
			FieldCameraController.BindTargetEntity(localPlayer);
			return;
		}
		if (FirstPersonActive != 0)
		{
			IdleFrames = 0;
			FieldOfView = Angle.StepTowards(unchecked((ushort)FieldOfView), 8920, 182);
		}
		else
		{
			FieldOfView = Angle.StepTowards(unchecked((ushort)FieldOfView), 14017, 182);
		}
		if (inCombatCameraArea)
			PresetEyeOffset = PresetEyeOffset with { Y = 20.424995f };
		OnTargetLocked(resolvedTarget, 0);
		if (TryApplyCutsceneView())
		{
			ExitFirstPerson();
			BehaviorFlags = 0;
			return;
		}
		if (StepState == 0)
		{
			FieldCameraModeSettings preset = FieldCameraController.FollowPresets[FieldCameraController.FollowPresetIndex];
			Target = new Vector3(resolvedTarget.Position.X, (float)(preset.LookOffset.Y + (double)resolvedTarget.Position.Y), resolvedTarget.Position.Z);
			StepState = 1;
			YawAngle = resolvedTarget.Heading + 0x8000;
			BehaviorFlags = 0;
			return;
		}
		if (StepState != 1)
		{
			BehaviorFlags = 0;
			return;
		}
		if ((forceSnapBehind && FirstPersonActive == 0) || SnapBehindRequested != 0)
		{
			SnapBehindRequested = 0;
			YawAngle = resolvedTarget.Heading + 0x8000;
		}
		if (((uint)resolvedTarget.CollisionFlags & 0x100020u) != 0)
			IdleFrames = 0;
		else if (((uint)resolvedTarget.CollisionFlags & 0x800u) != 0)
		{
			IdleFrames = 0;
			ApplyRailYaw(railDirection, railWeight);
		}
		else
			UpdateFollowYaw();
		ComputeEyeFromYaw();
		ComputeTargetAndVerticalAim(inCombatCameraArea);
		BehaviorFlags = 0;
	}
}
