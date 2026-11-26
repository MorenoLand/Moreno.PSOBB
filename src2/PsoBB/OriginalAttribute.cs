namespace PsoBB;

/// <summary>
/// Marks the member that reproduces the original function at <see cref="Address"/>.
/// </summary>
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Constructor | AttributeTargets.Property, AllowMultiple = false)]
public sealed class OriginalAttribute : Attribute
{
	/// <summary>
	/// Creates the attribute for the original address and, when known, its original name.
	/// </summary>
	/// <param name="address">Absolute address in the original image.</param>
	/// <param name="name">The original function's name, when the evidence provides one.</param>
	public OriginalAttribute(int address, string? name = null)
	{
		Address = address;
		Name = name;
	}

	/// <summary>
	/// Gets the absolute address in the original image.
	/// </summary>
	public int Address { get; }

	/// <summary>
	/// Gets the original function's name, or <see langword="null"/> when it has none.
	/// </summary>
	public string? Name { get; }
}
