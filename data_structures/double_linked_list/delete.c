
#include "main.h"

/**
 * doubleDeleteFromBeginning - delete a value
 * from the beginning of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value deleted
 *
 * Return: 0 if success else 1
 */
int doubleDeleteFromBeginning(double_linked_t **linkedlist, int *val)
{
	double_linked_t *temp;

	if (*linkedlist == NULL)
		return (1);

	temp = (*linkedlist)->next;
	*val = (*linkedlist)->val;
	free(*linkedlist);
	temp->prev = NULL;
	*linkedlist = temp;
	return (0);
}

/**
 * doubleDeleteFromEnd - delete a value
 * from the end of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value deleted
 *
 * Return: 0 if success else 1
 */
int doubleDeleteFromEnd(double_linked_t **linkedlist, int *val)
{
	double_linked_t *node;

	if (*linkedlist == NULL)
		return (1);

	node = *linkedlist;
	while (node->next != NULL)
		node = node->next;

	node->prev->next = NULL;
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
	}
	*val = node->val;
	free(node);

	return (0);
}

/**
 * doubleDeleteFromPosition - delete a value
 * from the index of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value deleted
 * @idx: index to delete
 *
 * Return: 0 if success else 1
 */
int doubleDeleteFromPosition(double_linked_t **linkedlist, int *val, int idx)
{
	double_linked_t *node;

	if (*linkedlist == NULL)
		return (1);

	node = *linkedlist;
	for (; idx > 0; idx--)
	{
		if (node->next == NULL)
			return (1);
		node = node->next;
	}

	node->prev->next = NULL;
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
	}
	*val = node->val;
	free(node);

	return (0);
}
