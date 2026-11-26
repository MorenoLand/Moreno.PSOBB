namespace PsoBB.Scene;

/// <summary>
/// The FourCC identifiers of the Ninja chunk types a BML entry can carry.
/// </summary>
public enum NinjaChunkType : uint
{
	/// <summary>Ninja character model geometry.</summary>
	Njcm = 0x4E4A434D,
	/// <summary>Ninja texture list.</summary>
	Njtl = 0x4E4A544C,
	/// <summary>Ninja motion data.</summary>
	Njca = 0x4E4A4341,
	/// <summary>Ninja interpolation data.</summary>
	Njin = 0x4E4A494E,
	/// <summary>Ninja light data.</summary>
	Njli = 0x4E4A4C49,
	/// <summary>Ninja model metadata.</summary>
	Nmdm = 0x4E4D444D,
	/// <summary>Ninja shape motion data.</summary>
	Nssm = 0x4E53534D,
}
