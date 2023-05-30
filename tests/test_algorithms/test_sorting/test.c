
#include "main.h"

/**
 * create_arr - create an array
 *
 * @size: size of array
 *
 * Return: pointer to array
 */
int *create_arr(int size, ...)
{
	int *arr = malloc(sizeof(int) * size);
	va_list args;
	int i;

	va_start(args, size);

	for (i = 0; i < size; i++)
		arr[i] = va_arg(args, int);

	va_end(args);

	return (arr);
}

/**
 * free_cases - free test cases
 *
 * @cases: test cases
 */
void free_cases(sort_case_t *cases)
{
	int i;

	for (i = 0; cases[i].arr != NULL; i++)
	{
		free(cases[i].arr);
		free(cases[i].sorted);
	}

	free(cases);
}

/**
 * create_test_cases - create test cases
 *
 * Return: pointer to array of test cases
 */
sort_case_t *create_test_cases(void)
{
	int total_cases = 6;
	sort_case_t *cases;

	cases = malloc(total_cases * sizeof(sort_case_t));

	cases[0].arr = create_arr(11, 1, 4, 1, 2, 7, 9, 7, 3, 1, 5, 6);
	cases[0].sorted = create_arr(11, 1, 1, 1, 2, 3, 4, 5, 6, 7, 7, 9);
	cases[0].size = 11;

	cases[1].arr = create_arr(4, 9, 3, 6, 2);
	cases[1].sorted = create_arr(4, 2, 3, 6, 9);
	cases[1].size = 4;

	cases[2].arr = create_arr(3, 7, 2, 9);
	cases[2].sorted = create_arr(3, 2, 7, 9);
	cases[2].size = 3;

	cases[3].arr = create_arr(1, 10);
	cases[3].sorted = create_arr(1, 10);
	cases[3].size = 1;

	cases[4].arr = create_arr(5, 8, 7, 6, 5, 4);
	cases[4].sorted = create_arr(5, 4, 5, 6, 7, 8);
	cases[4].size = 5;

	cases[5].arr = NULL;
	cases[5].sorted = NULL;
	cases[5].size = 0;

	return (cases);
}
