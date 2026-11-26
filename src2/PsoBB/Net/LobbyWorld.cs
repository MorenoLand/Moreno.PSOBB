using System.Buffers.Binary;
using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Net;

/// <summary>
/// Tracks the lobby and game player slots from the commands the game server sends after the login redirect.
/// </summary>
/// <remarks>
/// The world accepts the 0x64 game join, 0x65 add-player-to-game, 0x66 remove-player-from-game, 0x67 join-lobby, 0x68 add-player-to-lobby and 0x69 remove-player-from-lobby commands, the 0x60/0x62/0x6C/0x6D subcommand payloads that carry player movement and joiner sync, and the 0x81/0x83 mail and lobby-menu replies. It stores only the fields the original handlers read from those records; appearance, inventory, animation clips, menu objects, outgoing joiner-sync packets and the scene renderer stay with their own subsystems, subcommands without a handler in this table are ignored, and game-join records with an empty name field are not registered as entities. Movement packets update the entity record, and a stop packet also updates the attached local <see cref="PlayerCharacter"/> position and heading without running the local input or physics step; the action-permission bytes are the shipped image defaults rather than per-map replacement data. The 0x81 and 0x83 replies fill <see cref="SimpleMails"/> and <see cref="LobbyMenu"/> without changing <see cref="State"/>.
/// </remarks>
public sealed class LobbyWorld
{
	/// <summary>The number of 0x44-byte player lobby records in a game-join body.</summary>
	public const int GameJoinPlayerCount = 4;

	/// <summary>The size of the 0x64 game-join body.</summary>
	public const int GameJoinBodyLength = 0x1A0;

	/// <summary>The offset of the first player lobby record in a game-join body.</summary>
	public const int GameJoinPlayerOffset = 0x80;

	/// <summary>The size of the 0x65/0x67/0x68 join body.</summary>
	public const int LobbyJoinBodyLength = 0x3D8C;

	/// <summary>The offset of the first join entry in a 0x65/0x67/0x68 body.</summary>
	public const int LobbyJoinEntryOffset = 0x0C;

	/// <summary>The size of one player entry in a 0x65/0x67/0x68 body.</summary>
	public const int LobbyJoinEntryLength = 0x520;

	/// <summary>The number of bytes in the map action-permission table recovered from the shipped data image.</summary>
	public const int MapActionPermissionCount = 0x30;

	/// <summary>The number of mail entries the original list at 0x00AB0300 holds.</summary>
	public const int SimpleMailCapacity = 50;

	private readonly GameSession? _session;
	private readonly List<SimpleMailPacket> _simpleMails = [];

	private delegate void SubcommandHandler(LobbyWorld world, ReadOnlySpan<byte> record);

	private readonly record struct SubcommandEntry(byte Action, ushort Permission, SubcommandHandler Handler);

	private static readonly SubcommandEntry[] Subcommands =
	[
		new(0x3E, 0x0007, ApplyStopAtPosition),
		new(0x40, 0x0007, ApplyWalkToPosition),
		new(0x42, 0x0007, ApplyRunToPosition),
		new(0x4E, 0x0006, ApplyRootObjectDespawn),
		new(0x70, 0x0007, ApplySyncPlayer),
		new(0x71, 0x0007, ApplyUnblockGameJoin),
		new(0x72, 0x0007, ApplyDoneLoading),
	];

	/// <summary>
	/// Creates a world that can drive an existing game session, or a world that receives packets directly.
	/// </summary>
	/// <param name="session">The redirected game session the update path pumps, or <see langword="null"/> for direct packet handling.</param>
	public LobbyWorld(GameSession? session = null)
	{
		_session = session;
	}

	/// <summary>Gets the player-slot table.</summary>
	public EntityRegistry Entities { get; } = new();

	/// <summary>Gets the phase reached by the last join, unblock or disconnect.</summary>
	public LobbyWorldState State { get; private set; } = LobbyWorldState.Disconnected;

	/// <summary>Gets the local player's client id from zero through eleven, or <see langword="null"/> when the packet did not carry a valid one.</summary>
	public int? LocalPlayerIndex { get; private set; }

	/// <summary>Gets the game or lobby leader's client id, or <see langword="null"/> when the last packet carried an invalid one.</summary>
	public int? LeaderId { get; private set; }

