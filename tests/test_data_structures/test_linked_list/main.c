
#include "../../../data_structures/linked_list/main.h"
#include "main.h"

/**
 * free_linked_list - free a linked list
 *
 * @linkedlist: linkedlist
 */
void free_linked_list(link_t *linkedlist)
{
	link_t *temp;

	if (linkedlist == NULL)
		return;

	while (linkedlist->next != NULL)
	{
		temp = linkedlist->next;
		free(linkedlist);
		linkedlist = temp;
	}
	free(linkedlist);
}

/**
 * test_linked_list - Test linked list
 *
 * Return: 0 on success, -1 on failure
 */
int test_linked_list(void)
{
	link_t *lcase;
	int computed, error;

	lcase = NULL;
	error = insertAtBeginning(&lcase, 6);
	if (error == 1)
		return (free_linked_list(lcase), -1);
	insertAtBeginning(&lcase, 5), insertAtBeginning(&lcase, 4);
	error = insertAtEnd(&lcase, 7);
	if (error == 1)
		return (free_linked_list(lcase), -1);
	insertAtEnd(&lcase, 8), insertAtEnd(&lcase, 9);
	error = deleteFromBeginning(&lcase, &computed);
	if (error == 1 || computed != 4)
		return (free_linked_list(lcase), -1);
	error = deleteFromEnd(&lcase, &computed);
	if (error == 1 || computed != 9)
		return (free_linked_list(lcase), -1);

	return (free_linked_list(lcase), 0);
}
