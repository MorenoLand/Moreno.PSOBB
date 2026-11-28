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
}
