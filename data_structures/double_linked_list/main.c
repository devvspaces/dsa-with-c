
#include "main.h"

/**
 * print_double_linked_list - print double linked list
 *
 * @link: double linked list structure
 */
void print_double_linked_list(double_linked_t *link)
{
	double_linked_t *temp;

	if (link == NULL)
		return;

	temp = link;
	while (temp->next != NULL)
	{
		printf("%d <-> ", temp->val);
		temp = temp->next;
	}
	printf("%d\n", temp->val);
}

/**
 * doubleInsertAtBeginning - insert a value
 * at the beginning of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value to be added
 *
 * Return: 0 if success else 1
 */
int doubleInsertAtBeginning(double_linked_t **linkedlist, int val)
{
	double_linked_t *new = malloc(sizeof(double_linked_t));

	if (new == NULL)
		return (free(new), 1);

	new->val = val;
	new->next = *linkedlist;
	new->prev = NULL;

	if (*linkedlist != NULL)
		(*linkedlist)->prev = new;

	*linkedlist = new;
	return (0);
}

/**
 * doubleInsertAtEnd - insert a value
 * at the end of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value to be added
 *
 * Return: 0 if success else 1
 */
int doubleInsertAtEnd(double_linked_t **linkedlist, int val)
{
	double_linked_t *new, *prev;

	if (*linkedlist == NULL)
		return (doubleInsertAtBeginning(linkedlist, val));

	new = malloc(sizeof(double_linked_t));
	if (new == NULL)
		return (free(new), 1);
	new->val = val;

	prev = *linkedlist;
	while (prev->next != NULL)
		prev = prev->next;

	new->next = prev->next;
	new->prev = prev;
	prev->next = new;
	return (0);
}

/**
 * doubleInsertAtPosition - insert a value
 * at an index of a double linked list
 *
 * @linkedlist: double linked list structure
 * @val: value to be added
 * @idx: index to add new value
 *
 * Return: 0 if success else 1
 */
int doubleInsertAtPosition(double_linked_t **linkedlist, int val, int idx)
{
	double_linked_t *new, *node;

	if (*linkedlist == NULL)
		return (doubleInsertAtBeginning(linkedlist, val));

	node = *linkedlist;
	for (; idx > 0; idx--)
	{
		if (node->next == NULL)
			return (1);
		node = node->next;
	}

	new = malloc(sizeof(double_linked_t));
	if (new == NULL)
		return (free(new), 1);
	new->val = val;

	new->next = node;
	new->prev = node->prev;
	node->prev->next = new;
	node->prev = new;
	return (0);
}
