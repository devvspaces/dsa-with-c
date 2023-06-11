#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct link - linkedlist data
 * structure
 *
 * @val: value
 * @next: pointer to the next
 */
typedef struct double_linked_list
{
	int val;
	struct double_linked_list *next;
	struct double_linked_list *prev;
} double_linked_t;

void print_double_linked_list(double_linked_t *link);
int doubleInsertAtBeginning(double_linked_t **link, int val);
int doubleInsertAtPosition(double_linked_t **link, int val, int idx);
int doubleInsertAtEnd(double_linked_t **link, int val);
int doubleDeleteFromBeginning(double_linked_t **link, int *val);
int doubleDeleteFromPosition(double_linked_t **link, int *val, int idx);
int doubleDeleteFromEnd(double_linked_t **link, int *val);

#endif /* __DOUBLE_LINKED_LIST_H__ */
