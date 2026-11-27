using PsoBB.Data;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the state-9 file existence and length helpers and the shared status word.
/// </summary>
public sealed class SaveFileCheckTests
{
	[Fact]
	public void ChecksAFileNameAndStoresTheResult()
	{
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, 10);
		SaveFileCheck.ClearStatus();

		Assert.Equal(0, SaveFileCheck.Check(files, 0, SaveFileCheck.CharacterName));
		Assert.Equal(0, SaveFileCheck.LastStatus);
		Assert.Equal(0, SaveFileCheck.Status());

		Assert.Equal(SaveFileCheck.MissingStatus, SaveFileCheck.Check(files, 0, SaveFileCheck.GuildCardName));
		Assert.Equal(SaveFileCheck.MissingStatus, SaveFileCheck.LastStatus);
	}

	[Fact]
	public void RejectsAHandleAboveOneWithoutTouchingTheStatus()
	{
		Files files = new();
		files.Add(SaveFileCheck.SystemName, 10);
		SaveFileCheck.LastStatus = 123;

		Assert.False(SaveFileCheck.IsHandleSupported(2));
		Assert.True(SaveFileCheck.IsHandleSupported(0));
		Assert.True(SaveFileCheck.IsHandleSupported(1));
		Assert.Equal(SaveFileCheck.InvalidHandleStatus, SaveFileCheck.ValidateHandle(2));
		Assert.Equal(SaveFileCheck.InvalidHandleStatus, SaveFileCheck.ValidateHandleFromStack(2));
		Assert.Equal(SaveFileCheck.InvalidHandleStatus, SaveFileCheck.Check(files, 2, SaveFileCheck.SystemName));
		Assert.Equal(123, SaveFileCheck.LastStatus);
		Assert.Equal(0, SaveFileCheck.ValidateHandle(1));
		Assert.Equal(0, SaveFileCheck.LastStatus);
	}

	[Fact]
	public void ReturnsTheStoredLengthOrTheCheckStatus()
	{
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, 0xBAA4);

		Assert.Equal(0xBAA4, SaveFileCheck.Length(files, 0, SaveFileCheck.CharacterName));
		Assert.Equal(SaveFileCheck.MissingStatus, SaveFileCheck.Length(files, 0, SaveFileCheck.GuildCardName));
		Assert.Equal(SaveFileCheck.InvalidHandleStatus, SaveFileCheck.Length(files, 5, SaveFileCheck.CharacterName));
		Assert.Equal(0xBAA4u, SaveFileCheck.FileSize(files, SaveFileCheck.CharacterName));
		Assert.Equal(0u, SaveFileCheck.FileSize(files, SaveFileCheck.GuildCardName));
		Assert.True(SaveFileCheck.FileExists(files, SaveFileCheck.CharacterName));
		Assert.False(SaveFileCheck.FileExists(files, SaveFileCheck.GuildCardName));
	}

	[Fact]
	public void ExposesTheThreeSaveNames()
	{
		Assert.Equal("PSO_CHARACTER", SaveFileCheck.GetCharacterName());
		Assert.Equal("PSO_GUILDCARD", SaveFileCheck.GetGuildCardName());
		Assert.Equal("PSO_SYSTEM", SaveFileCheck.GetSystemName());
		Assert.Equal(SaveFileCheck.CharacterName, SaveFileCheck.GetCharacterName());
		Assert.Equal(SaveFileCheck.GuildCardName, SaveFileCheck.GetGuildCardName());
		Assert.Equal(SaveFileCheck.SystemName, SaveFileCheck.GetSystemName());
	}

	[Fact]
	public void ClearStatusResetsTheSharedWord()
	{
		SaveFileCheck.LastStatus = SaveFileCheck.MissingStatus;

		Assert.Equal(0, SaveFileCheck.ClearStatus());
		Assert.Equal(0, SaveFileCheck.LastStatus);
		Assert.Equal(0, SaveFileCheck.Status());
	}

	private sealed class Files : IDataFiles
	{
		private readonly Dictionary<string, byte[]> _files = new(StringComparer.OrdinalIgnoreCase);

		public void Add(string name, int length) => _files[name] = new byte[length];

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
