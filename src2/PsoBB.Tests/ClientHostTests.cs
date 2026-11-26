using PsoBB.Client;
using PsoBB.Core;
using PsoBB.Graphics;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks boot, image loading, the frame loop, stop handling and disposal against in-memory services.
/// </summary>
public sealed class ClientHostTests : IDisposable
{
	private const uint ImageAddress = 0x00400000;
	private static readonly DateTimeOffset Start = new(2026, 11, 26, 12, 0, 0, TimeSpan.Zero);

	public ClientHostTests() => GlobalState.Reset();

	public void Dispose() => GlobalState.Reset();

	[Fact]
	public void BootLoadsTheImageAndInitialisesTheGlobals()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		GlobalState.SecurityCookie = 0xDEADBEEF;
		using ClientHost host = CreateHost(CreateFileSystem(), renderer);
		Assert.Same(renderer, host.Renderer);
		Assert.Single(host.DataImage.Pieces);
		Assert.Equal(0x5A, host.DataImage.ReadByte(ImageAddress));
		Assert.Equal(GlobalState.SecurityCookieInitialValue, GlobalState.SecurityCookie);
		Assert.Equal(0L, host.FrameCount);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void AMissingImageFailsBoot()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		MemoryFileSystem fileSystem = new();
		FileNotFoundException error = Assert.Throws<FileNotFoundException>(() => CreateHost(fileSystem, renderer));
		Assert.Equal("image.bin", error.FileName);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void AMalformedImageFailsBoot()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		MemoryFileSystem fileSystem = CreateFileSystem(image: [1, 0, 0, 0]);
		Assert.Throws<InvalidDataException>(() => CreateHost(fileSystem, renderer));
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
		using ClientHost host = CreateHost(CreateFileSystem(), renderer, input, dispatcher, clock);

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
		using ClientHost host = CreateHost(CreateFileSystem(), renderer);
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
		using ClientHost host = CreateHost(CreateFileSystem(), renderer, dispatcher: dispatcher, clock: clock);
		dispatcher.Post(host.RequestStop);

		Assert.Equal(0, host.RunFrames(1));
		Assert.Equal(0L, host.FrameCount);
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void ANegativeFrameCountIsRejected()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(CreateFileSystem(), renderer);
		Assert.Throws<ArgumentOutOfRangeException>(() => host.RunFrames(-1));
		Assert.Empty(renderer.Commands);
	}

	[Fact]
	public void DisposalIsIdempotentAndStopsTheHost()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using ClientHost host = CreateHost(CreateFileSystem(), renderer);
		host.Dispose();
		host.Dispose();
		Assert.True(host.IsStopRequested);
		Assert.True(renderer.IsDisposed);
		Assert.Equal(1, renderer.DisposeCount);
		Assert.Throws<ObjectDisposedException>(() => host.RunFrames(1));
		Assert.Empty(renderer.Commands);
	}

	private static ClientHost CreateHost(
		MemoryFileSystem fileSystem,
		RecordingRenderer renderer,
		MemoryGameInput? input = null,
		SingleThreadedDispatcher? dispatcher = null,
		ManualGameClock? clock = null)
	{
		clock ??= new ManualGameClock(Start);
		return new ClientHost(
			new ClientOptions("data"),
			fileSystem,
			clock,
			new MemoryGameSettings(),
			input ?? new MemoryGameInput(),
			dispatcher ?? new SingleThreadedDispatcher(clock),
			new SilentAudioDevice(),
			renderer);
	}

	private static MemoryFileSystem CreateFileSystem(byte[]? image = null)
	{
		MemoryFileSystem fileSystem = new();
		using IGameFile file = fileSystem.Open(GamePath.Parse(ClientOptions.DefaultImageFileName), GameFileAccess.Write, GameFileMode.CreateNew)
			?? throw new InvalidOperationException("The memory file system refused to create the image.");
		file.Write(image ?? CreateImage());
		return fileSystem;
	}

	private static byte[] CreateImage()
	{
		byte[] image = new byte[17];
		WriteUInt32(image, 0, 1);
		WriteUInt32(image, 4, ImageAddress);
		WriteUInt32(image, 8, 1);
		WriteUInt32(image, 12, 16);
		image[16] = 0x5A;
		return image;
	}

	private static void WriteUInt32(byte[] bytes, int offset, uint value)
	{
		bytes[offset] = (byte)value;
		bytes[offset + 1] = (byte)(value >> 8);
		bytes[offset + 2] = (byte)(value >> 16);
		bytes[offset + 3] = (byte)(value >> 24);
	}
}
