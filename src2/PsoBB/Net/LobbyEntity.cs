using System.Buffers.Binary;
using System.Text;
using PsoBB.Mathematics;

namespace PsoBB.Net;

/// <summary>
/// One player slot tracked from the game-join and lobby-join commands.
/// </summary>
/// <remarks>
/// The lobby data fields come from the 0x44-byte player entry at the start of each 0x520-byte join record. Position fields stay unset until a movement or joiner-sync packet supplies them, because the join records carry identity and appearance rather than a world position.
/// </remarks>
public sealed class LobbyEntity
{
	/// <summary>The size of the player lobby record at the start of a join entry.</summary>
	public const int LobbyDataSize = 0x44;

	/// <summary>The offset of the client id inside the player lobby record.</summary>
	public const int ClientIdOffset = 0x1C;

	/// <summary>The offset of the player name inside the player lobby record.</summary>
	public const int NameOffset = 0x20;

	/// <summary>The number of bytes reserved for the player name.</summary>
	public const int NameLength = 0x10;

	internal LobbyEntity(int clientId) => ClientId = clientId;

	/// <summary>Gets the player slot the server addressed, from 0 through 11.</summary>
	public int ClientId { get; }

	/// <summary>Gets the player tag from the lobby record.</summary>
	public uint PlayerTag { get; internal set; }

	/// <summary>Gets the guild card number from the lobby record.</summary>
	public uint GuildCardNumber { get; internal set; }

	/// <summary>Gets the team master's guild card number from the lobby record.</summary>
	public uint TeamMasterGuildCardNumber { get; internal set; }

	/// <summary>Gets the team id from the lobby record.</summary>
	public uint TeamId { get; internal set; }

	/// <summary>Gets the player name decoded from the UTF-16 name field.</summary>
	public string Name { get; internal set; } = string.Empty;

	/// <summary>Gets the hide-help-prompt flag from the lobby record.</summary>
	public uint HideHelpPrompt { get; internal set; }

	/// <summary>Gets the authoritative world position set by a stop-at-position command, or <see langword="null"/> before one arrives.</summary>
	public Vector3? Position { get; internal set; }

	/// <summary>Gets the network X coordinate set by a walk or run command, or <see langword="null"/> before one arrives.</summary>
	public float? NetworkX { get; internal set; }

	/// <summary>Gets the network Z coordinate set by a walk or run command, or <see langword="null"/> before one arrives.</summary>
	public float? NetworkZ { get; internal set; }

	/// <summary>Gets the heading in 16-bit turn units, or <see langword="null"/> before a stop command arrives.</summary>
	public ushort? Heading { get; internal set; }

	/// <summary>Gets the floor from a stop command when the packet carried a nonnegative floor.</summary>
	public int? Floor { get; internal set; }

	/// <summary>Gets the room from a stop or joiner-sync command when the packet carried one.</summary>
	public int? Room { get; internal set; }

	/// <summary>Gets whether the last stop or walk command marked the player as near an enemy.</summary>
	public bool IsNearEnemy { get; internal set; }

	/// <summary>Gets the locomotion state reported by the movement subcommands.</summary>
	public LobbyMovementState MovementState { get; internal set; } = LobbyMovementState.Unknown;

	/// <summary>Gets whether a root-object despawn transition was requested for this player.</summary>
	public bool IsLeaving { get; internal set; }

	/// <summary>Gets the joiner-sync game flags, or <see langword="null"/> before a joiner-sync command arrives.</summary>
	public uint? GameFlags { get; internal set; }

	/// <summary>Gets the joiner-sync phase, or <see langword="null"/> before a joiner-sync command arrives.</summary>
	public ushort? Phase { get; internal set; }

	/// <summary>Gets the joiner-sync current hit points, or <see langword="null"/> before a joiner-sync command arrives.</summary>
	public ushort? CurrentHitPoints { get; internal set; }

	internal void ApplyLobbyData(ReadOnlySpan<byte> data)
	{
		if (data.Length < LobbyDataSize)
			throw new InvalidDataException($"A player lobby record requires {LobbyDataSize} bytes but only {data.Length} are available.");
		PlayerTag = BinaryPrimitives.ReadUInt32LittleEndian(data);
		GuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		TeamMasterGuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(data[8..]);
		TeamId = BinaryPrimitives.ReadUInt32LittleEndian(data[0x0C..]);
		Name = DecodeName(data.Slice(NameOffset, NameLength));
		HideHelpPrompt = BinaryPrimitives.ReadUInt32LittleEndian(data[0x40..]);
	}

	internal void ApplyJoinerBase(ReadOnlySpan<byte> data)
	{
		if (data.Length < 4)
			throw new InvalidDataException("A joiner-sync player base requires at least four bytes.");
		Room = BinaryPrimitives.ReadUInt16LittleEndian(data[2..]);
		if (data.Length < 0x24)
			return;
		GameFlags = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		Position = new Vector3(
			BinaryPrimitives.ReadSingleLittleEndian(data[8..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[0x0C..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[0x10..]));
		Phase = BinaryPrimitives.ReadUInt16LittleEndian(data[0x20..]);
		CurrentHitPoints = BinaryPrimitives.ReadUInt16LittleEndian(data[0x22..]);
		IsLeaving = false;
	}

	internal static bool TryGetClientId(ReadOnlySpan<byte> data, out int clientId)
	{
		if (data.Length < LobbyDataSize)
		{
			clientId = -1;
			return false;
		}
		uint value = BinaryPrimitives.ReadUInt32LittleEndian(data[ClientIdOffset..]);
		clientId = value <= int.MaxValue ? (int)value : -1;
		return clientId >= 0 && clientId < EntityRegistry.Capacity;
	}

	private static string DecodeName(ReadOnlySpan<byte> field)
	{
		int length = 0;
		while (length + 1 < field.Length && (field[length] | field[length + 1]) != 0)
			length += 2;
		return length == 0 ? string.Empty : Encoding.Unicode.GetString(field[..length]);
	}
}
