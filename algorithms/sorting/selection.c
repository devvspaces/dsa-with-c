#include "sorting.h"

/**
 * selection_sort - sorts an array using
 * selection sort
 *
 * @arr: array to sort
 * @size: size of array
 */
void selection_sort(int *arr, int size)
{
	int start = 0;
	int idx, minIdx, temp;

	for (; start < size - 1; start++)
	{
		minIdx = start;
		for (idx = start + 1; idx < size; idx++)
		{
			if (arr[idx] < arr[minIdx])
				minIdx = idx;
		}
		temp = arr[minIdx];
		arr[minIdx] = arr[start];
		arr[start] = temp;
	}
}