	/// <summary>Gets the four game-join variation records, or empty bytes before a game join.</summary>
	public ReadOnlyMemory<byte> Variations { get; private set; }

	/// <summary>Gets the last command 0x83 lobby-menu reply, or <see langword="null"/> before one arrives.</summary>
	public LobbyMenuPacket? LobbyMenu { get; private set; }

	/// <summary>Gets the command 0x81 mail entries in arrival order, keeping at most <see cref="SimpleMailCapacity"/>; a mail whose text exceeds <see cref="SimpleMailPacket.ListTextLengthLimit"/> is still exposed here even though the original list callback skips it.</summary>
	public IReadOnlyList<SimpleMailPacket> SimpleMails => _simpleMails;

	/// <summary>Gets the disable-UDP byte from the last join or leave command.</summary>
	public byte? DisableUdp { get; private set; }

	/// <summary>Gets the difficulty byte from the last game join.</summary>
	public byte? Difficulty { get; private set; }

	/// <summary>Gets the battle-mode byte from the last game join.</summary>
	public byte? BattleMode { get; private set; }

	/// <summary>Gets the event byte from the last game or lobby join.</summary>
	public byte? Event { get; private set; }

	/// <summary>Gets the section-id byte from the last game join.</summary>
	public byte? SectionId { get; private set; }

	/// <summary>Gets the challenge-mode byte from the last game join.</summary>
	public byte? ChallengeMode { get; private set; }

	/// <summary>Gets the random seed from the last game join.</summary>
	public uint? RandomSeed { get; private set; }

	/// <summary>Gets the episode byte from the last game join.</summary>
	public byte? Episode { get; private set; }

	/// <summary>Gets the solo-mode byte from the last game join.</summary>
	public byte? SoloMode { get; private set; }

	/// <summary>Gets the in-quest byte from the last game join.</summary>
	public byte? IsInQuest { get; private set; }

	/// <summary>Gets the lobby number from the last lobby join.</summary>
	public byte? LobbyNumber { get; private set; }

	/// <summary>Gets the block number from the last lobby join.</summary>
	public byte? BlockNumber { get; private set; }

	/// <summary>Gets the battle-option byte from the last lobby join.</summary>
	public byte? EnableBattleMode { get; private set; }

	/// <summary>Gets the voice-chat byte from the last lobby join.</summary>
	public byte? VoiceChat { get; private set; }

	/// <summary>Gets or sets the map id used for the action-permission check.</summary>
	public byte CurrentMapId { get; set; }

	/// <summary>Gets or sets the local player whose position and heading a stop packet updates.</summary>
	public PlayerCharacter? LocalPlayer { get; set; }

	/// <summary>
	/// The action-permission byte for each map id, read from the shipped data image.
	/// </summary>
	[OriginalGlobal(0x00A10160)]
	public static IReadOnlyList<byte> MapActionPermissionLevels { get; } = Array.AsReadOnly<byte>(
	[
		0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x04,
		0x04, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x04, 0x00,
	]);

	/// <summary>
	/// Pumps the bound session and dispatches every packet it has queued.
	/// </summary>
	/// <remarks>A failed or closed session clears the world and leaves it in <see cref="LobbyWorldState.Disconnected"/>.</remarks>
	public void Update()
	{
		if (_session is null)
			return;
		_session.Pump();
		if (_session.State is GameSessionState.Failed or GameSessionState.Disconnected)
		{
			Reset();
			return;
		}
		while (_session.TryReadPacket(out Packet? packet))
			HandlePacket(packet!);
	}

