
#include "../../../algorithms/sorting/sorting.h"
#include "main.h"

/**
 * test_insertion_sort - Test insertion sort
 *
 * Return: 0 on success, -1 on failure
 */
int test_insertion_sort(void)
{
	int i, size = 11;

	int arr[] = {1, 4, 1, 2, 7, 9, 7, 3, 1, 5, 6};
	int sorted[] = {1, 1, 1, 2, 3, 4, 5, 6, 7, 7, 9};
	sort_test_case_t cases[2];
	sort_test_case_t case1;
	sort_test_case_t case2 = {NULL, NULL};

	case1.arr = arr;
	case1.sorted = sorted;
	cases[0] = case1;
	cases[1] = case2;

	for (i = 0; cases[i].arr != NULL; i++)
	{
		insertion_sort(cases[i].arr, size);
		if (array_equals(cases[i].arr, cases[i].sorted, size) == 1)
			return (-1);
	}
	return (0);
}
