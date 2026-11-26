using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks concatenated NMDM motion archives and keyframe extraction.
/// </summary>
public sealed class RlcAnimationTests
{
	/// <summary>
	/// Every motion chunk is parsed and the three pose channels keep their values.
	/// </summary>
	[Fact]
	public void ConcatenatedMotionsAreParsed()
	{
		RlcAnimationArchive archive = RlcAnimationArchive.Parse(ModelTestData.Rlc(), 1);
		Assert.Equal(2, archive.Motions.Count);
		NinjaMotion motion = archive.Motions[0];
		Assert.Equal(10u, motion.FrameCount);
		Assert.Equal(3, motion.FactorCount);
		Assert.Equal(0, motion.InterpolationMode);
		NinjaBoneAnimation bone = Assert.Single(motion.Bones);
		Assert.Equal(3, bone.Tracks.Count);
		Assert.Equal(NinjaAnimationChannel.Translation, bone.Tracks[0].Channel);
		Assert.Equal(NinjaAnimationChannel.Rotation, bone.Tracks[1].Channel);
		Assert.Equal(NinjaAnimationChannel.Scale, bone.Tracks[2].Channel);
		NinjaKeyframe translation = bone.Tracks[0].Keyframes[1];
		Assert.Equal(10u, translation.Frame);
		Assert.Equal(10f, translation.X);
		Assert.Equal(20f, translation.Y);
		Assert.Equal(30f, translation.Z);
		NinjaKeyframe rotation = bone.Tracks[1].Keyframes[1];
		Assert.Equal((float)(0x2000 * (Math.Tau / 65536.0)), rotation.X, 6);
		Assert.Equal(2f, bone.Tracks[2].Keyframes[1].X);
	}

	/// <summary>
	/// A truncated chunk header or a malformed keyframe offset is rejected.
	/// </summary>
	[Fact]
	public void InvalidMotionsAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => RlcAnimationArchive.Parse(new byte[4], 1));
		byte[] motion = ModelTestData.MotionCore();
		System.Buffers.Binary.BinaryPrimitives.WriteUInt32LittleEndian(motion.AsSpan(0), 0x400);
		Assert.Throws<ModelFormatException>(() => NinjaMotion.Parse(motion, 1));
	}

	/// <summary>
	/// A REL payload is relocated and parsed as a raw NJCM body.
	/// </summary>
	[Fact]
	public void RelPayloadIsRelocatedAndParsed()
	{
		RelAsset asset = RelAsset.Parse(ModelTestData.WithRelocationTable(ModelTestData.ModelCore()));
		NinjaModel model = asset.ReadModel();
		Assert.Equal(2, model.Nodes.Count);
		Assert.Single(model.Meshes);
	}

	/// <summary>
	/// A REL payload that is not a model is rejected when read as one.
	/// </summary>
	[Fact]
	public void RelPayloadWithoutModelIsRejected()
	{
		RelAsset asset = RelAsset.Parse(ModelTestData.WithRelocationTable([1, 2, 3, 4], []));
		Assert.Throws<ModelFormatException>(() => asset.ReadModel());
	}
}
