namespace PsoBB.Audio;

/// <summary>
/// One global sound-effect identifier bound to the loaded slot and attenuation the client selects.
/// </summary>
/// <param name="SoundEffectId">The identifier the game passes.</param>
/// <param name="Slot">The loaded sample slot the remap table selects.</param>
/// <param name="Sample">The loaded sample.</param>
/// <param name="VolumeIndex">The attenuation index from zero through 127.</param>
public readonly record struct SoundEffectMapping(int SoundEffectId, int Slot, PacSoundSample Sample, int VolumeIndex)
{
	/// <summary>
	/// Gets the DirectSound volume in hundredths of a decibel.
	/// </summary>
	public int Centibels => SoundEffectIds.VolumeCentibels(VolumeIndex);

	/// <summary>
	/// Gets the linear voice gain.
	/// </summary>
	public float Gain => SoundEffectIds.VolumeGain(VolumeIndex);
}
