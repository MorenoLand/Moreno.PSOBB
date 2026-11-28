using PsoBB.Audio;
using PsoBB.Game;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scenes;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class FieldCameraFollowGoldenTests
{
	private sealed class NoGroundCollision : IGroundCollision
	{
		public static NoGroundCollision Instance { get; } = new();

		public GroundContact? Sweep(Vector3 origin, Vector3 destination, int mask) => null;
	}

	private sealed class SyntheticTriangleCollision(Vector3 a, Vector3 b, Vector3 c) : IGroundCollision
	{
		private readonly Vector3 _normal = new(0.0f, 0.0f, 1.0f);

		public GroundContact? Sweep(Vector3 origin, Vector3 destination, int mask)
		{
			Vector3 delta = Vector3.Subtract(destination, origin);
			double denom = Vector3.Dot(delta, _normal);
			if (denom == 0.0)
				return null;
			double numer = Vector3.Dot(Vector3.Subtract(a, origin), _normal);
			double t = numer / denom;
			if (t <= 0.0 || t > 1.0)
				return null;
			Vector3 point = new(
				(float)(origin.X + delta.X * t),
				(float)(origin.Y + delta.Y * t),
				(float)(origin.Z + delta.Z * t));
			_ = b;
			_ = c;
			return new GroundContact(point, _normal);
		}
	}

	public static IEnumerable<object[]> StepAngleVectors() => GoldenVectors.Load("004D6370.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("current").GetInt32(),
			vector.GetProperty("target").GetInt32(),
			vector.GetProperty("speed").GetInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	public static IEnumerable<object[]> StepScalarVectors() => GoldenVectors.Load("004D6540.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("current")),
			GoldenVectors.ReadFloat(vector.GetProperty("target")),
			GoldenVectors.ReadFloat(vector.GetProperty("maxDelta")),
			GoldenVectors.ReadFloat(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> SmoothScalarVectors() => GoldenVectors.Load("004D64D8.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("currentInput")),
			GoldenVectors.ReadFloat(vector.GetProperty("target")),
			GoldenVectors.ReadFloat(vector.GetProperty("rate")),
			vector.GetProperty("reached").GetBoolean(),
			GoldenVectors.ReadFloat(vector.GetProperty("currentOutput")),
		});

	public static IEnumerable<object[]> SetPresetVectors() => GoldenVectors.Load("004D83CC.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("input").GetInt32(),
			vector.GetProperty("result").GetInt32(),
			vector.GetProperty("stored").GetInt32(),
		});

	public static IEnumerable<object[]> RelativeOffsetVectors() => GoldenVectors.Load("004D7614.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("presetIndex").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("offset")),
			vector.GetProperty("withHit").GetBoolean(),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
		});

	public static IEnumerable<object[]> AttachTargetVectors() => GoldenVectors.Load("004D74D8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasPlayer").GetBoolean(),
			vector.GetProperty("presetIndex").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			vector.GetProperty("heading").GetInt32(),
			vector.GetProperty("withHit").GetBoolean(),
			vector.GetProperty("yaw").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
		});

	public static IEnumerable<object[]> CutsceneViewVectors() => GoldenVectors.Load("004D7998.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flags").GetByte(),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneEye")),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneTarget")),
			vector.GetProperty("clientId").GetInt16(),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			vector.GetProperty("applied").GetBoolean(),
			vector.GetProperty("modeFlags").GetUInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
		});

	public static IEnumerable<object[]> EyeFromYawVectors() => GoldenVectors.Load("004D7CE4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("yaw").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eyeOffset")),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
		});

	public static IEnumerable<object[]> TargetVerticalAimVectors() => GoldenVectors.Load("004D7D40.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("previousPosition")),
			vector.GetProperty("heading").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("targetOffset")),
			vector.GetProperty("firstPerson").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("aimHeightInput")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			GoldenVectors.ReadFloat(vector.GetProperty("aimHeightOutput")),
		});

	public static IEnumerable<object[]> LookAheadVectors() => GoldenVectors.Load("004D235C.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("previousPosition")),
			vector.GetProperty("heading").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("controllerEye")),
			GoldenVectors.ReadVector(vector.GetProperty("controllerTarget")),
			vector.GetProperty("controllerYaw").GetInt32(),
			vector.GetProperty("withHit").GetBoolean(),
			vector.GetProperty("hit").GetBoolean(),
			vector.GetProperty("stepState").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("collisionPoint")),
		});

	public static IEnumerable<object[]> LockFollowTargetVectors() => GoldenVectors.Load("004D88E8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("operationMode").GetInt32(),
			vector.GetProperty("presetIndex").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			vector.GetProperty("heading").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("controllerEye")),
			GoldenVectors.ReadVector(vector.GetProperty("controllerTarget")),
			vector.GetProperty("flags").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("eyeSmoothing")),
			vector.GetProperty("behaviorFlags").GetUInt32(),
			vector.GetProperty("desiredYaw").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("presetEyeOffset")),
			GoldenVectors.ReadVector(vector.GetProperty("presetTargetOffset")),
		});

	public static IEnumerable<object[]> CloseFollowLockVectors() => GoldenVectors.Load("004D1B00.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("controllerTarget")),
			GoldenVectors.ReadVector(vector.GetProperty("modeTarget")),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			vector.GetProperty("flags").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("eyeSmoothing")),
			GoldenVectors.ReadFloat(vector.GetProperty("targetSmoothing")),
			GoldenVectors.ReadVector(vector.GetProperty("presetEyeOffset")),
			GoldenVectors.ReadVector(vector.GetProperty("presetTargetOffset")),
		});

	public static IEnumerable<object[]> CloseFollowFocusVectors() => GoldenVectors.Load("004D1870.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("focusStateInput").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("playerPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("focusPosition")),
			GoldenVectors.ReadVector(vector.GetProperty("lockedTargetInput")),
			GoldenVectors.ReadVector(vector.GetProperty("lockedEyeInput")),
			vector.GetProperty("focusStateOutput").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eyeOutput")),
			GoldenVectors.ReadVector(vector.GetProperty("targetOutput")),
			GoldenVectors.ReadVector(vector.GetProperty("lockedTargetOutput")),
			GoldenVectors.ReadVector(vector.GetProperty("lockedEyeOutput")),
		});

	[Theory]
	[MemberData(nameof(StepAngleVectors))]
	public void StepAngleTowardsMatchesTheMachineCode(int current, int target, int speed, int expected) =>
		Assert.Equal(expected, FieldCameraController.StepAngleTowards(current, target, speed));

	[Theory]
	[MemberData(nameof(StepScalarVectors))]
	public void StepScalarMatchesTheMachineCode(float current, float target, float maxDelta, float expected) =>
		GoldenVectors.AssertFloat(expected, FieldCameraController.StepScalar(current, target, maxDelta));

	[Theory]
	[MemberData(nameof(SmoothScalarVectors))]
	public void SmoothScalarMatchesTheMachineCode(float current, float target, float rate, bool expectedReached, float expectedOutput)
	{
		bool reached = FieldCameraController.SmoothScalar(ref current, target, rate);
		Assert.Equal(expectedReached, reached);
		GoldenVectors.AssertFloat(expectedOutput, current);
	}

	[Theory]
	[MemberData(nameof(SetPresetVectors))]
	public void SetFollowPresetMatchesTheMachineCode(int input, int expectedResult, int expectedStored)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			int actual = FieldCameraController.SetFollowPreset(input);
			Assert.Equal(expectedResult, actual);
			Assert.Equal(expectedStored, FieldCameraController.FollowPresetIndex);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RelativeOffsetVectors))]
	public void SetRelativeOffsetsMatchesTheMachineCode(
		bool hasPlayer,
		int presetIndex,
		Vector3 playerPosition,
		Vector3 offset,
		bool withHit,
		Vector3 expectedEye,
		Vector3 expectedTarget)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.FollowPresetIndex = presetIndex;
			FieldCameraFollowMode mode = new() { Eye = default, Target = default };
			PlayerCharacter? entity = hasPlayer ? PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty) : null;
			IGroundCollision ground = withHit
				? new SyntheticTriangleCollision(new(-100, -100, 15), new(100, -100, 15), new(0, 100, 15))
				: NoGroundCollision.Instance;
			mode.SetRelativeOffsets(entity, offset, ground);
			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(AttachTargetVectors))]
	public void AttachTargetMatchesTheMachineCode(
		bool hasPlayer,
		int presetIndex,
		Vector3 playerPosition,
		int heading,
		bool withHit,
		int expectedYaw,
		Vector3 expectedEye,
		Vector3 expectedTarget)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.FollowPresetIndex = presetIndex;
			FieldCameraFollowMode mode = new() { YawAngle = 0, Eye = default, Target = default };
			PlayerCharacter? entity = hasPlayer
				? PlayerCharacter.Create(0, playerPosition, unchecked((ushort)heading), PlayerAnimationSet.Empty)
				: null;
			IGroundCollision ground = withHit
				? new SyntheticTriangleCollision(new(-100, -100, -20), new(100, -100, -20), new(0, 100, -20))
				: NoGroundCollision.Instance;
			mode.AttachTargetWithCollision(entity, ground);
			Assert.Equal(expectedYaw, mode.YawAngle);
			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(CutsceneViewVectors))]
	public void TryApplyCutsceneViewMatchesTheMachineCode(
		byte flags,
		Vector3 cutsceneEye,
		Vector3 cutsceneTarget,
		short clientId,
		Vector3 playerPosition,
		bool expectedApplied,
		uint expectedModeFlags,
		Vector3 expectedEye,
		Vector3 expectedTarget)
	{
		FieldCameraController.ResetGlobals();
		PlayerCharacter.ResetGlobals();
		try
		{
			FieldCameraFollowMode mode = new() { Flags = 5, Eye = default, Target = default };
			FieldCameraController.CutsceneViewFlags = flags;
			FieldCameraController.CutsceneEye = cutsceneEye;
			FieldCameraController.CutsceneTarget = cutsceneTarget;
			FieldCameraController.CutsceneTargetClientId = clientId;
			if (clientId >= 0 && clientId < 4)
				PlayerCharacter.Slots[clientId] = PlayerCharacter.Create(clientId, playerPosition, 0, PlayerAnimationSet.Empty);

			bool applied = mode.TryApplyCutsceneView();
			Assert.Equal(expectedApplied, applied);
			Assert.Equal(expectedModeFlags, mode.Flags);
			GoldenVectors.AssertVector(expectedEye, mode.Eye);
			GoldenVectors.AssertVector(expectedTarget, mode.Target);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
			PlayerCharacter.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(EyeFromYawVectors))]
	public void ComputeEyeFromYawMatchesTheMachineCode(int yaw, Vector3 eyeOffset, Vector3 playerPosition, Vector3 expectedEye)
	{
		FieldCameraFollowMode mode = new()
		{
			YawAngle = yaw,
			PresetEyeOffset = eyeOffset,
			TargetEntity = PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty),
		};
		mode.ComputeEyeFromYaw();
		GoldenVectors.AssertVector(expectedEye, mode.Eye);
	}

	[Theory]
	[MemberData(nameof(TargetVerticalAimVectors))]
	public void ComputeTargetAndVerticalAimMatchesTheMachineCode(
		Vector3 playerPosition,
		Vector3 previousPosition,
		int heading,
		Vector3 targetOffset,
		int firstPerson,
		float aimHeightInput,
		Vector3 expectedTarget,
		float expectedAimHeightOutput)
	{
		PlayerCharacter entity = PlayerCharacter.Create(0, previousPosition, unchecked((ushort)heading), PlayerAnimationSet.Empty);
		entity.CapturePreviousPosition();
		entity.MoveTo(playerPosition);
		FieldCameraFollowMode mode = new()
		{
			TargetEntity = entity,
			PresetTargetOffset = targetOffset,
			FirstPersonActive = firstPerson,
			AimHeightOffset = aimHeightInput,
		};
		mode.ComputeTargetAndVerticalAim(inCombatCameraArea: true);
		GoldenVectors.AssertVector(expectedTarget, mode.Target);
		GoldenVectors.AssertFloat(expectedAimHeightOutput, mode.AimHeightOffset);
	}

	[Theory]
	[MemberData(nameof(LookAheadVectors))]
	public void ResolveLookAheadCollisionMatchesTheMachineCode(
		Vector3 playerPosition,
		Vector3 previousPosition,
		int heading,
		Vector3 controllerEye,
		Vector3 controllerTarget,
		int controllerYaw,
		bool withHit,
		bool expectedHit,
		int expectedStepState,
		Vector3 expectedCollisionPoint)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new()
			{
				Eye = controllerEye,
				Target = controllerTarget,
				YawAngle = controllerYaw,
			};
			FieldCameraController.Current = controller;
			PlayerCharacter entity = PlayerCharacter.Create(0, previousPosition, unchecked((ushort)heading), PlayerAnimationSet.Empty);
			entity.CapturePreviousPosition();
			entity.MoveTo(playerPosition);
			FieldCameraFollowMode mode = new()
			{
				TargetEntity = entity,
				StepState = 10,
				IdleTurnThresholdSeconds = 2,
			};
			IGroundCollision ground = withHit
				? new SyntheticTriangleCollision(new(-100, -100, 20), new(100, -100, 20), new(0, 100, 20))
				: NoGroundCollision.Instance;
			bool hit = mode.ResolveLookAheadCollision(ground);
			Assert.Equal(expectedHit, hit);
			Assert.Equal(expectedStepState, mode.StepState);
			GoldenVectors.AssertVector(expectedCollisionPoint, mode.LookAheadCollisionPoint);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(LockFollowTargetVectors))]
	public void LockFollowTargetMatchesTheMachineCode(
		int operationMode,
		int presetIndex,
		Vector3 playerPosition,
		int heading,
		Vector3 controllerEye,
		Vector3 controllerTarget,
		uint expectedFlags,
		float expectedEyeSmoothing,
		uint expectedBehaviorFlags,
		int expectedDesiredYaw,
		Vector3 expectedPresetEyeOffset,
		Vector3 expectedPresetTargetOffset)
	{
		FieldCameraController.ResetGlobals();
		SoundSelection.OperationMode = operationMode;
		try
		{
			FieldCameraController.FollowPresetIndex = presetIndex;
			FieldCameraController controller = new()
			{
				Eye = controllerEye,
				Target = controllerTarget,
			};
			FieldCameraController.Current = controller;
			PlayerCharacter entity = PlayerCharacter.Create(0, playerPosition, unchecked((ushort)heading), PlayerAnimationSet.Empty);
			FieldCameraFollowMode mode = new() { TargetEntity = entity, IdleTurnThresholdSeconds = 2 };
			mode.OnTargetLockedWithCollision(NoGroundCollision.Instance);
			Assert.Equal(expectedFlags, mode.Flags);
			GoldenVectors.AssertFloat(expectedEyeSmoothing, mode.EyeSmoothing);
			Assert.Equal(expectedBehaviorFlags, mode.BehaviorFlags);
			Assert.Equal(expectedDesiredYaw, mode.DesiredYawAngle);
			GoldenVectors.AssertVector(expectedPresetEyeOffset, mode.PresetEyeOffset);
			GoldenVectors.AssertVector(expectedPresetTargetOffset, mode.PresetTargetOffset);
		}
		finally
		{
			SoundSelection.OperationMode = 0;
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(CloseFollowLockVectors))]
	public void CloseFollowLockTargetMatchesTheMachineCode(
		Vector3 controllerTarget,
		Vector3 modeTarget,
		Vector3 playerPosition,
		uint expectedFlags,
		float expectedEyeSmoothing,
		float expectedTargetSmoothing,
		Vector3 expectedPresetEyeOffset,
		Vector3 expectedPresetTargetOffset)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Current = new FieldCameraController { Target = controllerTarget };
			PlayerCharacter entity = PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty);
			FieldCameraCloseFollowMode mode = new()
			{
				TargetEntity = entity,
				Target = modeTarget,
				IdleTurnThresholdSeconds = 2,
			};
			mode.OnTargetLockedWithGround(NoGroundCollision.Instance);
			Assert.Equal(expectedFlags, mode.Flags);
			GoldenVectors.AssertFloat(expectedEyeSmoothing, mode.EyeSmoothing);
			GoldenVectors.AssertFloat(expectedTargetSmoothing, mode.TargetSmoothing);
			GoldenVectors.AssertVector(expectedPresetEyeOffset, mode.PresetEyeOffset);
			GoldenVectors.AssertVector(expectedPresetTargetOffset, mode.PresetTargetOffset);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(CloseFollowFocusVectors))]
	public void CloseFollowUpdateFocusTargetMatchesTheMachineCode(
		int focusStateInput,
		Vector3 playerPosition,
		Vector3 focusPosition,
		Vector3 lockedTargetInput,
		Vector3 lockedEyeInput,
		int expectedFocusStateOutput,
		Vector3 expectedEyeOutput,
		Vector3 expectedTargetOutput,
		Vector3 expectedLockedTargetOutput,
		Vector3 expectedLockedEyeOutput)
	{
		PlayerCharacter entity = PlayerCharacter.Create(0, playerPosition, 0, PlayerAnimationSet.Empty);
		FieldCameraCloseFollowMode mode = new()
		{
			TargetEntity = entity,
			FocusState = focusStateInput,
			LockedTargetOffset = lockedTargetInput,
			LockedEyeOffset = lockedEyeInput,
		};
		mode.UpdateFocusTarget(focusPosition);
		Assert.Equal(expectedFocusStateOutput, mode.FocusState);
		GoldenVectors.AssertVector(expectedEyeOutput, mode.Eye);
		GoldenVectors.AssertVector(expectedTargetOutput, mode.Target);
		GoldenVectors.AssertVector(expectedLockedTargetOutput, mode.LockedTargetOffset);
		GoldenVectors.AssertVector(expectedLockedEyeOutput, mode.LockedEyeOffset);
	}
}
