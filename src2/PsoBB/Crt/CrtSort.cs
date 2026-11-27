namespace PsoBB.Crt;

/// <summary>
/// Compares two array elements and returns a negative value, zero or a positive value, as the original's comparison callbacks do.
/// </summary>
/// <param name="left">The first element.</param>
/// <param name="right">The second element.</param>
/// <returns>The sign of the comparison.</returns>
public delegate int ElementCompare(ReadOnlySpan<byte> left, ReadOnlySpan<byte> right);

/// <summary>
/// The C runtime's sort: a median-of-three quicksort that groups equal keys and switches to a selection sort for runs of eight elements or fewer. Equal keys do not keep their order, so the steps follow the original exactly.
/// </summary>
public static class CrtSort
{
	private const int StackDepth = 30;
	private const int ShortSortLimit = 8;

	/// <summary>
	/// Sorts an array of fixed-width elements in place, as the original's <c>qsort</c> does.
	/// </summary>
	/// <param name="array">The elements; the length must be a whole number of elements.</param>
	/// <param name="width">The size of one element in bytes.</param>
	/// <param name="compare">The comparison.</param>
	[Original(0x008CADE0, "_qsort")]
	public static void QuickSort(Span<byte> array, int width, ElementCompare compare)
	{
		if (width == 0)
			return;
		int count = array.Length / width;
		if (count < 2)
			return;

		Span<int> stackLo = stackalloc int[StackDepth];
		Span<int> stackHi = stackalloc int[StackDepth];
		int depth = 0;
		int lo = 0;
		int hi = (count - 1) * width;
		for (;;)
		{
			int size = (hi - lo) / width + 1;
			bool more;
			if (size <= ShortSortLimit)
			{
				ShortSort(array, lo, hi, width, compare);
				more = false;
			}
			else
			{
				more = PartitionRange(array, width, compare, ref lo, ref hi, stackLo, stackHi, ref depth);
			}

			if (more)
				continue;
			if (depth == 0)
				return;
			depth--;
			lo = stackLo[depth];
			hi = stackHi[depth];
		}
	}

	/// <summary>
	/// Sorts the elements from <paramref name="lo"/> to <paramref name="hi"/> inclusive by repeatedly moving the largest to the end, as the original's <c>_shortsort</c> does.
	/// </summary>
	/// <param name="array">The elements.</param>
	/// <param name="lo">The byte offset of the first element.</param>
	/// <param name="hi">The byte offset of the last element.</param>
	/// <param name="width">The size of one element in bytes.</param>
	/// <param name="compare">The comparison.</param>
	[Original(0x008CAD70, "_shortsort")]
	public static void ShortSort(Span<byte> array, int lo, int hi, int width, ElementCompare compare)
	{
		while (hi > lo)
		{
			int max = lo;
			for (int position = lo + width; position <= hi; position += width)
			{
				if (Compare(array, position, max, width, compare) > 0)
					max = position;
			}
			if (max != hi)
				Swap(array, max, hi, width);
			hi -= width;
		}
	}

	/// <summary>
	/// Partitions one range around its median of three and records the part that is left for later. Returns true when <paramref name="lo"/> and <paramref name="hi"/> hold the part to sort next.
	/// </summary>
	private static bool PartitionRange(Span<byte> array, int width, ElementCompare compare, ref int lo, ref int hi, Span<int> stackLo, Span<int> stackHi, ref int depth)
	{
		int size = (hi - lo) / width + 1;
		int mid = lo + (size / 2) * width;

		if (Compare(array, lo, mid, width, compare) > 0)
			Swap(array, lo, mid, width);
		if (Compare(array, lo, hi, width, compare) > 0)
			Swap(array, lo, hi, width);
		if (Compare(array, mid, hi, width, compare) > 0)
			Swap(array, mid, hi, width);

		int loguy = lo;
		int higuy = hi;
		int pivot = mid;
		for (;;)
		{
			bool passedPivot = false;
			if (pivot > loguy)
			{
				for (;;)
				{
					loguy += width;
					if (loguy >= pivot)
						break;
					if (Compare(array, loguy, pivot, width, compare) > 0)
					{
						passedPivot = true;
						break;
					}
				}
			}
			if (!passedPivot)
			{
				for (;;)
				{
					loguy += width;
					if (loguy > hi || Compare(array, loguy, pivot, width, compare) > 0)
						break;
				}
			}

			for (;;)
			{
				higuy -= width;
				if (pivot >= higuy || Compare(array, higuy, pivot, width, compare) <= 0)
					break;
			}

			if (loguy > higuy)
				break;
			if (loguy != higuy)
				Swap(array, loguy, higuy, width);
			if (pivot == higuy)
				pivot = loguy;
		}

		higuy += width;
		bool scanDown = pivot >= higuy;
		if (!scanDown)
		{
			for (;;)
			{
				higuy -= width;
				if (pivot >= higuy)
				{
					scanDown = true;
					break;
				}
				if (Compare(array, higuy, pivot, width, compare) != 0)
					break;
			}
		}
		if (scanDown)
		{
			for (;;)
			{
				higuy -= width;
				if (higuy <= lo || Compare(array, higuy, pivot, width, compare) != 0)
					break;
			}
		}

		int leftSize = higuy - lo;
		int rightSize = hi - loguy;
		bool more;
		if (leftSize < rightSize)
		{
			if (loguy < hi)
				Push(stackLo, stackHi, ref depth, loguy, hi);
			more = lo < higuy;
			if (more)
				hi = higuy;
		}
		else
		{
			if (lo < higuy)
				Push(stackLo, stackHi, ref depth, lo, higuy);
			more = loguy < hi;
			if (more)
				lo = loguy;
		}
		return more;
	}

	private static void Push(Span<int> stackLo, Span<int> stackHi, ref int depth, int lo, int hi)
	{
		stackLo[depth] = lo;
		stackHi[depth] = hi;
		depth++;
	}

	private static int Compare(Span<byte> array, int left, int right, int width, ElementCompare compare) =>
		compare(array.Slice(left, width), array.Slice(right, width));

	private static void Swap(Span<byte> array, int first, int second, int width)
	{
		for (int offset = 0; offset < width; offset++)
			(array[first + offset], array[second + offset]) = (array[second + offset], array[first + offset]);
	}
}
