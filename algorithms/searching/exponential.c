#include "searching.h"

/**
 * exponential_search - searches arrary for value using
 * exponential search algorithm.
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found else -1
 */
int exponential_search(int *array, int size, int value)
{
	int idx = 1;
	int lo, hi, mid;

	while (idx <= size - 1)
	{
		if (array[idx] >= value)
		{
			lo = idx / 2;
			hi = idx;
			break;
		}
		idx *= 2;
	}

	while ((idx <= size - 1) && (lo <= hi))
	{
		mid = ((hi - lo) / 2) + lo;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			hi = --mid;
		else
			lo = ++mid;
	}
	return (-1);
}
