using PsoBB.Platform;
using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the browser connection seam refuses transport operations it cannot honestly provide.
/// </summary>
public sealed class BrowserGameConnectionTests
{
	/// <summary>
	/// The browser connection reports no transport and refuses to open, send or receive.
	/// </summary>
	[Fact]
	public void BrowserConnectionRefusesRawTcpOperations()
	{
		using BrowserGameConnection connection = new();
		Assert.Equal(GameConnectionState.Disconnected, connection.State);
		Assert.Throws<NotSupportedException>(() => connection.Connect("session.invalid", 1));
		Assert.Throws<NotSupportedException>(() => connection.Send(new byte[] { 1 }));
		Assert.Throws<NotSupportedException>(() => connection.Receive(new byte[1]));
		connection.Close();
	}
}