	/// <summary>
	/// Dispatches one command into the world.
	/// </summary>
	/// <param name="packet">The complete packet.</param>
	/// <returns><see langword="true"/> when the command belongs to this world.</returns>
	/// <exception cref="InvalidDataException">A recognized command has a length or count that cannot describe its records.</exception>
	public bool HandlePacket(Packet packet)
	{
		ArgumentNullException.ThrowIfNull(packet);
		if (packet.IsCommand(PacketCommand.SimpleMail))
		{
			ApplySimpleMail(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.LobbyMenu))
		{
			LobbyMenu = LobbyMenuPacket.Read(packet.Payload.Span, packet.Header.Flags);
			return true;
		}
		if (packet.IsCommand(PacketCommand.GameJoin))
		{
			ApplyGameJoin(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.AddPlayerToGame))
		{
			ApplyAddPlayerToGame(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.RemovePlayerFromGame))
		{
			ApplyRemovePlayer(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.JoinLobby))
		{
			ApplyJoinLobby(packet.Payload.Span, packet.Header.Flags);
			return true;
		}
		if (packet.IsCommand(PacketCommand.AddPlayerToLobby))
		{
			ApplyAddPlayerToLobby(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.RemovePlayerFromLobby))
		{
			ApplyRemovePlayer(packet.Payload.Span);
			return true;
		}
		if (packet.IsCommand(PacketCommand.Broadcast) || packet.IsCommand(PacketCommand.Directed) ||
			packet.IsCommand(PacketCommand.LargeBroadcast) || packet.IsCommand(PacketCommand.LargeTargeted))
		{
			ApplySubcommandPayload(packet.Payload.Span);
			return true;
		}
		return false;
	}

	/// <summary>
	/// Clears every tracked player and every join field.
	/// </summary>
	public void Reset()
	{
		State = LobbyWorldState.Disconnected;
		Entities.Clear();
		LocalPlayerIndex = null;
		LeaderId = null;
		Variations = ReadOnlyMemory<byte>.Empty;
		LobbyMenu = null;
		_simpleMails.Clear();
		DisableUdp = null;
		Difficulty = null;
		BattleMode = null;
		Event = null;
		SectionId = null;
		ChallengeMode = null;
		RandomSeed = null;
		Episode = null;
		SoloMode = null;
		IsInQuest = null;
		LobbyNumber = null;
		BlockNumber = null;
		EnableBattleMode = null;
		VoiceChat = null;
		CurrentMapId = 0;
	}

	[Original(0x0079BDE8)]
	private void ApplyGameJoin(ReadOnlySpan<byte> body)
	{
		RequireLength(body, GameJoinBodyLength, "game join");
		Variations = body[..0x80].ToArray();
		LocalPlayerIndex = IndexOrNull(body[0x190]);
		LeaderId = IndexOrNull(body[0x191]);
		DisableUdp = body[0x192];
		Difficulty = body[0x193];
		BattleMode = body[0x194];
		Event = body[0x195];
		SectionId = body[0x196];
		ChallengeMode = body[0x197];
		RandomSeed = BinaryPrimitives.ReadUInt32LittleEndian(body[0x198..]);
		Episode = body[0x19C];
		SoloMode = body[0x19E];
		IsInQuest = body[0x19F];
		Entities.Clear();
		for (int index = 0; index < GameJoinPlayerCount; index++)
		{
			ReadOnlySpan<byte> data = body.Slice(GameJoinPlayerOffset + (index * LobbyEntity.LobbyDataSize), LobbyEntity.LobbyDataSize);
			if (!LobbyEntity.TryGetClientId(data, out int clientId) || IsEmptyName(data))
				continue;
			Entities.GetOrAdd(clientId).ApplyLobbyData(data);
		}
		State = LobbyWorldState.GameLoading;
	}

	[Original(0x0079C4BC)]
	private void ApplyAddPlayerToGame(ReadOnlySpan<byte> body)
	{
		RequireLength(body, LobbyJoinEntryOffset + LobbyJoinEntryLength, "add-player-to-game");
		if (State is not (LobbyWorldState.GameLoading or LobbyWorldState.Game))
			return;
		LeaderId = IndexOrNull(body[1]);
		DisableUdp = body[2];
		AddLobbyEntry(body.Slice(LobbyJoinEntryOffset, LobbyJoinEntryLength));
		State = LobbyWorldState.GameLoading;
	}

	[Original(0x0079C070)]
	private void ApplyJoinLobby(ReadOnlySpan<byte> body, uint entryCount)
	{
		RequireLength(body, LobbyJoinEntryOffset, "join-lobby");
		if (entryCount > EntityRegistry.Capacity)
			throw new InvalidDataException($"The join-lobby command declares {entryCount} entries but the client has {EntityRegistry.Capacity} player slots.");
		int count = (int)entryCount;
		RequireLength(body, LobbyJoinEntryOffset + (count * LobbyJoinEntryLength), "join-lobby entries");
		LocalPlayerIndex = IndexOrNull(body[0]);
		LeaderId = IndexOrNull(body[1]);
		LobbyNumber = body[3];
		BlockNumber = body[4];
		EnableBattleMode = body[5];
		Event = body[6];
		VoiceChat = body[7];
		Entities.Clear();
		for (int index = 0; index < count; index++)
			AddLobbyEntry(body.Slice(LobbyJoinEntryOffset + (index * LobbyJoinEntryLength), LobbyJoinEntryLength));
		State = LobbyWorldState.Lobby;
	}

