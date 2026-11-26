using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Net;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scene;

namespace PsoBB.Scenes;

/// <summary>
/// Runs the in-game field or lobby over the ported scene-10 shell, lobby world, player, map tables and model renderer.
/// </summary>
/// <remarks>
/// The host supplies the field camera, a loaded map scene, an optional texture cache and the NJCM models for object
/// placements and player slots. The camera controller and the HUD stay with their unported managers. Scene 10 has no
/// draw entry that fixes the order between the map and the object systems, so <see cref="DrawMap"/> and
/// <see cref="DrawModels"/> are separate stages; <see cref="Draw"/> submits the map stage before the model stage.
/// </remarks>
public sealed class FieldScene : IDisposable
{
	private readonly OfflineScene _offline;
	private readonly LobbyWorld? _world;
	private readonly MapSceneRenderer _mapRenderer;
	private readonly ModelRenderer _models;
	private readonly List<FieldEntityView> _entities = [];
	private readonly Dictionary<ushort, NinjaModel> _objectModels = [];
	private readonly Dictionary<int, NinjaModel> _entityModels = [];
	private NinjaModel? _playerModel;
	private MapScene? _map;
	private PlayerCharacter? _player;
	private bool _disposed;

	/// <summary>
	/// Creates a field scene over an initialised scene-10 shell and an optional lobby world.
	/// </summary>
	/// <param name="offline">The initialised scene-10 shell that owns the save, light table and flag transitions.</param>
	/// <param name="world">The lobby world that supplies player slots and packet-driven movement, or null for an offline field.</param>
	/// <param name="textures">The cache used to bind map texture-list entries, or null to leave them unbound.</param>
	/// <exception cref="ArgumentNullException"><paramref name="offline"/> is null.</exception>
	public FieldScene(OfflineScene offline, LobbyWorld? world = null, TextureCache? textures = null)
	{
		_offline = offline ?? throw new ArgumentNullException(nameof(offline));
		_world = world;
		_mapRenderer = new MapSceneRenderer(textures);
		_models = new ModelRenderer();
	}

	/// <summary>Gets the scene-10 shell.</summary>
	public OfflineScene Offline => _offline;

	/// <summary>Gets the lobby world, or <see langword="null"/> for an offline field.</summary>
	public LobbyWorld? World => _world;

	/// <summary>Gets the bound map, or <see langword="null"/> when no map is loaded.</summary>
	public MapScene? Map => _map;

	/// <summary>Gets the local player, or <see langword="null"/> when none is bound.</summary>
	public PlayerCharacter? Player => _player;

	/// <summary>Gets the spawned player views in spawn order.</summary>
	public IReadOnlyList<FieldEntityView> Entities => _entities;

	/// <summary>
	/// Binds or clears the loaded map; object placements are read from it during each draw.
	/// </summary>
	/// <param name="map">The loaded map, or null to clear it.</param>
	public void SetMap(MapScene? map) => _map = map;

	/// <summary>
	/// Binds or clears the local player and attaches it to the lobby world.
	/// </summary>
	/// <param name="player">The local player, or null to clear it.</param>
	public void SetPlayer(PlayerCharacter? player)
	{
		_player = player;
		if (_world is not null)
			_world.LocalPlayer = player;
	}

	/// <summary>Binds or clears the NJCM model drawn for the local player.</summary>
	/// <param name="model">The player model, or null to stop drawing the local player.</param>
	public void SetPlayerModel(NinjaModel? model) => _playerModel = model;

	/// <summary>Binds or clears the NJCM model drawn for one map object id.</summary>
	/// <param name="objectId">The object type identifier from the placement table.</param>
	/// <param name="model">The model, or null to stop drawing that object type.</param>
	public void SetObjectModel(ushort objectId, NinjaModel? model)
	{
		if (model is null)
			_objectModels.Remove(objectId);
		else
			_objectModels[objectId] = model;
	}

	/// <summary>Binds or clears the NJCM model drawn for one lobby player slot.</summary>
	/// <param name="clientId">The player slot from zero through eleven.</param>
	/// <param name="model">The model, or null to stop drawing that slot's entity.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="clientId"/> is outside the player-slot range.</exception>
	public void SetEntityModel(int clientId, NinjaModel? model)
	{
		if (clientId < 0 || clientId >= EntityRegistry.Capacity)
			throw new ArgumentOutOfRangeException(nameof(clientId), clientId, "A player client id must be between zero and eleven.");
		if (model is null)
			_entityModels.Remove(clientId);
		else
			_entityModels[clientId] = model;
	}

