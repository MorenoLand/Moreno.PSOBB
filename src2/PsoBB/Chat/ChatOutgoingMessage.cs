namespace PsoBB.Chat;

/// <summary>
/// One text submission handed to the host packet layer.
/// </summary>
/// <param name="Text">The text to send.</param>
public readonly record struct ChatOutgoingMessage(string Text);