	[Original(0x0079CF08)]
	private void ApplyAddPlayerToLobby(ReadOnlySpan<byte> body)
	{
		RequireLength(body, LobbyJoinEntryOffset + LobbyJoinEntryLength, "add-player-to-lobby");
		LeaderId = IndexOrNull(body[1]);
		AddLobbyEntry(body.Slice(LobbyJoinEntryOffset, LobbyJoinEntryLength));
		State = LobbyWorldState.Lobby;
	}

	[Original(0x007A0D84, "HandlePartyLeaderUpdate")]
	private void ApplyRemovePlayer(ReadOnlySpan<byte> body)
	{
		RequireLength(body, 4, "remove-player");
		int clientId = body[0];
		LeaderId = IndexOrNull(body[1]);
		DisableUdp = body[2];
		Entities.Remove(clientId);
		if (clientId == LocalPlayerIndex)
			State = LobbyWorldState.Disconnected;
	}

	[Original(0x00800860, "ProcessSubcommandPayload")]
	private void ApplySubcommandPayload(ReadOnlySpan<byte> payload)
	{
		ReadOnlySpan<byte> remaining = payload;
		while (remaining.Length > 0)
		{
			if (remaining.Length < 2)
				throw new InvalidDataException("A subcommand payload ends before its size byte.");
			int size = remaining[1] != 0
				? remaining[1] * 4
				: remaining.Length >= 8 ? checked((int)BinaryPrimitives.ReadUInt32LittleEndian(remaining[4..])) : 0;
			if (size < 4 || size > remaining.Length)
				throw new InvalidDataException($"A subcommand declares {size} bytes but the payload has {remaining.Length}.");
			ReadOnlySpan<byte> record = remaining[..size];
			SubcommandEntry? entry = FindSubcommand(record[0]);
			if (entry is not null && IsActionAllowed(entry.Value.Permission))
				entry.Value.Handler(this, record);
			remaining = remaining[size..];
		}
	}

