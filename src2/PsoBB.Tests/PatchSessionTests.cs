using System.Buffers.Binary;
using System.Text;
using System.Text.Json;
using PsoBB.Core;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Net.Patch;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the patch handshake, checksum list, downloads, application and redirect.
/// </summary>
public sealed class PatchSessionTests
{
	private const string TestHost = "patch.invalid";
	private const int TestPort = 11000;
	private const uint ServerKey = 0x11223344;
	private const uint ClientKey = 0x55667788;

	/// <summary>
	/// The plaintext welcome enables encryption and sends the four-byte 0x02 answer.
	/// </summary>
	[Fact]
	public void WelcomeEnablesEncryptionAndSendsClientAnswer()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		Assert.Equal(PatchSessionState.AwaitingLogin, fixture.Session.State);
		Assert.True(fixture.Session.IsEncrypted);
		PatchFrame answer = Assert.Single(fixture.TakeFrames());
		Assert.Equal(0x02, answer.Command);
		Assert.Empty(answer.Body);
	}

	/// <summary>
	/// A welcome with the wrong copyright fails before encryption is enabled.
	/// </summary>
	[Fact]
	public void WrongCopyrightFails()
	{
		using PatchFixture fixture = new();
		byte[] body = WelcomeBody(Encoding.ASCII.GetBytes("Not the patch server"), ServerKey, ClientKey);
		fixture.Connection.Push(Frame(0x02, 0, body));
		fixture.Session.Pump();
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("copyright", fixture.Session.FailureReason!);
		Assert.False(fixture.Session.IsEncrypted);
		Assert.Empty(fixture.Connection.Sent);
	}

	/// <summary>
	/// The 0x04 request sends the fixed-width account fields and three zero words.
	/// </summary>
	[Fact]
	public void ChallengeSendsCredentials()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.TakeFrames();
		fixture.Push(0x04, 0, []);
		Assert.Equal(PatchSessionState.Authenticating, fixture.Session.State);
		PatchFrame frame = Assert.Single(fixture.TakeFrames());
		Assert.Equal(0x04, frame.Command);
		Assert.Equal(0x6C, frame.Body.Length);
		Assert.Equal(new byte[0x0C], frame.Body[..0x0C]);
		Assert.Equal("user\0\0\0\0\0\0\0\0\0\0\0\0", Encoding.ASCII.GetString(frame.Body, 0x0C, 0x10));
		Assert.Equal("pass\0\0\0\0\0\0\0\0\0\0\0\0", Encoding.ASCII.GetString(frame.Body, 0x1C, 0x10));
		Assert.Equal("mail", PacketField.ReadText(frame.Body.AsSpan(0x2C, 0x40)).Decode());
	}

	/// <summary>
	/// The checksum list reports CRC-32 and size, maps PsoBB.pat to PsoBB.exe, and ends with 0x10.
	/// </summary>
	[Fact]
	public void ChecksumListReportsCrcAndSize()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.TakeFrames();
		WriteFile(fixture.Files, "data/a.bin", Encoding.ASCII.GetBytes("abc"));
		WriteFile(fixture.Files, "PsoBB.exe", Encoding.ASCII.GetBytes("exe"));
		fixture.Push(0x0B, 0, []);
		fixture.Push(0x0C, 0, ChecksumBody(7, "data/a.bin"));
		fixture.Push(0x0C, 0, ChecksumBody(8, "PsoBB.pat"));
		fixture.Push(0x0C, 0, ChecksumBody(9, "data/missing.bin"));
		Assert.Equal(3, fixture.Session.Checksums.Count);
		Assert.Equal(0x352441C2u, fixture.Session.Checksums[0].Checksum);
		Assert.Equal(3u, fixture.Session.Checksums[0].Size);
		Assert.Equal(PatchCrc32.Compute(Encoding.ASCII.GetBytes("exe")), fixture.Session.Checksums[1].Checksum);
		Assert.Equal(0u, fixture.Session.Checksums[2].Checksum);
		Assert.Equal(0u, fixture.Session.Checksums[2].Size);
		fixture.Push(0x0D, 0, []);
		Assert.Equal(PatchSessionState.Comparing, fixture.Session.State);
		List<PatchFrame> frames = fixture.TakeFrames();
		Assert.Equal(4, frames.Count);
		Assert.All(frames.Take(3), frame => Assert.Equal(0x0F, frame.Command));
		Assert.Equal(0x10, frames[3].Command);
		Assert.Empty(frames[3].Body);
		Assert.Equal(7u, BinaryPrimitives.ReadUInt32LittleEndian(frames[0].Body));
		Assert.Equal(0x352441C2u, BinaryPrimitives.ReadUInt32LittleEndian(frames[0].Body.AsSpan(4)));
	}

	/// <summary>
	/// A raw file is written across two chunks and moved over the target on 0x08.
	/// </summary>
	[Fact]
	public void RawFileIsDownloadedAcrossChunksAndApplied()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Files.CreateDirectory(GamePath.Parse("data"));
		byte[] content = Encoding.ASCII.GetBytes("hello");
		fixture.Push(0x11, 0, TotalsBody((uint)content.Length, 1));
		fixture.Push(0x06, 0, OpenFileBody("data/file.bin", (uint)content.Length));
		fixture.Push(0x07, 0, WriteBody(0, content.AsSpan(0, 2)));
		Assert.Equal(2u, fixture.Session.Progress.FileBytes);
		fixture.Push(0x07, 0, WriteBody(1, content.AsSpan(2)));
		fixture.Push(0x08, 0, []);
		Assert.Equal(PatchSessionState.Downloading, fixture.Session.State);
		Assert.Equal(content, ReadFile(fixture.Files, "data/file.bin"));
		Assert.False(fixture.Files.FileExists(GamePath.Parse("data/file.bin.patch")));
		PatchProgress progress = fixture.Session.Progress;
		Assert.Equal((uint)content.Length, progress.TotalBytes);
		Assert.Equal((uint)content.Length, progress.ReceivedBytes);
		Assert.Equal(100u, progress.Percent);
		Assert.Equal(1u, progress.FileNumber);
		Assert.Equal((uint)content.Length, progress.FileBytes);
		Assert.Equal(100u, progress.FilePercent);
	}

	/// <summary>
	/// A chunk checksum mismatch is rejected before any bytes reach the temp file.
	/// </summary>
	[Fact]
	public void ChunkChecksumMismatchFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x06, 0, OpenFileBody("file.bin", 3));
		byte[] body = WriteBody(0, Encoding.ASCII.GetBytes("abc"));
		body[4] ^= 0xFF;
		fixture.Push(0x07, 0, body);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("checksum", fixture.Session.FailureReason!);
		Assert.False(fixture.Files.FileExists(GamePath.Parse("file.bin")));
	}

	/// <summary>
	/// A chunk larger than the remaining announced size is rejected.
	/// </summary>
	[Fact]
	public void OversizedChunkFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x06, 0, OpenFileBody("file.bin", 2));
		fixture.Push(0x07, 0, WriteBody(0, Encoding.ASCII.GetBytes("abc")));
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("exceed", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A final size mismatch is rejected and the target is not replaced.
	/// </summary>
	[Fact]
	public void SizeMismatchRejectsApply()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		WriteFile(fixture.Files, "file.bin", Encoding.ASCII.GetBytes("old"));
		fixture.Push(0x06, 0, OpenFileBody("file.bin", 10));
		fixture.Push(0x07, 0, WriteBody(0, Encoding.ASCII.GetBytes("abcd")));
		fixture.Push(0x08, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("does not match", fixture.Session.FailureReason!);
		Assert.Equal(Encoding.ASCII.GetBytes("old"), ReadFile(fixture.Files, "file.bin"));
	}

	/// <summary>
	/// A file whose 0x06 header flag is one is expanded with the LZSS stream before it replaces the target.
	/// </summary>
	[Fact]
	public void CompressedFileIsExpandedOnApply()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		byte[] compressed = [0x07, (byte)'a', (byte)'b', (byte)'c', 0xEE, 0xF0];
		fixture.Push(0x06, 1, OpenFileBody("c.bin", (uint)compressed.Length));
		fixture.Push(0x07, 0, WriteBody(0, compressed));
		fixture.Push(0x08, 0, []);
		Assert.Equal(PatchSessionState.Downloading, fixture.Session.State);
		Assert.Equal(Encoding.ASCII.GetBytes("abcabc"), ReadFile(fixture.Files, "c.bin"));
		Assert.False(fixture.Files.FileExists(GamePath.Parse("c.bin.patch")));
	}

	/// <summary>
	/// A truncated LZSS stream fails before the existing target is replaced.
	/// </summary>
	[Fact]
	public void TruncatedCompressedFileFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		WriteFile(fixture.Files, "c.bin", Encoding.ASCII.GetBytes("old"));
		fixture.Push(0x06, 1, OpenFileBody("c.bin", 1));
		fixture.Push(0x07, 0, WriteBody(0, [0xFF]));
		fixture.Push(0x08, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Equal(Encoding.ASCII.GetBytes("old"), ReadFile(fixture.Files, "c.bin"));
	}

	/// <summary>
	/// Directory commands enter a created directory and 0x0A returns to its parent.
	/// </summary>
	[Fact]
	public void DirectoryCommandsChangeTheRelativeRoot()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x09, 0, DirectoryBody("data"));
		Assert.True(fixture.Files.DirectoryExists(GamePath.Parse("data")));
		fixture.Push(0x06, 0, OpenFileBody("inside.bin", 3));
		fixture.Push(0x07, 0, WriteBody(0, Encoding.ASCII.GetBytes("abc")));
		fixture.Push(0x08, 0, []);
		Assert.True(fixture.Files.FileExists(GamePath.Parse("data/inside.bin")));
		fixture.Push(0x0A, 0, []);
		fixture.Push(0x0C, 0, ChecksumBody(1, "data/inside.bin"));
		Assert.Equal(3u, fixture.Session.Checksums[0].Size);
	}

	/// <summary>
	/// A 0x14 redirect closes the transport and opens the big-endian address and port.
	/// </summary>
	[Fact]
	public void RedirectReconnectsToTheNamedEndpoint()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.TakeFrames();
		fixture.Push(0x14, 0, RedirectBody());
		Assert.Equal("127.0.0.1", fixture.Session.RedirectHost);
		Assert.Equal(11000, fixture.Session.RedirectPort);
		Assert.Equal(new[] { (TestHost, TestPort), ("127.0.0.1", 11000) }, fixture.Connection.Connects);
		Assert.Equal(PatchSessionState.AwaitingWelcome, fixture.Session.State);
		Assert.False(fixture.Session.IsEncrypted);
		fixture.Welcome();
		Assert.Equal(PatchSessionState.AwaitingLogin, fixture.Session.State);
		Assert.Single(fixture.TakeFrames());
	}

	/// <summary>
	/// A 0x15 login failure ends the session without a retry.
	/// </summary>
	[Fact]
	public void LoginFailureEndsTheSession()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x15, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("rejected", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// An unknown command and an oversized command both fail the session.
	/// </summary>
	[Fact]
	public void MalformedCommandsFail()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x03, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("unknown", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A frame split across receives is held until it is complete.
	/// </summary>
	[Fact]
	public void SplitFrameIsHeldUntilComplete()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		byte[] wire = Frame(0x04, 0, []);
		fixture.ServerCipher!.Xor(wire);
		fixture.Connection.Push(wire.AsSpan(0, 2));
		fixture.Session.Pump();
		Assert.Equal(PatchSessionState.AwaitingLogin, fixture.Session.State);
		fixture.Connection.Push(wire.AsSpan(2));
		fixture.Session.Pump();
		Assert.Equal(PatchSessionState.Authenticating, fixture.Session.State);
	}

	/// <summary>
	/// A 0x13 message is decoded as UTF-16 little-endian.
	/// </summary>
	[Fact]
	public void MessageIsDecoded()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		string? received = null;
		fixture.Session.MessageReceived += message => received = message;
		fixture.Push(0x13, 0, Encoding.Unicode.GetBytes("hello\0"));
		Assert.Equal("hello", received);
	}

	/// <summary>
	/// A 0x0B start clears the collected checksum answers.
	/// </summary>
	[Fact]
	public void StartListClearsPreviousChecksums()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x0C, 0, ChecksumBody(1, "missing"));
		Assert.Single(fixture.Session.Checksums);
		fixture.Push(0x0B, 0, []);
		Assert.Empty(fixture.Session.Checksums);
	}

	/// <summary>
	/// A frame that declares a length below the header fails without escaping Pump.
	/// </summary>
	[Fact]
	public void MalformedFrameLengthFails()
	{
		using PatchFixture fixture = new();
		fixture.Connection.Push([1, 0, 2, 0]);
		fixture.Session.Pump();
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("length", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A command above its table maximum fails.
	/// </summary>
	[Fact]
	public void OversizedCommandFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x02, 0, new byte[0x49]);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("too large", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A server disconnect command fails the session.
	/// </summary>
	[Fact]
	public void DisconnectCommandFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x05, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("disconnect", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A parent traversal in a file name is rejected.
	/// </summary>
	[Fact]
	public void TraversalFileNameFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x06, 0, OpenFileBody("../evil.bin", 1));
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
	}

	/// <summary>
	/// File data without an open file is rejected.
	/// </summary>
	[Fact]
	public void DataWithoutOpenFileFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x07, 0, WriteBody(0, Encoding.ASCII.GetBytes("abc")));
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
	}

	/// <summary>
	/// A checksum-list end and completion in one receive batch still send the 0x10 answer before closing.
	/// </summary>
	[Fact]
	public void CompletionWaitsForQueuedAnswers()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.TakeFrames();
		byte[] first = Frame(0x0D, 0, []);
		byte[] second = Frame(0x12, 0, []);
		fixture.ServerCipher!.Xor(first);
		fixture.ServerCipher.Xor(second);
		fixture.Connection.Push([.. first, .. second]);
		fixture.Session.Pump();
		Assert.Equal(PatchSessionState.Completed, fixture.Session.State);
		PatchFrame answer = Assert.Single(fixture.TakeFrames());
		Assert.Equal(0x10, answer.Command);
	}

	/// <summary>
	/// A 0x12 completion ends the session and closes the transport.
	/// </summary>
	[Fact]
	public void CompleteCommandEndsSession()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x12, 0, []);
		Assert.Equal(PatchSessionState.Completed, fixture.Session.State);
		Assert.Equal(GameConnectionState.Disconnected, fixture.Connection.State);
	}

	/// <summary>
	/// A second 0x06 before the previous file is applied is a protocol violation.
	/// </summary>
	[Fact]
	public void DuplicateOpenFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x06, 0, OpenFileBody("first.bin", 1));
		fixture.Push(0x06, 0, OpenFileBody("second.bin", 1));
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
	}

	/// <summary>
	/// Applying a file whose temp file disappeared fails without replacing the target.
	/// </summary>
	[Fact]
	public void MissingTempOnApplyFails()
	{
		using PatchFixture fixture = new();
		fixture.Welcome();
		fixture.Push(0x06, 0, OpenFileBody("file.bin", 0));
		Assert.True(fixture.Files.DeleteFile(GamePath.Parse("file.bin.patch")));
		fixture.Push(0x08, 0, []);
		Assert.Equal(PatchSessionState.Failed, fixture.Session.State);
		Assert.Contains("missing", fixture.Session.FailureReason!);
	}

	/// <summary>
	/// A refused transport connect leaves the session failed.
	/// </summary>
	[Fact]
	public void RefusedConnectFails()
	{
		PatchTestConnection connection = new() { ConnectResult = false };
		using PatchSession session = new(connection, new MemoryFileSystem(), new PatchLogin
		{
			Username = ByteString.FromText("user")!,
			Password = ByteString.FromText("pass")!,
		});
		Assert.False(session.Connect(TestHost, TestPort));
		Assert.Equal(PatchSessionState.Failed, session.State);
		Assert.Contains("failed", session.FailureReason!);
	}

	/// <summary>
	/// A transport send or receive failure is reported through the session state.
	/// </summary>
	[Fact]
	public void TransportFailuresFailTheSession()
	{
		using (PatchTestConnection connection = new() { FailOnSend = new IOException("send failed") })
		{
			connection.Push(Frame(0x02, 0, WelcomeBody(Encoding.ASCII.GetBytes("Patch Server. Copyright SonicTeam, LTD. 2001"), ServerKey, ClientKey)));
			using PatchSession sendSession = new(connection, new MemoryFileSystem(), new PatchLogin
			{
				Username = ByteString.FromText("user")!,
				Password = ByteString.FromText("pass")!,
			});
			sendSession.Connect(TestHost, TestPort);
			sendSession.Pump();
			Assert.Equal(PatchSessionState.Failed, sendSession.State);
			Assert.Contains("send failed", sendSession.FailureReason!);
		}
		using (PatchSession receiveSession = new(new PatchTestConnection { FailOnReceive = new IOException("receive failed") }, new MemoryFileSystem(), new PatchLogin
		{
			Username = ByteString.FromText("user")!,
			Password = ByteString.FromText("pass")!,
		}))
		{
			receiveSession.Connect(TestHost, TestPort);
			receiveSession.Pump();
			Assert.Equal(PatchSessionState.Failed, receiveSession.State);
			Assert.Contains("receive failed", receiveSession.FailureReason!);
		}
	}

	/// <summary>
	/// The percentage follows the original integer division and truncating conversion.
	/// </summary>
	[Fact]
	public void ProgressPercentMatchesTheOriginalRoutine()
	{
		Assert.Equal(33u, PatchProgress.PercentOf(1, 3));
		Assert.Equal(66u, PatchProgress.PercentOf(2, 3));
		Assert.Equal(0u, PatchProgress.PercentOf(0, 3));
		Assert.Equal(0u, PatchProgress.PercentOf(1, 200));
		Assert.Equal(1u, PatchProgress.PercentOf(3, 200));
		Assert.Equal(12u, PatchProgress.PercentOf(1, 8));
		Assert.Equal(71u, PatchProgress.PercentOf(5, 7));
		Assert.Equal(16u, PatchProgress.PercentOf(1, 6));
		foreach (JsonElement vector in GoldenVectors.Load("0070BB1C.json"))
		{
			uint value = vector.GetProperty("value").GetUInt32();
			uint total = vector.GetProperty("total").GetUInt32();
			uint expected = vector.GetProperty("result").GetUInt32();
			Assert.Equal(expected, PatchProgress.PercentOf(value, total));
		}
	}

	/// <summary>
	/// The file checksum matches standard CRC-32 and a missing file reports zero.
	/// </summary>
	[Fact]
	public void FileChecksumMatchesStandardCrc32()
	{
		MemoryFileSystem files = new();
		Assert.Equal(0xCBF43926u, PatchCrc32.Compute(Encoding.ASCII.GetBytes("123456789")));
		Assert.Equal(0u, PatchCrc32.Compute([]));
		Assert.Equal(0u, PatchCrc32.ComputeFile(files, GamePath.Parse("missing"), out uint size));
		Assert.Equal(0u, size);
	}

	private static void WriteFile(IGameFileSystem files, string path, byte[] data)
	{
		GamePath gamePath = GamePath.Parse(path);
		if (!files.DirectoryExists(gamePath.Parent))
			files.CreateDirectory(gamePath.Parent);
		using IGameFile file = files.Open(gamePath, GameFileAccess.Write, GameFileMode.Create)
			?? throw new InvalidOperationException($"Could not create {path}.");
		file.Write(data);
	}

	private static byte[] ReadFile(IGameFileSystem files, string path)
	{
		using IGameFile file = files.Open(GamePath.Parse(path), GameFileAccess.Read, GameFileMode.Open)
			?? throw new InvalidOperationException($"Could not open {path}.");
		byte[] data = new byte[file.Length];
		int offset = 0;
		while (offset < data.Length)
		{
			int read = file.Read(data.AsSpan(offset));
			if (read == 0)
				break;
			offset += read;
		}
		return data;
	}

	private static byte[] Frame(byte command, byte flags, ReadOnlySpan<byte> body)
	{
		byte[] wire = new byte[4 + body.Length];
		BinaryPrimitives.WriteUInt16LittleEndian(wire, (ushort)wire.Length);
		wire[2] = command;
		wire[3] = flags;
		body.CopyTo(wire.AsSpan(4));
		return wire;
	}

	private static byte[] WelcomeBody(ReadOnlySpan<byte> text, uint serverKey, uint clientKey)
	{
		byte[] body = new byte[0x48];
		text[..Math.Min(text.Length, 0x40)].CopyTo(body);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x40), serverKey);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(0x44), clientKey);
		return body;
	}

	private static byte[] OpenFileBody(string name, uint size)
	{
		byte[] body = new byte[0x38];
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(4), size);
		Encoding.ASCII.GetBytes(name, body.AsSpan(8, 0x30));
		return body;
	}

	private static byte[] WriteBody(uint index, ReadOnlySpan<byte> data)
	{
		byte[] body = new byte[0x0C + data.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(body, index);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(4), PatchCrc32.Compute(data));
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(8), (uint)data.Length);
		data.CopyTo(body.AsSpan(0x0C));
		return body;
	}

	private static byte[] ChecksumBody(uint requestId, string name)
	{
		byte[] body = new byte[0x24];
		BinaryPrimitives.WriteUInt32LittleEndian(body, requestId);
		Encoding.ASCII.GetBytes(name, body.AsSpan(4, 0x20));
		return body;
	}

	private static byte[] TotalsBody(uint totalBytes, uint totalFiles)
	{
		byte[] body = new byte[8];
		BinaryPrimitives.WriteUInt32LittleEndian(body, totalBytes);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(4), totalFiles);
		return body;
	}

	private static byte[] RedirectBody()
	{
		byte[] body = new byte[8];
		body[0] = 127;
		body[1] = 0;
		body[2] = 0;
		body[3] = 1;
		BinaryPrimitives.WriteUInt16BigEndian(body.AsSpan(4), 11000);
		return body;
	}

	private static byte[] DirectoryBody(string name)
	{
		byte[] body = new byte[0x40];
		Encoding.ASCII.GetBytes(name, body);
		return body;
	}

	private readonly record struct PatchFrame(byte Command, byte Flags, byte[] Body);

	private sealed class PatchTestConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public bool ConnectResult { get; set; } = true;
		public IOException? FailOnSend { get; init; }
		public IOException? FailOnReceive { get; init; }
		public int SendBudget { get; set; } = int.MaxValue;
		public int ReceiveLimit { get; set; } = int.MaxValue;
		public bool RemoteClosed { get; set; }
		public List<byte> Sent { get; } = [];
		public List<(string Host, int Port)> Connects { get; } = [];

		public bool Connect(string host, int port)
		{
			Connects.Add((host, port));
			if (!ConnectResult)
			{
				State = GameConnectionState.Failed;
				return false;
			}
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data)
		{
			if (FailOnSend is not null)
			{
				State = GameConnectionState.Failed;
				throw FailOnSend;
			}
			if (State != GameConnectionState.Connected)
				throw new IOException("The connection is not open.");
			int count = Math.Min(data.Length, SendBudget);
			for (int index = 0; index < count; index++)
				Sent.Add(data[index]);
			SendBudget -= count;
			return count;
		}

		public int Receive(Span<byte> destination)
		{
			if (FailOnReceive is not null)
			{
				State = GameConnectionState.Failed;
				throw FailOnReceive;
			}
			if (State != GameConnectionState.Connected)
				return 0;
			if (_received.Count == 0)
			{
				if (RemoteClosed)
					State = GameConnectionState.Disconnected;
				return 0;
			}
			int count = Math.Min(Math.Min(destination.Length, _received.Count), ReceiveLimit);
			for (int index = 0; index < count; index++)
				destination[index] = _received.Dequeue();
			return count;
		}

		public void Close() => State = GameConnectionState.Disconnected;

		public void Dispose() => Close();

		public void Push(ReadOnlySpan<byte> bytes)
		{
			foreach (byte value in bytes)
				_received.Enqueue(value);
		}
	}

	private sealed class PatchFixture : IDisposable
	{
		private byte[] _sent = [];
		private int _sentOffset;
		private bool _sentHeaderDecoded;
		private int _sentLength;
		private byte _sentCommand;
		private byte _sentFlags;

		public PatchFixture()
		{
			Session = new PatchSession(Connection, Files, new PatchLogin
			{
				Username = ByteString.FromText("user")!,
				Password = ByteString.FromText("pass")!,
				Email = ByteString.FromText("mail")!,
			});
			Assert.True(Session.Connect(TestHost, TestPort));
		}

		public PatchTestConnection Connection { get; } = new();
		public MemoryFileSystem Files { get; } = new();
		public PatchSession Session { get; }
		public PsoV2Cipher? ServerCipher { get; private set; }
		public PsoV2Cipher? ClientCipher { get; private set; }

		public void Welcome()
		{
			byte[] body = WelcomeBody(Encoding.ASCII.GetBytes("Patch Server. Copyright SonicTeam, LTD. 2001"), ServerKey, ClientKey);
			Connection.Push(Frame(0x02, 0, body));
			Session.Pump();
			ServerCipher = new PsoV2Cipher(ServerKey);
			ClientCipher = new PsoV2Cipher(ClientKey);
		}

		public void Push(byte command, byte flags, ReadOnlySpan<byte> body)
		{
			byte[] wire = Frame(command, flags, body);
			if (ServerCipher is not null)
				ServerCipher.Xor(wire);
			Connection.Push(wire);
			Session.Pump();
		}

		public List<PatchFrame> TakeFrames()
		{
			_sent = Connection.Sent.ToArray();
			List<PatchFrame> frames = [];
			while (_sentOffset + 4 <= _sent.Length)
			{
				if (!_sentHeaderDecoded)
				{
					if (ClientCipher is not null)
						ClientCipher.Xor(_sent.AsSpan(_sentOffset, 4));
					_sentLength = BinaryPrimitives.ReadUInt16LittleEndian(_sent.AsSpan(_sentOffset, 4));
					_sentCommand = _sent[_sentOffset + 2];
					_sentFlags = _sent[_sentOffset + 3];
					_sentHeaderDecoded = true;
				}
				if (_sentOffset + _sentLength > _sent.Length)
					break;
				if (ClientCipher is not null && _sentLength > 4)
					ClientCipher.Xor(_sent.AsSpan(_sentOffset + 4, _sentLength - 4));
				byte[] body = _sent.AsSpan(_sentOffset + 4, _sentLength - 4).ToArray();
				frames.Add(new PatchFrame(_sentCommand, _sentFlags, body));
				_sentOffset += _sentLength;
				_sentHeaderDecoded = false;
			}
			return frames;
		}

		public void Dispose()
		{
			Session.Dispose();
		}
	}
}
