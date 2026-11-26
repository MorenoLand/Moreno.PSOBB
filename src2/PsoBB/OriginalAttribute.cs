namespace PsoBB;

/// <summary>
/// Marks the member that reproduces the original function at <see cref="Address"/>.
/// </summary>
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Constructor | AttributeTargets.Property, AllowMultiple = false)]
public sealed class OriginalAttribute : Attribute
{
	/// <summary>
	/// Creates the attribute for the original address.
	/// </summary>
	/// <param name="address">Absolute address in the original image.</param>
	public OriginalAttribute(int address)
	{
		Address = address;
	}

	/// <summary>
	/// Gets the absolute address in the original image.
	/// </summary>
	public int Address { get; }
}
