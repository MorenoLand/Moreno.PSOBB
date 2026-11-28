using PsoBB.Core;
using PsoBB.Net;

namespace PsoBB.Net.Patch;

/// <summary>
/// The account fields sent in the patch login (command 0x04).
/// </summary>
/// <remarks>
/// The three leading 32-bit fields are unused by this client and are always zero; only the fixed-width name, password and
/// email fields carry data.
/// </remarks>
public sealed class PatchLogin
{
	/// <summary>The width of the username field.</summary>
	public const int UsernameLength = 0x10;
	/// <summary>The width of the password field.</summary>
	public const int PasswordLength = 0x10;
	/// <summary>The width of the email field.</summary>
	public const int EmailLength = 0x40;

	/// <summary>Gets the account name.</summary>
	public required ByteString Username { get; init; }

	/// <summary>Gets the account password.</summary>
	public required ByteString Password { get; init; }

	/// <summary>Gets the email field.</summary>
	public ByteString Email { get; init; } = ByteString.Empty;

	/// <summary>
	/// Writes the 0x6C-byte login body.
	/// </summary>
	/// <param name="body">The destination body, excluding the packet header.</param>
	/// <exception cref="ArgumentException">A field is wider than its wire field.</exception>
	[Original(0x0070C020)]
	public void WriteBody(Span<byte> body)
	{
		if (body.Length != 0x6C)
			throw new ArgumentException("The patch login body must contain 0x6C bytes.", nameof(body));
		body[..0x0C].Clear();
		PacketField.WriteText(body.Slice(0x0C, UsernameLength), Username, "username");
		PacketField.WriteText(body.Slice(0x1C, PasswordLength), Password, "password");
		PacketField.WriteText(body.Slice(0x2C, EmailLength), Email, "email");
	}
}
