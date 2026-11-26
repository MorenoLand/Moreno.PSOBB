using System.Buffers.Binary;
using System.Text;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Net;
using PsoBB.Platform;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scene;
using PsoBB.Scenes;
using RenderMatrix = System.Numerics.Matrix4x4;

namespace PsoBB.Tests;

/// <summary>
/// Checks the in-game field scene composition over the scene-10 shell, lobby world, map, player and model renderer.
/// </summary>
[Collection("Game state")]
public sealed class FieldSceneTests : IDisposable
{
	public FieldSceneTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	private static void WriteUInt16(Span<byte> destination, int offset, ushort value) => BinaryPrimitives.WriteUInt16LittleEndian(destination[offset..], value);

	private static void WriteUInt32(Span<byte> destination, int offset, uint value) => BinaryPrimitives.WriteUInt32LittleEndian(destination[offset..], value);

	private static void WriteSingle(Span<byte> destination, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(destination[offset..], value);

	private static void WriteName(Span<byte> destination, int offset, string name) => Encoding.Unicode.GetBytes(name).AsSpan(0, Math.Min(name.Length * 2, LobbyEntity.NameLength)).CopyTo(destination[offset..]);

	private static byte[] LobbyData(int clientId, string name)
	{
		byte[] data = new byte[LobbyEntity.LobbyDataSize];
		WriteUInt32(data, LobbyEntity.ClientIdOffset, (uint)clientId);
		WriteName(data, LobbyEntity.NameOffset, name);
		return data;
	}

	private static byte[] LobbyEntry(int clientId, string name) => [.. LobbyData(clientId, name), .. new byte[LobbyWorld.LobbyJoinEntryLength - LobbyEntity.LobbyDataSize]];

	private static Packet JoinLobby(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + (players.Length * LobbyWorld.LobbyJoinEntryLength)];
		body[0] = (byte)players[0].ClientId;
		for (int index = 0; index < players.Length; index++)
			LobbyEntry(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset + (index * LobbyWorld.LobbyJoinEntryLength));
		return Packet.Create(PacketCommand.JoinLobby, (uint)players.Length, body);
	}

	private static byte[] StopAtPosition(ushort clientId, ushort angle, float x, float y, float z)
	{
		byte[] record = new byte[0x18];
		record[0] = 0x3E;
		record[1] = 6;
		WriteUInt16(record, 2, clientId);
		WriteUInt16(record, 6, angle);
		WriteSingle(record, 0x0C, x);
		WriteSingle(record, 0x10, y);
		WriteSingle(record, 0x14, z);
		return record;
	}

	private static Packet SubcommandPacket(params byte[][] records) => Packet.Create(PacketCommand.Broadcast, 0, records.SelectMany(record => record).ToArray());

	private static Packet RemovePlayer(int clientId) => Packet.Create(PacketCommand.RemovePlayerFromLobby, 0, [(byte)clientId, 1, 0, 0]);

