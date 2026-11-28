using PsoBB.Mathematics;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class FieldCameraCutsceneAndPreviewGoldenTests
{
	public static IEnumerable<object[]> CutscenePostUpdateVectors() => GoldenVectors.Load("004D6BC0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("modeEye")),
			GoldenVectors.ReadVector(vector.GetProperty("modeTarget")),
			vector.GetProperty("roll").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("controllerEye")),
			GoldenVectors.ReadVector(vector.GetProperty("controllerTarget")),
			vector.GetProperty("pitchOutput").GetInt32(),
			vector.GetProperty("yawOutput").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("globalEye")),
		});

	public static IEnumerable<object[]> PreviewEyeSphericalVectors() => GoldenVectors.Load("004EA5A8.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			vector.GetProperty("pitch").GetInt32(),
			vector.GetProperty("yaw").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("targetY")),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
		});

	public static IEnumerable<object[]> PreviewIntroVectors() => GoldenVectors.Load("004EB0E8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("classId").GetByte(),
			GoldenVectors.ReadFloat(vector.GetProperty("heightRatio")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetY")),
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			GoldenVectors.ReadFloat(vector.GetProperty("introStartRadius")),
			vector.GetProperty("timer").GetInt32(),
			vector.GetProperty("subState").GetInt32(),
		});

	public static IEnumerable<object[]> PreviewZoomVectors() => GoldenVectors.Load("004EB15C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("timerInput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("startRadius")),
			vector.GetProperty("timerOutput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusOutput")),
			vector.GetProperty("subState").GetInt32(),
		});

	public static IEnumerable<object[]> PreviewIdleOrbitVectors() => GoldenVectors.Load("004EB1C8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasInput").GetBoolean(),
			vector.GetProperty("timerInput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusInput")),
			vector.GetProperty("pitchInput").GetInt32(),
			vector.GetProperty("yawInput").GetInt32(),
			vector.GetProperty("timerOutput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusOutput")),
			vector.GetProperty("pitchOutput").GetInt32(),
			vector.GetProperty("yawOutput").GetInt32(),
			vector.GetProperty("subState").GetInt32(),
		});

	public static IEnumerable<object[]> PreviewMenuFocusVectors() => GoldenVectors.Load("004EA854.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("menuStep").GetInt32(),
			vector.GetProperty("hasCharacter").GetBoolean(),
			vector.GetProperty("classId").GetByte(),
			GoldenVectors.ReadFloat(vector.GetProperty("heightRatio")),
			vector.GetProperty("presetInput").GetInt32(),
			vector.GetProperty("presetTimerInput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusInput")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetYInput")),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusVelocityInput")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetYVelocityInput")),
			vector.GetProperty("pitchInput").GetInt32(),
			vector.GetProperty("yawInput").GetInt32(),
			vector.GetProperty("presetOutput").GetInt32(),
			vector.GetProperty("presetTimerOutput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusOutput")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetYOutput")),
			GoldenVectors.ReadFloat(vector.GetProperty("radiusVelocityOutput")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetYVelocityOutput")),
			vector.GetProperty("pitchOutput").GetInt32(),
			vector.GetProperty("yawOutput").GetInt32(),
		});

	public static IEnumerable<object[]> CutsceneAnchorVectors() => GoldenVectors.Load("004D681C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("modePresent").GetBoolean(),
			GoldenVectors.ReadVector(vector.GetProperty("cameraOrigin")),
			GoldenVectors.ReadVector(vector.GetProperty("motionOrigin")),
			vector.GetProperty("motionYawAngle").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("outputCameraOrigin")),
			GoldenVectors.ReadVector(vector.GetProperty("outputMotionOrigin")),
			vector.GetProperty("outputMotionYawAngle").GetInt32(),
		});

	public static IEnumerable<object[]> CutsceneSyncStatusVectors() => GoldenVectors.Load("004D6864.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("modePresent").GetBoolean(),
			(byte)vector.GetProperty("activeMode").GetInt32(),
			(ushort)vector.GetProperty("initialFlags").GetInt32(),
			vector.GetProperty("returnedNull").GetBoolean(),
			(ushort)vector.GetProperty("outputFlags").GetInt32(),
		});

	[Theory]
	[MemberData(nameof(CutscenePostUpdateVectors))]
	public void CutscenePostUpdateMatchesTheMachineCode(
		Vector3 modeEye,
		Vector3 modeTarget,
		int roll,
		Vector3 controllerEye,
		Vector3 controllerTarget,
		int expectedPitch,
		int expectedYaw,
		Vector3 expectedGlobalEye)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new()
			{
				Eye = controllerEye,
				Target = controllerTarget,
			};
			FieldCameraController.Current = controller;
			FieldCameraCutsceneMode mode = new()
			{
				Eye = modeEye,
				Target = modeTarget,
				RollAngle = roll,
			};
			mode.OnPostUpdate();
			Assert.Equal(expectedPitch, controller.PitchAngle);
			Assert.Equal(expectedYaw, controller.YawAngle);
			GoldenVectors.AssertVector(expectedGlobalEye, FieldCameraController.GlobalEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PreviewEyeSphericalVectors))]
	public void PreviewEyeFromSphericalMatchesTheMachineCode(
		float radius,
		int pitch,
		int yaw,
		float targetY,
		Vector3 expectedEye)
	{
		FieldCameraPreviewOrbitMode mode = new()
		{
			OrbitRadius = radius,
			OrbitPitchAngle = pitch,
			OrbitYawAngle = yaw,
			Target = new Vector3(0.0f, targetY, 0.0f),
		};
		mode.UpdateEyeFromSpherical();
		GoldenVectors.AssertVector(expectedEye, mode.Eye);
	}

	[Theory]
	[MemberData(nameof(PreviewIntroVectors))]
	public void PreviewBeginIntroMatchesTheMachineCode(
		byte classId,
		float heightRatio,
		float expectedTargetY,
		float expectedRadius,
		float expectedIntroStartRadius,
		int expectedTimer,
		int expectedSubState)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraPreviewOrbitMode mode = new();
			mode.BeginPreviewIntro(classId, heightRatio);
			GoldenVectors.AssertFloat(expectedTargetY, mode.Target.Y);
			GoldenVectors.AssertFloat(expectedRadius, mode.OrbitRadius);
			GoldenVectors.AssertFloat(expectedIntroStartRadius, mode.IntroStartRadius);
			Assert.Equal(expectedTimer, mode.FrameCounter);
			Assert.Equal(expectedSubState, FieldCameraController.PreviewOrbitSubState);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PreviewZoomVectors))]
	public void PreviewAdvanceZoomIntroMatchesTheMachineCode(
		int timerInput,
		float startRadius,
		int expectedTimerOutput,
		float expectedRadiusOutput,
		int expectedSubState)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraPreviewOrbitMode mode = new()
			{
				OrbitRadius = 0.0f,
				FrameCounter = timerInput,
				IntroStartRadius = startRadius,
			};
			FieldCameraController.PreviewOrbitSubState = 2;
			mode.AdvanceZoomIntro();
			Assert.Equal(expectedTimerOutput, mode.FrameCounter);
			GoldenVectors.AssertFloat(expectedRadiusOutput, mode.OrbitRadius);
			Assert.Equal(expectedSubState, FieldCameraController.PreviewOrbitSubState);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PreviewIdleOrbitVectors))]
	public void PreviewIdleAutoOrbitMatchesTheMachineCode(
		bool hasInput,
		int timerInput,
		float radiusInput,
		int pitchInput,
		int yawInput,
		int expectedTimerOutput,
		float expectedRadiusOutput,
		int expectedPitchOutput,
		int expectedYawOutput,
		int expectedSubState)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraPreviewOrbitMode mode = new()
			{
				FrameCounter = timerInput,
				OrbitRadius = radiusInput,
				OrbitPitchAngle = pitchInput,
				OrbitYawAngle = yawInput,
			};
			FieldCameraController.PreviewOrbitSubState = 3;
			mode.UpdateIdleAutoOrbit(hasInput);
			Assert.Equal(expectedTimerOutput, mode.FrameCounter);
			GoldenVectors.AssertFloat(expectedRadiusOutput, mode.OrbitRadius);
			Assert.Equal(expectedPitchOutput, mode.OrbitPitchAngle);
			Assert.Equal(expectedYawOutput, mode.OrbitYawAngle);
			Assert.Equal(expectedSubState, FieldCameraController.PreviewOrbitSubState);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PreviewMenuFocusVectors))]
	public void PreviewMenuFocusTransitionMatchesTheMachineCode(
		int menuStep,
		bool hasCharacter,
		byte classId,
		float heightRatio,
		int presetInput,
		int presetTimerInput,
		float radiusInput,
		float targetYInput,
		float radiusVelocityInput,
		float targetYVelocityInput,
		int pitchInput,
		int yawInput,
		int expectedPreset,
		int expectedTimer,
		float expectedRadius,
		float expectedTargetY,
		float expectedRadiusVelocity,
		float expectedTargetYVelocity,
		int expectedPitch,
		int expectedYaw)
	{
		FieldCameraPreviewOrbitMode mode = new()
		{
			ViewportPreset = presetInput,
			PresetModeState = presetTimerInput,
			OrbitRadius = radiusInput,
			Target = new Vector3(0.0f, targetYInput, 0.0f),
			RadiusVelocity = radiusVelocityInput,
			TargetHeightVelocity = targetYVelocityInput,
			OrbitPitchAngle = pitchInput,
			OrbitYawAngle = yawInput,
		};
		mode.UpdateMenuFocusTransition(menuStep, hasCharacter, classId, heightRatio);
		Assert.Equal(expectedPreset, mode.ViewportPreset);
		Assert.Equal(expectedTimer, mode.PresetModeState);
		GoldenVectors.AssertFloat(expectedRadius, mode.OrbitRadius);
		GoldenVectors.AssertFloat(expectedTargetY, mode.Target.Y);
		GoldenVectors.AssertFloat(expectedRadiusVelocity, mode.RadiusVelocity);
		GoldenVectors.AssertFloat(expectedTargetYVelocity, mode.TargetHeightVelocity);
		Assert.Equal(expectedPitch, mode.OrbitPitchAngle);
		Assert.Equal(expectedYaw, mode.OrbitYawAngle);
	}

	[Theory]
	[MemberData(nameof(CutsceneAnchorVectors))]
	public void CutsceneApplyAnchorMatchesTheMachineCode(
		bool modePresent,
		Vector3 cameraOrigin,
		Vector3 motionOrigin,
		int motionYawAngle,
		Vector3 expectedCameraOrigin,
		Vector3 expectedMotionOrigin,
		int expectedMotionYawAngle)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraCutsceneMode? cutscene = modePresent ? new FieldCameraCutsceneMode() : null;
			FieldCameraController.Modes[5] = cutscene;
			FieldCameraCutsceneMode.ApplyAnchor(cameraOrigin, motionOrigin, motionYawAngle);
			if (cutscene is not null)
			{
				GoldenVectors.AssertVector(expectedCameraOrigin, cutscene.CameraOrigin);
				GoldenVectors.AssertVector(expectedMotionOrigin, cutscene.MotionOrigin);
				Assert.Equal(expectedMotionYawAngle, cutscene.MotionYawAngle);
			}
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(CutsceneSyncStatusVectors))]
	public void CutsceneSyncPlaybackStatusMatchesTheMachineCode(
		bool modePresent,
		byte activeMode,
		ushort initialFlags,
		bool expectedNull,
		ushort expectedFlags)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraCutsceneMode? cutscene = modePresent ? new FieldCameraCutsceneMode { CutsceneFlags = initialFlags } : null;
			FieldCameraController.Modes[5] = cutscene;
			FieldCameraController.ActiveModeIndex = activeMode;
			FieldCameraCutsceneMode? result = FieldCameraCutsceneMode.SyncPlaybackStatus();
			Assert.Equal(expectedNull, result is null);
			if (cutscene is not null)
				Assert.Equal(expectedFlags, cutscene.CutsceneFlags);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}
}
