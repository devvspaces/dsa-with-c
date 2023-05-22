#include "../algorithms/searching/searching.h"
#include "test.h"

int test_binary_search(void)
{
	int i, actual;
	int array[] = {1, 2, 3, 4, 5};
	int size = sizeof(array) / sizeof(array[0]);

	test_case_t cases[] = {
		{1, 0},
		{2, 1},
		{3, 2},
		{4, 3},
		{5, 4},
		{6, -1},
	};

	for (i = 0; (size_t)i < sizeof(cases) / sizeof(cases[0]); i++)
	{
		actual = binary_search(array, size, cases[i].value);
		if (actual != cases[i].expected)
			return (-1);
	}

	return (0);
}
