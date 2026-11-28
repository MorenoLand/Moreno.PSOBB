using PsoBB.Mathematics;

namespace PsoBB.Game;

/// <summary>
/// A movable game object that advances along a direction, ages on every update and resolves the
/// ground between its previous and current position.
/// </summary>
public sealed class GameObject
{
	/// <summary>
	/// The status bit the original sets after a state change in this cluster.
	/// </summary>
	public const ushort ChangeFlag = 1;

	/// <summary>
	/// The layer mask the original passes to the ground sweep.
	/// </summary>
	public const int GroundQueryMask = 0x100;

	/// <summary>
	/// Gets or sets the current position.
	/// </summary>
	public Vector3 Position { get; set; }

	/// <summary>
	/// Gets or sets the position before the most recent advance.
	/// </summary>
	public Vector3 PreviousPosition { get; set; }

	/// <summary>
	/// Gets or sets the direction the object moves along.
	/// </summary>
	public Vector3 Direction { get; set; }

	/// <summary>
	/// Gets or sets the amount added to the position and the age on every update.
	/// </summary>
	public float TimeStep { get; set; }

	/// <summary>
	/// Gets or sets the age past which the object is flagged.
	/// </summary>
	public float MaximumAge { get; set; }

	/// <summary>
	/// Gets or sets the current age.
	/// </summary>
	public float Age { get; set; }

	/// <summary>
	/// Gets or sets the status word.
	/// </summary>
	public ushort Flags { get; set; }

	/// <summary>
	/// Advances the position and then the age by one time step.
	/// </summary>
	/// <param name="ground">The ground query used by the position advance.</param>
	/// <param name="groundContactResolved">
	/// Invoked where the original calls the object's fourth virtual slot after a ground contact.
	/// </param>
	[Original(0x006F0460)]
	public void Update(IGroundCollision ground, Action? groundContactResolved = null)
	{
		Advance(ground, groundContactResolved);
		AdvanceAge();
	}

	/// <summary>
	/// Moves the object along its direction by <see cref="TimeStep"/>, remembers the previous
	/// position and resolves the ground between the two positions.
	/// </summary>
	/// <param name="ground">The ground query used by the position advance.</param>
	/// <param name="groundContactResolved">
	/// Invoked where the original calls the object's fourth virtual slot after a ground contact.
	/// </param>
	[Original(0x006F0474)]
	public void Advance(IGroundCollision ground, Action? groundContactResolved = null)
	{
		Vector3 previous = Position;
		double x = (double)Direction.X * TimeStep + Position.X;
		double y = (double)Direction.Y * TimeStep + Position.Y;
		double z = (double)Direction.Z * TimeStep + Position.Z;
		Position = new Vector3((float)x, (float)y, (float)z);
		PreviousPosition = previous;
		ResolveGroundContact(ground, groundContactResolved);
	}

	/// <summary>
	/// Replaces the position with the ground contact between the previous and current position and
	/// flags the object; leaves it unchanged when the sweep misses.
	/// </summary>
	/// <param name="ground">The ground query.</param>
	/// <param name="groundContactResolved">
	/// Invoked where the original calls the object's fourth virtual slot after a ground contact.
	/// </param>
	[Original(0x006F04C0)]
	public void ResolveGroundContact(IGroundCollision ground, Action? groundContactResolved = null)
	{
		ArgumentNullException.ThrowIfNull(ground);
		GroundContact? contact = ground.Sweep(PreviousPosition, Position, GroundQueryMask);
		if (contact is null)
			return;
		Position = contact.Value.Position;
		groundContactResolved?.Invoke();
		Flags |= ChangeFlag;
	}

	/// <summary>
	/// Adds one time step to the age, or flags the object when the age is already past the maximum.
	/// An unordered age counts as not past the maximum, matching the original comparison.
	/// </summary>
	[Original(0x006F053C)]
	public void AdvanceAge()
	{
		if (!(Age > MaximumAge))
		{
			Age = (float)((double)Age + TimeStep);
			return;
		}
		Flags |= ChangeFlag;
	}
}
