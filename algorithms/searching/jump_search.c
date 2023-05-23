#include <math.h>

/**
 * jump_search - searches arrary for value using
 * jump search algorithm.
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found else -1
 */
int jump_search(int *array, int size, int value)
{
	int m = sqrt(size);
	int idx = 0, next = 0;

	while (idx <= size - 1)
	{
		next = (idx + 1) * m;
		if (next >= size)
		{
			next = size - 1;
			break;
		}

		if (array[idx] <= value && value <= array[next])
			break;

		idx = next;
	}

	for (; idx <= size - 1 && idx <= next; ++idx)
	{
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
