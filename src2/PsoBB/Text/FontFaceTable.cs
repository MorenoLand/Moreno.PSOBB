namespace PsoBB.Text;

/// <summary>
/// The five font faces the original client creates from its locale configuration.
/// </summary>
public sealed class FontFaceTable
{
	private readonly FontDescriptor[] _faces;

	/// <summary>
	/// Creates the table from the five configured faces.
	/// </summary>
	/// <param name="faces">The faces in locale order.</param>
	/// <exception cref="ArgumentNullException"><paramref name="faces"/> is null.</exception>
	/// <exception cref="ArgumentException">The table does not contain five faces.</exception>
	public FontFaceTable(IReadOnlyList<FontDescriptor> faces)
	{
		ArgumentNullException.ThrowIfNull(faces);
		if (faces.Count != 5)
			throw new ArgumentException("The client has exactly five font faces.", nameof(faces));
		_faces = [.. faces];
	}

	/// <summary>Gets the number of faces.</summary>
	public int Count => _faces.Length;

	/// <summary>
	/// Returns a face, falling back to the second face when the index is outside the table.
	/// </summary>
	/// <param name="index">The requested face index.</param>
	/// <returns>The selected face.</returns>
	[Original(0x00841A10, "unknown_get_font_struct")]
	public FontDescriptor GetFace(int index) => _faces[FontDescriptor.GetValidFaceIndex(index)];
}
