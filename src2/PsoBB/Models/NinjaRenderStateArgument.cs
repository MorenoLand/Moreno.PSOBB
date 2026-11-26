namespace PsoBB.Models;

/// <summary>
/// One packed render-state command attached to an NJCM index buffer.
/// </summary>
/// <param name="Type">The setter index: 2 blend, 3 texture, 4 addressing, 5 material, 6 lighting, 7 normals, 8 material source.</param>
/// <param name="Argument1">The first setter argument.</param>
/// <param name="Argument2">The second setter argument.</param>
/// <param name="Reserved">The trailing word, stored as-is.</param>
public readonly record struct NinjaRenderStateArgument(uint Type, uint Argument1, uint Argument2, uint Reserved)
{
	/// <summary>Gets the texture-list index when this command selects a texture, or -1 otherwise.</summary>
	public int TextureIndex => Type == 3 ? (int)Argument1 : -1;
}
