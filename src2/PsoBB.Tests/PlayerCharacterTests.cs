using System.Buffers.Binary;
using System.Reflection;
using PsoBB.Game;
using PsoBB.Game.Tasks;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Platform;
using PsoBB.Player;
using GameTaskScheduler = PsoBB.Game.Tasks.TaskScheduler;
using Vector2 = System.Numerics.Vector2;
using Vector3 = PsoBB.Mathematics.Vector3;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported player creation, movement state, heading, collision and animation clock.
/// </summary>
public sealed class PlayerCharacterTests
{
	private sealed class FixedPlayerInput(PlayerMovementIntent intent) : IPlayerInput
	{
		public PlayerMovementIntent Intent { get; set; } = intent;

		public PlayerMovementIntent ReadIntent() => Intent;
	}

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

	private static NinjaMotion Motion(uint frameCount)
	{
		byte[] data = new byte[0x24];
		BinaryPrimitives.WriteUInt32LittleEndian(data, 0x0C);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), frameCount);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(8), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(10), 1);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x0C), 0x14);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x10), 1);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x14), 0);
		BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(0x18), 0.0f);
		BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(0x1C), 0.0f);
		BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(0x20), 0.0f);
		return NinjaMotion.Parse(data, 1);
	}

	private static PlayerCharacter NewPlayer(PlayerAnimationSet? animations = null) =>
		PlayerCharacter.Create(3, new Vector3(10, 0, 20), 0, animations ?? PlayerAnimationSet.Empty);

	private static PlayerAnimationSet RunningAnimations(NinjaMotion motion) =>
		new() { Running = new PlayerAnimationClip("run", motion, 1.0f) };

	[Fact]
	public void CreateStartsStandingAtTheSuppliedPositionAndHeading()
	{
		PlayerCharacter player = NewPlayer();
		Assert.Equal(3, player.PlayerIndex);
		Assert.Equal(new Vector3(10, 0, 20), player.Position);
		Assert.Equal(new Vector3(10, 0, 20), player.PreviousPosition);
		Assert.Equal(0, player.Heading);
		Assert.Equal(0, player.TargetHeading);
		Assert.Equal(PlayerMovementState.Standing, player.MovementState);
		Assert.Equal(0.0f, player.Speed);
		Assert.Equal(new Vector3(0, 0, 0), player.Velocity);
		Assert.Equal(PlayerCollisionFlags.None, player.CollisionFlags);
	}

	[Fact]
	public void ForwardRunMovesOneFrameAtRunSpeedAndSelectsTheRunClip()
	{
		NinjaMotion motion = Motion(4);
		PlayerCharacter player = NewPlayer(RunningAnimations(motion));
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, false), ground);
		Assert.Equal(PlayerMovementState.Running, player.MovementState);
		Assert.Equal(PlayerMovementSettings.RunSpeed, player.Speed);
		Assert.Equal(0, player.Heading);
		Assert.Equal(new Vector3(10, 0, 148), player.Position);
		Assert.Equal(new Vector3(0, 0, 128), player.Velocity);
		Assert.Same(motion, player.Animation.Motion);
		Assert.Equal(1, ground.Calls);
		Assert.Equal(new Vector3(10, 0, 20), ground.From);
		Assert.Equal(new Vector3(10, 0, 148), ground.To);
		Assert.Equal(GameObject.GroundQueryMask, ground.Mask);
	}

	[Fact]
	public void ExplicitWalkUsesTheWalkSpeed()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, true), ground);
		Assert.Equal(PlayerMovementState.Walking, player.MovementState);
		Assert.Equal(PlayerMovementSettings.WalkSpeed, player.Speed);
		Assert.Equal(new Vector3(10, 0, 84), player.Position);
	}

	[Fact]
	public void AShortStickBelowTheRunThresholdWalksAtItsScaledSpeed()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(0, 0.5f), 0, false), ground);
		Assert.Equal(PlayerMovementState.Walking, player.MovementState);
		Assert.Equal(64.0f, player.Speed);
		Assert.Equal(new Vector3(10, 0, 84), player.Position);
	}

	[Fact]
	public void InputBelowTheMovementThresholdStandsStill()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(0, 0.05f), 0, false), ground);
		Assert.Equal(PlayerMovementState.Standing, player.MovementState);
		Assert.Equal(0.0f, player.Speed);
		Assert.Equal(new Vector3(10, 0, 20), player.Position);
		Assert.Equal(new Vector3(0, 0, 0), player.Velocity);
		Assert.Equal(0, ground.Calls);
	}

	[Fact]
	public void HeadingTurnsTowardTheMovementDirection()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(1, 0), 0, false), ground);
		Assert.Equal((ushort)0x4000, player.TargetHeading);
		Assert.Equal((ushort)0x0400, player.Heading);
	}

	[Fact]
	public void CameraHeadingOffsetsTheMovementDirection()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(null);
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0x2000, false), ground);
		Assert.Equal((ushort)0x2000, player.TargetHeading);
		Assert.Equal((ushort)0x0100, player.Heading);
	}

	[Fact]
	public void CollisionRejectsTheStepAndResetsTheVelocity()
	{
		PlayerCharacter player = NewPlayer();
		RecordingGroundCollision ground = new(new GroundContact(new Vector3(10, 0, 60)));
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, false), ground);
		Assert.Equal(new Vector3(10, 0, 20), player.Position);
		Assert.Equal(new Vector3(0, 0, 0), player.Velocity);
		Assert.Equal(0.0f, player.Speed);
		Assert.Equal(PlayerCollisionFlags.Blocked, player.CollisionFlags);
		Assert.Equal(1, player.StuckCounter);
	}

	[Fact]
	public void TheNextStepMovesAfterTheCollisionClears()
	{
		PlayerCharacter player = NewPlayer();
		PlayerMovementIntent intent = new(new Vector2(0, 1), 0, false);
		player.Update(intent, new RecordingGroundCollision(new GroundContact(new Vector3(10, 0, 60))));
		player.Update(intent, new RecordingGroundCollision(null));
		Assert.Equal(new Vector3(10, 0, 148), player.Position);
		Assert.Equal(PlayerCollisionFlags.None, player.CollisionFlags);
		Assert.Equal(0, player.StuckCounter);
	}

	[Fact]
	public void ClearCollisionClearsTheBlockedState()
	{
		PlayerCharacter player = NewPlayer();
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, false), new RecordingGroundCollision(new GroundContact(new Vector3(10, 0, 60))));
		player.ClearCollision();
		Assert.Equal(PlayerCollisionFlags.None, player.CollisionFlags);
		Assert.Equal(0, player.StuckCounter);
	}

	[Fact]
	public void MovementStateSelectsTheIdleWalkRunAndIdleClips()
	{
		PlayerAnimationClip idle = new("idle", Motion(1), 1.0f);
		PlayerAnimationClip walk = new("walk", Motion(2), 1.0f);
		PlayerAnimationClip run = new("run", Motion(4), 1.0f);
		PlayerAnimationSet animations = new() { Standing = idle, Walking = walk, Running = run };
		PlayerCharacter player = NewPlayer(animations);
		Assert.Same(idle, player.Animation.Clip);
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, true), new RecordingGroundCollision(null));
		Assert.Equal(PlayerMovementState.Walking, player.MovementState);
		Assert.Same(walk, player.Animation.Clip);
		player.Update(new PlayerMovementIntent(new Vector2(0, 1), 0, false), new RecordingGroundCollision(null));
		Assert.Equal(PlayerMovementState.Running, player.MovementState);
		Assert.Same(run, player.Animation.Clip);
		player.Update(new PlayerMovementIntent(new Vector2(0, 0), 0, false), new RecordingGroundCollision(null));
		Assert.Equal(PlayerMovementState.Standing, player.MovementState);
		Assert.Same(idle, player.Animation.Clip);
	}

	[Fact]
	public void AnimationAdvancesAndWrapsAtTheMotionFrameCount()
	{
		PlayerAnimationClip clip = new("run", Motion(4), 1.5f);
		PlayerAnimation animation = new();
		animation.Play(clip);
		Assert.Equal(4u, animation.FrameCount);
		animation.Advance();
		Assert.Equal(1.5, animation.Elapsed, 3);
		animation.Advance();
		Assert.Equal(3.0, animation.Elapsed, 3);
		animation.Advance();
		Assert.Equal(0.5, animation.Elapsed, 3);
	}

	[Fact]
	public void PlayingAClipRestartsItsClock()
	{
		PlayerAnimation animation = new();
		animation.Play(new PlayerAnimationClip("run", Motion(4), 1.0f));
		animation.Advance();
		animation.Play(new PlayerAnimationClip("walk", Motion(2), 1.0f));
		Assert.Equal(0.0f, animation.Elapsed);
		Assert.Equal(2u, animation.FrameCount);
	}

	[Fact]
	public void TheTaskAdvancesThePlayerOncePerSchedulerUpdate()
	{
		ManualGameClock clock = new(new DateTimeOffset(2026, 11, 26, 12, 0, 0, TimeSpan.Zero));
		GameTaskScheduler scheduler = new(clock);
		PlayerCharacter player = NewPlayer();
		FixedPlayerInput input = new(new PlayerMovementIntent(new Vector2(0, 1), 0, false));
		PlayerTask task = new(player, input, new RecordingGroundCollision(null));
		scheduler.Add(task);
		clock.Advance(TimeSpan.FromMilliseconds(33));
		scheduler.Update();
		Assert.Equal(1, scheduler.FrameCount);
		Assert.Equal(new Vector3(10, 0, 148), player.Position);
		clock.Advance(TimeSpan.FromMilliseconds(33));
		scheduler.Update();
		Assert.Equal(2, scheduler.FrameCount);
		Assert.Equal(new Vector3(10, 0, 276), player.Position);
	}

	[Fact]
	public void TheInputManagerAdapterReadsTheCombinedMoveVector()
	{
		MemoryGameInput source = new();
		InputManager manager = new(source);
		InputManagerPlayerInput input = new(manager) { CameraHeading = 0x2000, Walk = true };
		source.SetKey(GameKey.W, true);
		manager.Update(TimeSpan.Zero);
		PlayerMovementIntent intent = input.ReadIntent();
		Assert.Equal(new Vector2(0, 1), intent.Move);
		Assert.Equal(0x2000, intent.CameraHeading);
		Assert.True(intent.Walk);
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Create"] = 0x00686A18,
			["ClearCollision"] = 0x0069BBA8,
			["ApplyInput"] = 0x0069BBD0,
			["Advance"] = 0x0069C438,
			["InterpolateHeading"] = 0x0069C4AC,
			["Play"] = 0x007A9A6C,
		};
		MethodInfo[] methods =
		[
			typeof(PlayerCharacter).GetMethod(nameof(PlayerCharacter.Create))!,
			typeof(PlayerCharacter).GetMethod(nameof(PlayerCharacter.ClearCollision))!,
			typeof(PlayerMovement).GetMethod(nameof(PlayerMovement.ApplyInput))!,
			typeof(PlayerMovement).GetMethod(nameof(PlayerMovement.Advance))!,
			typeof(PlayerMovement).GetMethod(nameof(PlayerMovement.InterpolateHeading))!,
			typeof(PlayerAnimation).GetMethod(nameof(PlayerAnimation.Play))!,
		];
		foreach (MethodInfo method in methods)
		{
			OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
			Assert.Equal(expected[method.Name], attribute.Address);
		}
		MethodInfo advance = typeof(PlayerAnimation).GetMethod(nameof(PlayerAnimation.Advance))!;
		Assert.Equal(0x007AA094, Assert.IsType<OriginalAttribute>(advance.GetCustomAttribute<OriginalAttribute>()).Address);
	}
}
