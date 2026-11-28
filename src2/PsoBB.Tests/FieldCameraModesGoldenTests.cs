using System.Text.Json;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the specialized field camera mode subclasses against vectors produced by the original machine code.
/// </summary>
[Collection("Game state")]
public sealed class FieldCameraModesGoldenTests
{
	public static IEnumerable<object[]> OverrideModeVectors() => GoldenVectors.Load("004D59A0.json")
		.Select(v => new object[]
		{
			v.GetProperty("fovDegrees").GetInt32(),
			GoldenVectors.ReadFloat(v.GetProperty("smoothing")),
			ReadVector(v.GetProperty("eyeInput")),
			ReadVector(v.GetProperty("targetInput")),
			ReadVector(v.GetProperty("eyeOutput")),
			ReadVector(v.GetProperty("targetOutput")),
			v.GetProperty("fovOutput").GetInt32(),
			GoldenVectors.ReadFloat(v.GetProperty("eyeSmoothingOutput")),
		});

	public static IEnumerable<object[]> TargetOverrideModeVectors() => GoldenVectors.Load("004D6E30.json")
		.Select(v => new object[]
		{
			v.GetProperty("hasPlayer").GetBoolean(),
			ReadVector(v.GetProperty("playerPosition")),
			GoldenVectors.ReadFloat(v.GetProperty("smoothing")),
			ReadVector(v.GetProperty("eyeInput")),
			ReadVector(v.GetProperty("eyeOutput")),
			ReadVector(v.GetProperty("targetOutput")),
			GoldenVectors.ReadFloat(v.GetProperty("eyeSmoothingOutput")),
		});

	public static IEnumerable<object[]> OrbitModeVectors() => GoldenVectors.Load("004D61F8.json")
		.Select(v => new object[]
		{
			v.GetProperty("zoomOut").GetBoolean(),
			v.GetProperty("zoomIn").GetBoolean(),
			v.GetProperty("deltaYaw").GetInt16(),
			v.GetProperty("deltaPitch").GetInt16(),
			GoldenVectors.ReadFloat(v.GetProperty("distanceInput")),
			v.GetProperty("yawInput").GetInt32(),
			v.GetProperty("pitchInput").GetInt32(),
			ReadVector(v.GetProperty("target")),
			GoldenVectors.ReadFloat(v.GetProperty("distanceOutput")),
			v.GetProperty("yawOutput").GetInt32(),
			v.GetProperty("pitchOutput").GetInt32(),
			ReadVector(v.GetProperty("eyeOutput")),
		});

	public static IEnumerable<object[]> FocusLookModeVectors() => GoldenVectors.Load("004D160C.json")
		.Select(v => new object[]
		{
			v.GetProperty("hasPlayer").GetBoolean(),
			v.GetProperty("hasFocus").GetBoolean(),
			ReadVector(v.GetProperty("playerPosition")),
			ReadVector(v.GetProperty("focusPosition")),
			ReadVector(v.GetProperty("eyeOutput")),
			ReadVector(v.GetProperty("targetOutput")),
			GoldenVectors.ReadFloat(v.GetProperty("eyeSmoothingOutput")),
		});

	public static IEnumerable<object[]> PadCenterVectors() => GoldenVectors.Load("004D1C50.json")
		.Select(v => new object[]
		{
			v.GetProperty("hasPlayer").GetBoolean(),
			ReadVector(v.GetProperty("playerPosition")),
			ReadVector(v.GetProperty("targetOutput")),
		});

	public static IEnumerable<object[]> PadOrbitVectors() => GoldenVectors.Load("004D1C7C.json")
		.Select(v => new object[]
		{
			v.GetProperty("buttons").GetUInt32(),
			v.GetProperty("deltaYaw").GetInt16(),
			v.GetProperty("deltaPitch").GetInt16(),
			GoldenVectors.ReadFloat(v.GetProperty("distanceInput")),
			v.GetProperty("yawInput").GetInt32(),
			v.GetProperty("pitchInput").GetInt32(),
			ReadVector(v.GetProperty("target")),
			GoldenVectors.ReadFloat(v.GetProperty("distanceOutput")),
			v.GetProperty("yawOutput").GetInt32(),
			v.GetProperty("pitchOutput").GetInt32(),
			ReadVector(v.GetProperty("eyeOutput")),
		});

