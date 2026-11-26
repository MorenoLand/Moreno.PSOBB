using System.Reflection;
using PsoBB.Game;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported game-object movement, ground and age state.
/// </summary>
public sealed class GameObjectTests
{
	private sealed class RecordingGroundCollision(GroundContact? contact) : IGroundCollision
	{
		public int Calls { get; private set; }

		public Vector3 From { get; private set; }

		public Vector3 To { get; private set; }

		public int Mask { get; private set; }

		public GroundContact? Sweep(Vector3 from, Vector3 to, int mask)
		{
			Calls++;
			From = from;
			To = to;
			Mask = mask;
			return contact;
		}
	}

	private static GameObject MovingObject() => new()
	{
		Position = new Vector3(1, 2, 3),
		Direction = new Vector3(0, 1, 0),
		TimeStep = 4,
		MaximumAge = 30,
		Age = 0,
	};

	[Fact]
	public void AdvanceMovesAlongTheDirectionAndRecordsThePreviousPosition()
	{
		GameObject value = MovingObject();
		RecordingGroundCollision collision = new(null);
		value.Advance(collision);
		Assert.Equal(new Vector3(1, 6, 3), value.Position);
		Assert.Equal(new Vector3(1, 2, 3), value.PreviousPosition);
		Assert.Equal(0, value.Flags);
		Assert.Equal(1, collision.Calls);
		Assert.Equal(new Vector3(1, 2, 3), collision.From);
		Assert.Equal(new Vector3(1, 6, 3), collision.To);
		Assert.Equal(GameObject.GroundQueryMask, collision.Mask);
	}

	[Fact]
	public void AdvanceUsesTheContactPositionAndFlagsTheObject()
	{
		GameObject value = MovingObject();
		RecordingGroundCollision collision = new(new GroundContact(new Vector3(7, 8, 9)));
		bool resolved = false;
		ushort flagsAtCallback = 0;
		value.Advance(collision, () =>
		{
			resolved = true;
			flagsAtCallback = value.Flags;
		});
		Assert.True(resolved);
		Assert.Equal(0, flagsAtCallback);
		Assert.Equal(new Vector3(7, 8, 9), value.Position);
		Assert.Equal(new Vector3(1, 2, 3), value.PreviousPosition);
		Assert.Equal(GameObject.ChangeFlag, value.Flags);
	}

	[Fact]
	public void ResolveGroundContactLeavesAMissUnchanged()
	{
		GameObject value = MovingObject();
		value.PreviousPosition = new Vector3(1, 2, 3);
		value.Position = new Vector3(1, 6, 3);
		RecordingGroundCollision collision = new(null);
		bool resolved = false;
		value.ResolveGroundContact(collision, () => resolved = true);
		Assert.False(resolved);
		Assert.Equal(new Vector3(1, 6, 3), value.Position);
		Assert.Equal(new Vector3(1, 2, 3), value.PreviousPosition);
		Assert.Equal(0, value.Flags);
	}

	[Fact]
	public void ResolveGroundContactReplacesThePositionBeforeFlagging()
	{
		GameObject value = MovingObject();
		value.PreviousPosition = new Vector3(1, 2, 3);
		value.Position = new Vector3(1, 6, 3);
		RecordingGroundCollision collision = new(new GroundContact(new Vector3(5, 5, 5)));
		ushort flagsAtCallback = 0;
		value.ResolveGroundContact(collision, () => flagsAtCallback = value.Flags);
		Assert.Equal(0, flagsAtCallback);
		Assert.Equal(new Vector3(5, 5, 5), value.Position);
		Assert.Equal(GameObject.ChangeFlag, value.Flags);
	}

	[Fact]
	public void AdvanceAgeAddsOneTimeStep()
	{
		GameObject value = MovingObject();
		value.AdvanceAge();
		Assert.Equal(4, value.Age);
		Assert.Equal(0, value.Flags);
	}

	[Fact]
	public void AdvanceAgeAddsOneTimeStepAtTheMaximum()
	{
		GameObject value = MovingObject();
		value.Age = value.MaximumAge;
		value.AdvanceAge();
		Assert.Equal(34, value.Age);
		Assert.Equal(0, value.Flags);
	}

	[Fact]
	public void AdvanceAgeFlagsAnAgePastTheMaximum()
	{
		GameObject value = MovingObject();
		value.Age = value.MaximumAge + 1;
		value.AdvanceAge();
		Assert.Equal(31, value.Age);
		Assert.Equal(GameObject.ChangeFlag, value.Flags);
	}

	[Fact]
	public void AdvanceAgeTreatsAnUnorderedAgeAsNotPastTheMaximum()
	{
		GameObject value = MovingObject();
		value.Age = float.NaN;
		value.AdvanceAge();
		Assert.True(float.IsNaN(value.Age));
		Assert.Equal(0, value.Flags);
	}

	[Fact]
	public void UpdateAdvancesThePositionThenTheAge()
	{
		GameObject value = MovingObject();
		RecordingGroundCollision collision = new(null);
		value.Update(collision);
		Assert.Equal(new Vector3(1, 6, 3), value.Position);
		Assert.Equal(new Vector3(1, 2, 3), value.PreviousPosition);
		Assert.Equal(4, value.Age);
		Assert.Equal(0, value.Flags);
	}

	[Fact]
	public void UpdateAppliesBothAnExpiredAgeAndAGroundContact()
	{
		GameObject value = MovingObject();
		value.Age = value.MaximumAge + 1;
		RecordingGroundCollision collision = new(new GroundContact(new Vector3(2, 2, 2)));
		value.Update(collision);
		Assert.Equal(new Vector3(2, 2, 2), value.Position);
		Assert.Equal(31, value.Age);
		Assert.Equal(GameObject.ChangeFlag, value.Flags);
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Update"] = 0x006F0460,
			["Advance"] = 0x006F0474,
			["ResolveGroundContact"] = 0x006F04C0,
			["AdvanceAge"] = 0x006F053C,
		};
		MethodInfo[] methods = typeof(GameObject)
			.GetMethods(BindingFlags.Public | BindingFlags.Instance | BindingFlags.DeclaredOnly)
			.Where(method => method.GetCustomAttribute<OriginalAttribute>() is not null)
			.ToArray();
		Assert.Equal(expected.Count, methods.Length);
		foreach (MethodInfo method in methods)
		{
			OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
			Assert.Equal(expected[method.Name], attribute.Address);
		}
	}
}
