using PsoBB.Game.Tasks;
using PsoBB.Mathematics;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class FieldCameraTaskGoldenTests
{
	public static IEnumerable<object[]> OrientationAxesVectors() => GoldenVectors.Load("004D44CC.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("pitch").GetInt32(),
			vector.GetProperty("yaw").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("rightAxis")),
			GoldenVectors.ReadVector(vector.GetProperty("upAxis")),
		});

	public static IEnumerable<object[]> GlobalUpAxisVectors() => GoldenVectors.Load("004D45A0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("axis")),
			GoldenVectors.ReadVector(vector.GetProperty("outputAxis")),
		});

	public static IEnumerable<object[]> LinearPanInitVectors() => GoldenVectors.Load("004D5B98.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("controllerEye")),
			GoldenVectors.ReadVector(vector.GetProperty("controllerTarget")),
			GoldenVectors.ReadVector(vector.GetProperty("destination")),
			(ushort)vector.GetProperty("moveFrames").GetInt32(),
			(ushort)vector.GetProperty("holdFrames").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("stepSpeed")),
			(ushort)vector.GetProperty("elapsedFrames").GetInt32(),
			(ushort)vector.GetProperty("moveFramesOutput").GetInt32(),
			(ushort)vector.GetProperty("holdFramesOutput").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("startTarget")),
			GoldenVectors.ReadVector(vector.GetProperty("endTarget")),
			vector.GetProperty("cutsceneViewFlags").GetByte(),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneEye")),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneTarget")),
		});

	public static IEnumerable<object[]> LinearPanStepVectors() => GoldenVectors.Load("004D5AAC.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("controllerEye")),
			GoldenVectors.ReadVector(vector.GetProperty("startTarget")),
			GoldenVectors.ReadVector(vector.GetProperty("endTarget")),
			GoldenVectors.ReadFloat(vector.GetProperty("stepSpeed")),
			(ushort)vector.GetProperty("elapsed").GetInt32(),
			(ushort)vector.GetProperty("moveFrames").GetInt32(),
			(ushort)vector.GetProperty("holdFrames").GetInt32(),
			vector.GetProperty("viewFlags").GetByte(),
			(ushort)vector.GetProperty("taskFlagsOutput").GetInt32(),
			(ushort)vector.GetProperty("elapsedOutput").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("endTargetOutput")),
			vector.GetProperty("cutsceneViewFlagsOutput").GetByte(),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneEyeOutput")),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneTargetOutput")),
		});

	public static IEnumerable<object[]> PathTaskInitVectors() => GoldenVectors.Load("004D5D5C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasEye").GetBoolean(),
			vector.GetProperty("hasTarget").GetBoolean(),
			(short)vector.GetProperty("count").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("speed")),
			(ushort)vector.GetProperty("targetClientId").GetInt32(),
			(ushort)vector.GetProperty("loop").GetInt32(),
			(ushort)vector.GetProperty("taskFlags").GetInt32(),
			vector.GetProperty("cutsceneViewFlags").GetByte(),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneEye")),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneTarget")),
			vector.GetProperty("cutsceneTargetClientId").GetInt16(),
		});

	public static IEnumerable<object[]> PathTaskStepVectors() => GoldenVectors.Load("004D5E88.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hasEye").GetBoolean(),
			vector.GetProperty("hasTarget").GetBoolean(),
			(short)vector.GetProperty("frameInput").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("speed")),
			(ushort)vector.GetProperty("targetClientId").GetInt32(),
			(ushort)vector.GetProperty("loop").GetInt32(),
			(ushort)vector.GetProperty("taskFlags").GetInt32(),
			(short)vector.GetProperty("frameOutput").GetInt32(),
			vector.GetProperty("cutsceneViewFlags").GetByte(),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneEye")),
			GoldenVectors.ReadVector(vector.GetProperty("cutsceneTarget")),
			vector.GetProperty("cutsceneTargetClientId").GetInt16(),
		});

	[Theory]
	[MemberData(nameof(OrientationAxesVectors))]
	public void SetOrientationAxesMatchesTheMachineCode(
		int pitch,
		int yaw,
		Vector3 expectedRight,
		Vector3 expectedUp)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.SetOrientationAxes(pitch, yaw);
			GoldenVectors.AssertVector(expectedRight, FieldCameraController.RightAxis);
			GoldenVectors.AssertVector(expectedUp, FieldCameraController.UpAxis);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(GlobalUpAxisVectors))]
	public void SetGlobalUpAxisMatchesTheMachineCode(Vector3 axis, Vector3 expectedAxis)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.SetGlobalUpAxis(axis);
			GoldenVectors.AssertVector(expectedAxis, FieldCameraController.GlobalUpAxis);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(LinearPanInitVectors))]
	public void LinearPanInitMatchesTheMachineCode(
		Vector3 controllerEye,
		Vector3 controllerTarget,
		Vector3 destination,
		ushort moveFrames,
		ushort holdFrames,
		float expectedStepSpeed,
		ushort expectedElapsed,
		ushort expectedMoveFrames,
		ushort expectedHoldFrames,
		Vector3 expectedStartTarget,
		Vector3 expectedEndTarget,
		byte expectedViewFlags,
		Vector3 expectedCutsceneEye,
		Vector3 expectedCutsceneTarget)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Current = new FieldCameraController
			{
				Eye = controllerEye,
				Target = controllerTarget,
			};
			FieldCameraLinearPanTask task = FieldCameraLinearPanTask.Create(destination, moveFrames, holdFrames);
			GoldenVectors.AssertFloat(expectedStepSpeed, task.StepSpeed);
			Assert.Equal(expectedElapsed, task.ElapsedFrames);
			Assert.Equal(expectedMoveFrames, task.MoveFrames);
			Assert.Equal(expectedHoldFrames, task.HoldFrames);
			GoldenVectors.AssertVector(expectedStartTarget, task.StartTarget);
			GoldenVectors.AssertVector(expectedEndTarget, task.EndTarget);
			Assert.Equal(expectedViewFlags, FieldCameraController.CutsceneViewFlags);
			GoldenVectors.AssertVector(expectedCutsceneEye, FieldCameraController.CutsceneEye);
			GoldenVectors.AssertVector(expectedCutsceneTarget, FieldCameraController.CutsceneTarget);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(LinearPanStepVectors))]
	public void LinearPanStepMatchesTheMachineCode(
		Vector3 controllerEye,
		Vector3 startTarget,
		Vector3 endTarget,
		float stepSpeed,
		ushort elapsed,
		ushort moveFrames,
		ushort holdFrames,
		byte viewFlags,
		ushort expectedTaskFlags,
		ushort expectedElapsed,
		Vector3 expectedEndTarget,
		byte expectedViewFlags,
		Vector3 expectedCutsceneEye,
		Vector3 expectedCutsceneTarget)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Current = new FieldCameraController { Eye = controllerEye };
			FieldCameraController.CutsceneViewFlags = viewFlags;
			FieldCameraLinearPanTask task = new(default, moveFrames, holdFrames)
			{
				StartTarget = startTarget,
				EndTarget = endTarget,
				StepSpeed = stepSpeed,
				ElapsedFrames = elapsed,
			};
			FieldCameraController.CutsceneViewFlags = viewFlags;
			FieldCameraController.CutsceneEye = default;
			FieldCameraController.CutsceneTarget = default;
			task.RunTask();
			Assert.Equal((GameTaskFlags)expectedTaskFlags, task.Flags);
			Assert.Equal(expectedElapsed, task.ElapsedFrames);
			GoldenVectors.AssertVector(expectedEndTarget, task.EndTarget);
			Assert.Equal(expectedViewFlags, FieldCameraController.CutsceneViewFlags);
			GoldenVectors.AssertVector(expectedCutsceneEye, FieldCameraController.CutsceneEye);
			GoldenVectors.AssertVector(expectedCutsceneTarget, FieldCameraController.CutsceneTarget);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PathTaskInitVectors))]
	public void PathTaskInitMatchesTheMachineCode(
		bool hasEye,
		bool hasTarget,
		short count,
		float speed,
		ushort targetClientId,
		ushort loop,
		ushort expectedTaskFlags,
		byte expectedViewFlags,
		Vector3 expectedCutsceneEye,
		Vector3 expectedCutsceneTarget,
		short expectedTargetClientId)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			PathNode[]? eyeNodes = hasEye ? [new(new Vector3(1.0f, 2.0f, 3.0f), 10.0f)] : null;
			PathNode[]? targetNodes = hasTarget ? [new(new Vector3(4.0f, 5.0f, 6.0f), 10.0f)] : null;
			FieldCameraPathTask task = new(eyeNodes, targetNodes, count, speed, targetClientId, loop);
			Assert.Equal((GameTaskFlags)expectedTaskFlags, task.Flags);
			Assert.Equal(expectedViewFlags, FieldCameraController.CutsceneViewFlags);
			GoldenVectors.AssertVector(expectedCutsceneEye, FieldCameraController.CutsceneEye);
			GoldenVectors.AssertVector(expectedCutsceneTarget, FieldCameraController.CutsceneTarget);
			Assert.Equal(expectedTargetClientId, FieldCameraController.CutsceneTargetClientId);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PathTaskStepVectors))]
	public void PathTaskStepMatchesTheMachineCode(
		bool hasEye,
		bool hasTarget,
		short frameInput,
		float speed,
		ushort targetClientId,
		ushort loop,
		ushort expectedTaskFlags,
		short expectedFrameOutput,
		byte expectedViewFlags,
		Vector3 expectedCutsceneEye,
		Vector3 expectedCutsceneTarget,
		short expectedTargetClientId)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			PathNode[]? eyeNodes = hasEye
				? [new(new Vector3(0.0f, 10.0f, 0.0f), 10.0f), new(new Vector3(10.0f, 10.0f, 0.0f), 20.0f), new(new Vector3(10.0f, 30.0f, 0.0f), 20.0f)]
				: null;
			PathNode[]? targetNodes = hasTarget
				? [new(new Vector3(0.0f, 0.0f, 0.0f), 10.0f), new(new Vector3(0.0f, 10.0f, 0.0f), 20.0f), new(new Vector3(10.0f, 10.0f, 0.0f), 20.0f)]
				: null;
			FieldCameraPathTask task = new(eyeNodes, targetNodes, 3, speed, targetClientId, loop)
			{
				Frame = frameInput,
			};
			FieldCameraController.CutsceneViewFlags = 0;
			FieldCameraController.CutsceneEye = default;
			FieldCameraController.CutsceneTarget = default;
			FieldCameraController.CutsceneTargetClientId = -1;
			task.RunTask();
			Assert.Equal((GameTaskFlags)expectedTaskFlags, task.Flags);
			Assert.Equal(expectedFrameOutput, task.Frame);
			Assert.Equal(expectedViewFlags, FieldCameraController.CutsceneViewFlags);
			GoldenVectors.AssertVector(expectedCutsceneEye, FieldCameraController.CutsceneEye);
			GoldenVectors.AssertVector(expectedCutsceneTarget, FieldCameraController.CutsceneTarget);
			Assert.Equal(expectedTargetClientId, FieldCameraController.CutsceneTargetClientId);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}
}
