#include "sorting.h"

/**
 * recur - quicksort recursive
 *
 * @arr: array to sort
 * @lo: left pointer
 * @hi: right pointer
 * @pivot: pivot
 * @size: size of the array
 */
void recur(int *arr, int lo, int hi, int pivot, int size)
{
	int temp, lo_temp;

	if (lo >= pivot)
		return;

	lo_temp = lo;

	while (lo <= pivot)
	{
		for (; arr[lo] < arr[pivot]; lo++)
			;

		for (; arr[hi] >= arr[pivot] && hi > lo; hi--)
			;

		if (lo == pivot)
		{
			recur(arr, lo_temp, pivot - 2, pivot - 1, size);
			return;
		}

		if (lo == hi)
		{
			temp = arr[pivot];
			arr[pivot] = arr[hi];
			arr[hi] = temp;

			recur(arr, lo_temp, hi - 2, hi - 1, size);
			recur(arr, hi + 1, pivot - 1, pivot, size);
			return;
		}

		temp = arr[lo];
		arr[lo] = arr[hi];
		arr[hi] = temp;
	}
}

/**
 * quick_sort - sorts an array using
 * quick sort
 *
 * @arr: array to sort
 * @size: size of array
 */
void quick_sort(int *arr, int size)
{
	recur(arr, 0, size - 2, size - 1, size);
}