	/// <summary>
	/// Runs the scene-10 update, pumps the lobby world and reconciles the spawned player views.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		_offline.Update(input);
		_world?.Update();
		ReconcileEntities();
	}

	/// <summary>
	/// Submits the loaded map and then the placed objects, the local player and the lobby player views.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="camera">The field camera supplied by the host.</param>
	/// <returns>The number of surfaces submitted.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public int Draw(IRenderer renderer, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ObjectDisposedException.ThrowIf(_disposed, this);
		return DrawMap(renderer, camera) + DrawModels(renderer, camera);
	}

	/// <summary>
	/// Submits the loaded map through the merged map renderer with the supplied camera.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="camera">The field camera supplied by the host.</param>
	/// <returns>The number of map surfaces submitted.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public int DrawMap(IRenderer renderer, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ObjectDisposedException.ThrowIf(_disposed, this);
		return _map is null ? 0 : _mapRenderer.Render(renderer, _map, camera);
	}

	/// <summary>
	/// Submits the placed object models, the local player and the lobby player views through the scene renderer.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="camera">The field camera supplied by the host.</param>
	/// <returns>The number of model surfaces submitted.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="renderer"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public int DrawModels(IRenderer renderer, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ObjectDisposedException.ThrowIf(_disposed, this);
		List<SceneSurface> opaque = [];
		List<SceneSurface> transparent = [];
		AppendObjects(opaque, transparent);
		if (_player is not null && _playerModel is not null)
			AppendModel(opaque, transparent, _playerModel, CreateTransform(_player.Position, _player.Heading), _player.Animation.Motion, _player.Animation.Elapsed);
		foreach (FieldEntityView entity in _entities)
			AppendModel(opaque, transparent, entity.Model, entity.Transform);
		if (opaque.Count == 0 && transparent.Count == 0)
			return 0;
		new SceneRenderer().Render(renderer, new RenderScene { Camera = camera, Opaque = opaque, Transparent = transparent });
		return opaque.Count + transparent.Count;
	}

	/// <summary>
	/// Releases the model renderer, the spawned views and the registrations; the shell and world are caller-owned.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		if (_world is not null && ReferenceEquals(_world.LocalPlayer, _player))
			_world.LocalPlayer = null;
		_player = null;
		_entities.Clear();
		_objectModels.Clear();
		_entityModels.Clear();
		_playerModel = null;
		_map = null;
		_mapRenderer.Dispose();
		_models.Dispose();
	}

	private void AppendObjects(List<SceneSurface> opaque, List<SceneSurface> transparent)
	{
		if (_map?.Objects is null)
			return;
		foreach (MapObjectPlacement placement in _map.Objects.Objects)
			if (_objectModels.TryGetValue(placement.ObjectId, out NinjaModel? model))
				AppendModel(opaque, transparent, model, CreateObjectTransform(placement));
	}

	private void ReconcileEntities()
	{
		if (_world is null)
		{
			_entities.Clear();
			return;
		}
		for (int index = _entities.Count - 1; index >= 0; index--)
		{
			FieldEntityView view = _entities[index];
			bool local = _player is not null && _world.LocalPlayerIndex == view.ClientId;
			if (local || !_world.Entities.TryGet(view.ClientId, out LobbyEntity? entity) || entity.IsLeaving || !_entityModels.TryGetValue(view.ClientId, out NinjaModel? model) || !ReferenceEquals(view.Model, model))
				_entities.RemoveAt(index);
			else
				view.Update(entity, model);
		}
		foreach (LobbyEntity entity in _world.Entities.Entities)
		{
			if (entity.IsLeaving || entity.Position is null || (_player is not null && _world.LocalPlayerIndex == entity.ClientId))
				continue;
			if (!_entityModels.TryGetValue(entity.ClientId, out NinjaModel? model))
				continue;
			bool exists = false;
			foreach (FieldEntityView view in _entities)
				if (view.ClientId == entity.ClientId)
				{
					exists = true;
					break;
				}
			if (!exists)
				_entities.Add(new FieldEntityView(entity, model));
		}
	}

	private void AppendModel(List<SceneSurface> opaque, List<SceneSurface> transparent, NinjaModel model, Matrix4x4 transform, NinjaMotion? motion = null, float frame = 0.0f)
	{
		foreach (ModelSurface surface in _models.Build(model, transform, motion, frame))
			(surface.IsAlpha ? transparent : opaque).Add(surface.CreateSceneSurface(null));
	}

	private static Matrix4x4 CreateObjectTransform(MapObjectPlacement placement)
	{
		TransformationStack stack = new();
		stack.Translate(placement.Position);
		stack.RotateEuler(placement.RotationX, placement.RotationY, placement.RotationZ, false);
		return stack.Current;
	}

	internal static Matrix4x4 CreateTransform(Vector3 position, ushort heading)
	{
		TransformationStack stack = new();
		stack.Translate(position);
		stack.RotateEuler(0, heading, 0, false);
		return stack.Current;
	}
}
