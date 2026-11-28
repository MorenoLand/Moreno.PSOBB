namespace PsoBB.Mathematics;

/// <summary>
/// The quotient and remainder of a biased integer division.
/// </summary>
/// <param name="Quotient">The whole part of the division.</param>
/// <param name="Remainder">The part left after the whole part.</param>
public readonly record struct DivisionResult(int Quotient, int Remainder);
