using System.Diagnostics.CodeAnalysis;

namespace PsoBB.Platform;

/// <summary>
/// The client's persisted options, stored as named string, integer and binary values.
/// </summary>
/// <remarks>
/// Logical names replace the registry calls <c>RegOpenKeyExA</c>, <c>RegQueryValueExA</c>, <c>RegSetValueExA</c>, <c>RegDeleteValueA</c> and <c>RegEnumValueA</c>; names ignore case, and reading a value of another type fails instead of converting it.
/// </remarks>
public interface IGameSettings
{
	/// <summary>
	/// Reads a string value.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">The stored string when the value exists with the string type.</param>
	/// <returns><see langword="true"/> when a string value was found.</returns>
	bool TryGetString(string name, [NotNullWhen(true)] out string? value);

	/// <summary>
	/// Reads a 32-bit integer value.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">The stored integer when the value exists with the integer type.</param>
	/// <returns><see langword="true"/> when an integer value was found.</returns>
	bool TryGetInt32(string name, out int value);

	/// <summary>
	/// Reads a binary value as a fresh array.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">A copy of the stored bytes when the value exists with the binary type.</param>
	/// <returns><see langword="true"/> when a binary value was found.</returns>
	bool TryGetBinary(string name, [NotNullWhen(true)] out byte[]? value);

	/// <summary>
	/// Stores a string value, replacing any existing value of the same name.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">The string to store.</param>
	void SetString(string name, string value);

	/// <summary>
	/// Stores a 32-bit integer value, replacing any existing value of the same name.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">The integer to store.</param>
	void SetInt32(string name, int value);

	/// <summary>
	/// Stores a copy of a binary value, replacing any existing value of the same name.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <param name="value">The bytes to store.</param>
	void SetBinary(string name, ReadOnlySpan<byte> value);

	/// <summary>
	/// Removes a value.
	/// </summary>
	/// <param name="name">The case-insensitive value name.</param>
	/// <returns><see langword="true"/> when a value was removed.</returns>
	bool Remove(string name);

	/// <summary>
	/// Returns the stored names in case-insensitive order.
	/// </summary>
	/// <returns>A snapshot of the names.</returns>
	IReadOnlyList<string> GetNames();
}
