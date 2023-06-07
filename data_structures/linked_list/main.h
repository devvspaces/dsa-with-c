#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct link - linkedlist data
 * structure
 *
 * @val: value
 * @next: pointer to the next
 */
typedef struct link
{
	int val;
	struct link *next;
} link_t;

void print_linked_list(link_t *link);
int insertAtBeginning(link_t **link, int val);
int insertAtEnd(link_t **link, int val);
int deleteFromBeginning(link_t **link, int *val);
int deleteFromEnd(link_t **link, int *val);

#endif /* __LINKED_LIST_H__ */
