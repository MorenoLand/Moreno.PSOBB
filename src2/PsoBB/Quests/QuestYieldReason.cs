namespace PsoBB.Quests;

/// <summary>
/// The reason a quest thread stopped executing script instructions.
/// </summary>
public enum QuestYieldReason : uint
{
	/// <summary>The thread is running and may execute another instruction.</summary>
	None = 0,

	/// <summary>The script yielded until the next scheduler pass.</summary>
	Sync = 1,

	/// <summary>The script returned from its outermost call.</summary>
	Return = 2,

	/// <summary>The script ended the thread.</summary>
	Exit = 3,

	/// <summary>The script is waiting for a window message.</summary>
	WindowMessage = 4,

	/// <summary>The script is waiting for a message to be dismissed.</summary>
	Message = 5,

	/// <summary>A yield value used only by the scheduler.</summary>
	Unused = 6,

	/// <summary>The script is waiting for a list selection.</summary>
	List = 7,

	/// <summary>The script is waiting for a fade to finish.</summary>
	Fade = 8,

	/// <summary>The script is waiting for an award item name selection.</summary>
	AwardItemName = 9,

	/// <summary>The script is waiting for an award item selection.</summary>
	AwardItemSelect = 10,

	/// <summary>The script is waiting for award item confirmation.</summary>
	AwardItemOk = 11,

	/// <summary>The script is waiting for an item selection.</summary>
	GetItemId = 12,
}
