using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Scenes;

namespace PsoBB.Rendering;

/// <summary>
/// Base behavior and shared state for each of the field camera's thirteen operating modes.
/// </summary>
public class FieldCameraMode
{
	/// <summary>
	/// Initializes a field camera mode with the original default target, field of view, and smoothing rates.
	/// </summary>
	[Original(0x004D1F68)]
	public FieldCameraMode()
	{
	}

	/// <summary>
	/// Gets or sets the entity followed by this camera mode, when any.
	/// </summary>
	public PlayerCharacter? TargetEntity { get; set; }

	/// <summary>
	/// Gets or sets the 16-bit client slot identifier of the attached target, or <see cref="ushort.MaxValue"/> when detached.
	/// </summary>
	public ushort TargetClientId { get; set; } = ushort.MaxValue;

	/// <summary>
	/// Gets or sets the mode step state index.
	/// </summary>
	public int StepState { get; set; }

	/// <summary>
	/// Gets or sets the per-mode frame counter.
	/// </summary>
	public int Timer { get; set; }

	/// <summary>
	/// Gets or sets the mode-local pitch angle in 16-bit turn units.
	/// </summary>
	public int PitchAngle { get; set; }

	/// <summary>
	/// Gets or sets the mode-local yaw angle in 16-bit turn units.
	/// </summary>
	public int YawAngle { get; set; }

	/// <summary>
	/// Gets or sets the mode behavior flags controlling smoothing, collision and target vertical locking.
	/// </summary>
	public uint Flags { get; set; }

	/// <summary>
	/// Gets or sets the eye position computed by this mode.
	/// </summary>
	public Vector3 Eye { get; set; }

	/// <summary>
	/// Gets or sets the target position computed by this mode.
	/// </summary>
	public Vector3 Target { get; set; } = new(0.0f, 0.0f, 1.0f);

	/// <summary>
	/// Gets or sets the field-of-view angle in 16-bit turn units.
	/// </summary>
	public int FieldOfView { get; set; } = 0x36C1;

	/// <summary>
	/// Gets or sets the smoothing speed applied to the camera eye position.
	/// </summary>
	public float EyeSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied to the camera target position.
	/// </summary>
	public float TargetSmoothing { get; set; } = 0.289f;

	/// <summary>
	/// Binds <paramref name="entity"/> to this mode, caches its slot identifier, and notifies subclasses.
	/// </summary>
	/// <param name="entity">The target player entity to attach.</param>
	public void AttachTarget(PlayerCharacter entity)
	{
		ArgumentNullException.ThrowIfNull(entity);
		TargetEntity = entity;
		TargetClientId = unchecked((ushort)entity.PlayerIndex);
		OnTargetAttached(entity);
	}

	/// <summary>
	/// Advances the mode's eye and target calculation for the current frame.
	/// </summary>
	public virtual void OnUpdate()
	{
	}

	/// <summary>
	/// Applies override transition handling when entering or leaving a scripted camera override.
	/// </summary>
	/// <param name="restoring"><see langword="true"/> when restoring from an override; otherwise <see langword="false"/>.</param>
	public virtual void OnOverride(bool restoring)
	{
	}

	/// <summary>
	/// Performs mode setup when selected as the active camera mode.
	/// </summary>
	public virtual void OnActivated()
	{
	}

	/// <summary>
	/// Updates mode-specific state after a new target entity has been bound.
	/// </summary>
	/// <param name="entity">The newly bound target entity.</param>
	protected virtual void OnTargetAttached(PlayerCharacter entity)
	{
	}

	/// <summary>
	/// Performs per-frame post-processing after projection parameters are updated, updating controller angles and applying the look-at view transform.
	/// </summary>
	[Original(0x004D2158)]
	public virtual void OnPostUpdate()
	{
		if (FieldCameraController.Current is not FieldCameraController controller)
			return;
		Vector3 direction = new(
			(float)((double)controller.Target.X - controller.Eye.X),
			(float)((double)controller.Target.Y - controller.Eye.Y),
			(float)((double)controller.Target.Z - controller.Eye.Z));
		if (direction.Length() == 0.0f)
		{
			Vector3.Normalize(ref direction);
			controller.Target = controller.Eye with { Z = (float)((double)controller.Eye.Z + 1.0) };
		}
		else if (direction.X == 0.0f && direction.Z == 0.0f)
		{
			controller.Target = controller.Target with { Z = (float)((double)controller.Target.Z + 0.01f) };
			direction = direction with { Z = 1.0f };
		}
		FieldCameraController.ComputeAnglesFromDirection(direction, out int pitch, out int yaw);
		controller.PitchAngle = pitch;
		controller.YawAngle = yaw;
		Vector3 lookAtTarget = new(
			(float)((double)controller.Target.X + controller.Offset.X),
			(float)((double)controller.Target.Y + controller.Offset.Y),
			(float)((double)controller.Target.Z + controller.Offset.Z));
		CameraView.ApplyLookAt(controller.Eye, lookAtTarget, FieldCameraController.GlobalUpAxis);
		FieldCameraController.GlobalEye = controller.Eye;
	}

	/// <summary>
	/// Performs mode setup when locked onto a target entity with an extra mode parameter.
	/// </summary>
	/// <param name="entity">The target entity, or <see langword="null"/> when cleared.</param>
	/// <param name="parameter">The mode-specific lock parameter.</param>
	public virtual void OnTargetLocked(PlayerCharacter? entity, int parameter)
	{
	}

	/// <summary>
	/// Pushes this mode's eye, target, smoothing speeds, and field of view onto the active camera controller.
	/// </summary>
	[Original(0x004D1FF4)]
	public void ApplyToController()
	{
		if (FieldCameraController.Current is not FieldCameraController controller)
			return;
		controller.DesiredEye = Eye;
		controller.DesiredTarget = Target;
		if ((FieldCameraController.Flags & 0xCu) != 0)
		{
			controller.Eye = Eye;
			controller.Target = Target;
			int slot = Scene2TransitionOverlay.GetDisplayId();
			if ((uint)slot < FieldCameraController.SlotCount)
			{
				controller.SlotEyes[slot] = Eye;
				controller.SlotTargets[slot] = Target;
			}
		}
		controller.EyeSmoothing = EyeSmoothing;
		controller.TargetSmoothing = TargetSmoothing;
		if (FieldOfView != controller.FieldOfView)
		{
			FieldCameraController.Flags |= 0x40u;
			controller.FieldOfView = FieldOfView;
		}
	}
}
