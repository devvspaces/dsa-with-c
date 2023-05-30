
#include "../../../algorithms/sorting/sorting.h"
#include "main.h"

/**
 * test_bubble_sort - Test bubble sort
 *
 * Return: 0 on success, -1 on failure
 */
int test_bubble_sort(void)
{
	int i;
	sort_case_t *cases;

	cases = create_test_cases();

	for (i = 0; cases[i].arr != NULL; i++)
	{
		bubble_sort(cases[i].arr, cases[i].size);
		if (array_equals(cases[i].arr, cases[i].sorted, cases[i].size) == 1)
			return (-1);
	}
	return (0);
}
