namespace PsoBB.Scene;

/// <summary>
/// One map event: a section spawn wave and its delay or clear-event reference.
/// </summary>
/// <param name="EventId">The event identifier.</param>
/// <param name="Flags">The event state flags.</param>
/// <param name="Reserved">The second state word.</param>
/// <param name="Section">The room section the event belongs to.</param>
/// <param name="WaveNumber">The spawn wave within the section.</param>
/// <param name="Delay">The delay in frames before the wave spawns.</param>
/// <param name="ClearEventsIndex">The index into the clear-event tail.</param>
public readonly record struct MapEvent(
	uint EventId,
	ushort Flags,
	ushort Reserved,
	ushort Section,
	ushort WaveNumber,
	uint Delay,
	uint ClearEventsIndex);
