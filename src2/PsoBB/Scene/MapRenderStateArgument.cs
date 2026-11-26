namespace PsoBB.Scene;

/// <summary>
/// One 16-byte render-state argument of a map index buffer, with the setter selector and its two operands.
/// </summary>
/// <param name="State">The render-state setter selector.</param>
/// <param name="First">The first operand, such as a source blend factor or texture index.</param>
/// <param name="Second">The second operand, such as a destination blend factor.</param>
public readonly record struct MapRenderStateArgument(uint State, uint First, uint Second)
{
	/// <summary>The selector whose first operand is the stage-zero texture list index.</summary>
	public const uint TextureState = 3;

	/// <summary>The selector whose operands are the source and destination blend factors.</summary>
	public const uint BlendState = 2;

	/// <summary>The selector whose operands are the horizontal and vertical texture address modes.</summary>
	public const uint AddressState = 4;
}
