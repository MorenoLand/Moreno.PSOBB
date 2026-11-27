using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Save;
using PsoBB.Text;

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

	/// <summary>Gets or sets the host pump for the asynchronous save worker.</summary>
	public Action? PumpSave { get; set; }

	/// <summary>Gets or sets the first progress object at offset 0x64.</summary>
	public int ProgressObject25 { get; set; }

	/// <summary>Gets or sets the second progress object at offset 0x68.</summary>
	public int ProgressObject26 { get; set; }

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

	/// <summary>Gets or sets the patch-busy query used by the mode-14 entry.</summary>
	public Func<bool>? PatchBusy { get; set; }

	/// <summary>Gets or sets the character-file query used by the mode-14 entry.</summary>
	public Func<bool>? CharacterFileReady { get; set; }

	/// <summary>Gets or sets the patch-validation query used by the mode-15 entry.</summary>
	public Func<int>? PatchValidation { get; set; }

	/// <summary>Gets or sets the patch-release action used by the mode-16 entry.</summary>
	public Action? PatchRelease { get; set; }

	/// <summary>Gets or sets the event-code query used by the mode-25 entry.</summary>
	public Func<int>? EventCode { get; set; }

	/// <summary>Gets or sets the unitxt table the mode-25 text comes from.</summary>
	public UnitxtTable? TextTable { get; set; }

	/// <summary>Gets the selected mode-25 text, or <see langword="null"/>.</summary>
	public string? Mode25Text { get; private set; }

	/// <summary>Gets a value indicating whether mode 25 selected non-empty text.</summary>
	public bool Mode25Ready { get; private set; }

	/// <summary>Gets or sets the shared message buffer at byte offset 132.</summary>
	public string MessageText { get; set; } = "";

	/// <summary>Gets the mode-27 text copied from the shared buffer.</summary>
	public string? Mode27Text { get; private set; }

	/// <summary>Gets a value indicating whether mode 27 has non-empty text.</summary>
	public bool Mode27Ready { get; private set; }

	/// <summary>Gets the mode-20 message text, or <see langword="null"/>.</summary>
	public string? Mode20Text { get; private set; }

	/// <summary>Gets the first mode-20 option label, or <see langword="null"/>.</summary>
	public string? Mode20OptionA { get; private set; }

	/// <summary>Gets the second mode-20 option label, or <see langword="null"/>.</summary>
	public string? Mode20OptionB { get; private set; }

	/// <summary>Gets a value indicating whether mode 20 selected non-empty text.</summary>
	public bool Mode20Ready { get; private set; }

	/// <summary>Gets the mode-22 message text, or <see langword="null"/>.</summary>
	public string? Mode22Text { get; private set; }

	/// <summary>Gets a value indicating whether mode 22 selected non-empty text.</summary>
	public bool Mode22Ready { get; private set; }

	/// <summary>Gets the element and cursor slots the entry callbacks create.</summary>
	public Scene2WindowChildren Children { get; } = new();

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
		PumpSave?.Invoke();
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
			case 3:
				Children.Release();
				break;
			case 5:
				SlotIndex = 0;
				Mode = 6;
				Timer = 0;
				break;
			case 14:
				EnterMode14();
				break;
			case 15:
				EnterMode15();
				break;
			case 16:
				EnterMode16();
				break;
			case 20:
				EnterMode20();
				break;
			case 21:
				EnterMode21();
				break;
			case 22:
				EnterMode22();
				break;
			case 23:
				Children.Release();
				break;
			case 25:
				EnterMode25();
				break;
			case 27:
				EnterMode27();
				break;
			case 0:
			case 1:
			case 2:
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
				break;
			default:
				throw new NotSupportedException($"The entry callback for mode {mode} is not ported.");
		}
	}

	/// <summary>
	/// Selects the mode-20 message pair at <c>0x004054C0</c>.
	/// </summary>
	/// <remarks>
	/// The condition is the nine-flag helper at <c>0x00404ADC</c>; the text-box creation at
	/// <c>0x00402F0C</c> is the same host seam as modes 22 and 25.
	/// </remarks>
	[Original(0x004054C0)]
	private void EnterMode20()
	{
		Mode20Text = null;
		Mode20OptionA = null;
		Mode20OptionB = null;
		Mode20Ready = false;
		Children.Ensure(this);
		Children.Release();
		if (TextTable is null)
			return;
		bool firstPair = Mode20UsesFirstPair();
		string first = TextTable.GetString(29, firstPair ? 23 : 25);
		string second = TextTable.GetString(29, firstPair ? 24 : 26);
		Mode20Text = first + "\n" + second;
		Mode20OptionA = TextTable.GetString(29, 20);
		Mode20OptionB = TextTable.GetString(29, 21);
		Mode20Ready = Mode20Text.Length > 0;
		MessageText = Mode20Text;
	}

	/// <summary>
	/// Returns the <c>0x00404ADC</c> result for the nine file flags.
	/// </summary>
	/// <returns><see langword="true"/> when the first message pair is selected.</returns>
	[Original(0x00404ADC)]
	private bool Mode20UsesFirstPair()
	{
		if (FileFlags[0] == 1)
			return false;
		foreach (int flag in FileFlags)
		{
			if (flag != -1)
				return true;
		}
		return false;
	}

	/// <summary>
	/// Evaluates the mode-21 patch-warning budget at <c>0x0040544C</c>.
	/// </summary>
	/// <remarks>
	/// <c>0x00403770</c> returns <c>90 - 819200000 / 0x4000 = -49910</c>, so the positive-budget
	/// body that builds the warning text and selects <c>0x00402F0C</c> is unreachable in this image.
	/// </remarks>
	[Original(0x0040544C)]
	private void EnterMode21()
	{
		if (FreeSpaceBudget() > 0)
			throw new NotSupportedException("The unreachable mode-21 warning body is not ported.");
	}

	/// <summary>
	/// Selects the two mode-22 text lines at <c>0x004053E0</c>.
	/// </summary>
	/// <remarks>
	/// The text-box creation at <c>0x00402F0C</c> and the child elements at <c>0x00403784</c> are host seams.
	/// </remarks>
	[Original(0x004053E0)]
	private void EnterMode22()
	{
		Mode22Text = null;
		Mode22Ready = false;
		Children.Ensure(this);
		Children.Release();
		if (TextTable is null)
			return;
		string first = TextTable.GetString(29, 27);
		string second = TextTable.GetString(29, 34);
		Mode22Text = first + "\n" + second;
		Mode22Ready = Mode22Text.Length > 0;
		MessageText = Mode22Text;
	}

	[Original(0x00405168)]
	private void EnterMode25()
	{
		Mode25Text = null;
		Mode25Ready = false;
		int code = EventCode?.Invoke() ?? -1;
		if (code is < 0 or > 13 || TextTable is null)
			return;
		int index = code switch
		{
			0 => 5,
			1 => 6,
			2 => 7,
			3 => 8,
			4 => 9,
			5 => 10,
			6 => 11,
			7 => 14,
			8 => 15,
			9 => 16,
			10 => 17,
			11 => 18,
			12 => 19,
			_ => 20,
		};
		Mode25Text = TextTable.GetString(71, index);
		Mode25Ready = Mode25Text.Length > 0;
		MessageText = Mode25Text;
	}

	/// <summary>
	/// Displays the shared message buffer at <c>0x00404DFC</c>.
	/// </summary>
	/// <remarks>
	/// The text-box creation at <c>0x00402F0C</c> remains the host seam.
	/// </remarks>
	[Original(0x00404DFC)]
	private void EnterMode27()
	{
		Children.Ensure(this);
		Children.Release();
		Mode27Text = MessageText;
		Mode27Ready = Mode27Text.Length > 0;
	}

	[Original(0x00405670)]
	private void EnterMode14()
	{
		if (SystemSave.BuildMode() <= 4095)
		{
			if (SystemSave.SaveBlock is not null)
				SystemSave.Recreate();
			if (PatchBusy?.Invoke() == true)
			{
				if (CharacterFileReady?.Invoke() == true)
				{
					ChangeMode(22);
					return;
				}
				SystemSave.Pending = 15;
				return;
			}
		}
		ChangeMode(22);
	}

	[Original(0x00405600)]
	private void EnterMode15()
	{
		if (SystemSave.BuildMode() <= 4095 && (PatchValidation?.Invoke() ?? 0) == 7)
			return;
		ChangeMode(22);
	}

	[Original(0x00405580)]
	private void EnterMode16()
	{
		if (SystemSave.BuildMode() <= 4095)
		{
			PatchRelease?.Invoke();
			SystemSave.Pending = 12;
			return;
		}
		ChangeMode(22);
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
			case 3:
				Mode3();
				break;
			case 4:
				Mode4();
				break;
			case 6:
				Mode6();
				break;
			case 7:
				Mode7();
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
			case 16:
				Mode16();
				break;
			case 17:
				Mode17();
				break;
			case 18:
				Mode18();
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

	/// <summary>
	/// Starts the guild load and selects mode 17 at <c>0x00403F14</c>.
	/// </summary>
	[Original(0x00403F14)]
	private void Mode16()
	{
		if (GuildSave.BeginTime(0) != 0)
			return;
		ChangeMode(17);
	}

	/// <summary>
	/// Selects the mode for the first missing or one-valued file flag at <c>0x00403FB4</c>.
	/// </summary>
	[Original(0x00403FB4)]
	private void Mode18()
	{
		bool allSet = true;
		bool anyOne = false;
		for (int index = 0; index < FileFlags.Length; index++)
		{
			allSet &= FileFlags[index] != 0;
			if (index > 0)
				anyOne |= FileFlags[index] == 1;
		}
		if (allSet && (FileFlags[0] != -1 || !anyOne))
		{
			SetMode(1);
			return;
		}
		if (FileFlags[0] == 0)
		{
			Field10 = 1;
			SetMode(8);
			return;
		}
		for (int slot = 0; slot < 4; slot++)
		{
			if (FileFlags[1 + 2 * slot] == 0)
			{
				SlotIndex = slot;
				Field10 = 1;
				SetMode(10);
				return;
			}
			if (FileFlags[2 + 2 * slot] == 0)
			{
				SlotIndex = slot;
				Field10 = 1;
				SetMode(12);
				return;
			}
		}
		if (FileFlags[0] == -1)
		{
			for (int slot = 0; slot < 4; slot++)
			{
				if (FileFlags[1 + 2 * slot] == 1)
				{
					SlotIndex = slot;
					Field10 = 1;
					SetMode(10);
					return;
				}
				if (FileFlags[2 + 2 * slot] == 1)
				{
					SlotIndex = slot;
					Field10 = 1;
					SetMode(12);
					return;
				}
			}
		}
		SetMode(1);
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

	/// <summary>
	/// Starts the system load at <c>0x00403AF0</c> and selects mode 4 or 22.
	/// </summary>
	[Original(0x00403AF0)]
	private void Mode3()
	{
		if (CounterA > 0)
		{
			Mode3Progress();
			return;
		}
		Timer++;
		if (SystemSave.BuildMode() != 0)
			return;
		SetMode(SystemSave.StartAlternate(_files, alternate: false) != 0 ? 22u : 4u);
	}

	/// <summary>
	/// Clears the two progress objects at <c>0x00403AB8</c>; their host flag word is not modelled.
	/// </summary>
	[Original(0x00403AB8)]
	private void Mode3Progress()
	{
		ProgressObject25 = 0;
		ProgressObject26 = 0;
	}

	/// <summary>
	/// Validates the four character slots at <c>0x00403BD4</c> and selects mode 6, 23, 22 or 1.
	/// </summary>
	[Original(0x00403BD4)]
	private void Mode7()
	{
		if (SystemSave.Pending != 0)
			return;
		byte[]? image = CharacterSaveLoad.LoadBuffer;
		if (image is null || CharacterSaveCodec.Validate(image) != CharacterSaveStatus.Valid)
			FileFlags[1 + 2 * SlotIndex] = 0;
		SlotIndex++;
		if (SlotIndex < 4)
		{
			ChangeMode(6);
			return;
		}
		if (FileFlags[1] != 0 && FileFlags[3] != 0 && FileFlags[5] != 0 && FileFlags[7] != 0)
		{
			EntryState = 0;
			SetMode(23);
		}
		else if (RepeatFlag != 0)
			SetMode(22);
		else
		{
			RepeatFlag = 1;
			SetMode(1);
		}
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






