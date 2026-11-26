using System.Numerics;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene-2 initialisation, shared fade, interface pump order, cancel and confirm checks
/// and release against synthetic screens and a recording transition renderer.
/// </summary>
[Collection("Game state")]
public sealed class Scene2LifecycleTests : IDisposable
{
	public Scene2LifecycleTests()
	{
		GameState.Reset();
		Scene2.Reset();
		Scene2TransitionOverlay.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		Scene2.Reset();
		Scene2TransitionOverlay.Reset();
	}

	[Fact]
	public void StartSavesThePreviousStateSelectsZeroAndStartsFadeOne()
	{
		GameState.SceneScreenState = 0xC;
		GameState.PreviousSceneScreenState = 5;
		GameState.SceneFadeState = 0;
		using Scene2 scene = new(CreateInterface([], [], []));

		scene.Start();

		Assert.True(scene.IsStarted);
		Assert.Equal(Scene2.EntryScreenState, GameState.SceneScreenState);
		Assert.Equal(0xCu, GameState.PreviousSceneScreenState);
		Assert.Equal(Scene2.SharedFadeState, GameState.SceneFadeState);
		Assert.Equal(Scene2.TitleScreenIndex, scene.Preview.SelectedScreen);
		Assert.Equal(Vector3.Zero, scene.Preview.RequestedPosition);
		Assert.Equal(Scene2.ScreenDirection, scene.Preview.RequestedDirection);
		Assert.Equal(Vector3.Zero, scene.Preview.ScreenDirection);
	}

	[Fact]
	public void StartRunsTheOptionalStateCallbackWhenItsFlagIsSet()
	{
		GameState.SharedScreenCallbackFlag = 1;
		bool called = false;
		Scene2.SharedScreenCallback = () => called = true;
		using Scene2 scene = new(CreateInterface([], [], []));

		scene.Start();

		Assert.True(called);
	}

	[Fact]
	public void StartCanOnlyRunOnce()
	{
		using Scene2 scene = new(CreateInterface([], [], []));
		scene.Start();

		Assert.Throws<InvalidOperationException>(scene.Start);
	}

	[Fact]
	public void FadeOneHidesTheCurrentScreenAndFadeTwoCreatesTheSelectedState()
	{
		List<uint> states = [];
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface([], states, screens));
		scene.Start();
		InputManager input = NewInput(out _);

		scene.Update(input);
		Assert.Equal(2u, GameState.SceneFadeState);
		Assert.Empty(states);

		scene.Update(input);
		Assert.Equal(0u, GameState.SceneFadeState);
		Assert.Equal(new[] { Scene2.EntryScreenState }, states);
		Scene2Screen first = Assert.IsType<Scene2Screen>(scene.Interface.CurrentScreen);
		Assert.Equal(0u, first.Flags);

		GameState.SceneFadeState = 1;
		scene.Update(input);
		Assert.Equal(2u, GameState.SceneFadeState);
		Assert.Null(scene.Interface.CurrentScreen);
		Assert.Equal(0x00000001u, first.Flags);
		Assert.Single(states);