	public static IEnumerable<object[]> PadSnapBehindVectors() => GoldenVectors.Load("004D1E50.json")
		.Select(v => new object[]
		{
			v.GetProperty("hasPlayer").GetBoolean(),
			v.GetProperty("heading").GetInt32(),
			GoldenVectors.ReadFloat(v.GetProperty("distance")),
			ReadVector(v.GetProperty("target")),
			v.GetProperty("yawOutput").GetInt32(),
			ReadVector(v.GetProperty("eyeOutput")),
		});

	[Theory]
	[MemberData(nameof(OverrideModeVectors))]
	public void OverrideModeMatchesTheMachineCode(
		int fovDegrees,
		float smoothing,
		Vector3 eyeInput,
		Vector3 targetInput,
		Vector3 expectedEye,
		Vector3 expectedTarget,
		int expectedFov,
		float expectedEyeSmoothing)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new();
			controller.OverrideRequest.FieldOfViewDegrees = fovDegrees;
			controller.OverrideRequest.Smoothing = smoothing;
			controller.OverrideRequest.Eye = eyeInput;
			controller.OverrideRequest.Target = targetInput;
			FieldCameraController.Current = controller;

			FieldCameraOverrideMode mode = new();
			Assert.Equal(4u, mode.Flags);

			mode.OnOverride(false);

			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
			Assert.Equal(expectedFov, mode.FieldOfView);
			GoldenVectors.AssertFloat(expectedEyeSmoothing, mode.EyeSmoothing);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(TargetOverrideModeVectors))]
	public void TargetOverrideModeMatchesTheMachineCode(
		bool hasPlayer,
		Vector3 playerPosition,
		float smoothing,
		Vector3 eyeInput,
		Vector3 expectedEye,
		Vector3 expectedTarget,
		float expectedEyeSmoothing)
	{
		FieldCameraController.ResetGlobals();
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraController controller = new();
			controller.OverrideRequest.Smoothing = smoothing;
			controller.OverrideRequest.Eye = eyeInput;
			FieldCameraController.Current = controller;
			if (hasPlayer)
				PlayerCharacter.Slots[0] = PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty);

			FieldCameraTargetOverrideMode mode = new();
			Assert.Equal(4u, mode.Flags);

			mode.OnOverride(false);

			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
			GoldenVectors.AssertFloat(expectedEyeSmoothing, mode.EyeSmoothing);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(OrbitModeVectors))]
	public void OrbitModeMatchesTheMachineCode(
		bool zoomOut,
		bool zoomIn,
		short deltaYaw,
		short deltaPitch,
		float distanceInput,
		int yawInput,
		int pitchInput,
		Vector3 target,
		float expectedDistance,
		int expectedYaw,
		int expectedPitch,
		Vector3 expectedEye)
	{
		FieldCameraOrbitMode mode = new()
		{
			Distance = distanceInput,
			YawAngle = yawInput,
			PitchAngle = pitchInput,
			Target = target,
		};

		mode.UpdateOrbit(deltaYaw, deltaPitch, zoomOut, zoomIn);

		GoldenVectors.AssertFloat(expectedDistance, mode.Distance);
		Assert.Equal(expectedYaw, mode.YawAngle);
		Assert.Equal(expectedPitch, mode.PitchAngle);
		GoldenVectors.AssertVector(expectedEye, mode.Eye);
	}

	[Theory]
	[MemberData(nameof(FocusLookModeVectors))]
	public void FocusLookModeMatchesTheMachineCode(
		bool hasPlayer,
		bool hasFocus,
		Vector3 playerPosition,
		Vector3 focusPosition,
		Vector3 expectedEye,
		Vector3 expectedTarget,
		float expectedEyeSmoothing)
	{
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraFocusLookMode mode = new()
			{
				TargetEntity = hasPlayer ? PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty) : null,
			};

			mode.UpdateFocus(hasFocus ? focusPosition : null);

			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
			GoldenVectors.AssertFloat(expectedEyeSmoothing, mode.EyeSmoothing);
		}
		finally
		{
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PadCenterVectors))]
	public void PadOrbitCenterOnLocalPlayerMatchesTheMachineCode(bool hasPlayer, Vector3 playerPosition, Vector3 expectedTarget)
	{
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraPadOrbitMode mode = new() { Target = default };
			if (hasPlayer)
				PlayerCharacter.Slots[0] = PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty);

			mode.CenterOnLocalPlayer();

			GoldenVectors.AssertVector(expectedTarget, mode.Target);
		}
		finally
		{
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PadOrbitVectors))]
	public void PadOrbitUpdateMatchesTheMachineCode(
		uint buttons,
		short deltaYaw,
		short deltaPitch,
		float distanceInput,
		int yawInput,
		int pitchInput,
		Vector3 target,
		float expectedDistance,
		int expectedYaw,
		int expectedPitch,
		Vector3 expectedEye)
	{
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraPadOrbitMode mode = new()
			{
				Distance = distanceInput,
				YawAngle = yawInput,
				PitchAngle = pitchInput,
				Target = target,
			};

			mode.UpdateOrbit(buttons, deltaYaw, deltaPitch);

			GoldenVectors.AssertFloat(expectedDistance, mode.Distance);
			Assert.Equal(expectedYaw, mode.YawAngle);
			Assert.Equal(expectedPitch, mode.PitchAngle);
			GoldenVectors.AssertVector(expectedEye, mode.Eye);
		}
		finally
		{
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PadSnapBehindVectors))]
	public void PadOrbitSnapBehindMatchesTheMachineCode(
		bool hasPlayer,
		int heading,
		float distance,
		Vector3 target,
		int expectedYaw,
		Vector3 expectedEye)
	{
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraPadOrbitMode mode = new()
			{
				Distance = distance,
				Target = target,
			};
			if (hasPlayer)
				PlayerCharacter.Slots[0] = PlayerCharacter.Create(0, default, unchecked((ushort)heading), PlayerAnimationSet.Empty);

			mode.SnapBehindLocalPlayer();

			Assert.Equal(expectedYaw, mode.YawAngle);
			GoldenVectors.AssertVector(expectedEye, mode.Eye);
		}
		finally
		{
			PlayerCharacter.ResetGlobals();
		}
	}

	[Fact]
	public void SpectatorOrbitClampsPitchAndDistanceAndAdjustsFieldOfView()
	{
		FieldCameraSpectatorOrbitMode mode = new();
		Assert.Equal(20.0f, mode.Distance);
		Assert.Equal(0u, mode.Flags);

		mode.UpdateSpectator(new Vector3(1, 2, 3), 100, 10000, allowFovAdjust: true, fovWiden: true, fovNarrow: false, allowDistanceAdjust: true, zoomOut: false, zoomIn: true);

		Assert.Equal(0x36C1 + 182, mode.FieldOfView);
		Assert.Equal(20.0f, mode.Distance);
		Assert.Equal(14336, mode.PitchAngle);
		Assert.Equal(300, mode.YawAngle);
		Assert.Equal(new Vector3(1, 2, 3), mode.Target);
	}

	[Fact]
	public void ModeOnPostUpdateComputesAnglesAndSetsGlobalEye()
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new()
			{
				Eye = new Vector3(0, 0, 10),
				Target = new Vector3(0, 0, 0),
			};
			FieldCameraController.Current = controller;
			FieldCameraController.GlobalUpAxis = new Vector3(0, 1, 0);

			FieldCameraMode mode = new();
			mode.OnPostUpdate();

			Assert.Equal(0, controller.PitchAngle);
			Assert.Equal(0, controller.YawAngle);
			GoldenVectors.AssertVector(controller.Eye, FieldCameraController.GlobalEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	private static Vector3 ReadVector(JsonElement array) => new(
		GoldenVectors.ReadFloat(array[0]),
		GoldenVectors.ReadFloat(array[1]),
		GoldenVectors.ReadFloat(array[2]));
}
