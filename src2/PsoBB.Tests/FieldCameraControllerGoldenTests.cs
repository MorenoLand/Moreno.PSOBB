using System.Text.Json;
using PsoBB.Game;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the field camera controller against vectors produced by the original machine code.
/// </summary>
public sealed class FieldCameraControllerGoldenTests
{
	private const int OverrideSmoothingOffset = 0x30;
	private const int OverrideFovDegreesOffset = 0x34;
	private const int OverrideEyeOffset = 0x3C;
	private const int OverrideTargetOffset = 0x48;
	private const int OffsetOffset = 0x68;
	private const int SlotEyesOffset = 0xD4;
	private const int SlotTargetsOffset = 0x104;
	private const int HasCollisionHitOffset = 0x174;
	private const int EyeOffset = 0x178;
	private const int TargetOffset = 0x184;
	private const int PitchAngleOffset = 0x190;
	private const int YawAngleOffset = 0x194;
	private const int FieldOfViewOffset = 0x19C;
	private const int DesiredEyeOffset = 0x1A0;
	private const int DesiredTargetOffset = 0x1AC;
	private const int EyeSmoothingOffset = 0x1B8;
	private const int TargetSmoothingOffset = 0x1BC;
	private const int OffsetCountdownOffset = 0x1C0;
	private const int OffsetAmplitudeOffset = 0x1C4;
	private const int SnappedEyeOffset = 0x1C8;

