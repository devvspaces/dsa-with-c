#include "test.h"
#include "test_algorithms/test_searching/main.h"

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
 * main - Entry point
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
