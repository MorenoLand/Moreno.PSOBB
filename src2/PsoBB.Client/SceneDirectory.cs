using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Scenes;

namespace PsoBB.Client;

/// <summary>
/// Maps the baked scene numbers to the ported scene classes and owns their shared data and texture resources.
/// </summary>
/// <remarks>
/// Scenes 1, 5, 10, 11 and 13 have self-contained ported screens. Scene 2 needs a
/// <see cref="Scene2Interface"/> from the title art and login ports, so it is created only when
/// <c>scene2Factory</c> is supplied. Scenes without a ported screen return <see langword="null"/>
/// so the director stops instead of substituting a screen. Scene 11 connects only when
/// <see cref="SceneNetworkOptions"/> is supplied; otherwise it stays in its ported loading phase.
/// </remarks>
public sealed class SceneDirectory : ISceneScreenFactory
{
	/// <summary>
	/// The archive the host data folder supplies to the scene readers.
	/// </summary>
	public const string DataArchivePath = "data/data.gsl";

	private readonly IDataFiles _files;
	private readonly IRenderer _renderer;
	private readonly TextureCache _textures;
	private readonly SceneNetworkOptions? _network;
	private readonly bool _cinematicLogo;
	private readonly Func<Scene2Interface>? _scene2Factory;
	private OnlineScreen? _online;
	private bool _disposed;

	/// <summary>
	/// Creates the scene directory over the supplied data and renderer; the caller keeps ownership of the data files.
	/// </summary>
	/// <param name="files">The logical data files.</param>
	/// <param name="renderer">The renderer that owns scene textures.</param>
	/// <param name="network">The online endpoint and login inputs, or <see langword="null"/> for no connection.</param>
	/// <param name="cinematicLogo">Whether scene 1 selects the cinematic logo descriptor.</param>
	/// <param name="scene2Factory">The factory that builds a scene-2 interface tree, or <see langword="null"/> when it is not supplied.</param>
	/// <exception cref="ArgumentNullException">A required parameter is null.</exception>
	public SceneDirectory(IDataFiles files, IRenderer renderer, SceneNetworkOptions? network = null, bool cinematicLogo = false, Func<Scene2Interface>? scene2Factory = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		_files = files;
		_renderer = renderer;
		_network = network;
		_cinematicLogo = cinematicLogo;
		_scene2Factory = scene2Factory;
		_textures = new TextureCache(renderer);
	}

	/// <summary>Gets the online scene created most recently, or <see langword="null"/>.</summary>
	public OnlineScene? OnlineScene { get; private set; }

	/// <inheritdoc/>
	/// <exception cref="ObjectDisposedException">The directory is disposed.</exception>
	public ISceneScreen? Create(uint scene)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		return scene switch
		{
			1 => Adapter(new Scene1(_files, _renderer, _textures, _cinematicLogo)),
			2 => CreateScene2(),
			5 => Adapter(new CharacterMakingScene(_files, _renderer)),
			10 => Adapter(new OfflineScene(_files)),
			11 => CreateOnline(),
			13 => Adapter(new SaveGameScene(_files, _renderer)),
			_ => null,
		};
	}

	/// <inheritdoc/>
	public string? DescribeMissing(uint scene) =>
		scene == Scene2.SceneNumber ? "Scene 2 has no supplied interface." : null;

	/// <summary>
	/// Releases the shared texture cache and any online session that is still open.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		try
		{
			_online?.Dispose();
		}
		finally
		{
			_textures.Dispose();
		}
	}

	private ISceneScreen? CreateScene2()
	{
		if (_scene2Factory is null)
			return null;
		Scene2 scene = new(_scene2Factory());
		try
		{
			scene.Start();
			return new SceneScreen(scene.Update, scene.Draw, scene.Release);
		}
		catch
		{
			scene.Release();
			throw;
		}
	}

	private ISceneScreen CreateOnline()
	{
		if (_network is null)
		{
			OnlineScene loading = new(_files, _renderer);
			OnlineScene = loading;
			OnlineScreen screen = new(loading, null);
			_online = screen;
			return screen;
		}
		GameSession session = new(_network.ConnectionFactory());
		OnlineScene? scene = null;
		try
		{
			scene = new OnlineScene(_files, _renderer, new LoginFlow(session));
			scene.CompleteLoading(0);
			ServerAddress address = new ServerEndpoints(_network.Hosts).SelectLoginEndpoint(
				_network.ClientMode,
				_network.AlternateEndpointSet,
				_network.UseSecondaryEndpoints,
				new ServerAddress(_network.RuntimeHost, _network.RuntimePort));
			scene.Connect(address.Host, address.Port, _network.LoginRequest);
			OnlineScene = scene;
			OnlineScreen screen = new(scene, session);
			_online = screen;
			return screen;
		}
		catch
		{
			try
			{
				scene?.Dispose();
			}
			finally
			{
				session.Dispose();
			}
			throw;
		}
	}

	private static ISceneScreen Adapter(Scene1 scene) => new SceneScreen(scene.Update, scene.Draw, scene.Dispose);

	private static ISceneScreen Adapter(CharacterMakingScene scene) => new SceneScreen(scene.Update, scene.Draw, scene.Dispose);

	private static ISceneScreen Adapter(OfflineScene scene) => new SceneScreen(scene.Update, scene.Draw, scene.Dispose);

	private static ISceneScreen Adapter(SaveGameScene scene) => new SceneScreen(scene.Update, scene.Draw, scene.Dispose);

	private sealed class SceneScreen : ISceneScreen
	{
		private readonly Action<InputManager> _update;
		private readonly Action<UiDrawList> _draw;
		private readonly Action _release;

		public SceneScreen(Action<InputManager> update, Action<UiDrawList> draw, Action release)
		{
			_update = update;
			_draw = draw;
			_release = release;
		}

		public void Update(InputManager input) => _update(input);

		public void Draw(UiDrawList draw) => _draw(draw);

		public void Dispose() => _release();
	}

	private sealed class OnlineScreen : ISceneScreen
	{
		private readonly OnlineScene _scene;
		private readonly GameSession? _session;
		private bool _disposed;

		public OnlineScreen(OnlineScene scene, GameSession? session)
		{
			_scene = scene;
			_session = session;
		}

		public void Update(InputManager input) => _scene.Update(input);

		public void Draw(UiDrawList draw) => _scene.Draw(draw);

		public void Dispose()
		{
			if (_disposed)
				return;
			_disposed = true;
			try
			{
				_scene.Dispose();
			}
			finally
			{
				_session?.Dispose();
			}
		}
	}
}
