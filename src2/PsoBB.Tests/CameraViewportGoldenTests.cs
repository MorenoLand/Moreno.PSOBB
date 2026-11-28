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

	public static IEnumerable<object[]> DepthClipVectors() => GoldenVectors.Load("0083AC80.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadFloat(vector.GetProperty("nearClip")),
			GoldenVectors.ReadFloat(vector.GetProperty("farClip")),
			vector.GetProperty("expectedNear").GetUInt32(),
			vector.GetProperty("expectedFar").GetUInt32(),
		});

	public static IEnumerable<object[]> RenderRectVectors() => GoldenVectors.Load("0082F2E4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("rect").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
			vector.GetProperty("result").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
		});

	public static IEnumerable<object[]> DeviceViewportVectors() => GoldenVectors.Load("0082F308.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("cropX").GetInt32(),
			vector.GetProperty("cropY").GetInt32(),
			vector.GetProperty("width").GetInt32(),
			vector.GetProperty("height").GetInt32(),
			vector.GetProperty("offsetX").GetInt32(),
			vector.GetProperty("offsetY").GetInt32(),
			vector.GetProperty("renderRect").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
			vector.GetProperty("deviceX").GetInt32(),
			vector.GetProperty("deviceY").GetInt32(),
			vector.GetProperty("deviceWidth").GetInt32(),
			vector.GetProperty("deviceHeight").GetInt32(),
			vector.GetProperty("scaleXBits").GetUInt32(),
			vector.GetProperty("scaleYBits").GetUInt32(),
			vector.GetProperty("aspectScaleXBits").GetUInt32(),
			vector.GetProperty("aspectScaleYBits").GetUInt32(),
			vector.GetProperty("renderOffsetXBits").GetUInt32(),
			vector.GetProperty("renderOffsetYBits").GetUInt32(),
		});

	public static IEnumerable<object[]> ClipWindowVectors() => GoldenVectors.Load("0082AD14.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("mode").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("screenWidth")),
			GoldenVectors.ReadFloat(vector.GetProperty("screenHeight")),
			vector.GetProperty("rect").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
			vector.GetProperty("clip").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
		});

	public static IEnumerable<object[]> RestoreViewportVectors() => GoldenVectors.Load("004D2968.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("displayWidth").GetInt32(),
			vector.GetProperty("displayHeight").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("savedHalfWidth")),
			GoldenVectors.ReadFloat(vector.GetProperty("savedHalfHeight")),
			vector.GetProperty("activeViewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray(),
			vector.GetProperty("viewportOffsetActive").GetUInt16(),
			vector.GetProperty("deviceViewport").EnumerateArray().Select(item => item.GetInt32()).ToArray(),
		});

	public static IEnumerable<object[]> RecordKeyframeVectors() => GoldenVectors.Load("004D5248.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("cursor").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			vector.GetProperty("occupied").GetBoolean(),
			GoldenVectors.ReadVector(vector.GetProperty("storedEye")),
			GoldenVectors.ReadVector(vector.GetProperty("storedTarget")),
		});

	public static IEnumerable<object[]> PreviewKeyframeVectors() => GoldenVectors.Load("004D5150.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("cursor").GetInt32(),
			vector.GetProperty("count").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("eye")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			vector.GetProperty("expectedApplied").GetBoolean(),
			vector.GetProperty("pitchAngle").GetInt32(),
			vector.GetProperty("yawAngle").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("distance")),
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

	[Theory]
	[MemberData(nameof(DepthClipVectors))]
	public void SetDepthClipRangeMatchesTheMachineCode(float nearClip, float farClip, uint expectedNearBits, uint expectedFarBits)
	{
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.SetDepthClipRange(nearClip, farClip);
			Assert.Equal(expectedNearBits, BitConverter.SingleToUInt32Bits(CameraViewportState.NearClip));
			Assert.Equal(expectedFarBits, BitConverter.SingleToUInt32Bits(CameraViewportState.FarClip));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RenderRectVectors))]
	public void SetRenderRectMatchesTheMachineCode(float[] rect, uint[] expectedBits)
	{
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.SetRenderRect(rect[0], rect[1], rect[2], rect[3]);
			Assert.Equal(expectedBits[0], BitConverter.SingleToUInt32Bits(CameraViewportState.RenderRectX));
			Assert.Equal(expectedBits[1], BitConverter.SingleToUInt32Bits(CameraViewportState.RenderRectY));
			Assert.Equal(expectedBits[2], BitConverter.SingleToUInt32Bits(CameraViewportState.RenderRectWidth));
			Assert.Equal(expectedBits[3], BitConverter.SingleToUInt32Bits(CameraViewportState.RenderRectHeight));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(DeviceViewportVectors))]
	public void ApplyDeviceViewportMatchesTheMachineCode(
		int cropX,
		int cropY,
		int width,
		int height,
		int offsetX,
		int offsetY,
		float[] renderRect,
		int expectedDeviceX,
		int expectedDeviceY,
		int expectedDeviceWidth,
		int expectedDeviceHeight,
		uint expectedScaleXBits,
		uint expectedScaleYBits,
		uint expectedAspectXBits,
		uint expectedAspectYBits,
		uint expectedRenderOffXBits,
		uint expectedRenderOffYBits)
	{
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.SetRenderRect(renderRect[0], renderRect[1], renderRect[2], renderRect[3]);
			CameraViewportState.ApplyDeviceViewport(cropX, cropY, width, height, offsetX, offsetY);

			Assert.Equal(expectedDeviceX, CameraViewportState.DeviceViewportX);
			Assert.Equal(expectedDeviceY, CameraViewportState.DeviceViewportY);
			Assert.Equal(expectedDeviceWidth, CameraViewportState.DeviceViewportWidth);
			Assert.Equal(expectedDeviceHeight, CameraViewportState.DeviceViewportHeight);
			Assert.Equal(expectedScaleXBits, BitConverter.SingleToUInt32Bits(CameraViewportState.DeviceScaleX));
			Assert.Equal(expectedScaleYBits, BitConverter.SingleToUInt32Bits(CameraViewportState.DeviceScaleY));
			Assert.Equal(expectedAspectXBits, BitConverter.SingleToUInt32Bits(CameraViewportState.AspectScaleX));
			Assert.Equal(expectedAspectYBits, BitConverter.SingleToUInt32Bits(CameraViewportState.AspectScaleY));
			Assert.Equal(expectedRenderOffXBits, BitConverter.SingleToUInt32Bits(CameraViewportState.RenderOffsetX));
			Assert.Equal(expectedRenderOffYBits, BitConverter.SingleToUInt32Bits(CameraViewportState.RenderOffsetY));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ClipWindowVectors))]
	public void SetClipWindowMatchesTheMachineCode(int mode, float screenWidth, float screenHeight, float[] rect, uint[] expectedClip)
	{
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.ScreenWidthFloat = screenWidth;
			CameraViewportState.ScreenHeightFloat = screenHeight;
			CameraViewportState.SetClipWindow(mode, rect[0], rect[1], rect[2], rect[3]);

			Assert.Equal(expectedClip[0], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipLeft));
			Assert.Equal(expectedClip[1], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipTop));
			Assert.Equal(expectedClip[2], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipRight));
			Assert.Equal(expectedClip[3], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipBottom));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
		}
	}

	[Fact]
	public void ResetClipWindowMatchesTheMachineCode()
	{
		var vector = GoldenVectors.Load("004D285C.json")[0];
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.Flags = vector.GetProperty("flagsBefore").GetUInt32();
			CameraViewportState.ScreenWidthFloat = GoldenVectors.ReadFloat(vector.GetProperty("screenWidth"));
			CameraViewportState.ScreenHeightFloat = GoldenVectors.ReadFloat(vector.GetProperty("screenHeight"));
			CameraViewportState.ResetClipWindow();

			Assert.Equal(vector.GetProperty("flagsAfter").GetUInt32(), FieldCameraController.Flags);
			uint[] clip = vector.GetProperty("clip").EnumerateArray().Select(item => item.GetUInt32()).ToArray();
			Assert.Equal(clip[0], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipLeft));
			Assert.Equal(clip[1], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipTop));
			Assert.Equal(clip[2], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipRight));
			Assert.Equal(clip[3], BitConverter.SingleToUInt32Bits(CameraViewportState.ClipBottom));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void ResetFullScreenRenderRectMatchesTheMachineCode()
	{
		var vector = GoldenVectors.Load("004D26C4.json")[0];
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			CameraViewportState.ResetFullScreenRenderRect(
				vector.GetProperty("displayWidth").GetInt32(),
				vector.GetProperty("displayHeight").GetInt32());

			Assert.Equal(vector.GetProperty("screenWidth").GetInt16(), FieldCameraController.ScreenWidth);
			Assert.Equal(vector.GetProperty("screenHeight").GetInt16(), FieldCameraController.ScreenHeight);
			int[] devVp = vector.GetProperty("deviceViewport").EnumerateArray().Select(item => item.GetInt32()).ToArray();
			Assert.Equal(devVp[0], CameraViewportState.DeviceViewportX);
			Assert.Equal(devVp[1], CameraViewportState.DeviceViewportY);
			Assert.Equal(devVp[2], CameraViewportState.DeviceViewportWidth);
			Assert.Equal(devVp[3], CameraViewportState.DeviceViewportHeight);
			Assert.Equal(vector.GetProperty("scaleXBits").GetUInt32(), BitConverter.SingleToUInt32Bits(CameraViewportState.DeviceScaleX));
			Assert.Equal(vector.GetProperty("scaleYBits").GetUInt32(), BitConverter.SingleToUInt32Bits(CameraViewportState.DeviceScaleY));
			Assert.Equal(vector.GetProperty("aspectScaleXBits").GetUInt32(), BitConverter.SingleToUInt32Bits(CameraViewportState.AspectScaleX));
			Assert.Equal(vector.GetProperty("aspectScaleYBits").GetUInt32(), BitConverter.SingleToUInt32Bits(CameraViewportState.AspectScaleY));
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void SaveAndResetViewportMatchesTheMachineCode()
	{
		var vector = GoldenVectors.Load("004D28A4.json")[0];
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			int width = vector.GetProperty("displayWidth").GetInt32();
			int height = vector.GetProperty("displayHeight").GetInt32();
			uint[] active = vector.GetProperty("activeViewport").EnumerateArray().Select(item => item.GetUInt32()).ToArray();
			CameraViewportState.ApplyViewport(new CameraViewportSettings(
				BitConverter.UInt32BitsToSingle(active[2]),
				BitConverter.UInt32BitsToSingle(active[3]),
				BitConverter.UInt32BitsToSingle(active[7]),
				BitConverter.UInt32BitsToSingle(active[6]),
				0.0f,
				BitConverter.UInt32BitsToSingle(active[10]),
				BitConverter.UInt32BitsToSingle(active[11]),
				unchecked((int)active[12]),
				unchecked((int)active[13]),
				BitConverter.UInt32BitsToSingle(active[14]),
				BitConverter.UInt32BitsToSingle(active[15]),
				BitConverter.UInt32BitsToSingle(active[16]),
				BitConverter.UInt32BitsToSingle(active[17])));
			CameraViewportState.SetRenderRect(0.0f, 0.0f, width, height);
			CameraViewportState.ViewportOffsetActive = 1;

			CameraViewportState.SaveAndResetViewport(width, height);

			Assert.Equal(vector.GetProperty("viewportOffsetActive").GetUInt16(), CameraViewportState.ViewportOffsetActive);
			Assert.NotNull(CameraViewportState.SavedViewport);
			int[] devVp = vector.GetProperty("deviceViewport").EnumerateArray().Select(item => item.GetInt32()).ToArray();
			Assert.Equal(devVp[0], CameraViewportState.DeviceViewportX);
			Assert.Equal(devVp[1], CameraViewportState.DeviceViewportY);
			Assert.Equal(devVp[2], CameraViewportState.DeviceViewportWidth);
			Assert.Equal(devVp[3], CameraViewportState.DeviceViewportHeight);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RestoreViewportVectors))]
	public void RestoreSavedViewportMatchesTheMachineCode(
		int displayWidth,
		int displayHeight,
		float savedHalfWidth,
		float savedHalfHeight,
		uint[] expectedActiveViewport,
		ushort expectedViewportOffsetActive,
		int[] expectedDeviceViewport)
	{
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			FieldCameraController.ScreenWidth = unchecked((short)displayWidth);
			FieldCameraController.ScreenHeight = unchecked((short)displayHeight);
			CameraViewportState.SetRenderRect(0.0f, 0.0f, displayWidth, displayHeight);
			CameraViewportState.ApplyViewport(new CameraViewportSettings(
				savedHalfWidth, savedHalfHeight, 1.0f, 1.0f, 0.0f, displayWidth, displayHeight, 0, 0, 20.0f, 15.0f, 1.0f, 0.85f));
			CameraViewportState.SaveAndResetViewport(displayWidth, displayHeight);

			CameraViewportState.RestoreSavedViewport(displayWidth, displayHeight);

			AssertViewportWords(expectedActiveViewport);
			Assert.Equal(expectedViewportOffsetActive, CameraViewportState.ViewportOffsetActive);
			Assert.Equal(expectedDeviceViewport[0], CameraViewportState.DeviceViewportX);
			Assert.Equal(expectedDeviceViewport[1], CameraViewportState.DeviceViewportY);
			Assert.Equal(expectedDeviceViewport[2], CameraViewportState.DeviceViewportWidth);
			Assert.Equal(expectedDeviceViewport[3], CameraViewportState.DeviceViewportHeight);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Fact]
	public void ResetModeAndOffsetStateMatchesTheMachineCode()
	{
		var vector = GoldenVectors.Load("004D2AF0.json")[0];
		FieldCameraController.ResetGlobals();
		CameraViewportState.ResetGlobals();
		try
		{
			byte initialPreviousMode = vector.GetProperty("previousMode").GetByte();
			CameraViewportState.ViewportOffsetActive = 1;
			FieldCameraController.ActiveModeIndex = 5;
			FieldCameraController.PreviousModeIndex = initialPreviousMode;
			FieldCameraController.Flags = 0xFFFFFFFFu;
			CameraViewportState.ResetModeAndOffsetState();

			Assert.Equal(vector.GetProperty("viewportOffsetActive").GetUInt16(), CameraViewportState.ViewportOffsetActive);
			Assert.Equal(vector.GetProperty("activeMode").GetByte(), FieldCameraController.ActiveModeIndex);
			Assert.Equal(initialPreviousMode, FieldCameraController.PreviousModeIndex);
			Assert.Equal(vector.GetProperty("flags").GetUInt32(), FieldCameraController.Flags);
		}
		finally
		{
			CameraViewportState.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(RecordKeyframeVectors))]
	public void RecordKeyframeMatchesTheMachineCode(
		int cursor,
		Vector3 eye,
		Vector3 target,
		bool expectedOccupied,
		Vector3 expectedEye,
		Vector3 expectedTarget)
	{
		FieldCameraController.ResetGlobals();
		FieldCameraPathRecorder.ResetGlobals();
		try
		{
			FieldCameraController.Current = new FieldCameraController { Eye = eye, Target = target };
			FieldCameraPathRecorder recorder = new() { Cursor = cursor };
			recorder.RecordKeyframe();

			int index = Math.Min(cursor, FieldCameraPathRecorder.MaxWaypoints - 1);
			FieldCameraWaypoint slot = FieldCameraPathRecorder.Waypoints[index];
			Assert.Equal(expectedOccupied, slot.IsOccupied);
			GoldenVectors.AssertVector(expectedEye, slot.Eye);
			GoldenVectors.AssertVector(expectedTarget, slot.Target);
		}
		finally
		{
			FieldCameraPathRecorder.ResetGlobals();
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(PreviewKeyframeVectors))]
	public void PreviewRecordedKeyframeMatchesTheMachineCode(
		int cursor,
		int count,
		Vector3 eye,
		Vector3 target,
		bool expectedApplied,
		int expectedPitch,
		int expectedYaw,
		float expectedDistance)
	{
		FieldCameraController.ResetGlobals();
		FieldCameraPathRecorder.ResetGlobals();
		try
		{
			FieldCameraOrbitMode orbit = new();
			FieldCameraController.Modes[6] = orbit;
			if ((uint)cursor < FieldCameraPathRecorder.MaxWaypoints)
				FieldCameraPathRecorder.Waypoints[cursor] = new FieldCameraWaypoint(true, eye, target);

			FieldCameraPathRecorder recorder = new() { Cursor = cursor, Count = count };
			recorder.PreviewRecordedKeyframe();

			if (expectedApplied)
			{
				GoldenVectors.AssertFloat(expectedDistance, orbit.Distance);
				Assert.Equal(expectedPitch, orbit.PitchAngle);
				Assert.Equal(expectedYaw, orbit.YawAngle);
			}
			else
			{
				Assert.Equal(0, orbit.PitchAngle);
				Assert.Equal(0, orbit.YawAngle);
			}
		}
		finally
		{
			FieldCameraPathRecorder.ResetGlobals();
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
