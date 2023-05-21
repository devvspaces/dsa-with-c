

/**
 * linear_search - searching an array linearly
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found else -1
 */
int linear_search(int *array, int size, int value)
{
	int idx;

	for (idx = 0; idx < size; idx++)
	{
		if (array[idx] == value)
		{
			return (idx);
		}
	}

	return (-1);
}
