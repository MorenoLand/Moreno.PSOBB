namespace PsoBB.Mathematics;

/// <summary>
/// Quotient and remainder produced by the original integer division helper.
/// </summary>
/// <param name="Quotient">Value returned in the original's eax.</param>
/// <param name="Remainder">Value returned in the original's edx.</param>
public readonly record struct DivisionResult(int Quotient, int Remainder);
