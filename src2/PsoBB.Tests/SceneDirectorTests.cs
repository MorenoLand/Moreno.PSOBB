using System.Numerics;
using PsoBB.Client;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene-loop protocol: entry, update, release, transitions, exits, unsupported numbers and disposal.
/// </summary>
[Collection("Game state")]
public sealed class SceneDirectorTests : IDisposable
{
	public SceneDirectorTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void EntryInitialisesThenUpdatesAndDraws()
	{
		List<string> log = [];
		TestScreen screen = new(10, log);
		using SceneDirector director = Create(log, (10, () => screen));
		GameState.CurrentScene = 10;

		director.Update();
		UiDrawList draw = new();
		director.Draw(draw);

		Assert.Equal(["create 10", "update 10", "draw 10"], log);
		Assert.Same(screen, director.Screen);
		Assert.Equal(10u, director.CurrentScene);
		Assert.Single(draw.Quads);
	}

	[Fact]
	public void AnUpdateTransitionReleasesAfterTheDrawnFrameAndSwitches()
	{
		List<string> log = [];
		TestScreen first = new(10, log, () => SceneManager.RequestScene(13));
		TestScreen second = new(13, log);
		using SceneDirector director = Create(log, (10, () => first), (13, () => second));
		GameState.CurrentScene = 10;

		director.Update();
		director.Draw(new UiDrawList());
		Assert.False(first.IsDisposed);
		Assert.Equal(10u, director.CurrentScene);

		director.Update();

		Assert.Equal(["create 10", "update 10", "draw 10", "release 10", "create 13", "update 13"], log);
		Assert.True(first.IsDisposed);
		Assert.Equal(13u, director.CurrentScene);
		Assert.Equal(10u, director.PreviousScene);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void AnInitialiserTransitionSkipsTheUpdate()
	{
		List<string> log = [];
		TestScreen screen = new(10, log);
		ScreenFactory factory = new(log, (10, () => screen))
		{
			OnCreate = scene =>
			{
				if (scene == 10)
					SceneManager.RequestScene(SceneManager.ExitScene);
			},
		};
		using SceneDirector director = new(NewInput(), factory);
		GameState.CurrentScene = 10;

		director.Update();

		Assert.Equal(["create 10", "release 10"], log);
		Assert.Equal(0, screen.UpdateCount);
		Assert.Equal(0u, director.CurrentScene);
		Assert.Null(director.Screen);
		Assert.False(director.IsStopped);

		director.Update();

		Assert.True(director.IsStopped);
		Assert.True(director.IsExited);
		Assert.Null(director.Diagnostic);
	}

	[Fact]
	public void ARootRequestSwitchesToTheStoredRootScene()
	{
		List<string> log = [];
		TestScreen first = new(11, log, () =>
		{
			SceneManager.SetRootScene(13);
			SceneManager.RequestRootScene();
		});
		TestScreen second = new(13, log);
		using SceneDirector director = Create(log, (11, () => first), (13, () => second));
		GameState.CurrentScene = 11;

		director.Update();
		director.Update();

		Assert.Equal(13u, director.CurrentScene);
		Assert.Equal(11u, director.PreviousScene);
		Assert.Contains("create 13", log);
	}

	[Fact]
	public void ARestartRequestSwitchesToTheExitScene()
	{
		List<string> log = [];
		TestScreen first = new(11, log, SceneManager.RequestRestart);
		using SceneDirector director = Create(log, (11, () => first));
		GameState.CurrentScene = 11;

		director.Update();
		director.Update();

		Assert.Equal(SceneManager.ExitScene, director.CurrentScene);
		Assert.Equal(11u, director.PreviousScene);
		Assert.True(director.IsExited);
		Assert.True(first.IsDisposed);
	}

	[Fact]
	public void AReleaseTransitionOverridesTheUpdateTransition()
	{
		List<string> log = [];
		TestScreen first = new(11, log, () => SceneManager.RequestScene(13), () => SceneManager.RequestScene(10));
		TestScreen second = new(10, log);
		using SceneDirector director = Create(log, (11, () => first), (10, () => second));
		GameState.CurrentScene = 11;

		director.Update();
		director.Update();

		Assert.Equal(10u, director.CurrentScene);
		Assert.Equal(11u, director.PreviousScene);
		Assert.Contains("create 10", log);
		Assert.DoesNotContain("create 13", log);
	}

	[Fact]
	public void AReleaseMayCancelThePendingTransition()
	{
		List<string> log = [];
		TestScreen first = new(11, log, () => SceneManager.RequestScene(13), () => GameState.SceneTransition = 0);
		TestScreen next = new(11, log);
		int created = 0;
		using SceneDirector director = Create(log, (11, () => created++ == 0 ? first : next), (13, () => throw new InvalidOperationException("Scene 13 must not be entered.")));
		GameState.CurrentScene = 11;

		director.Update();
		director.Update();

		Assert.Equal(11u, director.CurrentScene);
		Assert.Equal(0u, director.PreviousScene);
		Assert.True(first.IsDisposed);
		Assert.Equal(2, log.Count(entry => entry == "create 11"));
	}

	[Fact]
	public void ATransitionOutsideOneThroughThreeReinitialisesTheSameScene()
	{
		List<string> log = [];
		int updates = 0;
		TestScreen NewScreen()
		{
			TestScreen screen = new(10, log, () =>
			{
				updates++;
				GameState.RequestedScene = 13;
				GameState.SceneTransition = 4;
			});
			return screen;
		}
		using SceneDirector director = Create(log, (10, NewScreen));
		GameState.CurrentScene = 10;

		director.Update();
		director.Update();

		Assert.Equal(2, updates);
		Assert.Equal(10u, director.CurrentScene);
		Assert.Equal(0u, director.PreviousScene);
		Assert.DoesNotContain("create 13", log);
	}

	[Fact]
	public void TheTransitionIsClearedBeforeASceneInitialises()
	{
		List<string> log = [];
		TestScreen screen = new(10, log);
		using SceneDirector director = Create(log, (10, () => screen));
		GameState.CurrentScene = 10;
		GameState.RequestedScene = 13;
		GameState.SceneTransition = 1;

		director.Update();

		Assert.Equal(1, screen.UpdateCount);
		Assert.Equal(10u, director.CurrentScene);
		Assert.Equal(0u, GameState.SceneTransition);
		Assert.Contains("create 10", log);
		Assert.DoesNotContain("create 13", log);
	}

	[Fact]
	public void AMissingScreenStopsWithADiagnostic()
	{
		List<string> log = [];
		using SceneDirector director = Create(log);
		GameState.CurrentScene = 2;

		director.Update();
		UiDrawList draw = new();
		director.Draw(draw);

		Assert.True(director.IsStopped);
		Assert.False(director.IsExited);
		Assert.Equal("Scene 2 has no ported screen.", director.Diagnostic);
		Assert.Null(director.Screen);
		Assert.Empty(draw.Quads);
	}

	[Fact]
	public void ASceneOutsideTheBakedTableStopsWithoutCallingTheFactory()
	{
		List<string> log = [];
		ScreenFactory factory = new(log);
		using SceneDirector director = new(NewInput(), factory);
		GameState.CurrentScene = SceneLibrary.SceneCount;

		director.Update();

		Assert.True(director.IsStopped);
		Assert.Contains("outside the baked scene table", director.Diagnostic);
		Assert.Empty(factory.Requested);
	}

	[Fact]
	public void SceneZeroStopsWithoutADiagnostic()
	{
		List<string> log = [];
		ScreenFactory factory = new(log);
		using SceneDirector director = new(NewInput(), factory);
		GameState.CurrentScene = SceneManager.ExitScene;

		director.Update();

		Assert.True(director.IsStopped);
		Assert.True(director.IsExited);
		Assert.Null(director.Diagnostic);
		Assert.Empty(factory.Requested);
	}

	[Fact]
	public void DrawBeforeEntryDoesNothing()
	{
		List<string> log = [];
		ScreenFactory factory = new(log);
		using SceneDirector director = new(NewInput(), factory);
		GameState.CurrentScene = 10;
		UiDrawList draw = new();

		director.Draw(draw);

		Assert.Empty(draw.Quads);
		Assert.Empty(factory.Requested);
	}

	[Fact]
	public void DisposalReleasesTheScreenFactoryAndResourcesOnce()
	{
		List<string> log = [];
		TestScreen screen = new(10, log);
		ScreenFactory factory = new(log, (10, () => screen));
		TestResource resource = new();
		SceneDirector director = new(NewInput(), factory, resource);
		GameState.CurrentScene = 10;
		director.Update();

		director.Dispose();
		director.Dispose();

		Assert.True(screen.IsDisposed);
		Assert.True(factory.IsDisposed);
		Assert.Equal(1, resource.DisposeCount);
		Assert.Throws<ObjectDisposedException>(() => director.Update());
		Assert.Throws<ObjectDisposedException>(() => director.Draw(new UiDrawList()));
	}

	private static SceneDirector Create(List<string> log, params (uint Scene, Func<TestScreen> Create)[] screens) =>
		new(NewInput(), new ScreenFactory(log, screens));

	private static InputManager NewInput() => new(new MemoryGameInput());

	private sealed class ScreenFactory : ISceneScreenFactory
	{
		private readonly List<string> _log;
		private readonly Dictionary<uint, Func<TestScreen>> _creators;

		public ScreenFactory(List<string> log, params (uint Scene, Func<TestScreen> Create)[] creators)
		{
			_log = log;
			_creators = creators.ToDictionary(entry => entry.Scene, entry => entry.Create);
		}

		public Action<uint>? OnCreate { get; init; }

		public List<uint> Requested { get; } = [];

		public bool IsDisposed { get; private set; }

		public ISceneScreen? Create(uint scene)
		{
			Requested.Add(scene);
			_log.Add($"create {scene}");
			OnCreate?.Invoke(scene);
			return _creators.TryGetValue(scene, out Func<TestScreen>? create) ? create() : null;
		}

		public void Dispose() => IsDisposed = true;
	}

	private sealed class TestScreen : ISceneScreen
	{
		private readonly List<string> _log;
		private readonly uint _scene;
		private readonly Action? _onUpdate;
		private readonly Action? _onRelease;

		public TestScreen(uint scene, List<string> log, Action? onUpdate = null, Action? onRelease = null)
		{
			_scene = scene;
			_log = log;
			_onUpdate = onUpdate;
			_onRelease = onRelease;
		}

		public int UpdateCount { get; private set; }

		public bool IsDisposed { get; private set; }

		public void Update(InputManager input)
		{
			UpdateCount++;
			_log.Add($"update {_scene}");
			_onUpdate?.Invoke();
		}

		public void Draw(UiDrawList draw)
		{
			_log.Add($"draw {_scene}");
			draw.Add(new UiQuad(Vector2.Zero, new Vector2(1f), new Vector4(0f, 0f, 1f, 1f), null, 0xFFFFFFFFu));
		}

		public void Dispose()
		{
			if (IsDisposed)
				return;
			IsDisposed = true;
			_log.Add($"release {_scene}");
			_onRelease?.Invoke();
		}
	}

	private sealed class TestResource : IDisposable
	{
		public int DisposeCount { get; private set; }

		public void Dispose() => DisposeCount++;
	}
}
