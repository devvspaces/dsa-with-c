
#include "../../../data_structures/double_linked_list/main.h"
#include "main.h"

/**
 * free_double_linked_list - free a linked list
 *
 * @linkedlist: linkedlist
 */
void free_double_linked_list(double_linked_t *linkedlist)
{
	double_linked_t *temp;

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
 * test_double_linked_list - Test double linked list
 *
 * Return: 0 on success, -1 on failure
 */
int test_double_linked_list(void)
{
	double_linked_t *lcase;
	int computed, error;

	lcase = NULL;

	error = doubleInsertAtBeginning(&lcase, 6);
	if (error == 1)
		return (free_double_linked_list(lcase), -1);
	doubleInsertAtBeginning(&lcase, 5);
	doubleInsertAtBeginning(&lcase, 4);

	error = doubleInsertAtEnd(&lcase, 7);
	if (error == 1)
		return (free_double_linked_list(lcase), -1);
	doubleInsertAtEnd(&lcase, 8);
	doubleInsertAtEnd(&lcase, 9);

	error = doubleInsertAtPosition(&lcase, 20, 1);
	if (error == 1 || lcase->next->val != 20)
		return (free_double_linked_list(lcase), -1);

	error = doubleDeleteFromBeginning(&lcase, &computed);
	if (error == 1 || computed != 4)
		return (free_double_linked_list(lcase), -1);

	error = doubleDeleteFromPosition(&lcase, &computed, 1);
	if (error == 1 || computed != 5)
		return (free_double_linked_list(lcase), -1);

	error = doubleDeleteFromEnd(&lcase, &computed);
	if (error == 1 || computed != 9)
		return (free_double_linked_list(lcase), -1);

	return (free_double_linked_list(lcase), 0);
}