		scene.Update(input);
		Assert.Equal(0u, GameState.SceneFadeState);
		Assert.Equal(new[] { Scene2.EntryScreenState, Scene2.EntryScreenState }, states);
		Assert.NotSame(first, scene.Interface.CurrentScreen);
	}

	[Fact]
	public void TheFadeHidesOnlyTheLowWordOfTheScreenFlags()
	{
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface([], [], screens));
		scene.Start();
		InputManager input = NewInput(out _);
		scene.Update(input);
		scene.Update(input);
		Scene2Screen screen = Assert.IsType<Scene2Screen>(scene.Interface.CurrentScreen);
		screen.Flags = 0x00070010;
		GameState.SceneFadeState = 1;

		scene.Update(input);

		Assert.Equal(0x00070011u, screen.Flags);
	}

	[Fact]
	public void FadeTwoCreatesTheScreenForTheCurrentSharedState()
	{
		List<uint> states = [];
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface([], states, screens));
		scene.Start();
		InputManager input = NewInput(out _);
		GameState.SceneScreenState = Scene2.SharedScreenState;
		GameState.SceneFadeState = 2;

		scene.Update(input);

		Assert.Equal(new[] { Scene2.SharedScreenState }, states);
		Assert.NotNull(scene.Interface.CurrentScreen);
	}

	[Fact]
	public void StatesWithoutASwitchCaseDoNotCreateAScreen()
	{
		List<uint> states = [];
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface([], states, screens));
		scene.Start();
		InputManager input = NewInput(out _);
		GameState.SceneScreenState = 2;
		GameState.SceneFadeState = 2;

		scene.Update(input);

		Assert.Empty(states);
		Assert.Null(scene.Interface.CurrentScreen);
	}

	[Fact]
	public void TheInterfaceTreeUpdatesBeforeItDraws()
	{
		List<string> log = [];
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface(log, [], screens));
		scene.Start();
		InputManager input = NewInput(out _);
		scene.Update(input);
		scene.Update(input);
		log.Clear();

		scene.Update(input, 0.25f);
		scene.Draw(new UiDrawList());

		Assert.Equal(new[] { "update", "draw" }, log);
	}

	[Fact]
	public void CancelRequestsARestart()
	{
		using Scene2 scene = new(CreateInterface([], [], []));
		scene.Start();
		InputManager input = NewInput(out MemoryGameInput source);
		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);

		scene.Update(input);

		Assert.Equal(3u, GameState.SceneTransition);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
	}

	[Fact]
	public void ConfirmRequestsTheExitScene()
	{
		using Scene2 scene = new(CreateInterface([], [], []), () => true);
		scene.Start();
		InputManager input = NewInput(out _);

		scene.Update(input);

		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
	}

	[Fact]
	public void ReleaseHidesTheCurrentScreenReleasesTheTreeAndWritesTheReleasedState()
	{
		List<Scene2Screen> screens = [];
		using Scene2 scene = new(CreateInterface([], [], screens));
		scene.Start();
		InputManager input = NewInput(out _);
		scene.Update(input);
		scene.Update(input);
		Scene2Screen screen = Assert.IsType<Scene2Screen>(scene.Interface.CurrentScreen);
		GameState.PreviousSceneScreenState = 3;
		GameState.SceneFadeState = 7;

		scene.Release();

		Assert.True(scene.IsDisposed);
		Assert.True(screen.IsDisposed);
		Assert.Equal(Scene2.ReleasedScreenState, GameState.SceneScreenState);
		Assert.Equal(3u, GameState.PreviousSceneScreenState);
		Assert.Equal(7u, GameState.SceneFadeState);
		scene.Release();
	}

	[Fact]
	public void TheScreenTableMatchesTheOriginalSwitch()
	{
		Assert.Equal(13, Scene2Interface.ScreenDefinitions.Count);
		Assert.Equal(new Scene2ScreenDefinition(9, 0x00403018, 0x1290, true), Scene2Interface.ScreenDefinitions[9]);
		Assert.Equal(new Scene2ScreenDefinition(11, 0x00788050, 0x24, true), Scene2Interface.ScreenDefinitions[11]);
		Assert.False(Scene2Interface.ScreenDefinitions[2].CreatesScreen);
		Assert.False(Scene2Interface.ScreenDefinitions[10].CreatesScreen);
		Assert.False(Scene2Interface.ScreenDefinitions[12].CreatesScreen);
	}

	[Fact]
	public void TheTransitionManagerCreatesSixFullScreenWindows()
	{
		Scene2TransitionOverlay overlay = new();

		Assert.Equal(6, overlay.Slots.Count);
		foreach (Scene2TransitionSlot slot in overlay.Slots)
		{
			Assert.Equal(0f, slot.Left);
			Assert.Equal(0f, slot.Top);
			Assert.Equal(640f, slot.Width);
			Assert.Equal(480f, slot.Height);
		}
	}

	[Fact]
	public void TheTransitionPumpRunsTheOriginalDrawOrder()
	{
		List<string> calls = [];
		Scene2TransitionOverlay overlay = new();
		Scene2TransitionOverlay.DisplayId = 0x12345678;
		RecordingTransitionRenderer renderer = new(calls);

		overlay.Pump(new UiDrawList(), renderer);

		Assert.Equal(
			new[] { "begin:0x5678", "layer:sub", "reset", "overlay", "bands", "layer:primary", "restore", "end" },
			calls);
	}

	[Fact]
	public void TheTransitionPumpStopsWhenTheReadyBitIsSet()
	{
		List<string> calls = [];
		Scene2TransitionOverlay.Flags = Scene2TransitionOverlay.ReadyMask;

		new Scene2TransitionOverlay().Pump(new UiDrawList(), new RecordingTransitionRenderer(calls));

		Assert.Empty(calls);
	}

	private static Scene2Interface CreateInterface(List<string> log, List<uint> states, List<Scene2Screen> screens)
		=> new(state =>
		{
			states.Add(state);
			RecordingPanel root = new(log) { Size = new Vector2(640f, 480f) };
			Scene2Screen screen = new(root);
			screens.Add(screen);
			return screen;
		});

	private static InputManager NewInput(out MemoryGameInput source)
	{
		source = new MemoryGameInput();
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		return input;
	}

	private sealed class RecordingPanel : UiPanel
	{
		private readonly List<string> _log;

		public RecordingPanel(List<string> log) => _log = log;

		public override void Update(float deltaSeconds)
		{
			_log.Add("update");
			base.Update(deltaSeconds);
		}

		public override void Draw(UiDrawList drawList)
		{
			_log.Add("draw");
			base.Draw(drawList);
		}
	}

	private sealed class RecordingTransitionRenderer : IScene2TransitionRenderer
	{
		private readonly List<string> _calls;

		public RecordingTransitionRenderer(List<string> calls) => _calls = calls;

		public void BeginDisplay(ushort displayId) => _calls.Add($"begin:0x{displayId:X4}");

		public void DrawLayer(UiDrawList draw, Scene2TransitionLayer layer) => _calls.Add(layer == Scene2TransitionLayer.SubLayer ? "layer:sub" : "layer:primary");

		public void ResetViewport() => _calls.Add("reset");

		public void DrawOverlay(UiDrawList draw) => _calls.Add("overlay");

		public void DrawBands(UiDrawList draw) => _calls.Add("bands");

		public void RestoreViewport() => _calls.Add("restore");

		public void EndDisplay() => _calls.Add("end");
	}
}
