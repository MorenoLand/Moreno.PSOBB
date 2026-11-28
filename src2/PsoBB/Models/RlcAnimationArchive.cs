namespace PsoBB.Models;

/// <summary>
/// The player motion archive: NMDM chunks concatenated end to end with optional zero padding.
/// </summary>
public sealed class RlcAnimationArchive
{
	private RlcAnimationArchive(NinjaMotion[] motions)
	{
		Motions = motions;
	}

	/// <summary>Gets the motions in archive order.</summary>
	public IReadOnlyList<NinjaMotion> Motions { get; }

	/// <summary>
	/// Reads every motion chunk in the archive for a model's animated nodes.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <param name="model">The model whose node order the motions follow.</param>
	/// <returns>The parsed motions.</returns>
	public static RlcAnimationArchive Parse(ReadOnlySpan<byte> data, NinjaModel model) => Parse(data, model.AnimatedNodeCount);

	/// <summary>
	/// Reads every motion chunk in the archive.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <param name="boneCount">The number of animated nodes that the motions address.</param>
	/// <returns>The parsed motions.</returns>
	/// <exception cref="ModelFormatException">A chunk header or keyframe range is invalid.</exception>
	public static RlcAnimationArchive Parse(ReadOnlySpan<byte> data, int boneCount)
	{
		int length = data.Length;
		while (length != 0 && data[length - 1] == 0)
			length--;
		if (length == 0)
			throw new ModelFormatException("The motion archive is empty.", 0);
		List<NinjaChunk> chunks = NinjaChunkReader.ReadAll(data[..length]);
		List<NinjaMotion> motions = [];
		foreach (NinjaChunk chunk in chunks)
		{
			if (chunk.Type == NinjaChunkType.Motion)
				motions.Add(NinjaMotion.Parse(chunk.Body, boneCount, chunk.Offset + 8));
		}
		if (motions.Count == 0)
			throw new ModelFormatException("The motion archive has no NMDM chunk.", 0);
		return new RlcAnimationArchive(motions.ToArray());
	}
}
