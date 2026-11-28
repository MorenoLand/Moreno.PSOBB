using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Spherical character-creation and preview orbit mode (mode eight) with intro transition and idle drift.
/// </summary>
public sealed class FieldCameraPreviewOrbitMode : FieldCameraMode
{
	private static readonly (float MaxScale, float MinScale)[] ClassBodyScaleRanges =
	[
		(15.0f, 20.0f),
		(14.0f, 18.0f),
		(18.0f, 21.5f),
		(16.0f, 20.0f),
		(17.0f, 21.0f),
		(14.5f, 19.0f),
		(14.5f, 17.5f),
		(16.5f, 20.0f),
		(14.0f, 17.5f),
		(13.0f, 18.0f),
		(14.8f, 20.5f),
		(14.2f, 18.3f),
	];

	private static readonly (float MinHeight, float MaxHeight)[] ClassHeightRanges =
	[
		(1.05f, 1.58f),
		(1.18f, 1.53f),
		(1.50f, 1.88f),
		(1.23f, 1.63f),
		(1.30f, 1.65f),
		(1.13f, 1.58f),
		(1.08f, 1.38f),
		(1.28f, 1.68f),
		(1.08f, 1.48f),
		(1.08f, 1.50f),
		(1.20f, 1.70f),
		(1.13f, 1.50f),
	];

	/// <summary>
	/// Initializes the preview orbit camera mode with default radius, target offset, and sub-state zero.
	/// </summary>
	/// <param name="initialTargetHeight">Initial target vertical offset matching the active preview character.</param>
	[Original(0x004EB334)]
	public FieldCameraPreviewOrbitMode(float initialTargetHeight = 0.0f)
	{
		Flags = 0;
		FieldCameraController.PreviewOrbitSubState = 0;
		Target = new Vector3(0.0f, initialTargetHeight, 0.0f);
		OrbitYawAngle = 0;
		OrbitPitchAngle = 0;
		PresetModeState = 0;
		OrbitRadius = 30.0f;
		ViewportPreset = 2;
		FrameCounter = 0;
		AuxiliaryCounter = 0;
		RadiusVelocity = 0.0f;
		TargetHeightVelocity = 0.0f;
		FieldOfView = 17294;
	}

	/// <summary>Gets or sets the spherical distance from target to eye.</summary>
	public float OrbitRadius { get; set; }

	/// <summary>Gets or sets the preview spherical pitch angle in 16-bit turn units.</summary>
	public int OrbitPitchAngle { get; set; }

	/// <summary>Gets or sets the preview spherical yaw angle in 16-bit turn units.</summary>
	public int OrbitYawAngle { get; set; }

	/// <summary>Gets or sets the preview orbit preset mode flag.</summary>
	public int ViewportPreset { get; set; }

	/// <summary>Gets or sets an auxiliary counter cleared on construction.</summary>
	public int PresetModeState { get; set; }

	/// <summary>Gets or sets the starting radius captured when beginning the intro zoom curve.</summary>
	public float IntroStartRadius { get; set; }

	/// <summary>Gets or sets the preview intro or idle orbit frame counter.</summary>
	public int FrameCounter { get; set; }

	/// <summary>Gets or sets an auxiliary timer counter cleared on construction.</summary>
	public int AuxiliaryCounter { get; set; }

	/// <summary>Gets or sets the damped radial velocity used during menu focus transitions.</summary>
	public float RadiusVelocity { get; set; }

	/// <summary>Gets or sets the damped vertical target velocity used during menu focus transitions.</summary>
	public float TargetHeightVelocity { get; set; }

	/// <summary>
	/// Updates <see cref="FieldCameraMode.Eye"/> from the spherical radius, pitch, and yaw around <see cref="FieldCameraMode.Target"/>.
	/// </summary>
	[Original(0x004EA5A8)]
	public void UpdateEyeFromSpherical()
	{
		float eyeY = (float)(FixedPointTrigonometry.Sine(OrbitPitchAngle) * OrbitRadius + Target.Y);
		float horizontal = (float)(FixedPointTrigonometry.Cosine(OrbitPitchAngle) * OrbitRadius);
		float eyeX = (float)(FixedPointTrigonometry.Sine(OrbitYawAngle) * horizontal);
		float eyeZ = (float)(FixedPointTrigonometry.Cosine(OrbitYawAngle) * horizontal);
		Eye = new Vector3(eyeX, eyeY, eyeZ);
	}

