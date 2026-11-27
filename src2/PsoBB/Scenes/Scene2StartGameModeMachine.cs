using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Save;

namespace PsoBB.Scenes;

/// <summary>
/// The scene-2 state-9 mode machine: the 29-entry tables at <c>0x009A2DA0</c> and <c>0x009A2DA4</c>
/// and the update at <c>0x00403084</c>.
/// </summary>
/// <remarks>
/// The mode word is at offset 0x1C, the timer at 0x60 and the two counters at 0x7C and 0x80. The
/// constructor at 0x004057F4 selects mode 26 in this image. The handlers ported here use the save
/// manager, the file checks and the shipped build mode; the remaining mode handlers are not ported
/// and raise <see cref="NotSupportedException"/> with their number instead of inventing a step.
/// </remarks>
public sealed class Scene2StartGameModeMachine
{
	/// <summary>The number of update table entries.</summary>
	public const int ModeCount = 29;

	/// <summary>The timer value that forces the timeout mode.</summary>
	public const int TimeoutFrames = 75;

	/// <summary>The timeout mode number.</summary>
	public const int TimeoutMode = 22;

	/// <summary>The mode the shipped constructor selects.</summary>
	public const int InitialMode = 26;

	private readonly IDataFiles _files;

	/// <summary>
	/// Creates the machine over the data files the handlers use.
	/// </summary>
	/// <param name="files">The data files that resolve the save names.</param>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	public Scene2StartGameModeMachine(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		_files = files;
		Mode = InitialMode;
	}

	/// <summary>Gets the current mode word.</summary>
	public uint Mode { get; private set; }

	/// <summary>Gets or sets the timer word at offset 0x60.</summary>
	public int Timer { get; set; }

	/// <summary>Gets or sets the first counter at offset 0x7C.</summary>
	public int CounterA { get; set; }

	/// <summary>Gets or sets the second counter at offset 0x80.</summary>
	public int CounterB { get; set; }

	/// <summary>Gets or sets the selected slot at offset 0x58.</summary>
	public int SlotIndex { get; set; }

	/// <summary>Gets or sets the repeat flag at offset 0x5C.</summary>
	public int RepeatFlag { get; set; }

	/// <summary>Gets the nine file flags at offsets 0x34 through 0x54.</summary>
	public int[] FileFlags { get; } = new int[9];

	/// <summary>Gets the entry state at offset 0x30.</summary>
	public int EntryState { get; set; }

	/// <summary>Gets or sets the word at offset 0x20.</summary>
	public int Flag32 { get; set; }

	/// <summary>Gets or sets the word at offset 0x28.</summary>
	public int Field10 { get; set; }

	/// <summary>Gets or sets the word at offset 0x2C.</summary>
	public int Field11 { get; set; }

	/// <summary>Gets or sets the interface handle at offset 0x6C.</summary>
	public int Flag27 { get; set; }

	/// <summary>Gets or sets the per-controller press query used by modes 21, 22 and 25.</summary>
	public Func<uint, bool>? AnyControllerPressed { get; set; }

	/// <summary>Gets or sets the event query used by mode 24.</summary>
	public Func<int>? GameEvent { get; set; }

	/// <summary>Gets or sets the controller the mode-26 camera checks read.</summary>
	public ControllerButtonState? Controller { get; set; }

	/// <summary>Gets or sets the keyboard the mode-26 camera checks read.</summary>
	public KeyboardKeyState? Keyboard { get; set; }

	/// <summary>Gets or sets the network pump mode 26 runs while its object is present.</summary>
	public Action? PumpNetwork { get; set; }

	/// <summary>Gets or sets the camera angle at offset 0xA4.</summary>
	public float CameraRotation { get; set; }

	/// <summary>Gets or sets the object at offset 4740.</summary>
	public int InterfaceObject1185 { get; set; }

	/// <summary>Gets or sets the flag the mode-26 object tests.</summary>
	public bool InterfaceObject1185Flag { get; set; }

	/// <summary>Gets or sets the object at offset 4744.</summary>
	public int InterfaceObject1186 { get; set; }

	/// <summary>Gets or sets the flag at offset 4748.</summary>
	public int InterfaceObject1187 { get; set; }

	/// <summary>Gets or sets the choice flag at <c>0x00A3A940</c>.</summary>
	public int GlobalA3A940 { get; set; }

	/// <summary>Gets or sets the flag at <c>0x00A3A938</c>.</summary>
	[OriginalGlobal(0x00A3A938)]
	public static int GlobalA3A938 { get; set; }

	/// <summary>Gets or sets the screen flag word modes 20 and 28 read.</summary>
	public int ScreenFlags { get; set; }

	/// <summary>Gets or sets the scroll control the confirm handlers read.</summary>
	public Scene2TextControl? ScrollControl { get; set; }

	/// <summary>Gets or sets the receiver for a confirmed character index.</summary>
	public Action<int>? CharacterConfirmed { get; set; }

	/// <summary>
	/// Changes the mode, resets the timer and calls the entry callback when the mode differs.
	/// </summary>
	/// <param name="mode">The new mode.</param>
	/// <exception cref="NotSupportedException">The entry callback for the mode is not ported.</exception>
	[Original(0x004033C4)]
	public void SetMode(uint mode)
	{
		if (mode == Mode)
			return;
		Timer = 0;
		Mode = mode;
		EnterMode(mode);
	}

	/// <summary>
	/// Runs the handler for the current mode, applies the 75-frame timeout and decrements the counters.
	/// </summary>
	/// <exception cref="NotSupportedException">The handler for the current mode is not ported.</exception>
	[Original(0x00403084)]
	public void Advance()
	{
		Dispatch();
		if (Timer > TimeoutFrames && Mode != TimeoutMode)
		{
			Mode = TimeoutMode;
			Timer = 0;
		}
		CounterA = CounterA > 0 ? CounterA - 1 : 0;
		CounterB = CounterB > 0 ? CounterB - 1 : 0;
	}

	private void EnterMode(uint mode)
	{
		switch (mode)
		{
			case 5:
				SlotIndex = 0;
				Mode = 6;
				Timer = 0;
				break;
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 17:
			case 18:
			case 19:
			case 20:
			case 23:
			case 28:
				break;
			default:
				throw new NotSupportedException($"The entry callback for mode {mode} is not ported.");
		}
	}

	private void Dispatch()
	{
		switch (Mode)
		{
			case 0:
				Mode0();
				break;
			case 1:
				Mode1();
				break;
			case 2:
				Mode2();
				break;
			case 4:
				Mode4();
				break;
			case 6:
				Mode6();
				break;
			case 8:
				Mode8();
				break;
			case 9:
				Mode9();
				break;
			case 10:
				Mode10();
				break;
			case 11:
				Mode11();
				break;
			case 12:
				Mode12();
				break;
			case 13:
				Mode13();
				break;
			case 14:
				Mode14();
				break;
			case 15:
				Mode15();
				break;
			case 17:
				Mode17();
				break;
			case 19:
				Mode19();
				break;
			case 20:
				Mode20();
				break;
			case 28:
				Mode28();
				break;
			case 27:
				Mode27();
				break;
			case 21:
			case 22:
				Mode21();
				break;
			case 23:
				Mode23();
				break;
			case 24:
				Mode24();
				break;
			case 25:
				Mode25();
				break;
			case 26:
				Mode26();
				break;
			default:
				throw new NotSupportedException($"The handler for mode {Mode} is not ported.");
		}
	}

	[Original(0x004031E8)]
	private void Mode0()
	{
		Timer++;
		if (SystemSave.BuildMode() != 0)
			return;
		if (!SaveFileCheck.IsHandleSupported(0))
			return;
		for (int index = 0; index < FileFlags.Length; index++)
			FileFlags[index] = -1;
		int system;
		if (SystemCheck())
		{
			FileFlags[0] = 0;
			system = 0;
		}
		else if (SaveFileCheck.FileExists(_files, SaveFileCheck.SystemName))
		{
			FileFlags[0] = 1;
			system = 1;
		}
		else
		{
			system = FileFlags[0];
		}
		if (system == 1)
		{
			for (int slot = 0; slot < 4; slot++)
				ApplySlotFiles(slot);
		}
		SetMissingFlags();
		EntryState = 1;
		SetMode(1);
	}

	/// <summary>
	/// Selects the next mode from the nine file flags at <c>0x004033E8</c>.
	/// </summary>
	[Original(0x004033E8)]
	private void Mode1()
	{
		uint next = 3;
		bool anyZero = false;
		for (int index = 1; index < FileFlags.Length; index++)
			anyZero |= FileFlags[index] == 0;
		if (FileFlags[0] == 0 || anyZero)
			next = Flag32 != 0 ? 18u : 20u;
		else
		{
			bool anyMinus = FileFlags[0] == -1;
			bool anyOne = false;
			for (int index = 1; index < FileFlags.Length; index++)
			{
				anyMinus |= FileFlags[index] == -1;
				anyOne |= FileFlags[index] == 1;
			}
			if (FileFlags[0] == -1 && anyOne)
				next = 3;
			else if (anyMinus)
				next = Flag32 != 0 ? 19u : 20u;
			else
				next = Field10 != 0 || Field11 != 0 ? 2u : 3u;
		}
		if (Flag27 == 0 && next is 18 or 19)
			CounterB = 97;
		SetMode(next);
	}

	/// <summary>
	/// Returns the free-space budget at <c>0x00403770</c>; <c>0x00844D38</c> is the constant
	/// 819200000, so the value is always 90 minus 50000.
	/// </summary>
	/// <returns>The negative budget.</returns>
	[Original(0x00403770)]
	public static int FreeSpaceBudget() => 90 - 819200000 / 0x4000;

	[Original(0x00403864)]
	private void Mode2()
	{
		if (CounterB > 0)
			return;
		if (CounterA > 0)
			return;
		if (SystemSave.BuildMode() != 0)
			return;
		for (int index = 0; index < FileFlags.Length; index++)
			FileFlags[index] = -1;
		int system;
		if (SystemCheck())
		{
			FileFlags[0] = 0;
			system = 0;
		}
		else if (SaveFileCheck.FileExists(_files, SaveFileCheck.SystemName))
		{
			FileFlags[0] = 1;
			system = 1;
		}
		else
		{
			system = FileFlags[0];
		}
		if (system == 1)
		{
			for (int slot = 0; slot < 4; slot++)
				ApplySlotFiles(slot);
		}
		SetMissingFlags();
		bool ready = true;
		foreach (int flag in FileFlags)
			ready &= flag == 1;
		ChangeMode(ready ? 3u : (uint)TimeoutMode);
	}

	private void ChangeMode(uint mode)
	{
		Mode = mode;
		Timer = 0;
	}

	private bool SystemCheck()
	{
		int status = SaveFileCheck.Check(_files, 0, SaveFileCheck.SystemName);
		if (status != 0)
		{
			if (status != SaveFileCheck.MissingStatus)
				return true;
		}
		else if (SaveFileCheck.Length(_files, 0, SaveFileCheck.SystemName) > 0)
		{
			return true;
		}
		return SystemSave.Apply(_files) != 0;
	}

	private void SetMissingFlags()
	{
		for (int slot = 0; slot < 4; slot++)
		{
			int character = 1 + 2 * slot;
			if (FileFlags[character] == -1 && SaveFileCheck.Check(_files, 0, SaveFileCheck.CharacterName) == 0)
				FileFlags[character] = 1;
			int guild = 2 + 2 * slot;
			if (FileFlags[guild] == -1 && SaveFileCheck.Check(_files, 0, SaveFileCheck.GuildCardName) == 0)
				FileFlags[guild] = 1;
		}
	}

	private void ApplySlotFiles(int slot)
	{
		int character = 1 + 2 * slot;
		int status = SaveFileCheck.Check(_files, 0, SaveFileCheck.CharacterName);
		bool present = status == SaveFileCheck.MissingStatus
			|| (status == 0 && SaveFileCheck.Length(_files, 0, SaveFileCheck.CharacterName) > 0);
		if (!present || CharacterSaveLoad.Apply(_files) != 0)
			FileFlags[character] = 0;
		SaveFileCheck.Check(_files, 0, SaveFileCheck.GuildCardName);
		GuildSave.Wait(_files);
		FileFlags[2 + 2 * slot] = 0;
	}

	/// <summary>
	/// Chooses mode 14, 15, 16 or the fallback mode 1 from the nine file flags at
	/// <c>0x004041D0</c>.
	/// </summary>
	[Original(0x004041D0)]
	private void Mode19()
	{
		bool anyZero = FileFlags[0] == 0;
		bool anyOne = false;
		bool anyMinus = FileFlags[0] == -1;
		for (int index = 1; index < FileFlags.Length; index++)
		{
			anyZero |= FileFlags[index] == 0;
			anyOne |= FileFlags[index] == 1;
			anyMinus |= FileFlags[index] == -1;
		}
		if (anyZero || (FileFlags[0] == -1 && anyOne) || !anyMinus)
		{
			Field11 = 1;
			SetMode(1);
			return;
		}
		if (FileFlags[0] == -1)
		{
			SetMode(14);
			return;
		}
		for (int slot = 0; slot < 4; slot++)
		{
			if (FileFlags[1 + 2 * slot] == -1)
			{
				SlotIndex = slot;
				SetMode(15);
				return;
			}
			if (FileFlags[2 + 2 * slot] == -1)
			{
				SlotIndex = slot;
				SetMode(16);
				return;
			}
		}
		Field11 = 1;
		SetMode(1);
	}

	[Original(0x00404D60)]
	private void Mode27()
	{
		bool pressed = false;
		for (int index = 0; index < 4; index++)
			pressed |= AnyControllerPressed?.Invoke(0x101) ?? false;
		if (!pressed)
			return;
		EntryState = 1;
		SetMode(23);
	}

	/// <summary>
	/// Runs the idle character-screen handler at <c>0x004046D4</c>: camera rotation, the network
	/// pump while the interface object exists, and the four-controller confirm to mode 23 or 24.
	/// </summary>
	[Original(0x004046D4)]
	private void Mode26()
	{
		if (Flag27 != 0)
		{
			if (Controller?.IsPressed(0x00010000) == true)
				CameraRotation += -6f;
			else if (Controller?.IsPressed(0x00020000) == true)
				CameraRotation += 6f;
			else if (Keyboard?.IsKeyDown(8) == true)
				CameraRotation += -140f;
			else if (Keyboard?.IsKeyDown(9) == true)
				CameraRotation += 140f;
		}
		if (InterfaceObject1185 != 0)
		{
			if (InterfaceObject1185Flag)
			{
				if (GlobalA3A938 == 0)
					InterfaceObject1186 = 0;
				InterfaceObject1185 = 0;
			}
			else
			{
				PumpNetwork?.Invoke();
				return;
			}
		}
		bool pressed = false;
		for (int index = 0; index < 4; index++)
			pressed |= Controller?.IsPressed(0x101) == true;
		if (!pressed)
			return;
		if (InterfaceObject1187 != 0)
		{
			SceneManager.RequestScene(SceneManager.ExitScene);
			return;
		}
		InterfaceObject1186 = 0;
		if (GlobalA3A940 != 0)
		{
			EntryState = 1;
			ChangeMode(23);
		}
		else
		{
			EntryState = 0;
			ChangeMode(24);
		}
	}

	[Original(0x00404450)]
	private void Mode20()
	{
		if (ScrollControl is null || (ScrollControl.Flags132 & 2) == 0)
			return;
		int value = ScrollControl.SelectedValue();
		if (value == 0)
		{
			Flag32 = 1;
			SetMode(1);
		}
		else if (value == 1)
		{
			EntryState = 1;
			SetMode(23);
		}
	}

	[Original(0x004048E8)]
	private void Mode28()
	{
		if ((ScreenFlags & 2) != 0)
		{
			int value = ScrollControl?.SelectedValue() ?? -1;
			if (value == -1)
			{
				EntryState = 1;
				SetMode(23);
			}
			else
			{
				CharacterConfirmed?.Invoke(value);
				ChangeMode(26);
			}
		}
		else if ((ScreenFlags & 4) != 0)
		{
			EntryState = 1;
			SetMode(23);
		}
	}

	[Original(0x00404CA4)]
	private void Mode23()
	{
		if (CounterA > 0)
			return;
		switch (EntryState)
		{
			case 1:
				Scene2.EnterSharedScreenStateZero();
				break;
			case 0:
				Scene2.SelectLobbyScreenState();
				break;
			default:
				SceneManager.RequestScene(SceneManager.ExitScene);
				break;
		}
	}

	[Original(0x004044E0)]
	private void Mode21()
	{
		bool pressed = false;
		for (int index = 0; index < 4; index++)
			pressed |= AnyControllerPressed?.Invoke(0x101) ?? false;
		if (!pressed)
			return;
		EntryState = 2;
		SetMode(23);
	}

	[Original(0x004050F0)]
	private void Mode25()
	{
		bool pressed = false;
		for (int index = 0; index < 4; index++)
			pressed |= AnyControllerPressed?.Invoke(0x101) ?? false;
		if (!pressed)
			return;
		EntryState = 1;
		SetMode(23);
	}

	[Original(0x00404558)]
	private void Mode24()
	{
		int code = GameEvent?.Invoke() ?? 0;
		if (code == 0)
			return;
		SetMode(code == 0xF ? 23u : 25u);
	}

	[Original(0x00403F54)]
	private void Mode17()
	{
		Timer++;
		if (SystemSave.BuildMode() != 0 || SystemSave.Pending != 0)
			return;
		SaveFileCheck.Status();
		FileFlags[2 + 2 * SlotIndex] = 1;
		SetMode(19);
	}

	[Original(0x00403B68)]
	private void Mode4()
	{
		if (SystemSave.Pending == 0)
			SetMode(5);
	}

	[Original(0x00403B94)]
	private void Mode6()
	{
		if (SystemSave.Start(_files) != SaveFileCheck.MissingStatus)
			SetMode(7);
	}

	[Original(0x00403CCC)]
	private void Mode8()
	{
		SaveFileCheck.ClearStatus();
		SetMode(9);
	}

	[Original(0x00403D08)]
	private void Mode9()
	{
		Timer++;
		if (SystemSave.BuildMode() == 0)
		{
			FileFlags[0] = -1;
			SetMode(18);
		}
	}

	[Original(0x00403D48)]
	private void Mode10()
	{
		SaveFileCheck.ClearStatus();
		SetMode(11);
	}

	[Original(0x00403D90)]
	private void Mode11()
	{
		Timer++;
		if (SystemSave.BuildMode() == 0)
		{
			FileFlags[1 + 2 * SlotIndex] = -1;
			SetMode(18);
		}
	}

	[Original(0x00403DD4)]
	private void Mode12()
	{
		SaveFileCheck.ClearStatus();
		SetMode(13);
	}

	[Original(0x00403E1C)]
	private void Mode13()
	{
		Timer++;
		if (SystemSave.BuildMode() == 0)
		{
			FileFlags[2 + 2 * SlotIndex] = -1;
			SetMode(18);
		}
	}

	[Original(0x00403E60)]
	private void Mode14()
	{
		Timer++;
		if (SystemSave.BuildMode() == 0 && SystemSave.Pending == 0)
		{
			SaveFileCheck.Status();
			FileFlags[0] = 1;
			SetMode(19);
		}
	}

	[Original(0x00403EB4)]
	private void Mode15()
	{
		Timer++;
		if (SystemSave.BuildMode() == 0 && SystemSave.Pending == 0)
		{
			SaveFileCheck.Status();
			FileFlags[1 + 2 * SlotIndex] = 1;
			SetMode(19);
		}
	}
}





