using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the row-major matrix helpers and their boundaries.
/// </summary>
public sealed class Matrix4x4Tests
{
	private static readonly Matrix4x4 Identity = new(
		1, 0, 0, 0,
		0, 1, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1);

	private static Vector3 Transform(Matrix4x4 matrix, Vector3 point)
	{
		Vector3[] source = [point];
		Vector3[] destination = new Vector3[1];
		matrix.TransformPositions(source, destination);
		return destination[0];
	}

	[Fact]
	public void MultiplyByIdentityKeepsTheMatrix()
	{
		Matrix4x4 value = new(
			1, 2, 3, 4,
			5, 6, 7, 8,
			9, 10, 11, 12,
			13, 14, 15, 16);
		GoldenVectors.AssertMatrix(value, Matrix4x4.Multiply(value, Identity));
		GoldenVectors.AssertMatrix(value, Matrix4x4.Multiply(Identity, value));
	}

	[Fact]
	public void MultiplyAppliesTheLeftMatrixFirst()
	{
		Matrix4x4 scale = new(
			2, 0, 0, 0,
			0, 2, 0, 0,
			0, 0, 2, 0,
			0, 0, 0, 1);
		Matrix4x4 translate = new(
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			3, 4, 5, 1);
		Matrix4x4 translatedScale = Matrix4x4.Multiply(scale, translate);
		GoldenVectors.AssertVector(new Vector3(5, 6, 7), Transform(translatedScale, new Vector3(1, 1, 1)));
		Matrix4x4 scaledTranslate = Matrix4x4.Multiply(translate, scale);
		GoldenVectors.AssertVector(new Vector3(8, 10, 12), Transform(scaledTranslate, new Vector3(1, 1, 1)));
	}

	[Fact]
	public void TranslateAddsTheVectorThroughTheBasisRows()
	{
		Matrix4x4 value = new(
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			10, 20, 30, 1);
		Matrix4x4 translated = value.Translate(new Vector3(1, 2, 3));
		GoldenVectors.AssertVector(new Vector3(11, 22, 33), Transform(translated, default));
		Assert.Equal(1, translated.M44);
	}

	[Fact]
	public void TranslateAlsoMovesTheFourthColumn()
	{
		Matrix4x4 value = new(
			1, 2, 3, 4,
			5, 6, 7, 8,
			9, 10, 11, 12,
			13, 14, 15, 16);
		Matrix4x4 translated = value.Translate(new Vector3(1, 0, 0));
		Assert.Equal(14, translated.M41);
		Assert.Equal(16, translated.M42);
		Assert.Equal(18, translated.M43);
		Assert.Equal(20, translated.M44);
	}

	[Fact]
	public void TransformPositionsHandlesAnEmptySequence()
	{
		Span<Vector3> points = [];
		Identity.TransformPositions(points, points);
	}

	[Fact]
	public void TransformPositionsHandlesMultiplePoints()
	{
		Matrix4x4 value = Identity.Translate(new Vector3(10, 20, 30));
		Vector3[] points = [new(1, 2, 3), new(-1, -2, -3), default];
		Vector3[] transformed = new Vector3[points.Length];
		value.TransformPositions(points, transformed);
		GoldenVectors.AssertVector(new Vector3(11, 22, 33), transformed[0]);
		GoldenVectors.AssertVector(new Vector3(9, 18, 27), transformed[1]);
		GoldenVectors.AssertVector(new Vector3(10, 20, 30), transformed[2]);
	}

	[Fact]
	public void ScaleRowsScalesOnlyTheFirstThreeRows()
	{
		Matrix4x4 value = new(
			1, 2, 3, 4,
			5, 6, 7, 8,
			9, 10, 11, 12,
			13, 14, 15, 16);
		Matrix4x4 scaled = value.ScaleRows(2, 3, 4);
		GoldenVectors.AssertMatrix(new Matrix4x4(
			2, 4, 6, 8,
			15, 18, 21, 24,
			36, 40, 44, 48,
			13, 14, 15, 16), scaled);
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Multiply"] = 0x00831308,
			["Translate"] = 0x008316B4,
			["TransformPositions"] = 0x0082F940,
			["ScaleRows"] = 0x0082FA0C,
			["TransformDirection"] = 0x0083A610,
			["RotateY"] = 0x0082D8BC,
			["RotateX"] = 0x0082E9E4,
		};
		MethodInfo[] methods = typeof(Matrix4x4)
			.GetMethods(BindingFlags.Public | BindingFlags.Static | BindingFlags.Instance | BindingFlags.DeclaredOnly)
			.Where(method => method.GetCustomAttribute<OriginalAttribute>() is not null)
			.ToArray();
		Assert.Equal(expected.Count, methods.Length);
		foreach (MethodInfo method in methods)
		{
			OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
			Assert.Equal(expected[method.Name], attribute.Address);
		}
	}
}
