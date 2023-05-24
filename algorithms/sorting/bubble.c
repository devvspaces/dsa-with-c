#include "sorting.h"

void print_arr(int *arr, int size)
{
	int idx = 0;

	for (; idx < size; idx++)
		printf("%d, ", arr[idx]);
	printf("\n");
}


/**
 * bubble_sort - sorts an array using bubble sort
 *
 * @arr: array to sort
 * @size: size of array
 */
void bubble_sort(int *arr, int size)
{
	int stop = size - 1;
	int idx, temp;

	for (; stop > 0; stop--)
		for (idx = 0; idx < stop; idx++)
			if (arr[idx] > arr[idx + 1])
			{
				temp = arr[idx];
				arr[idx] = arr[idx + 1];
				arr[idx + 1] = temp;
			}
}
