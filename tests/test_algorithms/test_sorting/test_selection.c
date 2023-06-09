
#include "../../../algorithms/sorting/sorting.h"
#include "main.h"

/**
 * test_selection_sort - Test selection sort
 *
 * Return: 0 on success, -1 on failure
 */
int test_selection_sort(void)
{
	int i;
	sort_case_t *cases;

	cases = create_test_cases();

	for (i = 0; cases[i].arr != NULL; i++)
	{
		selection_sort(cases[i].arr, cases[i].size);
		if (array_equals(cases[i].arr, cases[i].sorted, cases[i].size) == 1)
			return (free_cases(cases), -1);
	}

	free_cases(cases);
	return (0);
}
