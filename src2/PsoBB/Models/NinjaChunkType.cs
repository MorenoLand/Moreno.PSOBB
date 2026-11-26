namespace PsoBB.Models;

/// <summary>
/// Identifies a Ninja IFF chunk used by the client's model, texture-list and motion files.
/// </summary>
public enum NinjaChunkType
{
	/// <summary>The NJIN input-definition chunk.</summary>
	Input,
	/// <summary>The NJCM model chunk.</summary>
	Model,
	/// <summary>The NJTL texture-list chunk.</summary>
	TextureList,
	/// <summary>The NJLI light chunk.</summary>
	Light,
	/// <summary>The NJCA camera chunk.</summary>
	Camera,
	/// <summary>The NMDM motion chunk.</summary>
	Motion,
	/// <summary>The NSSM sound-sequence chunk.</summary>
	Sound,
	/// <summary>A chunk whose four-character tag is not part of the Ninja family.</summary>
	Unknown,
}
