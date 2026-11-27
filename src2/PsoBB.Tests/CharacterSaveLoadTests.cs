using System.Buffers.Binary;
using PsoBB.Data;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PSO_CHARACTER start, pending 8/9 drain, image copy and checksum return.
/// </summary>
[Collection("Game state")]
public sealed class CharacterSaveLoadTests : IDisposable
{
	public CharacterSaveLoadTests()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
	}

	public void Dispose()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
	}

	[Fact]
	public void ApplyStartsDrainsAndCopiesTheCharacterRecords()
	{
		byte[] image = CreateImage();
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, image);
		Attach();
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(0, CharacterSaveLoad.Apply(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
		Assert.Equal(0, SystemSave.LoadActive);
		Assert.Equal(CharacterSaveLoad.PlayerVersion, CharacterSaveLoad.PlayerRecord![3]);
		Assert.Equal(0, CharacterSaveLoad.ApplyFlag);
		Assert.True(image.AsSpan().SequenceEqual(CharacterSaveLoad.LoadBuffer!));
	}

	[Fact]
	public void StartQueuesPendingEightAndWritesTheTimeRecord()
	{
		DateTime now = new(2026, 11, 26, 21, 5, 7, DateTimeKind.Local);
		SystemSave.Clock = () => now;
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, CreateImage());
		Attach();
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(0, CharacterSaveLoad.Start(files));
		Assert.Equal(CharacterSaveLoad.ReadPending, SystemSave.Pending);
		Assert.Equal(1, SystemSave.LoadActive);
		byte[] record = CharacterSaveLoad.TimeRecord!;
		Assert.Equal(2026, BinaryPrimitives.ReadUInt16LittleEndian(record));
		Assert.Equal(11, record[2]);
		Assert.Equal(26, record[3]);
		Assert.Equal(21, record[4]);
		Assert.Equal(5, record[5]);
		Assert.Equal(7, record[6]);
		Assert.Equal((byte)now.DayOfWeek, record[7]);
	}

	[Fact]
	public void ACorruptImageReturnsOneAndLeavesTheRecordsEmpty()
	{
		byte[] image = CreateImage();
		image[0x100] ^= 0xFF;
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, image);
		Attach();
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(1, CharacterSaveLoad.Apply(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, CharacterSaveLoad.ApplyFlag);
		Assert.All(CharacterSaveLoad.PlayerRecord!, value => Assert.Equal(0, value));
	}

	[Fact]
	public void AMissingCharacterFileLeavesPendingSixteen()
	{
		Files files = new();
		Attach();
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(0, CharacterSaveLoad.Apply(files));
		Assert.Equal(CharacterSaveLoad.StartPending, SystemSave.Pending);
		Assert.Equal(0, SystemSave.LoadActive);
	}

	[Fact]
	public void NullBuffersReturnMinusOne()
	{
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, CreateImage());
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(-1, CharacterSaveLoad.Start(files));
	}

	[Fact]
	public void ALanguageAboveSevenIsRejected()
	{
		Files files = new();
		files.Add(SaveFileCheck.CharacterName, CreateImage());
		Attach();
		SystemSave.UserLanguage = 8;
		SystemSave.Pending = CharacterSaveLoad.StartPending;

		Assert.Equal(-1, CharacterSaveLoad.Start(files));
		Assert.Equal(CharacterSaveLoad.StartPending, SystemSave.Pending);
	}

	private static void Attach() => CharacterSaveLoad.Attach(
		new byte[CharacterSaveLoad.PlayerChunkLength],
		new byte[CharacterSaveLoad.SystemChunkLength],
		new byte[CharacterSaveLoad.SaveLength],
		new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

	private static byte[] CreateImage()
	{
		byte[] image = new byte[CharacterSave.Length];
		CharacterSaveCodec.Seal(image);
		return image;
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
