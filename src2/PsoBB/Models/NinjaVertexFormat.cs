namespace PsoBB.Models;

/// <summary>
/// The flexible vertex format codes the original draw path selects for each NJCM vertex layout.
/// </summary>
internal static class NinjaVertexFormat
{
	/// <summary>
	/// The original format table at 0x00A218A0; entry zero is the plain XYZ format and entries one
	/// through seven add texture coordinates, normals or a diffuse colour.
	/// </summary>
	[OriginalGlobal(0x00A218A0)]
	private static readonly uint[] _flexibleVertexFormats = [0x2, 0x102, 0x12, 0x112, 0x42, 0x142, 0x52, 0x152];

	/// <summary>
	/// Returns the Direct3D flexible vertex format code for an NJCM vertex format word.
	/// </summary>
	/// <param name="format">The NJCM format word, including any flag bits.</param>
	/// <returns>The flexible vertex format code.</returns>
	/// <exception cref="ModelFormatException">The layout is outside the original table.</exception>
	internal static uint ToFlexibleVertexFormat(uint format)
	{
		uint layout = format & 0xFFFF;
		if (layout >= _flexibleVertexFormats.Length)
			throw new ModelFormatException($"The vertex format {layout} has no flexible vertex format code.", 0);
		return _flexibleVertexFormats[layout];
	}
}
