
#include "../../../algorithms/searching/searching.h"
#include "main.h"

/**
 * test_interpolation_search - Test interpolation search algorithm
 *
 * Return: 0 on success, -1 on failure
 */
int test_interpolation_search(void)
{
	int i, actual;
	int array[] = {1, 2, 3, 4, 5};
	int size = 5;

	test_case_t cases[] = {
		{1, 0},
		{2, 1},
		{3, 2},
		{4, 3},
		{5, 4},
		{6, -1},
	};

	for (i = 0; i < size; i++)
	{
		actual = interpolation_search(array, size, cases[i].value);
		if (actual != cases[i].expected)
			return (-1);
	}
	return (0);
}
