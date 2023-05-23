
/**
 * search_array - search an array using two pointers
 *
 * Description: Searches an arrary from point start
 * to point end, looking for needle.
 *
 * @arr: array to search
 * @needle: value to search for
 * @start: start pointer
 * @end: end pointer
 *
 * Return: index of the needle if found else -1
 */
int search_array(int *arr, int needle, int start, int end)
{
	while (start <= end)
	{
		if (arr[start] == needle)
			return (start);
		start++;
	}
	return (-1);
}

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
	return (search_array(array, value, 0, size - 1));
}
