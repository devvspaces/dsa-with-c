#ifndef __TEST_SORTING_H__
#define __TEST_SORTING_H__

#include "../../test.h"

/* Test functions */
int test_bubble_sort(void);

/**
 * struct sort_test_case - test case struct
 *
 * @arr: arrary to sort
 * @sorted: expected arrary
 */
typedef struct sort_test_case
{
	int *arr;
	int *sorted;
} sort_test_case_t;

#endif
