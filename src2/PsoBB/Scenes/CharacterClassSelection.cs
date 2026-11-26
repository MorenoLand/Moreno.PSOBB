namespace PsoBB.Scenes;

/// <summary>
/// One row of the class grid: the first and last class index accepted for that row.
/// </summary>
/// <param name="First">The first class index in the row.</param>
/// <param name="Last">The last class index in the row.</param>
public readonly record struct CharacterCreationRow(int First, int Last);

/// <summary>
/// The class-selection state of screen eight: three rows, a column clamped to the selected row,
/// and the original row and class selection stages.
/// </summary>
/// <remarks>
/// The original row bounds are read from the table at <c>0x91D9C0</c>; that data image is not part
/// of the lift, so the bounds must be supplied by the host. Empty bounds leave the selection at row
/// zero, column zero and make every move a no-op.
/// </remarks>
public sealed class CharacterClassSelection
{
	/// <summary>The number of rows in the original grid.</summary>
	public const int RowCount = 3;

	/// <summary>The sound identifier played after a row or column move.</summary>
	public const int MoveSoundId = 1391;

	/// <summary>The sound identifier played when a row or column is confirmed.</summary>
	public const int ConfirmSoundId = 1392;

	/// <summary>The sound identifier played when a class selection is cancelled.</summary>
	public const int CancelSoundId = 1395;

	private CharacterCreationRow[] _rows;
	private int _row;
	private int _column;
	private int _stage;

	/// <summary>
	/// Creates the selection with the supplied row bounds.
	/// </summary>
	/// <param name="rows">The three row bounds, or none while the table is unavailable.</param>
	public CharacterClassSelection(IEnumerable<CharacterCreationRow>? rows = null) => _rows = rows?.ToArray() ?? [];

	/// <summary>Raised with the original sound identifier when a selection action plays a sound.</summary>
	public event Action<int>? SoundRequested;

	/// <summary>Gets the selected row.</summary>
	public int Row => _row;

	/// <summary>Gets the selected class column.</summary>
	public int Column => _column;

	/// <summary>Gets the selection stage: zero selects a row, one selects a class, two is confirmed.</summary>
	public int Stage => _stage;

	/// <summary>Gets a value indicating whether the row bounds are present.</summary>
	public bool HasRows => _rows.Length == RowCount;

	/// <summary>Gets the selected class index.</summary>
	public int SelectedClass => _column;

	/// <summary>
	/// Replaces the row bounds and returns the selection to the original entry state.
	/// </summary>
	/// <param name="rows">The three row bounds, or none while the table is unavailable.</param>
	/// <exception cref="ArgumentException">The bound count is not three or a bound is reversed.</exception>
	public void SetRows(IEnumerable<CharacterCreationRow>? rows)
	{
		CharacterCreationRow[] replacement = rows?.ToArray() ?? [];
		if (replacement.Length != 0 && replacement.Length != RowCount)
			throw new ArgumentException("The class grid has three rows.", nameof(rows));
		foreach (CharacterCreationRow row in replacement)
		{
			if (row.First > row.Last)
				throw new ArgumentException("A class row ends before it starts.", nameof(rows));
		}
		_rows = replacement;
		Reset();
	}

	/// <summary>Returns the selection to the row-zero, column-zero, row-selection state.</summary>
	public void Reset()
	{
		_row = 0;
		_column = 0;
		_stage = 0;
	}

	/// <summary>
	/// Applies the row-selection input: a row move with wrap-around followed by an optional row
	/// confirmation that resets the class column and advances to class selection.
	/// </summary>
	/// <param name="direction">A positive value moves down, a negative value moves up, zero holds.</param>
	/// <param name="confirm">Whether the row was confirmed.</param>
	/// <returns><see langword="true"/> when the row or stage changed.</returns>
	[Original(0x004EB5F0, "CharacterMakingClass_UpdateRow_004eb5f0")]
	public bool UpdateRow(int direction, bool confirm)
	{
		if (_stage != 0 || !HasRows)
			return false;
		bool changed = false;
		if (direction != 0)
		{
			int step = direction > 0 ? 1 : -1;
			_row = (_row + step + RowCount) % RowCount;
			SoundRequested?.Invoke(MoveSoundId);
			changed = true;
		}
		if (!confirm)
			return changed;
		ResetColumnToRowStart();
		_stage = 1;
		SoundRequested?.Invoke(ConfirmSoundId);
		return true;
	}

	/// <summary>
	/// Applies the class-selection input: a clamped column move, then cancellation back to row
	/// selection or confirmation of the selected class.
	/// </summary>
	/// <param name="direction">A positive value moves right, a negative value moves left, zero holds.</param>
	/// <param name="confirm">Whether the class was confirmed.</param>
	/// <param name="cancel">Whether the class selection was cancelled.</param>
	/// <returns><see langword="true"/> when the column or stage changed.</returns>
	[Original(0x004EB6E0, "CharacterMakingClass_UpdateColumn_004eb6e0")]
	public bool UpdateColumn(int direction, bool confirm, bool cancel)
	{
		if (_stage != 1 || !HasRows)
			return false;
		bool changed = false;
		if (direction != 0)
		{
			int previous = _column;
			_column += direction > 0 ? 1 : -1;
			WrapColumn();
			if (_column != previous)
			{
				SoundRequested?.Invoke(MoveSoundId);
				changed = true;
			}
		}
		if (cancel)
		{
			_stage = 0;
			SoundRequested?.Invoke(CancelSoundId);
			return true;
		}
		if (!confirm)
			return changed;
		_stage = 2;
		SoundRequested?.Invoke(ConfirmSoundId);
		return true;
	}

	/// <summary>
	/// Wraps the column within the selected row's range: past the last class wraps to the first,
	/// before the first class wraps to the last.
	/// </summary>
	[Original(0x004EB7BC, "CharacterMakingClass_WrapColumn_004eb7bc")]
	public void WrapColumn()
	{
		if (!HasRows)
			return;
		CharacterCreationRow bounds = _rows[_row];
		if (_column >= bounds.First)
		{
			if (_column > bounds.Last)
				_column = bounds.First;
		}
		else
		{
			_column = bounds.Last;
		}
	}

	private void ResetColumnToRowStart()
	{
		CharacterCreationRow bounds = _rows[_row];
		if (_column < bounds.First || _column > bounds.Last)
			_column = bounds.First;
	}
}
