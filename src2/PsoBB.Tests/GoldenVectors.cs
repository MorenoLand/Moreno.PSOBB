using System.Globalization;
using System.Text.Json;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Loads machine-code fixtures and converts their recorded bit patterns back to values.
/// </summary>
internal static class GoldenVectors
{
	internal static JsonElement[] Load(string name)
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", name);
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		return document.RootElement.EnumerateArray().Select(vector => vector.Clone()).ToArray();
	}

	internal static float ReadFloat(JsonElement value) => BitConverter.UInt32BitsToSingle(value.GetUInt32());

	internal static Vector3 ReadVector(JsonElement value) =>
		new(ReadFloat(value[0]), ReadFloat(value[1]), ReadFloat(value[2]));

	internal static Vector3 ReadVector(JsonElement value, int offset) =>
		new(ReadFloat(value[offset]), ReadFloat(value[offset + 1]), ReadFloat(value[offset + 2]));

	internal static Vector3[] ReadFlatVectors(JsonElement value)
	{
		int count = value.GetArrayLength() / 3;
		Vector3[] vectors = new Vector3[count];
		for (int index = 0; index < count; index++)
			vectors[index] = ReadVector(value, 3 * index);
		return vectors;
	}

	internal static Matrix4x4 ReadMatrix(JsonElement value)
	{
		float[] components = value.EnumerateArray().Select(ReadFloat).ToArray();
		return new Matrix4x4(
			components[0], components[1], components[2], components[3],
			components[4], components[5], components[6], components[7],
			components[8], components[9], components[10], components[11],
			components[12], components[13], components[14], components[15]);
	}

	internal static double ReadDouble(JsonElement value) =>
		BitConverter.UInt64BitsToDouble(ulong.Parse(value.GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture));

	internal static void AssertFloat(float expected, float actual) =>
		Assert.Equal(BitConverter.SingleToUInt32Bits(expected), BitConverter.SingleToUInt32Bits(actual));

	internal static void AssertDouble(double expected, double actual) =>
		Assert.Equal(BitConverter.DoubleToUInt64Bits(expected), BitConverter.DoubleToUInt64Bits(actual));

	internal static void AssertVector(Vector3 expected, Vector3 actual)
	{
		AssertFloat(expected.X, actual.X);
		AssertFloat(expected.Y, actual.Y);
		AssertFloat(expected.Z, actual.Z);
	}

	internal static void AssertMatrix(Matrix4x4 expected, Matrix4x4 actual)
	{
		AssertFloat(expected.M11, actual.M11);
		AssertFloat(expected.M12, actual.M12);
		AssertFloat(expected.M13, actual.M13);
		AssertFloat(expected.M14, actual.M14);
		AssertFloat(expected.M21, actual.M21);
		AssertFloat(expected.M22, actual.M22);
		AssertFloat(expected.M23, actual.M23);
		AssertFloat(expected.M24, actual.M24);
		AssertFloat(expected.M31, actual.M31);
		AssertFloat(expected.M32, actual.M32);
		AssertFloat(expected.M33, actual.M33);
		AssertFloat(expected.M34, actual.M34);
		AssertFloat(expected.M41, actual.M41);
		AssertFloat(expected.M42, actual.M42);
		AssertFloat(expected.M43, actual.M43);
		AssertFloat(expected.M44, actual.M44);
	}
}
