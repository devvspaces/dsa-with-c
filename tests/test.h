#ifndef __TEST_H__
#define __TEST_H__

#include <regex.h>
#include <stdio.h>
#include <string.h>

#define TESTS_COUNT (sizeof(tests) / sizeof(tests[0]))

#if _WIN32
#define C_RED(s) s
#define C_GREEN(s) s
#else
#define C_RED(s) "\033[31m" s "\033[0m"
#define C_GREEN(s) "\033[32m" s "\033[0m"
#endif

#define TEST_SUCCESS C_GREEN("SUCCESS")
#define TEST_FAILURE C_RED("FAILURE")

/* Regex match function */
int match(const char *string, const char *pattern);

/**
 * struct test - storing test data
 *
 * @name: test name
 * @func: test function
 */
typedef struct test
{
	char *name;
	int (*func)(void);
} test_t;

/* Test functions */
int test_linear_search(void);
int test_binary_search(void);

/**
 * struct test_case - test case struct
 *
 * @value: value to test for
 * @expected: index to expect
 */
typedef struct test_case
{
	int value;
	int expected;
} test_case_t;

#endif
