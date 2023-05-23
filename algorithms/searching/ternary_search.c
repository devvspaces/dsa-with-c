
/**
 * _ternary_search - ternary search
 *
 * @arr: array to search
 * @l: left pointer
 * @r: right pointer
 * @needle: needle to search
 *
 * Return: index of the needle in the array
 * if found else -1
 */
int _ternary_search(int *arr, int l, int r, int needle)
{
	int mid1 = l + ((r - l) / 3);
	int mid2 = r - ((r - l) / 3);

	if (r < l)
		return (-1);

	if (arr[mid1] == needle)
		return (mid1);
	if (arr[mid2] == needle)
		return (mid2);
	if (arr[mid1] > needle)
		return (_ternary_search(arr, l, --mid1, needle));
	if (needle > arr[mid2])
		return (_ternary_search(arr, ++mid2, r, needle));

	return (_ternary_search(arr, ++mid1, --mid2, needle));
}

/**
 * ternary_search - searches arrary for value using
 * ternary search algorithm.
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found else -1
 */
int ternary_search(int *array, int size, int value)
{
	return (_ternary_search(array, 0, size - 1, value));
}
