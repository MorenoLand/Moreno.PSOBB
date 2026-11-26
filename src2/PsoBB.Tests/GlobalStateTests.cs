using System.Reflection;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks that the global state holder starts from the data-image values and resets around every case.
/// </summary>
[Collection("Global state")]
public sealed class GlobalStateTests : IDisposable
{
    public GlobalStateTests() => GlobalState.Reset();

    public void Dispose() => GlobalState.Reset();

    [Fact]
    public void ResetRestoresStartupValues()
    {
        GlobalState.CommandLine = 0x00123456;
        GlobalState.ArgumentCount = 7;
        GlobalState.ArgumentVector = 0x00234567;
        GlobalState.Environment = 0x00345678;
        GlobalState.EnvironmentBlock = 0x00456789;
        GlobalState.SecurityCookie = 0x89ABCDEF;
        GlobalState.Reset();
        Assert.Equal(0u, GlobalState.CommandLine);
        Assert.Equal(0, GlobalState.ArgumentCount);
        Assert.Equal(0u, GlobalState.ArgumentVector);
        Assert.Equal(0u, GlobalState.Environment);
        Assert.Equal(0u, GlobalState.EnvironmentBlock);
        Assert.Equal(GlobalState.SecurityCookieInitialValue, GlobalState.SecurityCookie);
        Assert.Equal(0xBB40E64Eu, GlobalState.SecurityCookie);
    }

    [Fact]
    public void ResetIsRepeatable()
    {
        GlobalState.CommandLine = 0x11111111;
        GlobalState.Reset();
        GlobalState.CommandLine = 0x22222222;
        GlobalState.Reset();
        Assert.Equal(0u, GlobalState.CommandLine);
        Assert.Equal(0xBB40E64Eu, GlobalState.SecurityCookie);
    }

    [Fact]
    public void MembersDeclareTheirOriginalAddress()
    {
        Dictionary<string, int> expected = new()
        {
            ["CommandLine"] = 0x00AF1BC4,
            ["ArgumentCount"] = 0x00AE7A24,
            ["ArgumentVector"] = 0x00AE7A28,
            ["Environment"] = 0x00AE7A30,
            ["EnvironmentBlock"] = 0x00AE7A54,
            ["SecurityCookie"] = 0x00A23C64,
        };
        PropertyInfo[] members = typeof(GlobalState).GetProperties(BindingFlags.Public | BindingFlags.Static);
        Assert.Equal(expected.Count, members.Length);
        foreach (PropertyInfo member in members)
        {
            OriginalGlobalAttribute attribute = Assert.IsType<OriginalGlobalAttribute>(member.GetCustomAttribute<OriginalGlobalAttribute>());
            Assert.Equal(expected[member.Name], attribute.Address);
        }
    }
}