	/// <summary>
	/// Computes the preview character height scale factor from class and body proportion slider ratio.
	/// </summary>
	/// <param name="classIndex">Character class index (0 through 11).</param>
	/// <param name="heightRatio">Normalized height slider value.</param>
	/// <returns>The interpolated character height scale.</returns>
	[Original(0x004E68D0)]
	public static float ComputeCharacterHeightScale(byte classIndex, float heightRatio) =>
		(float)ComputeCharacterHeightScaleExact(classIndex, heightRatio);

	private static double ComputeCharacterHeightScaleExact(byte classIndex, float heightRatio)
	{
		float ratio = heightRatio < 0.0f || heightRatio > 1.0f ? 0.0f : heightRatio;
		(float maxScale, float minScale) = classIndex < ClassBodyScaleRanges.Length
			? ClassBodyScaleRanges[classIndex]
			: (0.0f, 0.0f);
		return ((double)maxScale - minScale) * ratio + minScale;
	}

	/// <summary>
	/// Configures initial radius and target height for the preview intro zoom animation and enters sub-state two.
	/// </summary>
	/// <param name="classIndex">Character class index (0 through 11).</param>
	/// <param name="heightRatio">Normalized height slider value.</param>
	[Original(0x004EB0E8)]
	public void BeginPreviewIntro(byte classIndex, float heightRatio)
	{
		float heightScale = ComputeCharacterHeightScale(classIndex, heightRatio);
		float startRadius = (float)(heightScale * 0.375);
		OrbitRadius = startRadius;
		IntroStartRadius = startRadius;
		(float minY, float maxY) = classIndex < ClassHeightRanges.Length ? ClassHeightRanges[classIndex] : (1.0f, 1.0f);
		float targetY = (float)(((1.0f - (double)heightRatio) * ((double)maxY - minY) + minY) * 10.0);
		FieldCameraController.PreviewOrbitSubState = 2;
		Target = Target with { Y = targetY };
		FrameCounter = 120;
		OrbitYawAngle = 0;
		OrbitPitchAngle = 0;
	}

	/// <summary>
	/// Advances the 120-frame cosine zoom intro animation and switches to idle auto-orbit sub-state three when finished.
	/// </summary>
	[Original(0x004EB15C)]
	public void AdvanceZoomIntro()
	{
		int next = FrameCounter - 1;
		if (next <= 0)
		{
			FrameCounter = 0;
			FieldCameraController.PreviewOrbitSubState = 3;
			return;
		}
		FrameCounter = next;
		OrbitRadius = (float)(IntroStartRadius
			+ (25.0 - IntroStartRadius) * ((FixedPointTrigonometry.Cosine((next << 15) / 120) + 1.0) * 0.5));
	}

	/// <summary>
	/// Drives periodic idle yaw and radius oscillation when no user input is active, or switches to manual orbit sub-state four on input.
	/// </summary>
	/// <param name="hasUserInput">Whether any camera control input was pressed.</param>
	[Original(0x004EB1C8)]
	public void UpdateIdleAutoOrbit(bool hasUserInput = false)
	{
		if (hasUserInput)
		{
			FrameCounter = 0;
			FieldCameraController.PreviewOrbitSubState = 4;
			return;
		}
		int count = FrameCounter + 1;
		FrameCounter = count;
		if ((count & 0x100) != 0)
		{
			if (OrbitPitchAngle <= -109 || OrbitPitchAngle >= 109)
				OrbitPitchAngle += OrbitPitchAngle < 0 ? 109 : -109;
			else
				OrbitPitchAngle = 0;
			switch ((count >> 9) & 3)
			{
				case 0:
					OrbitYawAngle += 218;
					break;
				case 1:
					OrbitRadius = (float)((double)OrbitRadius + -0.03333333507180214);
					break;
				case 2:
					OrbitYawAngle -= 218;
					break;
				default:
					OrbitRadius = (float)((double)OrbitRadius + 0.03333333507180214);
					break;
			}
		}
	}