	[Original(0x00698B74, "HandleStopMoving")]
	private static void ApplyStopAtPosition(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 0x18, "stop-at-position");
		int clientId = BinaryPrimitives.ReadUInt16LittleEndian(record[2..]);
		if (!world.Entities.TryGet(clientId, out LobbyEntity? entity))
			return;
		ushort nearEnemy = BinaryPrimitives.ReadUInt16LittleEndian(record[4..]);
		ushort angle = BinaryPrimitives.ReadUInt16LittleEndian(record[6..]);
		short floor = BinaryPrimitives.ReadInt16LittleEndian(record[8..]);
		short room = BinaryPrimitives.ReadInt16LittleEndian(record[0x0A..]);
		Vector3 position = new(
			BinaryPrimitives.ReadSingleLittleEndian(record[0x0C..]),
			BinaryPrimitives.ReadSingleLittleEndian(record[0x10..]),
			BinaryPrimitives.ReadSingleLittleEndian(record[0x14..]));
		entity.Position = position;
		entity.Heading = angle;
		if (floor >= 0)
			entity.Floor = floor;
		if (room >= 0)
			entity.Room = room;
		entity.IsNearEnemy = nearEnemy == 1;
		entity.MovementState = LobbyMovementState.Stopped;
		entity.IsLeaving = false;
		if (world.LocalPlayer is not null && world.LocalPlayerIndex == entity.ClientId)
		{
			world.LocalPlayer.MoveTo(position);
			world.LocalPlayer.SetHeading(angle);
			world.LocalPlayer.Stop();
		}
	}

	[Original(0x00698DDC, "HandleStartWalk")]
	private static void ApplyWalkToPosition(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 0x10, "walk-to-position");
		int clientId = BinaryPrimitives.ReadUInt16LittleEndian(record[2..]);
		if (!world.Entities.TryGet(clientId, out LobbyEntity? entity))
			return;
		entity.NetworkX = BinaryPrimitives.ReadSingleLittleEndian(record[4..]);
		entity.NetworkZ = BinaryPrimitives.ReadSingleLittleEndian(record[8..]);
		entity.IsNearEnemy = (BinaryPrimitives.ReadUInt32LittleEndian(record[0x0C..]) & 0x00000008) != 0;
		entity.MovementState = LobbyMovementState.Walking;
		entity.IsLeaving = false;
	}

	[Original(0x00698E84, "HandleRun")]
	private static void ApplyRunToPosition(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 0x0C, "run-to-position");
		int clientId = BinaryPrimitives.ReadUInt16LittleEndian(record[2..]);
		if (!world.Entities.TryGet(clientId, out LobbyEntity? entity))
			return;
		entity.NetworkX = BinaryPrimitives.ReadSingleLittleEndian(record[4..]);
		entity.NetworkZ = BinaryPrimitives.ReadSingleLittleEndian(record[8..]);
		entity.MovementState = LobbyMovementState.Running;
		entity.IsLeaving = false;
	}

	[Original(0x0069AD04, "HandlePlayerRootObjectDespawn")]
	private static void ApplyRootObjectDespawn(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 4, "root-object-despawn");
		int clientId = BinaryPrimitives.ReadUInt16LittleEndian(record[2..]);
		if (!world.Entities.TryGet(clientId, out LobbyEntity? entity))
			return;
		entity.IsLeaving = true;
		entity.MovementState = LobbyMovementState.Leaving;
	}

	[Original(0x0079FDDC, "HandleJoinerSyncPlayerDispInv")]
	private static void ApplySyncPlayer(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		if (world.State is not (LobbyWorldState.GameLoading or LobbyWorldState.Game))
			return;
		RequireLength(record, 0x4C0, "joiner-sync player");
		int clientId = BinaryPrimitives.ReadUInt16LittleEndian(record[8..]);
		if (clientId >= EntityRegistry.Capacity || clientId == world.LocalPlayerIndex)
			return;
		world.Entities.GetOrAdd(clientId).ApplyJoinerBase(record[8..]);
	}

	[Original(0x0079FF1C, "HandleUnblockGameJoin")]
	private static void ApplyUnblockGameJoin(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 4, "unblock-game-join");
		world.State = LobbyWorldState.Game;
	}

	[Original(0x0079D1CC, "ClosePartySubMenuAndResetUpdateFlags")]
	private static void ApplyDoneLoading(LobbyWorld world, ReadOnlySpan<byte> record)
	{
		RequireLength(record, 4, "done-loading");
		world.State = LobbyWorldState.Game;
	}

	private void AddLobbyEntry(ReadOnlySpan<byte> entry)
	{
		if (!LobbyEntity.TryGetClientId(entry, out int clientId))
			return;
		Entities.GetOrAdd(clientId).ApplyLobbyData(entry[..LobbyEntity.LobbyDataSize]);
	}

	private void ApplySimpleMail(ReadOnlySpan<byte> body)
	{
		SimpleMailPacket mail = SimpleMailPacket.Read(body);
		if (_simpleMails.Count == SimpleMailCapacity)
			_simpleMails.RemoveAt(0);
		_simpleMails.Add(mail);
	}

	private bool IsActionAllowed(ushort permission)
	{
		if (CurrentMapId >= MapActionPermissionLevels.Count)
			return false;
		return (MapActionPermissionLevels[CurrentMapId] & permission) != 0;
	}

	private static SubcommandEntry? FindSubcommand(byte action)
	{
		foreach (SubcommandEntry entry in Subcommands)
		{
			if (entry.Action == action)
				return entry;
		}
		return null;
	}

	private static bool IsEmptyName(ReadOnlySpan<byte> data)
	{
		foreach (byte value in data.Slice(LobbyEntity.NameOffset, LobbyEntity.NameLength))
		{
			if (value != 0)
				return false;
		}
		return true;
	}

	private static int? IndexOrNull(byte value) => value < EntityRegistry.Capacity ? value : null;

	private static void RequireLength(ReadOnlySpan<byte> body, int length, string description)
	{
		if (body.Length < length)
			throw new InvalidDataException($"The {description} command requires {length} bytes but only {body.Length} are available.");
	}
}
