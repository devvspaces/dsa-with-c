#include "sorting.h"

/**
 * merge - merge arrays
 *
 * @arr: array
 * @left: left index
 * @mid: mid index
 * @right: right index
 */
void merge(int *arr, int left, int mid, int right)
{
	int lp = left, rp = mid + 1;
	int len = right - left + 1;
	int *temp = calloc(len, sizeof(int));
	int tdx = 0;

	if (temp == NULL)
		perror("Memory error"), free(temp), exit(1);

	for (; lp <= mid && rp <= right; tdx++)
	{
		if (arr[lp] < arr[rp])
		{
			temp[tdx] = arr[lp];
			lp++;
		}
		else
		{
			temp[tdx] = arr[rp];
			rp++;
		}
	}

	for (; lp <= mid; tdx++, lp++)
		temp[tdx] = arr[lp];
	for (; rp <= right; tdx++, rp++)
		temp[tdx] = arr[rp];

	for (tdx = 0; tdx < len; tdx++, left++)
		arr[left] = temp[tdx];

	free(temp);
}

/**
 * mergesort - sorts an array using
 * merge sort recursively
 *
 * @arr: array to sort
 * @left: left index
 * @right: right index
 */
void mergesort(int *arr, int left, int right)
{
	int mid;

	if (right <= left)
		return;

	mid = left + (right - left) / 2;
	mergesort(arr, left, mid);
	mergesort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

/**
 * merge_sort - sorts an array using
 * merge sort
 *
 * @arr: array to sort
 * @size: size of array
 */
void merge_sort(int *arr, int size)
{
	mergesort(arr, 0, size - 1);
}
