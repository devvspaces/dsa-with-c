#include "test.h"
#include "test_algorithms/test_searching/main.h"
#include "test_algorithms/test_sorting/main.h"
#include "test_data_structures/test_stack/main.h"
#include "test_data_structures/test_queue/main.h"
#include "test_data_structures/test_circular_queue/main.h"
#include "test_data_structures/test_linked_list/main.h"

/**
 * match - Check if a string matches a pattern
 * @string: String to check
 * @pattern: Pattern to match
 *
 * Return: 0 if match, -1 if not
 */
int match(const char *string, const char *pattern)
{
	regex_t reg;
	int value;

	value = regcomp(&reg, pattern, 0);
	if (value != 0)
		return (-1);

	value = regexec(&reg, string, 0, NULL, 0);
	regfree(&reg);
	if (value != 0)
		return (-1);
	return (0);
}

/**
 * array_equals - checks if an array a
 * is equal to b
 *
 * @a: first array
 * @b: second array
 * @size: size of an array
 *
 * Return: 0 if equal else 1
 */
int array_equals(int *a, int *b, int size)
{
	int idx;

	for (idx = 0; idx < size; idx++)
		if (a[idx] != b[idx])
			return (1);
	return (0);
}

/**
 * main - Entry point
 *
 * @ac: Arguments count
 * @av: Arguments vector
 *
 * Description: Run all tests
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int idx;
	test_t tests[] = {
		{"linear_search", test_linear_search},
		{"binary_search", test_binary_search},
		{"jump_search", test_jump_search},
		{"exponential_search", test_exponential_search},
		{"interpolation_search", test_interpolation_search},
		{"ternary_search", test_ternary_search},
		{"bubble_sort", test_bubble_sort},
		{"selection_sort", test_selection_sort},
		{"insertion_sort", test_insertion_sort},
		{"merge_sort", test_merge_sort},
		{"quick_sort", test_quick_sort},
		{"ds_stack", test_stack},
		{"ds_queue_linked", test_queue_linked_list},
		{"linked_list", test_linked_list},
		{"ds_queue_circular", test_queue_circular},
	};

	if (ac > 2)
	{
		printf("Usage: %s\n", av[0]);
		printf("Usage: %s test_name_pattern\n", av[0]);
		return (1);
	}

	for (idx = 0; (size_t)idx < TESTS_COUNT; idx++)
	{
		if (ac == 2 && match(tests[idx].name, av[1]) != 0)
			continue;
		if (tests[idx].func() != 0)
			printf(TEST_FAILURE " : %s\n", tests[idx].name);
		else
			printf(TEST_SUCCESS " : %s\n", tests[idx].name);
	}

	return (0);
}
