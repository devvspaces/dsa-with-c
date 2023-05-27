#include "sorting.h"

/**
 * insertion_sort - sorts an array using
 * insertion sort
 *
 * @arr: array to sort
 * @size: size of array
 */
void insertion_sort(int *arr, int size)
{
	int start = 0;
	int idx, temp;

	for (; start < size; start++)
	{
		for (idx = start; idx > 0; idx--)
		{
			if (arr[idx - 1] > arr[idx])
			{
				temp = arr[idx - 1];
				arr[idx - 1] = arr[idx];
				arr[idx] = temp;
			}
		}
	}
}
