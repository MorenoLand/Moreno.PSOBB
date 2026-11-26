using System.Buffers.Binary;

namespace PsoBB.Models;

/// <summary>
/// A relocated .rel asset. The payload holds map or object geometry and is addressed by the
/// trailer's payload offset.
/// </summary>
public sealed class RelAsset
{
	private RelAsset(RelocatedBlock block)
	{
		Block = block;
	}

	/// <summary>Gets the relocated block, including its trailer and pointer table.</summary>
	public RelocatedBlock Block { get; }

	/// <summary>Gets the asset payload.</summary>
	public ReadOnlyMemory<byte> Payload => Block.Payload;

	/// <summary>
	/// Relocates the asset's pointers.
	/// </summary>
	/// <param name="data">The complete .rel file.</param>
	/// <returns>The relocated asset.</returns>
	/// <exception cref="ModelFormatException">The trailer, table or a pointer is invalid.</exception>
	public static RelAsset Parse(ReadOnlySpan<byte> data) => new(RelocatedBlock.Parse(data));

	/// <summary>
	/// Reads the payload as a Ninja model, either as an IFF chunk stream or as a raw NJCM body.
	/// </summary>
	/// <returns>The parsed model.</returns>
	/// <exception cref="ModelFormatException">The payload is not a valid model.</exception>
	public NinjaModel ReadModel()
	{
		ReadOnlySpan<byte> payload = Payload.Span;
		if (payload.Length >= 8)
		{
			uint tag = BinaryPrimitives.ReadUInt32BigEndian(payload);
			if (tag is 0x4E4A434D or 0x4E4A544C or 0x4E4D444D or 0x504F4630 or 0x4E4A494E or 0x4E4A4C49 or 0x4E4A4341 or 0x4E53534D)
				return NinjaModelReader.Read(NinjaChunkReader.ReadAll(payload));
		}
		return NinjaModelReader.Read(Payload);
	}
}
