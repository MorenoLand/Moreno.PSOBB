namespace PsoBB.Game;

/// <summary>
/// Thrown when the client cannot satisfy a start-up premise of the original program.
/// </summary>
public sealed class GameStartupPrerequisiteException : InvalidOperationException
{
    /// <summary>
    /// Creates the exception for the missing prerequisite at <paramref name="address"/>.
    /// </summary>
    /// <param name="message">What is missing.</param>
    /// <param name="address">The original address that is not available.</param>
    public GameStartupPrerequisiteException(string message, int address)
        : base(message) => Address = address;

    /// <summary>
    /// Gets the original address that is not available.
    /// </summary>
    public int Address { get; }
}
