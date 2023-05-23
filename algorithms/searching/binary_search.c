/**
 * binary_search - searching an array using
 * binary search algorithm
 *
 * @arr: array to search
 * @size: size of the arrary
 * @key: value to search for in the array
 *
 * Return: index of key if found else -1
 */
int binary_search(int *arr, int size, int key)
{
	int high, low, mid, val;

	high = size - 1;
	low = 0;

	while (high >= low)
	{
		mid = (high - low) / 2;
		val = arr[mid + low];
		if (val == key)
			return (mid + low);
		else if (val < key)
			low += mid + 1;
		else
			high -= ++mid;
	}

	return (-1);
}
