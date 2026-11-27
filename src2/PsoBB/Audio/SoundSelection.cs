namespace PsoBB.Audio;

/// <summary>
/// The positional sound selection helpers used by <c>0x00814298</c>.
/// </summary>
/// <remarks>
/// <c>0x007AFC9C</c>-independent mode checks, the id remap at <c>0x0081443C</c>, the exemption
/// test at <c>0x00814498</c>, the listener vector at <c>0x0082992C</c>, the distance at
/// <c>0x00836208</c> and the signed square root at <c>0x0082DC9C</c>. The playback core at
/// <c>0x00828E4C</c> is the host audio seam: <see cref="Play"/> computes the id and the linear gain
/// and the supplied sink performs the channel allocation and output.
/// </remarks>
public static class SoundSelection
{
	/// <summary>The squared-distance floor at <c>0x0098A604</c>.</summary>
	public const float DistanceFloor = 0.025f;

	/// <summary>Gets or sets the operation mode at <c>0x00AAFC9C</c>.</summary>
	[OriginalGlobal(0x00AAFC9C)]
	public static int OperationMode { get; set; }

	/// <summary>Gets or sets the integer volume word at <c>0x00AB59F8</c>.</summary>
	[OriginalGlobal(0x00AB59F8)]
	public static int Volume { get; set; }

	/// <summary>Gets or sets the last selected sound at <c>0x00A11EEC</c>.</summary>
	[OriginalGlobal(0x00A11EEC)]
	public static int LastSound { get; set; }

	private static readonly float[] ListenerPoint = new float[3];

	/// <summary>Returns the operation mode at <c>0x00807AC0</c>.</summary>
	/// <returns>The value at <c>0x00AAFC9C</c>.</returns>
	[Original(0x00807AC0)]
	public static int CurrentMode() => OperationMode;

	/// <summary>
	/// Remaps a sound id, applying the 1201-1204 replacement when the operation mode is 21 or 22.
	/// </summary>
	/// <param name="soundId">The global sound id.</param>
	/// <returns>The selected sample slot.</returns>
	[Original(0x0081443C)]
	public static int Select(int soundId)
	{
		int mode = CurrentMode();
		if (mode is < 21 or > 22)
			return SoundEffectIds.SlotFor(soundId);
		return soundId switch
		{
			1369 => 1201,
			1370 => 1202,
			1371 => 1203,
			1372 => 1204,
			_ => SoundEffectIds.SlotFor(soundId),
		};
	}

	/// <summary>
	/// Returns whether the id is exempt from the distance cut.
	/// </summary>
	/// <param name="soundId">The sound id.</param>
	/// <returns><see langword="true"/> for 14, 31 or 44.</returns>
	[Original(0x00814498)]
	public static bool IsExempt(int soundId) => soundId is 14 or 31 or 44;

	/// <summary>
	/// Returns the listener vector at <c>0x00ACB39C</c>.
	/// </summary>
	/// <returns>The three listener coordinates.</returns>
	[Original(0x0082992C)]
	public static float[] Listener() => ListenerPoint;

	/// <summary>
	/// Returns the signed square root at <c>0x0082DC9C</c>.
	/// </summary>
	/// <param name="value">The value.</param>
	/// <returns>The square root, negated for negative input.</returns>
	[Original(0x0082DC9C)]
	public static float SignedSqrt(float value) => value >= 0f ? MathF.Sqrt(value) : -MathF.Sqrt(-value);

	/// <summary>
	/// Selects and plays a sound with the positional attenuation at <c>0x00814298</c>.
	/// </summary>
	/// <param name="soundId">The global sound id.</param>
	/// <param name="position">The source position, or an empty span for a non-positional sound.</param>
	/// <param name="offset">The volume offset added when bit one of <paramref name="flags"/> is set.</param>
	/// <param name="flags">The caller flags.</param>
	/// <param name="play">The playback sink; it receives the sound id and the linear gain.</param>
	/// <returns>The playback result, or <c>-1</c> when the sound is dropped.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="play"/> is null.</exception>
	/// <exception cref="ArgumentException">The position is shorter than three floats.</exception>
	[Original(0x00814298)]
	public static int Play(int soundId, ReadOnlySpan<float> position, int offset, int flags, Func<int, float, int> play)
	{
		ArgumentNullException.ThrowIfNull(play);
		if (soundId == 0)
			return -1;
		int slot;
		int attenuation;
		if (soundId < 0x700)
		{
			slot = Select(soundId);
			attenuation = SoundEffectIds.VolumeIndex(slot);
		}
		else
		{
			slot = 0;
			attenuation = SoundEffectIds.VolumeIndex(0);
		}
		float distance = 0f;
		if (!position.IsEmpty)
			distance = Distance(position, Listener());
		if (!IsExempt(CurrentMode()) && distance >= 300f)
		{
			LastSound = -1;
			return -1;
		}
		int centibels = -attenuation;
		if ((flags & 2) != 0)
			centibels += offset;
		if (centibels >= 0)
			centibels = 0;
		if (centibels <= -127)
			centibels = -127;
		double weight = (Volume / 127.0 + 1.0) * (centibels / 127.0 + 1.0) - 1.0;
		int scaled = (int)(weight * weight * weight * 6400.0);
		float gain = MathF.Pow(10f, scaled / 2000f);
		int result = play(soundId, gain);
		LastSound = result;
		return result;
	}

	/// <summary>
	/// Returns the distance between two three-float points, or zero below the 0.025 floor.
	/// </summary>
	/// <param name="first">The first point.</param>
	/// <param name="second">The second point.</param>
	/// <returns>The distance or zero.</returns>
	/// <exception cref="ArgumentException">A point is shorter than three floats.</exception>
	[Original(0x00836208)]
	public static float Distance(ReadOnlySpan<float> first, ReadOnlySpan<float> second)
	{
		if (first.Length < 3 || second.Length < 3)
			throw new ArgumentException("A sound position needs three floats.");
		double x = first[0] - second[0];
		double y = first[1] - second[1];
		double z = first[2] - second[2];
		double sum = x * x + y * y + z * z;
		if (sum < DistanceFloor)
			return 0f;
		return SignedSqrt((float)sum);
	}
}
