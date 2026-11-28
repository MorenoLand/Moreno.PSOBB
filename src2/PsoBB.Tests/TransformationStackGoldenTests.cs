using PsoBB.Mathematics;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class TransformationStackGoldenTests
{
	public static IEnumerable<object[]> TransformPositionVectors() => GoldenVectors.Load("00835C3C.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("point")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> MatrixPointVectors() => GoldenVectors.Load("00830AA0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("point")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> MultiplyMatrixVectors() => GoldenVectors.Load("0083A668.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("destination")),
			GoldenVectors.ReadMatrix(vector.GetProperty("transform")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> ApplyInverseViewVectors() => GoldenVectors.Load("004D4564.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("stackTop")),
			GoldenVectors.ReadMatrix(vector.GetProperty("inverseView")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> InverseViewPointVectors() => GoldenVectors.Load("004D4574.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("stackTop")),
			GoldenVectors.ReadMatrix(vector.GetProperty("inverseView")),
			GoldenVectors.ReadVector(vector.GetProperty("point")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> OrbitAlignVectors() => GoldenVectors.Load("004D5188.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			GoldenVectors.ReadFloat(vector.GetProperty("distance")),
			vector.GetProperty("pitchAngle").GetInt32(),
			vector.GetProperty("yawAngle").GetInt32(),
		});

	[Theory]
	[MemberData(nameof(TransformPositionVectors))]
	public void TransformPositionMatchesTheMachineCode(Matrix4x4 matrix, Vector3 point, Vector3 expected)
	{
		TransformationStack stack = new();
		stack.ReplaceCurrent(matrix);
		GoldenVectors.AssertVector(expected, stack.TransformPosition(point));
	}

	[Theory]
	[MemberData(nameof(MatrixPointVectors))]
	public void MatrixTransformPositionMatchesTheMachineCode(bool useStack, Matrix4x4 matrix, Vector3 point, Vector3 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(matrix);
			GoldenVectors.AssertVector(expected, stack.TransformPosition(point));
		}
		else
		{
			GoldenVectors.AssertVector(expected, matrix.TransformPosition(point));
		}
	}

	[Theory]
	[MemberData(nameof(MultiplyMatrixVectors))]
	public void MultiplyCurrentMatchesTheMachineCode(bool useStack, Matrix4x4 destination, Matrix4x4 transform, Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(destination);
			stack.MultiplyCurrent(transform);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = destination;
			TransformationStack.MultiplyInto(ref target, transform);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	[Theory]
	[MemberData(nameof(ApplyInverseViewVectors))]
	public void ApplyInverseViewMatrixMatchesTheMachineCode(Matrix4x4 stackTop, Matrix4x4 inverseView, Matrix4x4 expected)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.GlobalInverseViewMatrix = inverseView;
			TransformationStack stack = new();
			stack.ReplaceCurrent(stackTop);
			FieldCameraController.ApplyInverseViewMatrix(stack);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(InverseViewPointVectors))]
	public void TransformPointThroughInverseViewMatchesTheMachineCode(
		Matrix4x4 stackTop,
		Matrix4x4 inverseView,
		Vector3 point,
		Vector3 expected)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.GlobalInverseViewMatrix = inverseView;
			TransformationStack stack = new();
			stack.ReplaceCurrent(stackTop);
			Vector3 actual = FieldCameraController.TransformPointThroughInverseView(stack, point);
			GoldenVectors.AssertVector(expected, actual);
			GoldenVectors.AssertMatrix(stackTop, stack.Current);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(OrbitAlignVectors))]
	public void OrbitAlignToViewMatchesTheMachineCode(
		Vector3 eye,
		Vector3 target,
		float expectedDistance,
		int expectedPitch,
		int expectedYaw)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraOrbitMode orbit = new();
			FieldCameraController.Modes[6] = orbit;
			FieldCameraOrbitMode.AlignToView(eye, target);
			GoldenVectors.AssertFloat(expectedDistance, orbit.Distance);
			Assert.Equal(expectedPitch, orbit.PitchAngle);
			Assert.Equal(expectedYaw, orbit.YawAngle);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}
}