	private static OfflineScene CreateOffline()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, OfflineScene.LightTableName, SceneSamples.Lights());
		SceneSamples.AddFile(files, OfflineScene.CharacterFileName, new byte[OfflineScene.CharacterFileLength]);
		using DataFileRegistry registry = new(files);
		return new OfflineScene(registry);
	}

	private static MapScene CreateMap()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, "scene/map_testn.rel", SceneSamples.RenderGeometry());
		SceneSamples.AddFile(files, "scene/map_testc.rel", SceneSamples.Collision());
		SceneSamples.AddFile(files, "scene/map_testbm.bin", SceneSamples.RoomGraph());
		SceneSamples.AddFile(files, "map_test_00o.dat", SceneSamples.Objects());
		using DataFileRegistry registry = new(files);
		return new SceneLoader(registry).Load(MapSceneFiles.ForFloor("map_test", "map_test_00"));
	}

	private static PlayerCharacter CreatePlayer(int index = 4) => PlayerCharacter.Create(index, new Vector3(1, 2, 3), 0x2000, PlayerAnimationSet.Empty);

	private static NinjaModel CreateModel() => NinjaModelReader.Read(ModelTestData.ModelCore());

	private static InputManager Input()
	{
		InputManager input = new(new MemoryGameInput());
		input.Update(TimeSpan.Zero);
		return input;
	}

	private static Matrix4x4 ModelTransform(Matrix4x4 world)
	{
		using ModelRenderer renderer = new();
		return Assert.Single(renderer.Build(CreateModel(), world)).Transform;
	}

	private static Matrix4x4 ObjectTransform(MapObjectPlacement placement)
	{
		TransformationStack stack = new();
		stack.Translate(placement.Position);
		stack.RotateEuler(placement.RotationX, placement.RotationY, placement.RotationZ, false);
		return stack.Current;
	}

	private static Matrix4x4 PlayerTransform(PlayerCharacter player)
	{
		TransformationStack stack = new();
		stack.Translate(player.Position);
		stack.RotateEuler(0, player.Heading, 0, false);
		return stack.Current;
	}

	private static RenderMatrix ToRenderMatrix(Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);

	private static Matrix4x4 ToGameMatrix(RenderMatrix matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);

	[Fact]
	public void MapLoadStartsTheFieldAndBindsThePlayerToTheWorld()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		PlayerCharacter player = CreatePlayer();
		using FieldScene scene = new(offline, world);
		scene.SetMap(CreateMap());
		scene.SetPlayer(player);
		Assert.Same(player, world.LocalPlayer);
		SceneManager.SetMapLoaded();
		scene.Update(Input());
		Assert.True(offline.IsGameStarted);
		Assert.NotNull(scene.Map);
		Assert.Same(player, scene.Player);
	}

	[Fact]
	public void DrawSubmitsObjectsThenPlayerThenEntities()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		world.HandlePacket(SubcommandPacket(StopAtPosition(5, 0x4000, 10, 11, 12)));
		PlayerCharacter player = CreatePlayer();
		MapScene map = CreateMap();
		using FieldScene scene = new(offline, world);
		scene.SetMap(map);
		scene.SetPlayer(player);
		NinjaModel model = CreateModel();
		scene.SetPlayerModel(model);
		scene.SetObjectModel(0x1234, model);
		scene.SetObjectModel(0x5678, model);
		scene.SetEntityModel(5, model);
		scene.Update(Input());
		using RecordingRenderer renderer = new(RenderSettings.Default);
		int surfaces = scene.Draw(renderer, SceneCamera.Default);
		Assert.Equal(4, surfaces);
		Assert.Equal(4, renderer.Commands.Count(command => command.StartsWith("Draw ", StringComparison.Ordinal)));
		Matrix4x4[] worlds = [.. renderer.Transforms.Where(transform => transform.Kind == TransformKind.World).Select(transform => ToGameMatrix(transform.Transform))];
		Assert.Equal(5, worlds.Length);
		Assert.Equal(Matrix4x4.Identity, worlds[0]);
		Assert.Equal(ModelTransform(ObjectTransform(map.Objects!.Objects[0])), worlds[1]);
		Assert.Equal(ModelTransform(ObjectTransform(map.Objects.Objects[1])), worlds[2]);
		Assert.Equal(ModelTransform(PlayerTransform(player)), worlds[3]);
		Assert.Equal(ModelTransform(FieldScene.CreateTransform(new Vector3(10, 11, 12), 0x4000)), worlds[4]);
	}

	[Fact]
	public void EntitySpawnsAndUpdatesFromStopPacketsAndIsRemoved()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		using FieldScene scene = new(offline, world);
		scene.SetPlayer(CreatePlayer());
		scene.SetEntityModel(5, CreateModel());
		scene.Update(Input());
		Assert.Empty(scene.Entities);
		world.HandlePacket(SubcommandPacket(StopAtPosition(5, 0x0100, 7, 8, 9)));
		scene.Update(Input());
		FieldEntityView view = Assert.Single(scene.Entities);
		Assert.Equal(5, view.ClientId);
		Assert.Equal(new Vector3(7, 8, 9), view.Position);
		Assert.Equal((ushort)0x0100, view.Heading);
		world.HandlePacket(SubcommandPacket(StopAtPosition(5, 0x0200, 17, 18, 19)));
		scene.Update(Input());
		Assert.Same(view, Assert.Single(scene.Entities));
		Assert.Equal(new Vector3(17, 18, 19), view.Position);
		Assert.Equal((ushort)0x0200, view.Heading);
		world.HandlePacket(RemovePlayer(5));
		scene.Update(Input());
		Assert.Empty(scene.Entities);
	}

	[Fact]
	public void BindingTheLocalPlayerRemovesTheLocalSlotView()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		using FieldScene scene = new(offline, world);
		scene.SetEntityModel(4, CreateModel());
		world.HandlePacket(SubcommandPacket(StopAtPosition(4, 0, 1, 2, 3)));
		scene.Update(Input());
		Assert.Single(scene.Entities);
		scene.SetPlayer(CreatePlayer());
		scene.Update(Input());
		Assert.Empty(scene.Entities);
	}

	[Fact]
	public void LocalPlayerMovesFromAStopPacket()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		PlayerCharacter player = CreatePlayer();
		using FieldScene scene = new(offline, world);
		scene.SetPlayer(player);
		scene.SetPlayerModel(CreateModel());
		scene.Update(Input());
		world.HandlePacket(SubcommandPacket(StopAtPosition(4, 0x3000, 20, 21, 22)));
		scene.Update(Input());
		Assert.Equal(new Vector3(20, 21, 22), player.Position);
		Assert.Equal((ushort)0x3000, player.Heading);
		Assert.Empty(scene.Entities);
	}

	[Fact]
	public void CameraSetupMatchesTheSuppliedCamera()
	{
		using OfflineScene offline = CreateOffline();
		using FieldScene scene = new(offline);
		scene.SetPlayer(CreatePlayer());
		scene.SetPlayerModel(CreateModel());
		SceneCamera camera = new(new Vector3(5, 6, 7), new Vector3(1, 2, 3), new Vector3(0, 1, 0), 0x3555, 1.1333334f, 2.0f, 10000.0f);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Equal(1, scene.Draw(renderer, camera));
		Assert.Equal(TransformKind.View, renderer.Transforms[0].Kind);
		Assert.Equal(ToRenderMatrix(camera.CreateView()), renderer.Transforms[0].Transform);
		Assert.Equal(TransformKind.Projection, renderer.Transforms[1].Kind);
		Assert.Equal(ToRenderMatrix(camera.CreateProjection()), renderer.Transforms[1].Transform);
		Assert.Equal(TransformKind.World, renderer.Transforms[2].Kind);
		Assert.Equal(RenderMatrix.Identity, renderer.Transforms[2].Transform);
	}

	[Fact]
	public void EmptySceneDrawsNothing()
	{
		using OfflineScene offline = CreateOffline();
		using FieldScene scene = new(offline);
		scene.Update(Input());
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Equal(0, scene.Draw(renderer, SceneCamera.Default));
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void MissingMapPlayerAndModelsAreTolerated()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		PlayerCharacter player = CreatePlayer();
		using FieldScene scene = new(offline, world);
		scene.SetMap(null);
		scene.SetPlayer(player);
		scene.SetPlayerModel(null);
		scene.SetObjectModel(0x1234, null);
		scene.SetEntityModel(5, null);
		scene.Update(Input());
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Equal(0, scene.Draw(renderer, SceneCamera.Default));
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void UpdateAndDrawRejectANullOrReleasedScene()
	{
		using OfflineScene offline = CreateOffline();
		FieldScene scene = new(offline);
		Assert.Throws<ArgumentNullException>(() => scene.Update(null!));
		Assert.Throws<ArgumentNullException>(() => scene.Draw(null!, SceneCamera.Default));
		scene.Dispose();
		scene.Dispose();
		Assert.Throws<ObjectDisposedException>(() => scene.Update(Input()));
		Assert.Throws<ObjectDisposedException>(() => scene.Draw(new RecordingRenderer(RenderSettings.Default), SceneCamera.Default));
	}

	[Fact]
	public void ReleaseClearsTheStateAndTheWorldPlayerBinding()
	{
		using OfflineScene offline = CreateOffline();
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		world.HandlePacket(SubcommandPacket(StopAtPosition(5, 0, 10, 11, 12)));
		FieldScene scene = new(offline, world);
		scene.SetPlayer(CreatePlayer());
		scene.SetEntityModel(5, CreateModel());
		scene.Update(Input());
		Assert.Single(scene.Entities);
		scene.Dispose();
		Assert.Empty(scene.Entities);
		Assert.Null(world.LocalPlayer);
		Assert.Null(scene.Map);
		Assert.Null(scene.Player);
	}

	[Fact]
	public void EntityModelSlotMustBeInsideThePlayerRange()
	{
		using OfflineScene offline = CreateOffline();
		using FieldScene scene = new(offline);
		Assert.Throws<ArgumentOutOfRangeException>(() => scene.SetEntityModel(-1, CreateModel()));
		Assert.Throws<ArgumentOutOfRangeException>(() => scene.SetEntityModel(EntityRegistry.Capacity, CreateModel()));
	}
}