	public static IEnumerable<object[]> StepTowardsVectors() => GoldenVectors.Load("004D63B0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("current")),
			GoldenVectors.ReadVector(vector.GetProperty("desired")),
			GoldenVectors.ReadFloat(vector.GetProperty("speed")),
			vector.GetProperty("reached").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("resultCurrent")),
			GoldenVectors.ReadVector(vector.GetProperty("resultDesired")),
		});

	public static IEnumerable<object[]> SmoothFollowVectors() => GoldenVectors.Load("004D3D14.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("snapBefore").GetUInt32(),
			vector.GetProperty("snapAfter").GetUInt32(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> SnapEyeSmoothTargetVectors() => GoldenVectors.Load("004D3C98.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("modeIndex").GetByte(),
			vector.GetProperty("hasMode").GetBoolean(),
			vector.GetProperty("modeFlags").GetUInt32(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> AdvanceFlagsVectors() => GoldenVectors.Load("004D3EF4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("hasCamera").GetBoolean(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> OrientationAxesVectors() => GoldenVectors.Load("004D3FB0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("yaw").GetInt32(),
			vector.GetProperty("pitch").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("right")),
			GoldenVectors.ReadVector(vector.GetProperty("up")),
		});

	/// <summary>
	/// Loads the vectors for the offset countdown step.
	/// </summary>
	/// <returns>Camera object bytes before and after the call.</returns>
	public static IEnumerable<object[]> OffsetVectors() => GoldenVectors.Load("004D3DF4.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	/// <summary>
	/// Loads the vectors for the snap to the requested position.
	/// </summary>
	/// <returns>Camera object bytes before and after the call.</returns>
	public static IEnumerable<object[]> SnapVectors() => GoldenVectors.Load("004D3E90.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> PlayerSlotVectors() => GoldenVectors.Load("0068D5A8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("index").GetInt32(),
			vector.GetProperty("slots").EnumerateArray().Select(item => item.GetBoolean()).ToArray(),
			vector.GetProperty("expectedSlotIndex").GetInt32(),
		});

	public static IEnumerable<object[]> DisplayIdVectors() => GoldenVectors.Load("007BB6D0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("displayId").GetUInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	public static IEnumerable<object[]> ApplyModeVectors() => GoldenVectors.Load("004D1FF4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("displayId").GetInt32(),
			Convert.FromHexString(vector.GetProperty("modeInput").GetString()!),
			Convert.FromHexString(vector.GetProperty("cameraInput").GetString()!),
			Convert.FromHexString(vector.GetProperty("cameraOutput").GetString()!),
		});

	public static IEnumerable<object[]> CopyStackCurrentVectors() => GoldenVectors.Load("00831650.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> ReplaceStackCurrentVectors() => GoldenVectors.Load("0083B410.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> CaptureInverseStackVectors() => GoldenVectors.Load("00782984.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("input")),
			GoldenVectors.ReadMatrix(vector.GetProperty("inverse")),
			GoldenVectors.ReadMatrix(vector.GetProperty("topAfter")),
			vector.GetProperty("depthAfter").GetInt32(),
		});

	public static IEnumerable<object[]> ViewportProjectionVectors() => GoldenVectors.Load("00836100.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("projection")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> ComputeAnglesVectors() => GoldenVectors.Load("004D6448.json")
		.Select(vector => new object[]
		{
			ReadVector(vector.GetProperty("direction")),
			vector.GetProperty("pitch").GetInt32(),
			vector.GetProperty("yaw").GetInt32(),
		});

	public static IEnumerable<object[]> TargetClientIdVectors() => GoldenVectors.Load("004D30D4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasCamera").GetBoolean(),
			vector.GetProperty("hasTarget").GetBoolean(),
			vector.GetProperty("playerIndex").GetInt32(),
			vector.GetProperty("result").GetUInt16(),
		});

	public static IEnumerable<object[]> RequestTemporaryModeVectors() => GoldenVectors.Load("004D3180.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("activeBefore").GetByte(),
			vector.GetProperty("activeAfter").GetByte(),
			vector.GetProperty("prevBefore").GetByte(),
			vector.GetProperty("prevAfter").GetByte(),
			vector.GetProperty("requested").GetByte(),
			vector.GetProperty("result").GetBoolean(),
		});

	public static IEnumerable<object[]> ReleaseTemporaryModeVectors() => GoldenVectors.Load("004D31DC.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
		});

	public static IEnumerable<object[]> RestoreDefaultTargetVectors() => GoldenVectors.Load("004D3250.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("activeMode").GetByte(),
			vector.GetProperty("storedFov").GetInt32(),
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("playerIndex").GetInt32(),
			ReadVector(vector.GetProperty("mode0Eye")),
			ReadVector(vector.GetProperty("mode0Target")),
			vector.GetProperty("mode5FovAfter").GetInt32(),
			vector.GetProperty("mode0ClientIdAfter").GetUInt16(),
			vector.GetProperty("mode5ClientIdAfter").GetUInt16(),
			Convert.FromHexString(vector.GetProperty("cameraOutput").GetString()!),
		});

	public static IEnumerable<object[]> CopyOverrideVectors() => GoldenVectors.Load("004D3374.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flags").GetUInt32(),
			ReadVector(vector.GetProperty("modeEyeAfter")),
			ReadVector(vector.GetProperty("modeTargetAfter")),
			vector.GetProperty("modeFovAfter").GetInt32(),
		});

	public static IEnumerable<object[]> BindTargetVectors() => GoldenVectors.Load("004D2FB4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("playerIndex").GetInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("mode0ClientIdAfter").GetUInt16(),
			vector.GetProperty("mode2ClientIdAfter").GetUInt16(),
			vector.GetProperty("controllerAttached").GetBoolean(),
			Convert.FromHexString(vector.GetProperty("cameraOutput").GetString()!),
		});

	public static IEnumerable<object[]> LockTargetVectors() => GoldenVectors.Load("004D307C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("playerIndex").GetInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("modeClientIdAfter").GetUInt16(),
			vector.GetProperty("controllerAttached").GetBoolean(),
		});

	public static IEnumerable<object[]> ShakePresetVectors() => GoldenVectors.Load("004D4288.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("preset").GetInt32(),
			vector.GetProperty("countdown").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("amplitude")),
		});

	public static IEnumerable<object[]> ShakeCustomVectors() => GoldenVectors.Load("004D430C.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("amplitudeInput")),
			vector.GetProperty("durationInput").GetUInt32(),
			vector.GetProperty("countdown").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("amplitudeOutput")),
		});

	public static IEnumerable<object[]> SelectModeVectors() => GoldenVectors.Load("004D3AA0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("initialMode").GetByte(),
			vector.GetProperty("targetMode").GetByte(),
			vector.GetProperty("hasMode").GetBoolean(),
			vector.GetProperty("activeModeAfter").GetByte(),
		});

	public static IEnumerable<object[]> ResolveSnappedCollisionVectors() => GoldenVectors.Load("004D3BA8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hit").GetBoolean(),
			ReadVector(vector.GetProperty("hitPosition")),
			ReadVector(vector.GetProperty("hitNormal")),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> ResolveTargetCollisionVectors() => GoldenVectors.Load("004D3D6C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hit").GetBoolean(),
			ReadVector(vector.GetProperty("hitPosition")),
			ReadVector(vector.GetProperty("hitNormal")),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> UpdateModeSelectionVectors() => GoldenVectors.Load("004D3974.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("activeBefore").GetByte(),
			vector.GetProperty("activeAfter").GetByte(),
			vector.GetProperty("previousMode").GetByte(),
			vector.GetProperty("modeOffset").GetInt32(),
			vector.GetProperty("displayId").GetUInt32(),
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("playerIndex").GetInt32(),
			ReadVector(vector.GetProperty("mode0Eye")),
			ReadVector(vector.GetProperty("mode0Target")),
			vector.GetProperty("expectedMode0ClientId").GetUInt16(),
			vector.GetProperty("expectedMode0Attached").GetBoolean(),
			vector.GetProperty("expectedMode3ClientId").GetUInt16(),
			vector.GetProperty("expectedMode3Attached").GetBoolean(),
			vector.GetProperty("expectedControllerAttached").GetBoolean(),
			Convert.FromHexString(vector.GetProperty("cameraOutput").GetString()!),
		});

	[Theory]
	[MemberData(nameof(StepTowardsVectors))]
	public void StepTowardsMatchesTheMachineCode(Vector3 current, Vector3 desired, float speed, bool expectedReached, Vector3 expectedCurrent, Vector3 expectedDesired)
	{
		bool reached = FieldCameraController.StepTowards(ref current, ref desired, speed);
		Assert.Equal(expectedReached, reached);
		GoldenVectors.AssertVector(expectedCurrent, current);
		GoldenVectors.AssertVector(expectedDesired, desired);
	}

	[Theory]
	[MemberData(nameof(SmoothFollowVectors))]
	public void SmoothFollowDesiredMatchesTheMachineCode(uint snapBefore, uint snapAfter, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.SnapRequested = snapBefore;
			FieldCameraController controller = new()
			{
				DesiredEye = ReadVector(input, DesiredEyeOffset),
				DesiredTarget = ReadVector(input, DesiredTargetOffset),
				Eye = ReadVector(input, EyeOffset),
				Target = ReadVector(input, TargetOffset),
				SnappedEye = ReadVector(input, SnappedEyeOffset),
				EyeSmoothing = BitConverter.ToSingle(input, EyeSmoothingOffset),
				TargetSmoothing = BitConverter.ToSingle(input, TargetSmoothingOffset),
			};

			controller.SmoothFollowDesired();

			Assert.Equal(snapAfter, FieldCameraController.SnapRequested);
			GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(output, TargetOffset), controller.Target);
			GoldenVectors.AssertVector(ReadVector(output, DesiredEyeOffset), controller.DesiredEye);
			GoldenVectors.AssertVector(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
			GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(SnapEyeSmoothTargetVectors))]
	public void SnapEyeAndSmoothTargetMatchesTheMachineCode(byte modeIndex, bool hasMode, uint modeFlags, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.ActiveModeIndex = modeIndex;
			if (hasMode)
				FieldCameraController.Modes[modeIndex] = new FieldCameraMode { Flags = modeFlags };

			FieldCameraController controller = new()
			{
				DesiredEye = ReadVector(input, DesiredEyeOffset),
				DesiredTarget = ReadVector(input, DesiredTargetOffset),
				Eye = ReadVector(input, EyeOffset),
				Target = ReadVector(input, TargetOffset),
				SnappedEye = ReadVector(input, SnappedEyeOffset),
				TargetSmoothing = BitConverter.ToSingle(input, TargetSmoothingOffset),
			};

			controller.SnapEyeAndSmoothTarget();

			GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(output, TargetOffset), controller.Target);
			GoldenVectors.AssertVector(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
			GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(AdvanceFlagsVectors))]
	public void AdvanceFlagsAndClearOverrideMatchesTheMachineCode(uint flagsBefore, uint flagsAfter, bool hasCamera, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController? controller = null;
			if (hasCamera)
			{
				controller = new FieldCameraController();
				controller.OverrideRequest.Smoothing = BitConverter.ToSingle(input, OverrideSmoothingOffset);
				controller.OverrideRequest.FieldOfViewDegrees = BitConverter.ToInt32(input, OverrideFovDegreesOffset);
				controller.OverrideRequest.Eye = ReadVector(input, OverrideEyeOffset);
				controller.OverrideRequest.Target = ReadVector(input, OverrideTargetOffset);
				FieldCameraController.Current = controller;
			}

			FieldCameraController.AdvanceFlagsAndClearOverride();

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			if (controller is not null)
			{
				GoldenVectors.AssertFloat(BitConverter.ToSingle(output, OverrideSmoothingOffset), controller.OverrideRequest.Smoothing);
				Assert.Equal(BitConverter.ToInt32(output, OverrideFovDegreesOffset), controller.OverrideRequest.FieldOfViewDegrees);
				GoldenVectors.AssertVector(ReadVector(output, OverrideEyeOffset), controller.OverrideRequest.Eye);
				GoldenVectors.AssertVector(ReadVector(output, OverrideTargetOffset), controller.OverrideRequest.Target);
			}
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(OrientationAxesVectors))]
	public void UpdateOrientationAxesMatchesTheMachineCode(int yaw, int pitch, Vector3 expectedRight, Vector3 expectedUp)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new()
			{
				YawAngle = yaw,
				PitchAngle = pitch,
			};

			controller.UpdateOrientationAxes();

			GoldenVectors.AssertVector(expectedRight, FieldCameraController.RightAxis);
			GoldenVectors.AssertVector(expectedUp, FieldCameraController.UpAxis);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	/// <summary>
	/// Stepping the offset countdown decrements it and updates the vertical offset exactly as the original does.
	/// </summary>
	/// <param name="input">The camera object before the call.</param>
	/// <param name="output">The camera object after the call.</param>
	[Theory]
	[MemberData(nameof(OffsetVectors))]
	public void StepOffsetCountdownMatchesTheMachineCode(byte[] input, byte[] output)
	{
		FieldCameraController controller = new()
		{
			Offset = ReadVector(input, OffsetOffset),
			OffsetCountdown = BitConverter.ToUInt32(input, OffsetCountdownOffset),
			OffsetAmplitude = BitConverter.ToSingle(input, OffsetAmplitudeOffset),
		};

		controller.StepOffsetCountdown();

		GoldenVectors.AssertVector(ReadVector(output, OffsetOffset), controller.Offset);
		Assert.Equal(BitConverter.ToUInt32(output, OffsetCountdownOffset), controller.OffsetCountdown);
		Assert.Equal(BitConverter.ToSingle(output, OffsetAmplitudeOffset), controller.OffsetAmplitude);
	}

	/// <summary>
	/// Snapping sets the current eye and target and records the eye exactly as the original does.
	/// </summary>
	/// <param name="input">The camera object before the call.</param>
	/// <param name="output">The camera object after the call.</param>
	[Theory]
	[MemberData(nameof(SnapVectors))]
	public void SnapToDesiredMatchesTheMachineCode(byte[] input, byte[] output)
	{
		FieldCameraController controller = new()
		{
			DesiredEye = ReadVector(input, DesiredEyeOffset),
			DesiredTarget = ReadVector(input, DesiredTargetOffset),
			Eye = ReadVector(input, EyeOffset),
			Target = ReadVector(input, TargetOffset),
			SnappedEye = ReadVector(input, SnappedEyeOffset),
		};

		controller.SnapToDesired();

		Assert.Equal(ReadVector(output, EyeOffset), controller.Eye);
		Assert.Equal(ReadVector(output, TargetOffset), controller.Target);
		Assert.Equal(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		Assert.Equal(ReadVector(output, DesiredEyeOffset), controller.DesiredEye);
		Assert.Equal(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
	}

	[Theory]
	[MemberData(nameof(PlayerSlotVectors))]
	public void GetPlayerSlotMatchesTheMachineCode(int index, bool[] occupiedSlots, int expectedSlotIndex)
	{
		PlayerCharacter.ResetGlobals();
		try
		{
			PlayerAnimationSet animations = PlayerAnimationSet.Empty;
			for (int i = 0; i < occupiedSlots.Length; i++)
			{
				if (occupiedSlots[i])
					PlayerCharacter.Slots[i] = PlayerCharacter.Create(i, default, 0, animations);
			}

			PlayerCharacter? result = PlayerCharacter.GetSlot(index);
			if (expectedSlotIndex < 0)
				Assert.Null(result);
			else
				Assert.Same(PlayerCharacter.Slots[expectedSlotIndex], result);
		}
		finally
		{
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(DisplayIdVectors))]
	public void GetDisplayIdMatchesTheMachineCode(uint displayId, int expected)
	{
		Scene2TransitionOverlay.Reset();
		try
		{
			Scene2TransitionOverlay.DisplayId = displayId;
			Assert.Equal(expected, Scene2TransitionOverlay.GetDisplayId());
		}
		finally
		{
			Scene2TransitionOverlay.Reset();
		}
	}

	[Theory]
	[MemberData(nameof(ApplyModeVectors))]
	public void ApplyModeToControllerMatchesTheMachineCode(uint flagsBefore, uint flagsAfter, int displayId, byte[] modeInput, byte[] cameraInput, byte[] cameraOutput)
	{
		FieldCameraController.ResetGlobals();
		Scene2TransitionOverlay.Reset();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			Scene2TransitionOverlay.DisplayId = unchecked((uint)displayId);
			FieldCameraController controller = new()
			{
				Eye = ReadVector(cameraInput, EyeOffset),
				Target = ReadVector(cameraInput, TargetOffset),
				FieldOfView = BitConverter.ToInt32(cameraInput, FieldOfViewOffset),
			};
			FieldCameraController.Current = controller;

			FieldCameraMode mode = new()
			{
				Eye = ReadVector(modeInput, 0x3C),
				Target = ReadVector(modeInput, 0x48),
				FieldOfView = BitConverter.ToInt32(modeInput, 0x54),
				EyeSmoothing = BitConverter.ToSingle(modeInput, 0x58),
				TargetSmoothing = BitConverter.ToSingle(modeInput, 0x5C),
			};

			mode.ApplyToController();

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, TargetOffset), controller.Target);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, DesiredEyeOffset), controller.DesiredEye);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, DesiredTargetOffset), controller.DesiredTarget);
			GoldenVectors.AssertFloat(BitConverter.ToSingle(cameraOutput, EyeSmoothingOffset), controller.EyeSmoothing);
			GoldenVectors.AssertFloat(BitConverter.ToSingle(cameraOutput, TargetSmoothingOffset), controller.TargetSmoothing);
			Assert.Equal(BitConverter.ToInt32(cameraOutput, FieldOfViewOffset), controller.FieldOfView);
			for (int slot = 0; slot < FieldCameraController.SlotCount; slot++)
			{
				GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotEyesOffset + slot * 12), controller.SlotEyes[slot]);
				GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotTargetsOffset + slot * 12), controller.SlotTargets[slot]);
			}
		}
		finally
		{
			FieldCameraController.ResetGlobals();
			Scene2TransitionOverlay.Reset();
		}
	}

	[Theory]
	[MemberData(nameof(SelectModeVectors))]
	public void SelectModeMatchesTheMachineCode(byte initialMode, byte targetMode, bool hasMode, byte expectedActiveMode)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.ActiveModeIndex = initialMode;
			TrackingCameraMode? mode = hasMode ? new TrackingCameraMode() : null;
			FieldCameraController.Modes[targetMode] = mode;

			FieldCameraController.SelectMode(targetMode);

			Assert.Equal(expectedActiveMode, FieldCameraController.ActiveModeIndex);
			Assert.Equal(hasMode ? 1 : 0, mode?.ActivatedCount ?? 0);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ResolveSnappedCollisionVectors))]
	public void ResolveSnappedCollisionMatchesTheMachineCode(bool hit, Vector3 hitPosition, Vector3 hitNormal, byte[] input, byte[] output)
	{
		FieldCameraController controller = new()
		{
			HasCollisionHit = BitConverter.ToUInt32(input, HasCollisionHitOffset) != 0,
			Eye = ReadVector(input, EyeOffset),
			DesiredEye = ReadVector(input, DesiredEyeOffset),
			SnappedEye = ReadVector(input, SnappedEyeOffset),
		};
		FixedGroundCollision ground = new(hit ? new GroundContact(hitPosition, hitNormal) : null);

		controller.ResolveSnappedCollision(ground);

		Assert.Equal(BitConverter.ToUInt32(output, HasCollisionHitOffset) != 0, controller.HasCollisionHit);
		GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
		GoldenVectors.AssertVector(ReadVector(output, DesiredEyeOffset), controller.DesiredEye);
	}

	[Theory]
	[MemberData(nameof(ResolveTargetCollisionVectors))]
	public void ResolveTargetCollisionMatchesTheMachineCode(bool hit, Vector3 hitPosition, Vector3 hitNormal, byte[] input, byte[] output)
	{
		Scene2TransitionOverlay.Reset();
		try
		{
			FieldCameraController controller = new()
			{
				HasCollisionHit = BitConverter.ToUInt32(input, HasCollisionHitOffset) != 0,
				Eye = ReadVector(input, EyeOffset),
				Target = ReadVector(input, TargetOffset),
				SnappedEye = ReadVector(input, SnappedEyeOffset),
			};
			FixedGroundCollision ground = new(hit ? new GroundContact(hitPosition, hitNormal) : null);

			controller.ResolveTargetCollision(ground);

			GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
			GoldenVectors.AssertVector(ReadVector(output, TargetOffset), controller.Target);
		}
		finally
		{
			Scene2TransitionOverlay.Reset();
		}
	}

	[Theory]
	[MemberData(nameof(UpdateModeSelectionVectors))]
	public void UpdateModeSelectionMatchesTheMachineCode(
		uint flagsBefore,
		uint flagsAfter,
		byte activeBefore,
		byte activeAfter,
		byte previousMode,
		int modeOffset,
		uint displayId,
		bool hasPlayer,
		int playerIndex,
		Vector3 mode0Eye,
		Vector3 mode0Target,
		ushort expectedMode0ClientId,
		bool expectedMode0Attached,
		ushort expectedMode3ClientId,
		bool expectedMode3Attached,
		bool expectedControllerAttached,
		byte[] cameraOutput)
	{
		FieldCameraController.ResetGlobals();
		PlayerCharacter.ResetGlobals();
		Scene2TransitionOverlay.Reset();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController.ActiveModeIndex = activeBefore;
			FieldCameraController.PreviousModeIndex = previousMode;
			Scene2TransitionOverlay.DisplayId = displayId;

			FieldCameraController controller = new();
			controller.OverrideRequest.ModeOffset = modeOffset;
			FieldCameraController.Current = controller;

			FieldCameraMode mode0 = new() { Eye = mode0Eye, Target = mode0Target };
			FieldCameraMode mode3 = new();
			FieldCameraController.Modes[0] = mode0;
			FieldCameraController.Modes[3] = mode3;

			PlayerCharacter? player = hasPlayer ? PlayerCharacter.Create(playerIndex, default, 0, PlayerAnimationSet.Empty) : null;
			if (hasPlayer)
				PlayerCharacter.Slots[displayId] = player;

			controller.UpdateModeSelection();

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			Assert.Equal(activeAfter, FieldCameraController.ActiveModeIndex);
			Assert.Equal(expectedMode0ClientId, mode0.TargetClientId);
			Assert.Equal(expectedMode0Attached, ReferenceEquals(mode0.TargetEntity, player) && player is not null);
			Assert.Equal(expectedMode3ClientId, mode3.TargetClientId);
			Assert.Equal(expectedMode3Attached, ReferenceEquals(mode3.TargetEntity, player) && player is not null);
			Assert.Equal(expectedControllerAttached, ReferenceEquals(controller.TargetEntity, player) && player is not null);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotEyesOffset), controller.SlotEyes[0]);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotTargetsOffset), controller.SlotTargets[0]);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
			PlayerCharacter.ResetGlobals();
			Scene2TransitionOverlay.Reset();
		}
	}

	[Theory]
	[MemberData(nameof(CopyStackCurrentVectors))]
	public void TransformationStackCopyCurrentMatchesTheMachineCode(Matrix4x4 matrix, Matrix4x4 expected)
	{
		TransformationStack stack = new();
		stack.ReplaceCurrent(matrix);
		stack.CopyCurrentTo(out Matrix4x4 actual);
		GoldenVectors.AssertMatrix(expected, actual);
	}

	[Theory]
	[MemberData(nameof(ReplaceStackCurrentVectors))]
	public void TransformationStackReplaceCurrentMatchesTheMachineCode(Matrix4x4 matrix, Matrix4x4 expected)
	{
		TransformationStack stack = new();
		stack.ReplaceCurrent(matrix);
		GoldenVectors.AssertMatrix(expected, stack.Current);
	}

	[Theory]
	[MemberData(nameof(CaptureInverseStackVectors))]
	public void TransformationStackCaptureInverseMatchesTheMachineCode(Matrix4x4 input, Matrix4x4 expectedInverse, Matrix4x4 expectedTopAfter, int expectedDepth)
	{
		TransformationStack stack = new();
		stack.ReplaceCurrent(input);
		Matrix4x4 inverse = stack.CaptureInverseCurrent();
		GoldenVectors.AssertMatrix(expectedInverse, inverse);
		GoldenVectors.AssertMatrix(expectedTopAfter, stack.Current);
		Assert.Equal(expectedDepth, stack.Depth);
	}

	[Theory]
	[MemberData(nameof(ViewportProjectionVectors))]
	public void ViewportProjectionMatchesTheMachineCode(Matrix4x4 projection, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, CameraProjection.CreateViewportProjection(projection));

	[Theory]
	[MemberData(nameof(ComputeAnglesVectors))]
	public void ComputeAnglesFromDirectionMatchesTheMachineCode(Vector3 direction, int expectedPitch, int expectedYaw)
	{
		FieldCameraController.ComputeAnglesFromDirection(direction, out int pitch, out int yaw);
		Assert.Equal(expectedPitch, pitch);
		Assert.Equal(expectedYaw, yaw);
	}

	[Theory]
	[MemberData(nameof(TargetClientIdVectors))]
	public void GetCurrentTargetClientIdMatchesTheMachineCode(bool hasCamera, bool hasTarget, int playerIndex, ushort expected)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			if (hasCamera)
			{
				FieldCameraController controller = new()
				{
					TargetEntity = hasTarget ? PlayerCharacter.Create(playerIndex, default, 0, PlayerAnimationSet.Empty) : null,
				};
				FieldCameraController.Current = controller;
			}
			Assert.Equal(expected, FieldCameraController.GetCurrentTargetClientId());
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RequestTemporaryModeVectors))]
	public void RequestTemporaryModeMatchesTheMachineCode(uint flagsBefore, uint flagsAfter, byte activeBefore, byte activeAfter, byte prevBefore, byte prevAfter, byte requested, bool expectedResult)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController.ActiveModeIndex = activeBefore;
			FieldCameraController.PreviousModeIndex = prevBefore;
			TrackingCameraMode mode = new();
			FieldCameraController.Modes[requested] = mode;

			bool result = FieldCameraController.RequestTemporaryMode(requested);

			Assert.Equal(expectedResult, result);
			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			Assert.Equal(activeAfter, FieldCameraController.ActiveModeIndex);
			Assert.Equal(prevAfter, FieldCameraController.PreviousModeIndex);
			Assert.Equal(expectedResult ? 1 : 0, mode.ActivatedCount);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ReleaseTemporaryModeVectors))]
	public void ReleaseTemporaryModeMatchesTheMachineCode(uint flagsBefore, uint flagsAfter)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController.ReleaseTemporaryMode();
			Assert.Equal(flagsAfter, FieldCameraController.Flags);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RestoreDefaultTargetVectors))]
	public void RestoreDefaultTargetAndModeMatchesTheMachineCode(
		uint flagsBefore,
		uint flagsAfter,
		byte activeMode,
		int storedFov,
		bool hasPlayer,
		int playerIndex,
		Vector3 mode0Eye,
		Vector3 mode0Target,
		int expectedMode5Fov,
		ushort expectedMode0ClientId,
		ushort expectedMode5ClientId,
		byte[] cameraOutput)
	{
		FieldCameraController.ResetGlobals();
		PlayerCharacter.ResetGlobals();
		Scene2TransitionOverlay.Reset();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController.ActiveModeIndex = activeMode;
			FieldCameraController.StoredMode5FieldOfView = storedFov;
			FieldCameraController controller = new();
			FieldCameraController.Current = controller;
			FieldCameraMode mode0 = new() { Eye = mode0Eye, Target = mode0Target };
			FieldCameraMode mode5 = new() { Eye = new Vector3(7, 8, 9), Target = new Vector3(1, 1, 1), FieldOfView = 0x36C1 };
			FieldCameraController.Modes[0] = mode0;
			FieldCameraController.Modes[5] = mode5;
			if (hasPlayer)
				PlayerCharacter.Slots[0] = PlayerCharacter.Create(playerIndex, default, 0, PlayerAnimationSet.Empty);

			FieldCameraController.RestoreDefaultTargetAndMode();

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			Assert.Equal(expectedMode5Fov, mode5.FieldOfView);
			Assert.Equal(expectedMode0ClientId, mode0.TargetClientId);
			Assert.Equal(expectedMode5ClientId, mode5.TargetClientId);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotEyesOffset), controller.SlotEyes[0]);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotTargetsOffset), controller.SlotTargets[0]);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
			PlayerCharacter.ResetGlobals();
			Scene2TransitionOverlay.Reset();
		}
	}

	[Theory]
	[MemberData(nameof(CopyOverrideVectors))]
	public void ApplyOverrideRequestToActiveModeMatchesTheMachineCode(uint flags, Vector3 expectedEye, Vector3 expectedTarget, int expectedFov)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flags;
			FieldCameraController.ActiveModeIndex = 0;
			FieldCameraMode mode = new() { Eye = new Vector3(1, 2, 3), Target = new Vector3(4, 5, 6), FieldOfView = 0x36C1 };
			FieldCameraController.Modes[0] = mode;
			FieldCameraOverrideRequest req = new()
			{
				Eye = new Vector3(11, 22, 33),
				Target = new Vector3(44, 55, 66),
				FieldOfViewDegrees = 0x3000,
			};

			FieldCameraController.ApplyOverrideRequestToActiveMode(req);

			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
			Assert.Equal(expectedFov, mode.FieldOfView);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(BindTargetVectors))]
	public void BindTargetEntityMatchesTheMachineCode(bool hasPlayer, int playerIndex, uint flagsAfter, ushort expectedMode0ClientId, ushort expectedMode2ClientId, bool expectedControllerAttached, byte[] cameraOutput)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = 0x4;
			FieldCameraController.ActiveModeIndex = 2;
			FieldCameraController controller = new();
			FieldCameraController.Current = controller;
			FieldCameraMode mode0 = new() { Eye = new Vector3(2, 4, 6), Target = new Vector3(8, 10, 12) };
			FieldCameraMode mode2 = new() { Eye = default, Target = new Vector3(0, 0, 1) };
			FieldCameraController.Modes[0] = mode0;
			FieldCameraController.Modes[2] = mode2;
			PlayerCharacter? player = hasPlayer ? PlayerCharacter.Create(playerIndex, default, 0, PlayerAnimationSet.Empty) : null;

			FieldCameraController.BindTargetEntity(player);

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			Assert.Equal(expectedMode0ClientId, mode0.TargetClientId);
			Assert.Equal(expectedMode2ClientId, mode2.TargetClientId);
			Assert.Equal(expectedControllerAttached, ReferenceEquals(controller.TargetEntity, player) && player is not null);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotEyesOffset), controller.SlotEyes[0]);
			GoldenVectors.AssertVector(ReadVector(cameraOutput, SlotTargetsOffset), controller.SlotTargets[0]);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(LockTargetVectors))]
	public void LockModeToTargetMatchesTheMachineCode(bool hasPlayer, int playerIndex, uint flagsAfter, ushort expectedClientId, bool expectedControllerAttached)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.ActiveModeIndex = 2;
			FieldCameraController controller = new();
			FieldCameraController.Current = controller;
			TrackingCameraMode mode = new();
			FieldCameraController.Modes[2] = mode;
			PlayerCharacter? player = hasPlayer ? PlayerCharacter.Create(playerIndex, default, 0, PlayerAnimationSet.Empty) : null;

			FieldCameraController.LockModeToTarget(player, 42);

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			Assert.Equal(expectedClientId, mode.TargetClientId);
			Assert.Equal(expectedControllerAttached, ReferenceEquals(controller.TargetEntity, player) && player is not null);
			Assert.Equal(1, mode.LockedCount);
			Assert.Equal(42, mode.LastLockedParameter);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ShakePresetVectors))]
	public void TriggerPresetShakeMatchesTheMachineCode(int preset, uint expectedCountdown, float expectedAmplitude)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new();
			FieldCameraController.Current = controller;
			FieldCameraController.TriggerPresetShake(preset);
			Assert.Equal(expectedCountdown, controller.OffsetCountdown);
			GoldenVectors.AssertFloat(expectedAmplitude, controller.OffsetAmplitude);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ShakeCustomVectors))]
	public void TriggerCustomShakeMatchesTheMachineCode(float amplitude, uint duration, uint expectedCountdown, float expectedAmplitude)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new();
			FieldCameraController.Current = controller;
			FieldCameraController.TriggerCustomShake(amplitude, duration);
			Assert.Equal(expectedCountdown, controller.OffsetCountdown);
			GoldenVectors.AssertFloat(expectedAmplitude, controller.OffsetAmplitude);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void UpdateRunsFullModeCollisionViewAndAxisPipeline()
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.ActiveModeIndex = 0;
			FieldCameraController.Flags = 0x2;
			TrackingCameraMode mode = new()
			{
				Flags = 0x5,
				Eye = new Vector3(0, 10, 20),
				Target = new Vector3(0, 1, 0),
				EyeSmoothing = 1.0f,
				TargetSmoothing = 1.0f,
				FieldOfView = 0x4000,
			};
			FieldCameraController.Modes[9] = mode;

			FieldCameraController controller = new()
			{
				YawAngle = 0x4000,
				PitchAngle = 0,
				Offset = new Vector3(0, 0, 0),
			};
			FieldCameraController.Current = controller;

			TransformationStack stack = new();
			stack.Translate(new Vector3(1, 2, 3));
			FixedGroundCollision missGround = new(null);

			controller.Update(missGround, stack);

			Assert.True(controller.IsActiveFrame);
			Assert.Equal(1, mode.UpdateCount);
			Assert.Equal(1, mode.OverrideCount);
			Assert.False(mode.LastOverrideRestoring);
			Assert.Equal(1, mode.PostUpdateCount);
			Assert.Equal(0x4000, controller.FieldOfView);
			Assert.Equal(0x4000, controller.AppliedYawAngle);
			GoldenVectors.AssertVector(controller.Eye, FieldCameraController.GlobalEye);
			Assert.Equal(1.0f, FieldCameraController.GlobalForward.Length(), 5);
			Assert.Equal(0, stack.Depth);
			Matrix4x4 product = Matrix4x4.Multiply(stack.Current, FieldCameraController.GlobalInverseViewMatrix);
			Assert.Equal(1.0f, product.M11, 5);
			Assert.Equal(1.0f, product.M44, 5);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void RenderRefreshAppliesViewWhenNotUpdatedInCurrentFrame()
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.RenderRefreshDisabled = 0;
			FieldCameraController.GlobalEye = new Vector3(0, 5, 10);
			FieldCameraController.GlobalForward = new Vector3(0, 0, -1);
			FieldCameraController.GlobalUpAxis = new Vector3(0, 1, 0);
			FieldCameraController controller = new() { IsActiveFrame = false };
			TransformationStack stack = new();

			controller.RenderRefresh(stack);

			Assert.False(controller.IsActiveFrame);
			Matrix4x4 expected = CameraView.CreateLookAt(new Vector3(0, 5, 10), new Vector3(0, 5, 9), new Vector3(0, 1, 0));
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	private sealed class TrackingCameraMode : FieldCameraMode
	{
		public int ActivatedCount { get; private set; }

		public int UpdateCount { get; private set; }

		public int OverrideCount { get; private set; }

		public bool LastOverrideRestoring { get; private set; }

		public int PostUpdateCount { get; private set; }

		public int LockedCount { get; private set; }

		public int LastLockedParameter { get; private set; }

		public override void OnActivated() => ActivatedCount++;

		public override void OnUpdate() => UpdateCount++;

		public override void OnOverride(bool restoring)
		{
			OverrideCount++;
			LastOverrideRestoring = restoring;
		}

		public override void OnPostUpdate() => PostUpdateCount++;

		public override void OnTargetLocked(PlayerCharacter? entity, int parameter)
		{
			LockedCount++;
			LastLockedParameter = parameter;
		}
	}

	private sealed class FixedGroundCollision(GroundContact? contact) : IGroundCollision
	{
		public GroundContact? Sweep(Vector3 from, Vector3 to, int mask) => contact;
	}

	private static Vector3 ReadVector(JsonElement array) => new(
		GoldenVectors.ReadFloat(array[0]),
		GoldenVectors.ReadFloat(array[1]),
		GoldenVectors.ReadFloat(array[2]));

	private static Vector3 ReadVector(byte[] block, int offset) => new(
		BitConverter.ToSingle(block, offset),
		BitConverter.ToSingle(block, offset + 4),
		BitConverter.ToSingle(block, offset + 8));
}
