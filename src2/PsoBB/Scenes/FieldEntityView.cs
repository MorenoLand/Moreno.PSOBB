using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Net;
using PsoBB.Rendering;

namespace PsoBB.Scenes;

/// <summary>
/// One player slot spawned for drawing from the lobby world.
/// </summary>
/// <remarks>
/// The view exists only after a stop or joiner-sync packet supplies a position and the host registers a model for the
/// slot. Position and heading are copied from the packet record; the walk and run target coordinates stay at the
/// unported entity animation layer.
/// </remarks>
public sealed class FieldEntityView
{
	internal FieldEntityView(LobbyEntity entity, NinjaModel model)
	{
		ClientId = entity.ClientId;
		Entity = entity;
		Model = model;
		Position = entity.Position ?? default;
		Heading = entity.Heading ?? 0;
		Transform = FieldScene.CreateTransform(Position, Heading);
	}

	/// <summary>Gets the player slot from zero through eleven.</summary>
	public int ClientId { get; }

	/// <summary>Gets the lobby record the view follows.</summary>
	public LobbyEntity Entity { get; private set; }

	/// <summary>Gets the NJCM model drawn for the slot.</summary>
	public NinjaModel Model { get; private set; }

	/// <summary>Gets the last authoritative position from a stop or joiner-sync packet.</summary>
	public Vector3 Position { get; private set; }

	/// <summary>Gets the last heading from a stop packet, or zero when none arrived.</summary>
	public ushort Heading { get; private set; }

	/// <summary>Gets the object-to-world transform for the model.</summary>
	public Matrix4x4 Transform { get; private set; }

	internal void Update(LobbyEntity entity, NinjaModel model)
	{
		Entity = entity;
		Model = model;
		Position = entity.Position ?? Position;
		Heading = entity.Heading ?? 0;
		Transform = FieldScene.CreateTransform(Position, Heading);
	}
}
