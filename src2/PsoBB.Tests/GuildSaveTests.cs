using PsoBB.Data;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PSO_GUILDCARD start, page clear and pending 13/14 completion.
/// </summary>
[Collection("Game state")]
public sealed class GuildSaveTests : IDisposable
{
	public GuildSaveTests()
	{
		SystemSave.Reset();
		GuildSave.Reset();
	}

	public void Dispose()
	{
		SystemSave.Reset();
		GuildSave.Reset();
	}

	[Fact]
	public void WaitStartsAndDrainsTheGuildLoad()
	{
		Files files = new();
		files.Add(SaveFileCheck.GuildCardName, new byte[64]);
		byte[] buffer = new byte[SystemSave.DefaultPages << SystemSave.PageShift];
		Array.Fill(buffer, (byte)0xFF);
		GuildSave.Attach(new byte[4096], buffer);

		Assert.Equal(0, GuildSave.Wait(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
		Assert.Equal(0, SystemSave.LoadActive);
		Assert.Equal(0, GuildSave.Language);
		Assert.Equal(0, GuildSave.Flag);
		Assert.All(buffer, value => Assert.Equal(0, value));
	}

	[Fact]
	public void AStartedGuildLoadIsLeftToTheWorker()
	{
		Files files = new();
		files.Add(SaveFileCheck.GuildCardName, new byte[64]);
		GuildSave.Attach(new byte[4096], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(0, GuildSave.Start(files));
		Assert.Equal(GuildSave.GuildPending, SystemSave.Pending);
		Assert.Equal(0, GuildSave.Language);
		Assert.Equal(1, SystemSave.LoadActive);

		Assert.Equal(0, GuildSave.Wait(files));
		Assert.Equal(GuildSave.GuildPending, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
	}

	[Fact]
	public void AMissingGuildFileLeavesNoPendingState()
	{
		Files files = new();
		byte[] buffer = new byte[SystemSave.DefaultPages << SystemSave.PageShift];
		Array.Fill(buffer, (byte)0xFF);
		GuildSave.Attach(new byte[4096], buffer);

		Assert.Equal(0, GuildSave.Wait(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, SystemSave.LoadActive);
		Assert.All(buffer, value => Assert.Equal(0xFF, value));
	}

	[Fact]
	public void ANullGuildBlockReturnsTheMissingStatus()
	{
		Files files = new();
		files.Add(SaveFileCheck.GuildCardName, new byte[64]);

		Assert.Equal(GuildSave.MissingBlockStatus, GuildSave.Start(files));
		Assert.Equal(0, GuildSave.Wait(files));
	}

	[Fact]
	public void LoadRejectsALanguageAboveSeven()
	{
		Files files = new();
		files.Add(SaveFileCheck.GuildCardName, new byte[64]);
		GuildSave.Attach(new byte[4096], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(-1, GuildSave.Load(files, 8));
	}

	[Fact]
	public void AHighLanguageByteSignExtendsBeforeTheCheck()
	{
		Files files = new();
		files.Add(SaveFileCheck.GuildCardName, new byte[64]);
		GuildSave.Attach(new byte[4096], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		SystemSave.UserLanguage = 0xFF;

		Assert.Equal(SaveFileCheck.InvalidHandleStatus, GuildSave.Start(files));
		Assert.Equal(-1, GuildSave.Language);
		Assert.Equal(0, SystemSave.Pending);
	}

	private sealed class Files : IDataFiles
	{
		private readonly Dictionary<string, byte[]> _files = new(StringComparer.OrdinalIgnoreCase);

		public void Add(string name, byte[] data) => _files[name] = data;

		public bool Exists(string name) => _files.ContainsKey(name);

		public int GetLength(string name) => _files.TryGetValue(name, out byte[]? data) ? data.Length : throw new FileNotFoundException(name);

		public ReadOnlyMemory<byte> Read(string name) => _files.TryGetValue(name, out byte[]? data) ? data : throw new FileNotFoundException(name);

		public bool TryRead(string name, out ReadOnlyMemory<byte> data)
		{
			bool found = _files.TryGetValue(name, out byte[]? stored);
			data = found ? stored : ReadOnlyMemory<byte>.Empty;
			return found;
		}
	}
}
