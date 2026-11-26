namespace PsoBB.Game;

/// <summary>
/// One completed start-up stage with the original address that proves it.
/// </summary>
/// <param name="Name">The stage name.</param>
/// <param name="Address">The original function or data address.</param>
/// <param name="Detail">What the stage did and which seam supplied its inputs.</param>
public sealed record GameStartupStage(string Name, int Address, string Detail);
