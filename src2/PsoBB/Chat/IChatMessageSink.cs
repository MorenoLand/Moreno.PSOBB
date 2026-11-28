namespace PsoBB.Chat;

/// <summary>
/// The narrow host surface that delivers submitted chat text to the packet layer.
/// </summary>
public interface IChatMessageSink
{
	/// <summary>
	/// Delivers one submitted message.
	/// </summary>
	/// <param name="message">The submitted text.</param>
	void Send(ChatOutgoingMessage message);
}
