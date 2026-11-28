using PsoBB.Mathematics;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the field camera controller against vectors produced by the original machine code.
/// </summary>
public sealed class FieldCameraControllerGoldenTests
{
	private const int OverrideSmoothingOffset = 0x30;
	private const int OverrideFovDegreesOffset = 0x34;
	private const int OverrideEyeOffset = 0x3C;
	private const int OverrideTargetOffset = 0x48;
	private const int OffsetOffset = 0x68;
	private const int EyeOffset = 0x178;
	private const int TargetOffset = 0x184;
	private const int PitchAngleOffset = 0x190;
	private const int YawAngleOffset = 0x194;
	private const int DesiredEyeOffset = 0x1A0;
	private const int DesiredTargetOffset = 0x1AC;
	private const int EyeSmoothingOffset = 0x1B8;
	private const int TargetSmoothingOffset = 0x1BC;
	private const int OffsetCountdownOffset = 0x1C0;
	private const int OffsetAmplitudeOffset = 0x1C4;
	private const int SnappedEyeOffset = 0x1C8;

	public static IEnumerable<object[]> StepTowardsVectors() => GoldenVectors.Load("004D63B0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("current")),
			GoldenVectors.ReadVector(vector.GetProperty("desired")),
			GoldenVectors.ReadFloat(vector.GetProperty("speed")),
			vector.GetProperty("reached").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("resultCurrent")),
			GoldenVectors.ReadVector(vector.GetProperty("resultDesired")),
		});

	public static IEnumerable<object[]> SmoothFollowVectors() => GoldenVectors.Load("004D3D14.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("snapBefore").GetUInt32(),
			vector.GetProperty("snapAfter").GetUInt32(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> SnapEyeSmoothTargetVectors() => GoldenVectors.Load("004D3C98.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("modeIndex").GetByte(),
			vector.GetProperty("hasMode").GetBoolean(),
			vector.GetProperty("modeFlags").GetUInt32(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> AdvanceFlagsVectors() => GoldenVectors.Load("004D3EF4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsBefore").GetUInt32(),
			vector.GetProperty("flagsAfter").GetUInt32(),
			vector.GetProperty("hasCamera").GetBoolean(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	public static IEnumerable<object[]> OrientationAxesVectors() => GoldenVectors.Load("004D3FB0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("yaw").GetInt32(),
			vector.GetProperty("pitch").GetInt32(),
			GoldenVectors.ReadVector(vector.GetProperty("right")),
			GoldenVectors.ReadVector(vector.GetProperty("up")),
		});

	/// <summary>
	/// Loads the vectors for the offset countdown step.
	/// </summary>
	/// <returns>Camera object bytes before and after the call.</returns>
	public static IEnumerable<object[]> OffsetVectors() => GoldenVectors.Load("004D3DF4.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	/// <summary>
	/// Loads the vectors for the snap to the requested position.
	/// </summary>
	/// <returns>Camera object bytes before and after the call.</returns>
	public static IEnumerable<object[]> SnapVectors() => GoldenVectors.Load("004D3E90.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	[Theory]
	[MemberData(nameof(StepTowardsVectors))]
	public void StepTowardsMatchesTheMachineCode(Vector3 current, Vector3 desired, float speed, bool expectedReached, Vector3 expectedCurrent, Vector3 expectedDesired)
	{
		bool reached = FieldCameraController.StepTowards(ref current, ref desired, speed);
		Assert.Equal(expectedReached, reached);
		GoldenVectors.AssertVector(expectedCurrent, current);
		GoldenVectors.AssertVector(expectedDesired, desired);
	}

	[Theory]
	[MemberData(nameof(SmoothFollowVectors))]
	public void SmoothFollowDesiredMatchesTheMachineCode(uint snapBefore, uint snapAfter, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.SnapRequested = snapBefore;
			FieldCameraController controller = new()
			{
				DesiredEye = ReadVector(input, DesiredEyeOffset),
				DesiredTarget = ReadVector(input, DesiredTargetOffset),
				Eye = ReadVector(input, EyeOffset),
				Target = ReadVector(input, TargetOffset),
				SnappedEye = ReadVector(input, SnappedEyeOffset),
				EyeSmoothing = BitConverter.ToSingle(input, EyeSmoothingOffset),
				TargetSmoothing = BitConverter.ToSingle(input, TargetSmoothingOffset),
			};

			controller.SmoothFollowDesired();

			Assert.Equal(snapAfter, FieldCameraController.SnapRequested);
			GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(output, TargetOffset), controller.Target);
			GoldenVectors.AssertVector(ReadVector(output, DesiredEyeOffset), controller.DesiredEye);
			GoldenVectors.AssertVector(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
			GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(SnapEyeSmoothTargetVectors))]
	public void SnapEyeAndSmoothTargetMatchesTheMachineCode(byte modeIndex, bool hasMode, uint modeFlags, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.ActiveModeIndex = modeIndex;
			if (hasMode)
				FieldCameraController.Modes[modeIndex] = new FieldCameraMode { Flags = modeFlags };

			FieldCameraController controller = new()
			{
				DesiredEye = ReadVector(input, DesiredEyeOffset),
				DesiredTarget = ReadVector(input, DesiredTargetOffset),
				Eye = ReadVector(input, EyeOffset),
				Target = ReadVector(input, TargetOffset),
				SnappedEye = ReadVector(input, SnappedEyeOffset),
				TargetSmoothing = BitConverter.ToSingle(input, TargetSmoothingOffset),
			};

			controller.SnapEyeAndSmoothTarget();

			GoldenVectors.AssertVector(ReadVector(output, EyeOffset), controller.Eye);
			GoldenVectors.AssertVector(ReadVector(output, TargetOffset), controller.Target);
			GoldenVectors.AssertVector(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
			GoldenVectors.AssertVector(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(AdvanceFlagsVectors))]
	public void AdvanceFlagsAndClearOverrideMatchesTheMachineCode(uint flagsBefore, uint flagsAfter, bool hasCamera, byte[] input, byte[] output)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController.Flags = flagsBefore;
			FieldCameraController? controller = null;
			if (hasCamera)
			{
				controller = new FieldCameraController();
				controller.OverrideRequest.Smoothing = BitConverter.ToSingle(input, OverrideSmoothingOffset);
				controller.OverrideRequest.FieldOfViewDegrees = BitConverter.ToInt32(input, OverrideFovDegreesOffset);
				controller.OverrideRequest.Eye = ReadVector(input, OverrideEyeOffset);
				controller.OverrideRequest.Target = ReadVector(input, OverrideTargetOffset);
				FieldCameraController.Current = controller;
			}

			FieldCameraController.AdvanceFlagsAndClearOverride();

			Assert.Equal(flagsAfter, FieldCameraController.Flags);
			if (controller is not null)
			{
				GoldenVectors.AssertFloat(BitConverter.ToSingle(output, OverrideSmoothingOffset), controller.OverrideRequest.Smoothing);
				Assert.Equal(BitConverter.ToInt32(output, OverrideFovDegreesOffset), controller.OverrideRequest.FieldOfViewDegrees);
				GoldenVectors.AssertVector(ReadVector(output, OverrideEyeOffset), controller.OverrideRequest.Eye);
				GoldenVectors.AssertVector(ReadVector(output, OverrideTargetOffset), controller.OverrideRequest.Target);
			}
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(OrientationAxesVectors))]
	public void UpdateOrientationAxesMatchesTheMachineCode(int yaw, int pitch, Vector3 expectedRight, Vector3 expectedUp)
	{
		FieldCameraController.ResetGlobals();
		try
		{
			FieldCameraController controller = new()
			{
				YawAngle = yaw,
				PitchAngle = pitch,
			};

			controller.UpdateOrientationAxes();

			GoldenVectors.AssertVector(expectedRight, FieldCameraController.RightAxis);
			GoldenVectors.AssertVector(expectedUp, FieldCameraController.UpAxis);
		}
		finally
		{
			FieldCameraController.ResetGlobals();
		}
	}

	/// <summary>
	/// Stepping the offset countdown decrements it and updates the vertical offset exactly as the original does.
	/// </summary>
	/// <param name="input">The camera object before the call.</param>
	/// <param name="output">The camera object after the call.</param>
	[Theory]
	[MemberData(nameof(OffsetVectors))]
	public void StepOffsetCountdownMatchesTheMachineCode(byte[] input, byte[] output)
	{
		FieldCameraController controller = new()
		{
			Offset = ReadVector(input, OffsetOffset),
			OffsetCountdown = BitConverter.ToUInt32(input, OffsetCountdownOffset),
			OffsetAmplitude = BitConverter.ToSingle(input, OffsetAmplitudeOffset),
		};

		controller.StepOffsetCountdown();

		GoldenVectors.AssertVector(ReadVector(output, OffsetOffset), controller.Offset);
		Assert.Equal(BitConverter.ToUInt32(output, OffsetCountdownOffset), controller.OffsetCountdown);
		Assert.Equal(BitConverter.ToSingle(output, OffsetAmplitudeOffset), controller.OffsetAmplitude);
	}

	/// <summary>
	/// Snapping sets the current eye and target and records the eye exactly as the original does.
	/// </summary>
	/// <param name="input">The camera object before the call.</param>
	/// <param name="output">The camera object after the call.</param>
	[Theory]
	[MemberData(nameof(SnapVectors))]
	public void SnapToDesiredMatchesTheMachineCode(byte[] input, byte[] output)
	{
		FieldCameraController controller = new()
		{
			DesiredEye = ReadVector(input, DesiredEyeOffset),
			DesiredTarget = ReadVector(input, DesiredTargetOffset),
			Eye = ReadVector(input, EyeOffset),
			Target = ReadVector(input, TargetOffset),
			SnappedEye = ReadVector(input, SnappedEyeOffset),
		};

		controller.SnapToDesired();

		Assert.Equal(ReadVector(output, EyeOffset), controller.Eye);
		Assert.Equal(ReadVector(output, TargetOffset), controller.Target);
		Assert.Equal(ReadVector(output, SnappedEyeOffset), controller.SnappedEye);
		Assert.Equal(ReadVector(output, DesiredEyeOffset), controller.DesiredEye);
		Assert.Equal(ReadVector(output, DesiredTargetOffset), controller.DesiredTarget);
	}

	private static Vector3 ReadVector(byte[] block, int offset) => new(
		BitConverter.ToSingle(block, offset),
		BitConverter.ToSingle(block, offset + 4),
		BitConverter.ToSingle(block, offset + 8));
}
