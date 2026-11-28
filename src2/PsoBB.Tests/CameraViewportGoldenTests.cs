using PsoBB.Mathematics;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class CameraViewportGoldenTests
{
	public static IEnumerable<object[]> ScaleVectors() => GoldenVectors.Load("0083A5F0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("halfWidth")),
			GoldenVectors.ReadFloat(vector.GetProperty("halfHeight")),
			GoldenVectors.ReadFloat(vector.GetProperty("nearPlane")),
			vector.GetProperty("globalHalfWidth").GetUInt32(),
			vector.GetProperty("globalHalfHeight").GetUInt32(),
			vector.GetProperty("globalNearPlane").GetUInt32(),
		});

	public static IEnumerable<object[]> ApplyViewportVectors() => GoldenVectors.Load("004D4374.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("scaleX")),
			GoldenVectors.ReadFloat(vector.GetProperty("scaleY")),
			GoldenVectors.ReadFloat(vector.GetProperty("halfWidth")),
			GoldenVectors.ReadFloat(vector.GetProperty("halfHeight")),
			GoldenVectors.ReadFloat(vector.GetProperty("width")),
			GoldenVectors.ReadFloat(vector.GetProperty("height")),
			vector.GetProperty("x").GetInt32(),
			vector.GetProperty("y").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("offsetX")),
			GoldenVectors.ReadFloat(vector.GetProperty("offsetY")),
			GoldenVectors.ReadFloat(vector.GetProperty("nearScale")),
			GoldenVectors.ReadFloat(vector.GetProperty("farScale")),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("viewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
		});

	public static IEnumerable<object[]> CustomViewportVectors() => GoldenVectors.Load("004D434C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("scaleX")),
			GoldenVectors.ReadFloat(vector.GetProperty("scaleY")),
			GoldenVectors.ReadFloat(vector.GetProperty("halfWidth")),
			GoldenVectors.ReadFloat(vector.GetProperty("halfHeight")),
			GoldenVectors.ReadFloat(vector.GetProperty("width")),
			GoldenVectors.ReadFloat(vector.GetProperty("height")),
			vector.GetProperty("x").GetInt32(),
			vector.GetProperty("y").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("offsetX")),
			GoldenVectors.ReadFloat(vector.GetProperty("offsetY")),
			GoldenVectors.ReadFloat(vector.GetProperty("nearScale")),
			GoldenVectors.ReadFloat(vector.GetProperty("farScale")),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("viewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
			vector.GetProperty("result").GetUInt32(),
		});

	public static IEnumerable<object[]> ResetDisplayViewportVectors() => GoldenVectors.Load("004D4438.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("displayWidth").GetInt32(),
			vector.GetProperty("displayHeight").GetInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("viewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
		});

	public static IEnumerable<object[]> ResetEnvironmentVectors() => GoldenVectors.Load("004D471C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("displayWidth").GetInt32(),
			vector.GetProperty("displayHeight").GetInt32(),
			vector.GetProperty("viewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
			vector.GetProperty("upAxis").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
			vector.GetProperty("activeMode").GetByte(),
			vector.GetProperty("flags").GetUInt32(),
			vector.GetProperty("snapRequested").GetUInt32(),
		});

	public static IEnumerable<object[]> InitializeDefaultViewportVectors() => GoldenVectors.Load("004D4800.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("displayWidth").GetInt32(),
			vector.GetProperty("displayHeight").GetInt32(),
			vector.GetProperty("screenWidth").GetInt16(),
			vector.GetProperty("screenHeight").GetInt16(),
			vector.GetProperty("flags").GetUInt32(),
			vector.GetProperty("viewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
			vector.GetProperty("depthBiasMin").GetUInt32(),
			vector.GetProperty("depthBiasMax").GetUInt32(),
			vector.GetProperty("globalHalfWidth").GetUInt32(),
			vector.GetProperty("globalHalfHeight").GetUInt32(),
			vector.GetProperty("globalNearPlane").GetUInt32(),
		});

	public static IEnumerable<object[]> ViewMarginVectors() => GoldenVectors.Load("004D45E0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
			GoldenVectors.ReadVector(vector.GetProperty("rightAxis")),
			GoldenVectors.ReadVector(vector.GetProperty("point")),
			GoldenVectors.ReadFloat(vector.GetProperty("minDepth")),
			GoldenVectors.ReadFloat(vector.GetProperty("horizontalMargin")),
			GoldenVectors.ReadFloat(vector.GetProperty("projectedX")),
			vector.GetProperty("screenWidth").GetInt16(),
			vector.GetProperty("visible").GetBoolean(),
		});

	[Theory]
	[MemberData(nameof(ScaleVectors))]
	public void ApplyProjectionClipAndScaleMatchesTheMachineCode(
		float halfWidth,
		float halfHeight,
		float nearPlane,
		uint expectedHalfWidthBits,
		uint expectedHalfHeightBits,
		uint expectedNearPlaneBits)
	{
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.ApplyProjectionClipAndScale(new CameraViewportSettings(
				halfWidth, halfHeight, 1.0f, 1.0f, nearPlane, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 1.0f, 0.85f));
			Assert.Equal(expectedHalfWidthBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionHalfWidth));
			Assert.Equal(expectedHalfHeightBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionHalfHeight));
			Assert.Equal(expectedNearPlaneBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionNearPlane));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ApplyViewportVectors))]
	public void ApplyViewportMatchesTheMachineCode(
		uint flagsBefore,
		float scaleX,
		float scaleY,
		float halfWidth,
		float halfHeight,
		float width,
		float height,
		int x,
		int y,
		float offsetX,
		float offsetY,
		float nearScale,
		float farScale,
		uint expectedFlagsAfter,
		uint[] expectedViewport)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			CameraViewportState.ScreenScaleX = scaleX;
			CameraViewportState.ScreenScaleY = scaleY;
			CameraViewportState.ApplyViewport(new CameraViewportSettings(
				halfWidth, halfHeight, scaleX, scaleY, 0.0f, width, height, x, y, offsetX, offsetY, nearScale, farScale));

			Assert.Equal(expectedFlagsAfter, FieldCameraController.Flags);
			AssertViewportWords(expectedViewport);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(CustomViewportVectors))]
	public void ApplyCustomViewportMatchesTheMachineCode(
		uint flagsBefore,
		float scaleX,
		float scaleY,
		float halfWidth,
		float halfHeight,
		float width,
		float height,
		int x,
		int y,
		float offsetX,
		float offsetY,
		float nearScale,
		float farScale,
		uint expectedFlagsAfter,
		uint[] expectedViewport,
		uint expectedResult)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			CameraViewportState.ScreenScaleX = scaleX;
			CameraViewportState.ScreenScaleY = scaleY;
			bool actual = CameraViewportState.ApplyCustomViewport(new CameraViewportSettings(
				halfWidth, halfHeight, scaleX, scaleY, 0.0f, width, height, x, y, offsetX, offsetY, nearScale, farScale));

			Assert.Equal(expectedResult != 0, actual);
			Assert.Equal(expectedFlagsAfter, FieldCameraController.Flags);
			AssertViewportWords(expectedViewport);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ResetDisplayViewportVectors))]
	public void ResetDisplayViewportMatchesTheMachineCode(
		uint flagsBefore,
		int displayWidth,
		int displayHeight,
		uint expectedFlagsAfter,
		uint[] expectedViewport)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			CameraViewportState.ResetDisplayViewport(displayWidth, displayHeight);

			Assert.Equal(expectedFlagsAfter, FieldCameraController.Flags);
			AssertViewportWords(expectedViewport);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ResetEnvironmentVectors))]
	public void ResetEnvironmentMatchesTheMachineCode(
		int displayWidth,
		int displayHeight,
		uint[] expectedViewport,
		uint[] expectedUpAxis,
		byte expectedActiveMode,
		uint expectedFlags,
		uint expectedSnapRequested)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.Flags = 0xFFFFFFFFu;
			FieldCameraController.ActiveModeIndex = 5;
			FieldCameraController.SnapRequested = 7;
			CameraViewportState.ResetEnvironment(displayWidth, displayHeight);

			Assert.Equal(expectedActiveMode, FieldCameraController.ActiveModeIndex);
			Assert.Equal(expectedFlags, FieldCameraController.Flags);
			Assert.Equal(expectedSnapRequested, FieldCameraController.SnapRequested);
			Assert.Equal(expectedUpAxis[0], BitConverter.SingleToUInt32Bits(FieldCameraController.GlobalUpAxis.X));
			Assert.Equal(expectedUpAxis[1], BitConverter.SingleToUInt32Bits(FieldCameraController.GlobalUpAxis.Y));
			Assert.Equal(expectedUpAxis[2], BitConverter.SingleToUInt32Bits(FieldCameraController.GlobalUpAxis.Z));
			Assert.Equal(expectedViewport[2], BitConverter.SingleToUInt32Bits(CameraViewportState.HalfWidth));
			Assert.Equal(expectedViewport[3], BitConverter.SingleToUInt32Bits(CameraViewportState.HalfHeight));
			Assert.Equal(expectedViewport[10], BitConverter.SingleToUInt32Bits(CameraViewportState.Width));
			Assert.Equal(expectedViewport[11], BitConverter.SingleToUInt32Bits(CameraViewportState.Height));
			Assert.Equal(expectedViewport[16], BitConverter.SingleToUInt32Bits(CameraViewportState.NearScale));
			Assert.Equal(expectedViewport[17], BitConverter.SingleToUInt32Bits(CameraViewportState.FarScale));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(InitializeDefaultViewportVectors))]
	public void InitializeDefaultViewportMatchesTheMachineCode(
		int displayWidth,
		int displayHeight,
		short expectedScreenWidth,
		short expectedScreenHeight,
		uint expectedFlags,
		uint[] expectedViewport,
		uint expectedDepthBiasMin,
		uint expectedDepthBiasMax,
		uint expectedHalfWidthBits,
		uint expectedHalfHeightBits,
		uint expectedNearPlaneBits)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.InitializeDefaultViewport(displayWidth, displayHeight);

			Assert.Equal(expectedScreenWidth, FieldCameraController.ScreenWidth);
			Assert.Equal(expectedScreenHeight, FieldCameraController.ScreenHeight);
			Assert.Equal(expectedFlags, FieldCameraController.Flags);
			AssertViewportWords(expectedViewport);
			Assert.Equal(expectedDepthBiasMin, BitConverter.SingleToUInt32Bits(CameraViewportState.DepthBiasMin));
			Assert.Equal(expectedDepthBiasMax, BitConverter.SingleToUInt32Bits(CameraViewportState.DepthBiasMax));
			Assert.Equal(expectedHalfWidthBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionHalfWidth));
			Assert.Equal(expectedHalfHeightBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionHalfHeight));
			Assert.Equal(expectedNearPlaneBits, BitConverter.SingleToUInt32Bits(CameraViewportState.ProjectionNearPlane));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void ResetAuxiliaryScalesMatchesTheMachineCode()
	{
		uint[] expected = GoldenVectors.Load("004D46FC.json")[0]
			.GetProperty("values")
			.EnumerateArray()
			.Select(item => item.GetUInt32())
			.ToArray();

		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.AuxiliaryScaleOne = 0.0f;
			CameraViewportState.AuxiliaryScaleEight = 0.0f;
			CameraViewportState.AuxiliaryScaleOneHalf = 0.0f;
			CameraViewportState.ResetAuxiliaryScales();

			Assert.Equal(expected[0], BitConverter.SingleToUInt32Bits(CameraViewportState.AuxiliaryScaleOne));
			Assert.Equal(expected[1], BitConverter.SingleToUInt32Bits(CameraViewportState.AuxiliaryScaleEight));
			Assert.Equal(expected[2], BitConverter.SingleToUInt32Bits(CameraViewportState.AuxiliaryScaleOneHalf));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ViewMarginVectors))]
	public void IsPointWithinViewMarginMatchesTheMachineCode(
		Matrix4x4 viewMatrix,
		Vector3 rightAxis,
		Vector3 point,
		float minDepth,
		float horizontalMargin,
		float projectedX,
		short screenWidth,
		bool expectedVisible)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.RightAxis = rightAxis;
			FieldCameraController.ScreenWidth = screenWidth;
			TransformationStack stack = new();
			stack.ReplaceCurrent(viewMatrix);

			bool actual = FieldCameraController.IsPointWithinViewMargin(
				point,
				minDepth,
				horizontalMargin,
				stack,
				_ => new Vector3(projectedX, 0.0f, 0.0f));
			Assert.Equal(expectedVisible, actual);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	private static void AssertViewportWords(uint[] expectedViewport)
	{
		Assert.Equal(expectedViewport[0], BitConverter.SingleToUInt32Bits(CameraViewportState.ScaledAspectX));
		Assert.Equal(expectedViewport[1], BitConverter.SingleToUInt32Bits(CameraViewportState.ScaledAspectY));
		Assert.Equal(expectedViewport[2], BitConverter.SingleToUInt32Bits(CameraViewportState.HalfWidth));
		Assert.Equal(expectedViewport[3], BitConverter.SingleToUInt32Bits(CameraViewportState.HalfHeight));
		Assert.Equal(expectedViewport[6], BitConverter.SingleToUInt32Bits(CameraViewportState.ScaleY));
		Assert.Equal(expectedViewport[7], BitConverter.SingleToUInt32Bits(CameraViewportState.ScaleX));
		Assert.Equal(expectedViewport[8], BitConverter.SingleToUInt32Bits(CameraViewportState.UnitScale));
		Assert.Equal(expectedViewport[9], BitConverter.SingleToUInt32Bits(CameraViewportState.InverseScreenScaleX));
		Assert.Equal(expectedViewport[10], BitConverter.SingleToUInt32Bits(CameraViewportState.Width));
		Assert.Equal(expectedViewport[11], BitConverter.SingleToUInt32Bits(CameraViewportState.Height));
		Assert.Equal(unchecked((int)expectedViewport[12]), CameraViewportState.OriginX);
		Assert.Equal(unchecked((int)expectedViewport[13]), CameraViewportState.OriginY);
		Assert.Equal(expectedViewport[14], BitConverter.SingleToUInt32Bits(CameraViewportState.OffsetX));
		Assert.Equal(expectedViewport[15], BitConverter.SingleToUInt32Bits(CameraViewportState.OffsetY));
		Assert.Equal(expectedViewport[16], BitConverter.SingleToUInt32Bits(CameraViewportState.NearScale));
		Assert.Equal(expectedViewport[17], BitConverter.SingleToUInt32Bits(CameraViewportState.FarScale));
	}
}
