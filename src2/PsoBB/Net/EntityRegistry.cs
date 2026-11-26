using System.Diagnostics.CodeAnalysis;

namespace PsoBB.Net;

/// <summary>
/// The fixed player-slot table used by the game-join, lobby-join and movement commands.
/// </summary>
/// <remarks>
/// The original addresses players by a client id in the range zero through eleven. A duplicate join for one slot updates the existing record, and removing a slot that was never created does nothing, matching the original lookups that return null.
/// </remarks>
public sealed class EntityRegistry
{
	/// <summary>The number of player slots the original looks up by client id.</summary>
	public const int Capacity = 12;

	private readonly LobbyEntity?[] _entities = new LobbyEntity?[Capacity];

	/// <summary>Gets the number of occupied player slots.</summary>
	public int Count { get; private set; }

	/// <summary>Gets every occupied player slot in client-id order.</summary>
	public IEnumerable<LobbyEntity> Entities
	{
		get
		{
			foreach (LobbyEntity? entity in _entities)
			{
				if (entity is not null)
					yield return entity;
			}
		}
	}

	/// <summary>
	/// Finds the player in one slot.
	/// </summary>
	/// <param name="clientId">The client id from zero through eleven.</param>
	/// <param name="entity">The player, or <see langword="null"/> when the slot is empty.</param>
	/// <returns><see langword="true"/> when the slot is occupied.</returns>
	public bool TryGet(int clientId, [NotNullWhen(true)] out LobbyEntity? entity)
	{
		if (clientId < 0 || clientId >= Capacity)
		{
			entity = null;
			return false;
		}
		entity = _entities[clientId];
		return entity is not null;
	}

	internal LobbyEntity GetOrAdd(int clientId)
	{
		if (clientId < 0 || clientId >= Capacity)
			throw new ArgumentOutOfRangeException(nameof(clientId), clientId, "A player client id must be between zero and eleven.");
		LobbyEntity? entity = _entities[clientId];
		if (entity is not null)
			return entity;
		entity = new LobbyEntity(clientId);
		_entities[clientId] = entity;
		Count++;
		return entity;
	}

	internal bool Remove(int clientId)
	{
		if (clientId < 0 || clientId >= Capacity || _entities[clientId] is null)
			return false;
		_entities[clientId] = null;
		Count--;
		return true;
	}

	internal void Clear()
	{
		Array.Clear(_entities);
		Count = 0;
	}
}
