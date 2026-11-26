using PsoBB.Client;
using PsoBB.Core;
using PsoBB.Graphics;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks boot, the frame loop, stop handling and disposal against in-memory services.
/// </summary>
public sealed class ClientHostTests : IDisposable
{
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	public ClientHostTests() => GlobalState.Reset();

	public void Dispose() => GlobalState.Reset();

	[Fact]
	public void BootInitialisesTheGlobals()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		GlobalState.SecurityCookie = 0xDEADBEEF;
		using ClientHost host = CreateHost(renderer);
		Assert.Same(renderer, host.Renderer);
		Assert.Equal(GlobalState.SecurityCookieInitialValue, GlobalState.SecurityCookie);
		Assert.Equal(0L, host.FrameCount);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void FramesPollInputPumpWorkAndPresentInOrder()
	{
		ManualGameClock clock = new(Start);
		MemoryGameInput input = new();
		input.SetKey(GameKey.Escape, true);
		SingleThreadedDispatcher dispatcher = new(clock);
		int pumped = 0;
		dispatcher.Post(() => pumped++);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(renderer, input, dispatcher, clock);

		int frames = host.RunFrames(3);

		Assert.Equal(3, frames);
		Assert.Equal(3L, host.FrameCount);
		Assert.Equal(1, pumped);
		Assert.True(input.Keyboard.IsKeyDown(GameKey.Escape));
		Assert.Equal(
		[
			"BeginFrame",
			"Clear FF000000",
			"EndFrame",
			"BeginFrame",
			"Clear FF000000",
			"EndFrame",
			"BeginFrame",
			"Clear FF000000",
			"EndFrame",
		], renderer.Commands);
	}

	[Fact]
	public void AStopRequestEndsTheLoopBeforeAnotherFrame()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(renderer);
		host.RequestStop();
		Assert.True(host.IsStopRequested);
		Assert.Equal(0, host.RunFrames(5));
		Assert.Equal(0L, host.FrameCount);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void AStopRequestFromDeferredWorkSkipsPresentation()
	{
		ManualGameClock clock = new(Start);
		SingleThreadedDispatcher dispatcher = new(clock);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(renderer, dispatcher: dispatcher, clock: clock);
		dispatcher.Post(host.RequestStop);

		Assert.Equal(0, host.RunFrames(1));
		Assert.Equal(0L, host.FrameCount);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void ANegativeFrameCountIsRejected()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(renderer);
		Assert.Throws<ArgumentOutOfRangeException>(() => host.RunFrames(-1));
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void DisposalIsIdempotentAndStopsTheHost()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(renderer);
		host.Dispose();
		host.Dispose();
		Assert.True(host.IsStopRequested);
		Assert.True(renderer.IsDisposed);
		Assert.Equal(1, renderer.DisposeCount);
		Assert.Throws<ObjectDisposedException>(() => host.RunFrames(1));
		Assert.Empty(renderer.Commands);
	}

	private static ClientHost CreateHost(
		RecordingRenderer renderer,
		MemoryGameInput? input = null,
		SingleThreadedDispatcher? dispatcher = null,
		ManualGameClock? clock = null)
	{
		clock ??= new ManualGameClock(Start);
		return new ClientHost(
			new ClientOptions("data"),
			new MemoryFileSystem(),
			clock,
			new MemoryGameSettings(),
			input ?? new MemoryGameInput(),
			dispatcher ?? new SingleThreadedDispatcher(clock),
			new SilentAudioDevice(),
			renderer);
	}
}
