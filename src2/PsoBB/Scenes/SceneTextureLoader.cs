using System.Buffers.Binary;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Imaging;

namespace PsoBB.Scenes;

/// <summary>
/// Resolves a scene texture archive through the client's PRS and XVM containers and uploads its first surface.
/// </summary>
internal static class SceneTextureLoader
{
	/// <summary>
	/// Loads the first texture of the named archive or throws when no candidate is present.
	/// </summary>
	/// <param name="files">The data files that resolve the archive.</param>
	/// <param name="renderer">The renderer that owns the created texture.</param>
	/// <param name="name">The archive name without a suffix.</param>
	/// <returns>The uploaded texture.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">No candidate archive is present.</exception>
	/// <exception cref="TextureFormatException">An archive is malformed or holds no texture.</exception>
	internal static ITexture Load(IDataFiles files, IRenderer renderer, string name)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(name);
		if (TryLoad(files, renderer, name, out ITexture? texture))
			return texture!;
		throw new FileNotFoundException($"No texture archive named '{name}' is present.", name + ".prs");
	}

	/// <summary>
	/// Tries each archive suffix and uploads the first texture of the first archive that exists.
	/// </summary>
	/// <param name="files">The data files that resolve the archive.</param>
	/// <param name="renderer">The renderer that owns the created texture.</param>
	/// <param name="name">The archive name without a suffix.</param>
	/// <param name="texture">The uploaded texture, or <see langword="null"/> when no candidate exists.</param>
	/// <returns><see langword="true"/> when an archive was loaded.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="TextureFormatException">An archive is malformed or holds no texture.</exception>
	[Original(0x0081A93C, "load_compressed_texture_0081a93c")]
	internal static bool TryLoad(IDataFiles files, IRenderer renderer, string name, out ITexture? texture)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(name);
		foreach (string candidate in Candidates(name))
		{
			if (!files.TryRead(candidate, out ReadOnlyMemory<byte> data))
				continue;
			ReadOnlyMemory<byte> xvm = IsXvm(data.Span) ? data : Decompress(data, candidate);
			IReadOnlyList<XvmTexture> textures = XvmArchive.Read(xvm.Span);
			if (textures.Count == 0)
				throw new TextureFormatException($"The texture archive '{candidate}' has no textures.", 0);
			XvmTexture first = textures[0];
			texture = renderer.CreateTexture(first.Width, first.Height, first.Image.Pixels.Span, first.Image.Stride);
			return true;
		}
		texture = null;
		return false;
	}

	private static IEnumerable<string> Candidates(string name)
	{
		yield return name + ".prs";
		yield return name;
		yield return name + ".xvm";
	}

	private static bool IsXvm(ReadOnlySpan<byte> data) =>
		data.Length >= 4 && BinaryPrimitives.ReadUInt32LittleEndian(data) == 0x484D5658;

	private static ReadOnlyMemory<byte> Decompress(ReadOnlyMemory<byte> data, string name)
	{
		int capacity = Math.Max(0x10000, data.Length * 4);
		while (capacity <= 0x4000000)
		{
			byte[] destination = new byte[capacity];
			try
			{
				int written = PrsDecompressor.Decompress(data.Span, destination);
				return destination.AsMemory(0, written);
			}
			catch (ArgumentException)
			{
				capacity *= 2;
			}
		}
		throw new TextureFormatException($"The archive '{name}' is neither XVM nor a supported PRS stream.", 0);
	}
}
