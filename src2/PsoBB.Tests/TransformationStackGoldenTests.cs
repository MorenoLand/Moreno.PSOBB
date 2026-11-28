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

	public static IEnumerable<object[]> RotateAxisVectors() => GoldenVectors.Load("0083CDB0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("axis")),
			vector.GetProperty("angle").GetInt32(),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> LoadIdentityVectors() => GoldenVectors.Load("00830CD8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("initial")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TranslateScalarVectors() => GoldenVectors.Load("00830B74.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("translation")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
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

	[Theory]
	[MemberData(nameof(RotateAxisVectors))]
	public void RotateAxisMatchesTheMachineCode(bool useStack, Matrix4x4 initial, Vector3 axis, int angle, Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(initial);
			stack.RotateAxis(axis, angle);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = initial;
			TransformationStack.RotateAxis(ref target, axis, angle);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	[Theory]
	[MemberData(nameof(LoadIdentityVectors))]
	public void LoadIdentityMatchesTheMachineCode(bool useStack, Matrix4x4 initial, Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(initial);
			stack.LoadIdentity();
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = initial;
			TransformationStack.LoadIdentity(ref target);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	[Theory]
	[MemberData(nameof(TranslateScalarVectors))]
	public void TranslateScalarMatchesTheMachineCode(bool useStack, Matrix4x4 initial, Vector3 translation, Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(initial);
			stack.Translate(translation.X, translation.Y, translation.Z);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = initial;
			TransformationStack.Translate(ref target, translation.X, translation.Y, translation.Z);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	public static IEnumerable<object[]> RotateEulerVectors() => GoldenVectors.Load("0082DF5C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("initial")),
			vector.GetProperty("xAngle").GetInt32(),
			vector.GetProperty("yAngle").GetInt32(),
			vector.GetProperty("zAngle").GetInt32(),
			GoldenVectors.ReadMatrix(vector.GetProperty("expected")),
		});

	public static IEnumerable<object[]> PreMultiplyCurrentVectors() => GoldenVectors.Load("0083BA24.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("current")),
			GoldenVectors.ReadMatrix(vector.GetProperty("left")),
			GoldenVectors.ReadMatrix(vector.GetProperty("expected")),
		});

	public static IEnumerable<object[]> MirrorPlaneVectors() => GoldenVectors.Load("0083B47C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("useStack").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("initial")),
			GoldenVectors.ReadVector(vector.GetProperty("point")),
			GoldenVectors.ReadVector(vector.GetProperty("normal")),
			GoldenVectors.ReadMatrix(vector.GetProperty("expected")),
		});

	public static IEnumerable<object[]> ResetMirroredBasisVectors() => GoldenVectors.Load("0084AF0C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("capacity").GetInt32(),
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			vector.GetProperty("depth").GetInt32(),
			vector.GetProperty("initialized").GetUInt32(),
			vector.GetProperty("capacityOut").GetInt32(),
			vector.GetProperty("sameBaseAndCurrent").GetBoolean(),
		});

	[Theory]
	[MemberData(nameof(RotateEulerVectors))]
	public void RotateEulerMatchesTheMachineCode(
		bool useStack,
		Matrix4x4 initial,
		int xAngle,
		int yAngle,
		int zAngle,
		Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(initial);
			stack.RotateEuler(xAngle, yAngle, zAngle);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = initial;
			TransformationStack.RotateEuler(ref target, xAngle, yAngle, zAngle);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	[Theory]
	[MemberData(nameof(PreMultiplyCurrentVectors))]
	public void PreMultiplyCurrentMatchesTheMachineCode(Matrix4x4 current, Matrix4x4 left, Matrix4x4 expected)
	{
		TransformationStack stack = new();
		stack.ReplaceCurrent(current);
		stack.PreMultiplyCurrent(left);
		GoldenVectors.AssertMatrix(expected, stack.Current);
	}

	[Theory]
	[MemberData(nameof(MirrorPlaneVectors))]
	public void MirrorAcrossPlaneMatchesTheMachineCode(
		bool useStack,
		Matrix4x4 initial,
		Vector3 point,
		Vector3 normal,
		Matrix4x4 expected)
	{
		if (useStack)
		{
			TransformationStack stack = new();
			stack.ReplaceCurrent(initial);
			stack.MirrorAcrossPlane(point, normal);
			GoldenVectors.AssertMatrix(expected, stack.Current);
		}
		else
		{
			Matrix4x4 target = initial;
			TransformationStack.MirrorAcrossPlane(ref target, point, normal);
			GoldenVectors.AssertMatrix(expected, target);
		}
	}

	[Theory]
	[MemberData(nameof(ResetMirroredBasisVectors))]
	public void ResetMirroredBasisMatchesTheMachineCode(
		int capacity,
		Matrix4x4 expectedMatrix,
		int expectedDepth,
		uint expectedInitialized,
		int expectedCapacity,
		bool sameBaseAndCurrent)
	{
		Assert.True(sameBaseAndCurrent);
		TransformationStack stack = new();
		stack.PushCopy();
		stack.ResetMirroredBasis(capacity);
		GoldenVectors.AssertMatrix(expectedMatrix, stack.Current);
		Assert.Equal(expectedDepth, stack.Depth);
		Assert.Equal(expectedInitialized != 0, stack.IsInitialized);
		Assert.Equal(expectedCapacity, stack.Capacity);
	}
}
