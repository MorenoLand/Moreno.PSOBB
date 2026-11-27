using System.Buffers.Binary;
using PsoBB.Data;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PSO_SYSTEM load start, checksum comparison and recreate path used by scene-2 state 9.
/// </summary>
[Collection("Game state")]
public sealed class SystemSaveTests : IDisposable
{
	public SystemSaveTests() => SystemSave.Reset();

	public void Dispose() => SystemSave.Reset();

	[Fact]
	public void StartsAndAppliesAValidSystemImage()
	{
		Files files = new();
		files.Add(SaveFileCheck.SystemName, CreateSystem(valid: true));
		byte[] block = new byte[SystemSave.SaveLength];
		byte[] buffer = new byte[SystemSave.DefaultPages << SystemSave.PageShift];
		SystemSave.Attach(block, buffer);

		Assert.Equal(0, SystemSave.Apply(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
		Assert.Equal(0, SystemSave.LoadActive);
		Assert.Equal(~SaveChecksum.Compute(block), (uint)BinaryPrimitives.ReadInt32LittleEndian(block));
	}

	[Fact]
	public void AStartedLoadIsLeftToTheWorkerByApply()
	{
		Files files = new();
		files.Add(SaveFileCheck.SystemName, CreateSystem(valid: true));
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(0, SystemSave.Start(files));
		Assert.Equal(SystemSave.SystemPending, SystemSave.Pending);
		Assert.Equal(1, SystemSave.Busy);
		Assert.Equal(1, SystemSave.LoadActive);

		Assert.Equal(0, SystemSave.Apply(files));
		Assert.Equal(SystemSave.SystemPending, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
	}

	[Fact]
	public void AMissingSystemFileReturnsTheCheckStatus()
	{
		Files files = new();
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(SaveFileCheck.MissingStatus, SystemSave.Start(files));
		Assert.Equal(0, SystemSave.Pending);
		Assert.Equal(0, SystemSave.Busy);
	}

	[Fact]
	public void ANullSaveBlockReturnsTheMissingBlockStatus()
	{
		Files files = new();
		files.Add(SaveFileCheck.SystemName, CreateSystem(valid: true));

		Assert.Equal(SystemSave.MissingBlockStatus, SystemSave.Start(files));
		Assert.Equal(0, SystemSave.Apply(files));
	}

	[Fact]
	public void ACorruptChecksumReturnsOneAndClearsThePendingState()
	{
		Files files = new();
		files.Add(SaveFileCheck.SystemName, CreateSystem(valid: false));
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(1, SystemSave.Apply(files));
		Assert.Equal(0, SystemSave.Pending);
	}

	[Fact]
	public void BeginLoadRejectsALanguageAtEight()
	{
		Files files = new();
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		Assert.Equal(-1, SystemSave.BeginLoad(files, 8));
	}

	[Fact]
	public void RecreateWritesTheVersionTimestampAndLocalTime()
	{
		DateTime now = new(2026, 11, 26, 13, 14, 15, DateTimeKind.Local);
		SystemSave.Clock = () => now;
		byte[] block = new byte[SystemSave.SaveLength];
		SystemSave.Attach(block, new byte[SystemSave.DefaultPages << SystemSave.PageShift]);

		SystemSave.Recreate();

		Assert.Equal(SystemSave.Version, BinaryPrimitives.ReadUInt16LittleEndian(block.AsSpan(4)));
		Assert.Equal(0, block[6]);
		Assert.Equal(SystemSave.VersionByte(), block[7]);
		Assert.Equal(SystemSave.Timestamp, BinaryPrimitives.ReadInt32LittleEndian(block.AsSpan(8)));
		Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(block.AsSpan(12)));
		Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(block.AsSpan(14)));
		Assert.Equal((int)new DateTimeOffset(now).ToUnixTimeSeconds(), BinaryPrimitives.ReadInt32LittleEndian(block.AsSpan(SystemSave.TimeOffset)));
	}

	private static byte[] CreateSystem(bool valid)
	{
		byte[] data = new byte[SystemSave.SaveLength];
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(4), SystemSave.Version);
		BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(8), SystemSave.Timestamp);
		uint checksum = SaveChecksum.Compute(data);
		int stored = unchecked((int)~checksum);
		if (!valid)
			stored ^= 1;
		BinaryPrimitives.WriteInt32LittleEndian(data, stored);
		return data;
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
