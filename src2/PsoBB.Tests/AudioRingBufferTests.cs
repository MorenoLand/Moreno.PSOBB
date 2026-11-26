using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks ring ordering, wrap-around, underrun and overrun with synthetic bytes.
/// </summary>
public sealed class AudioRingBufferTests
{
	[Fact]
	public void NewRingIsEmpty()
	{
		AudioRingBuffer buffer = new(16);
		Assert.Equal(16, buffer.Capacity);
		Assert.Equal(0, buffer.AvailableBytes);
		Assert.Equal(16, buffer.FreeBytes);
		Assert.True(buffer.IsEmpty);
	}

	[Fact]
	public void WriteAndReadPreserveOrder()
	{
		AudioRingBuffer buffer = new(16);
		Assert.Equal(4, buffer.Write([1, 2, 3, 4]));
		byte[] destination = new byte[4];
		Assert.Equal(4, buffer.Read(destination));
		Assert.Equal([1, 2, 3, 4], destination);
		Assert.True(buffer.IsEmpty);
	}

	[Fact]
	public void WriteWrapsAroundTheEnd()
	{
		AudioRingBuffer buffer = new(10);
		Assert.Equal(8, buffer.Write([0, 1, 2, 3, 4, 5, 6, 7]));
		byte[] first = new byte[6];
		Assert.Equal(6, buffer.Read(first));
		Assert.Equal([0, 1, 2, 3, 4, 5], first);
		Assert.Equal(8, buffer.Write([8, 9, 10, 11, 12, 13, 14, 15]));
		byte[] second = new byte[10];
		Assert.Equal(10, buffer.Read(second));
		Assert.Equal([6, 7, 8, 9, 10, 11, 12, 13, 14, 15], second);
	}

	[Fact]
	public void WriteOverrunTruncates()
	{
		AudioRingBuffer buffer = new(4);
		Assert.Equal(4, buffer.Write([1, 2, 3, 4, 5, 6]));
		Assert.Equal(0, buffer.FreeBytes);
		Assert.Equal(0, buffer.Write([7]));
		byte[] destination = new byte[4];
		Assert.Equal(4, buffer.Read(destination));
		Assert.Equal([1, 2, 3, 4], destination);
	}

	[Fact]
	public void ReadUnderrunTruncates()
	{
		AudioRingBuffer buffer = new(8);
		buffer.Write([1, 2]);
		byte[] destination = new byte[4];
		Assert.Equal(2, buffer.Read(destination));
		Assert.Equal([1, 2, 0, 0], destination);
		Assert.Equal(0, buffer.Read(destination));
	}

	[Fact]
	public void DiscardRemovesBytesFromTheFront()
	{
		AudioRingBuffer buffer = new(8);
		buffer.Write([1, 2, 3, 4]);
		Assert.Equal(2, buffer.Discard(2));
		byte[] destination = new byte[2];
		Assert.Equal(2, buffer.Read(destination));
		Assert.Equal([3, 4], destination);
		Assert.Equal(0, buffer.Discard(1));
	}

	[Fact]
	public void ClearResetsTheRing()
	{
		AudioRingBuffer buffer = new(8);
		buffer.Write([1, 2, 3]);
		buffer.Clear();
		Assert.Equal(0, buffer.AvailableBytes);
		Assert.Equal(8, buffer.FreeBytes);
		Assert.Equal(8, buffer.Write([4, 5, 6, 7, 8, 9, 10, 11]));
	}

	[Fact]
	public void CountsFollowWritesAndReads()
	{
		AudioRingBuffer buffer = new(6);
		buffer.Write([1, 2, 3, 4]);
		Assert.Equal(4, buffer.AvailableBytes);
		Assert.Equal(2, buffer.FreeBytes);
		buffer.Read(new byte[1]);
		Assert.Equal(3, buffer.AvailableBytes);
		Assert.Equal(3, buffer.FreeBytes);
	}

	[Fact]
	public void InvalidArgumentsAreRejected()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => new AudioRingBuffer(0));
		AudioRingBuffer buffer = new(4);
		Assert.Throws<ArgumentOutOfRangeException>(() => buffer.Discard(-1));
	}
}
