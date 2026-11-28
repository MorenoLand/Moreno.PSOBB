using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// One preset object placement from a map object table.
/// </summary>
/// <param name="ObjectId">The object type identifier.</param>
/// <param name="Flags">The placement flags.</param>
/// <param name="EntityIndex">The quest-side entity index stored in the file.</param>
/// <param name="EntityVariant">The entity variant word.</param>
/// <param name="AlternateEntityIndex">The free-roam entity index stored in the file.</param>
/// <param name="Group">The group word.</param>
/// <param name="Section">The room section the object belongs to.</param>
/// <param name="PlacementFlags">The second placement word.</param>
/// <param name="Position">The object position.</param>
/// <param name="RotationX">The X rotation in the client's angle units.</param>
/// <param name="RotationY">The Y rotation in the client's angle units.</param>
/// <param name="RotationZ">The Z rotation in the client's angle units.</param>
/// <param name="Parameter1">First constructor parameter.</param>
/// <param name="Parameter2">Second constructor parameter.</param>
/// <param name="Parameter3">Third constructor parameter.</param>
/// <param name="Parameter4">Fourth constructor parameter.</param>
/// <param name="Parameter5">Fifth constructor parameter.</param>
/// <param name="Parameter6">Sixth constructor parameter.</param>
public readonly record struct MapObjectPlacement(
	ushort ObjectId,
	ushort Flags,
	ushort EntityIndex,
	ushort EntityVariant,
	ushort AlternateEntityIndex,
	ushort Group,
	ushort Section,
	ushort PlacementFlags,
	Vector3 Position,
	int RotationX,
	int RotationY,
	int RotationZ,
	int Parameter1,
	int Parameter2,
	int Parameter3,
	int Parameter4,
	int Parameter5,
	int Parameter6);
