/**
 * interpolation_search - searches arrary for value using
 * interpolation search algorithm.
 *
 * @arr: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found else -1
 */
int interpolation_search(int *arr, int size, int value)
{
	int pos;
	int lo = 0, hi = size - 1;

	while (lo < hi)
	{
		pos = lo + (value - arr[lo]) * (hi - lo) / (arr[hi] - arr[lo]);
		if (arr[pos] == value)
			return (pos);
		if (arr[pos] > value)
		{
			hi = --pos;
		}
		else
		{
			lo = ++pos;
		}
	}
	return (-1);
}
