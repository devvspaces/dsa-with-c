#ifndef __TEST_SORTING_H__
#define __TEST_SORTING_H__

#include "../../test.h"

/* Test functions */
int test_bubble_sort(void);
int test_selection_sort(void);
int test_insertion_sort(void);
int test_merge_sort(void);
int test_quick_sort(void);

/**
 * struct sort_case - test case struct
 *
 * @arr: arrary to sort
 * @sorted: expected arrary
 * @size: size of the array
 */
typedef struct sort_case
{
	int *arr;
	int *sorted;
	int size;
} sort_case_t;

/* Helper functions */
int *create_arr(int size, ...);
void free_cases(sort_case_t *cases);
sort_case_t *create_test_cases(void);

#endif
