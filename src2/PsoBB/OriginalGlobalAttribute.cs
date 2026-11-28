namespace PsoBB;

/// <summary>
/// Marks the member that reproduces the original global variable at <see cref="Address"/>.
/// </summary>
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Property, AllowMultiple = false)]
public sealed class OriginalGlobalAttribute : Attribute
{
	/// <summary>
	/// Creates the attribute for the original address.
	/// </summary>
	/// <param name="address">Absolute address in the original image.</param>
	public OriginalGlobalAttribute(int address)
	{
		Address = address;
	}

	/// <summary>
	/// Gets the absolute address in the original image.
	/// </summary>
	public int Address { get; }
}
