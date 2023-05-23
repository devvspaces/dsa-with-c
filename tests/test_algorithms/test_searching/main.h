#ifndef __TEST_SEARCHING_H__
#define __TEST_SEARCHING_H__

#include "../../test.h"

/* Test functions */
int test_linear_search(void);
int test_binary_search(void);
int test_jump_search(void);
int test_exponential_search(void);
int test_ternary_search(void);
int test_interpolation_search(void);

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
