namespace PsoBB.Data;

/// <summary>
/// The container format of an archive owned by the data-file registry.
/// </summary>
public enum DataArchiveFormat
{
	/// <summary>
	/// A GSL archive with a named directory.
	/// </summary>
	Gsl,

	/// <summary>
	/// An AFS archive with unnamed sections addressed by index.
	/// </summary>
	Afs,
}