	/// <summary>
	/// Applies manual height panning, analog/button yaw/pitch rotation, and trigger zooming for preview orbit sub-state four.
	/// </summary>
	[Original(0x004EA5F0)]
	public void UpdateManualOrbit(
		bool panUp,
		bool panDown,
		bool rotateLeft,
		bool rotateRight,
		int stickAngle,
		float stickMagnitude,
		float leftTrigger,
		float rightTrigger,
		float heightStep,
		float zoomStep,
		bool clampPitchAtZero = false,
		bool anyActivity = false)
	{
		if (panUp)
		{
			double y = (double)heightStep + Target.Y;
			Target = Target with { Y = y <= 20.0 ? (float)y : 20.0f };
		}
		else if (panDown)
		{
			double y = (double)Target.Y - heightStep;
			Target = Target with { Y = y >= 1.0 ? (float)y : 1.0f };
		}
		if (stickMagnitude == 0.0f)
		{
			if (rotateRight)
				OrbitYawAngle += 1092;
			else if (rotateLeft)
				OrbitYawAngle -= 1092;
		}
		else
		{
			OrbitYawAngle = FloatingPointMath.TruncateToInt32(
				FixedPointTrigonometry.Sine(stickAngle) * (1092.0f * stickMagnitude) + OrbitYawAngle);
			int pitch = FloatingPointMath.TruncateToInt32(
				FixedPointTrigonometry.Cosine(stickAngle) * (1092.0f * stickMagnitude) + OrbitPitchAngle);
			int minPitch = clampPitchAtZero ? 0 : -11196;
			if (pitch <= 11196)
			{
				if (pitch <= minPitch)
					pitch = minPitch;
				OrbitPitchAngle = pitch;
			}
			else
			{
				OrbitPitchAngle = 11196;
			}
		}
		OrbitRadius = (float)(leftTrigger * zoomStep + OrbitRadius);
		double radius = rightTrigger * -(double)zoomStep + OrbitRadius;
		if (radius <= 80.0)
		{
			if (radius <= 20.0)
				radius = 20.0;
			OrbitRadius = (float)radius;
		}
		else
		{
			OrbitRadius = 80.0f;
		}
		if (stickMagnitude > 0.0f || anyActivity)
		{
			FrameCounter = 0;
		}
		else
		{
			int idle = FrameCounter + 1;
			FrameCounter = idle;
			if (idle > 150)
				FieldCameraController.PreviewOrbitSubState = 3;
		}
	}

