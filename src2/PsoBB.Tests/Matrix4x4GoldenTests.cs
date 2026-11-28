using System.Text.Json;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the row-major matrix helpers against vectors produced by the original machine code.
/// </summary>
public sealed class Matrix4x4GoldenTests
{
	public static IEnumerable<object[]> MultiplyVectors() => GoldenVectors.Load("00831308.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("left")),
			GoldenVectors.ReadMatrix(vector.GetProperty("right")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TranslateVectors() => GoldenVectors.Load("008316B4.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("translation")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TransformPositionsVectors() => GoldenVectors.Load("0082F940.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadFlatVectors(vector.GetProperty("points")),
			vector.GetProperty("result").EnumerateArray().Select(element => GoldenVectors.ReadVector(element)).ToArray(),
		});

	public static IEnumerable<object[]> ScaleRowsVectors() => GoldenVectors.Load("0082FA0C.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("factors")),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> RotateYVectors() => GoldenVectors.Load("0082D8BC.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> RotateXVectors() => GoldenVectors.Load("0082E9E4.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadMatrix(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TransformDirectionVectors() => GoldenVectors.Load("0083A610.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("direction")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> DeterminantVectors() => GoldenVectors.Load("0084A778.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadFloat(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TryInvertVectors() => GoldenVectors.Load("0083C670.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("input")),
			vector.GetProperty("succeeded").GetBoolean(),
			GoldenVectors.ReadMatrix(vector.GetProperty("output")),
		});

	[Theory]
	[MemberData(nameof(MultiplyVectors))]
	public void MultiplyMatchesTheMachineCode(Matrix4x4 left, Matrix4x4 right, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, Matrix4x4.Multiply(left, right));

	[Theory]
	[MemberData(nameof(TranslateVectors))]
	public void TranslateMatchesTheMachineCode(Matrix4x4 matrix, Vector3 translation, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, matrix.Translate(translation));

	[Theory]
	[MemberData(nameof(TransformPositionsVectors))]
	public void TransformPositionsMatchesTheMachineCode(Matrix4x4 matrix, Vector3[] points, Vector3[] expected)
	{
		Vector3[] actual = new Vector3[points.Length];
		matrix.TransformPositions(points, actual);
		Assert.Equal(expected.Length, actual.Length);
		for (int index = 0; index < expected.Length; index++)
			GoldenVectors.AssertVector(expected[index], actual[index]);
	}

	[Theory]
	[MemberData(nameof(ScaleRowsVectors))]
	public void ScaleRowsMatchesTheMachineCode(Matrix4x4 matrix, Vector3 factors, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, matrix.ScaleRows(factors.X, factors.Y, factors.Z));

	[Theory]
	[MemberData(nameof(RotateYVectors))]
	public void RotateYMatchesTheMachineCode(Matrix4x4 matrix, int angle, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, matrix.RotateY(angle));

	[Theory]
	[MemberData(nameof(RotateXVectors))]
	public void RotateXMatchesTheMachineCode(Matrix4x4 matrix, int angle, Matrix4x4 expected) =>
		GoldenVectors.AssertMatrix(expected, matrix.RotateX(angle));

	[Theory]
	[MemberData(nameof(TransformDirectionVectors))]
	public void TransformDirectionMatchesTheMachineCode(Matrix4x4 matrix, Vector3 direction, Vector3 expected) =>
		GoldenVectors.AssertVector(expected, matrix.TransformDirection(direction));

	[Theory]
	[MemberData(nameof(DeterminantVectors))]
	public void DeterminantMatchesTheMachineCode(Matrix4x4 matrix, float expected) =>
		GoldenVectors.AssertFloat(expected, matrix.Determinant());

	[Theory]
	[MemberData(nameof(TryInvertVectors))]
	public void TryInvertMatchesTheMachineCode(Matrix4x4 matrix, bool expectedSucceeded, Matrix4x4 expectedOutput)
	{
		bool succeeded = Matrix4x4.TryInvert(ref matrix);
		Assert.Equal(expectedSucceeded, succeeded);
		GoldenVectors.AssertMatrix(expectedOutput, matrix);
	}
}
