using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the portable relative path used by every file contract.
/// </summary>
public sealed class GamePathTests
{
	[Fact]
	public void ParseNormalisesSeparatorsAndDotSegments()
	{
		GamePath path = GamePath.Parse("data//./textures/../music/title.ogg");
		Assert.Equal("data/music/title.ogg", path.ToString());
		Assert.Equal("title.ogg", path.Name);
		Assert.Equal("data/music", path.Parent.ToString());
		Assert.Equal("data", path.Parent.Parent.ToString());
		Assert.Equal(GamePath.Root, path.Parent.Parent.Parent);
	}

	[Fact]
	public void EmptyAndDotPathsAreTheRoot()
	{
		Assert.True(GamePath.Root.IsRoot);
		Assert.True(GamePath.Parse("").IsRoot);
		Assert.True(GamePath.Parse(".").IsRoot);
		Assert.True(GamePath.Parse("data/..").IsRoot);
		Assert.Equal(string.Empty, GamePath.Root.ToString());
		Assert.Equal(string.Empty, GamePath.Root.Name);
		Assert.Equal(GamePath.Root, GamePath.Root.Parent);
	}

	[Theory]
	[InlineData("/data")]
	[InlineData("\\data")]
	[InlineData("C:/data")]
	[InlineData("data\\file")]
	[InlineData("data/../..")]
	[InlineData("data/a?b")]
	[InlineData("data/a:b")]
	[InlineData("data/a*b")]
	[InlineData("data/a ")]
	[InlineData("data/a.")]
	[InlineData("data/\0file")]
	public void NonPortablePathsAreRejected(string text)
	{
		Assert.False(GamePath.TryParse(text, out _));
		Assert.Throws<FormatException>(() => GamePath.Parse(text));
	}

	[Fact]
	public void NullPathIsRejected()
	{
		Assert.False(GamePath.TryParse(null, out _));
		Assert.Throws<ArgumentNullException>(() => GamePath.Parse(null!));
	}

	[Fact]
	public void CombineResolvesRelativeChildren()
	{
		Assert.Equal("data/ogg/title.ogg", GamePath.Combine(GamePath.Root, "data/ogg/title.ogg").ToString());
		Assert.Equal("data/ogg/title.ogg", GamePath.Combine(GamePath.Parse("data"), "ogg/title.ogg").ToString());
		Assert.Equal("data/music/title.ogg", GamePath.Combine(GamePath.Parse("data/ogg"), "../music/title.ogg").ToString());
		Assert.Equal("data", GamePath.Combine(GamePath.Parse("data"), "").ToString());
		Assert.Throws<FormatException>(() => GamePath.Combine(GamePath.Parse("data"), "/absolute"));
	}

	[Fact]
	public void EqualityAndHashingIgnoreCase()
	{
		GamePath upper = GamePath.Parse("Data/File.TXT");
		GamePath lower = GamePath.Parse("data/file.txt");
		Assert.Equal(upper, lower);
		Assert.True(upper == lower);
		Assert.False(upper != lower);
		Assert.Equal(upper.GetHashCode(), lower.GetHashCode());
		Assert.Equal("Data/File.TXT", upper.ToString());
		Assert.NotEqual(GamePath.Parse("data/file.bin"), lower);
	}
}
