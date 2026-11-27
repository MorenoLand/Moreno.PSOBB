using PsoBB.Mathematics;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the field camera controller against vectors produced by the original machine code.
/// </summary>
public sealed class FieldCameraControllerGoldenTests
{
	private const int DesiredEyeOffset = 0x1A0;
	private const int DesiredTargetOffset = 0x1AC;
	private const int EyeOffset = 0x178;
	private const int TargetOffset = 0x184;
	private const int SnappedEyeOffset = 0x1C8;

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