	/// <summary>
	/// Smoothly transitions <see cref="FieldCameraMode.Target"/> height and <see cref="OrbitRadius"/> toward preset targets based on the active character-making menu step.
	/// </summary>
	/// <param name="menuStep">The active character-creation menu step index.</param>
	/// <param name="hasPreviewCharacter">Whether a preview character model is currently loaded.</param>
	/// <param name="classIndex">Character class index (0 through 11).</param>
	/// <param name="heightRatio">Normalized height slider value.</param>
	[Original(0x004EA854)]
	public void UpdateMenuFocusTransition(int menuStep, bool hasPreviewCharacter, byte classIndex, float heightRatio)
	{
		int desiredPreset = menuStep < 0
			? 2
			: menuStep <= 2 || menuStep == 4
				? 0
				: menuStep == 6 || menuStep == 8
					? 1
					: 2;

		if (desiredPreset == ViewportPreset)
		{
			PresetModeState = 0;
		}
		else
		{
			int elapsed = PresetModeState + 1;
			if (elapsed <= 30)
			{
				PresetModeState = elapsed;
			}
			else
			{
				PresetModeState = 0;
				ViewportPreset = desiredPreset;
			}
		}

		if (!hasPreviewCharacter)
			return;

		double heightScale = ComputeCharacterHeightScaleExact(classIndex, heightRatio);
		double targetRadius;
		double targetHeight;
		switch (ViewportPreset)
		{
			case 0:
				targetRadius = 0.5f * heightScale;
				targetHeight = 0.9100000262260437f * heightScale;
				break;
			case 1:
				targetRadius = 25.0f;
				targetHeight = 11.0f;
				break;
			case 2:
				targetRadius = 1.25f * heightScale;
				targetHeight = 0.550000011920929f * heightScale;
				break;
			default:
				return;
		}

		float radius = OrbitRadius;
		float radiusVelocity = RadiusVelocity;
		StepFocusAxis(ref radius, ref radiusVelocity, targetRadius);
		OrbitRadius = radius;
		RadiusVelocity = radiusVelocity;

		float targetY = Target.Y;
		float targetHeightVelocity = TargetHeightVelocity;
		StepFocusAxis(ref targetY, ref targetHeightVelocity, targetHeight);
		Target = Target with { Y = targetY };
		TargetHeightVelocity = targetHeightVelocity;

		OrbitYawAngle = Angle.StepTowards(unchecked((ushort)OrbitYawAngle), 0, 192);
		OrbitPitchAngle = Angle.StepTowards(unchecked((ushort)OrbitPitchAngle), 0, 192);
	}

	private static void StepFocusAxis(ref float value, ref float velocity, double target)
	{
		const float Acceleration = 0.003000000026077032f;
		const float MinimumSpeed = 0.006666666828095913f;
		const float MaximumSpeed = 0.10000000149011612f;
		const float NegativeMinimumSpeed = -0.006666666828095913f;
		const float NegativeMaximumSpeed = -0.10000000149011612f;

		double delta = target - (double)value;
		double step;
		if (delta > (double)MaximumSpeed)
		{
			double next = (double)Acceleration + velocity;
			if (next > (double)MaximumSpeed)
			{
				velocity = MaximumSpeed;
				step = MaximumSpeed;
			}
			else
			{
				velocity = (float)next;
				step = next;
			}
		}
		else if ((double)MinimumSpeed < delta)
		{
			double next = (double)velocity - Acceleration;
			if (next < (double)MinimumSpeed)
			{
				velocity = MinimumSpeed;
				step = MinimumSpeed;
			}
			else
			{
				velocity = (float)next;
				step = next;
			}
		}
		else if ((double)NegativeMaximumSpeed > delta)
		{
			double next = (double)velocity - Acceleration;
			if (next < (double)NegativeMaximumSpeed)
			{
				velocity = NegativeMaximumSpeed;
				step = NegativeMaximumSpeed;
			}
			else
			{
				velocity = (float)next;
				step = next;
			}
		}
		else if (delta < (double)NegativeMinimumSpeed)
		{
			double next = (double)Acceleration + velocity;
			if (next > (double)NegativeMinimumSpeed)
			{
				velocity = NegativeMinimumSpeed;
				step = NegativeMinimumSpeed;
			}
			else
			{
				velocity = (float)next;
				step = next;
			}
		}
		else
		{
			velocity = 0.0f;
			step = 0.0f;
		}

		value = (float)((double)value + step);
	}

	/// <summary>
	/// Advances the active preview sub-state and recomputes <see cref="FieldCameraMode.Eye"/>.
	/// </summary>
	[Original(0x004EA58C)]
	public override void OnUpdate()
	{
		switch (FieldCameraController.PreviewOrbitSubState)
		{
			case 0:
				UpdateMenuFocusTransition(0, false, 0, 0.0f);
				break;
			case 1:
				BeginPreviewIntro(0, 1.0f);
				break;
			case 2:
				AdvanceZoomIntro();
				break;
			case 3:
				UpdateIdleAutoOrbit();
				break;
			case 4:
				UpdateManualOrbit(false, false, false, false, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				break;
		}
		UpdateEyeFromSpherical();
	}
}
