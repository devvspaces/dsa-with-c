
#include "main.h"

/**
 * print_linked_list - print linked list
 *
 * @link: linked list structure
 */
void print_linked_list(link_t *link)
{
	link_t *temp;

	if (link == NULL)
		return;

	temp = link;
	while (temp->next != NULL)
	{
		printf("%d -> ", temp->val);
		temp = temp->next;
	}
	printf("%d\n", temp->val);
}

/**
 * insertAtBeginning - insert a value
 * at the beginning of a linked list
 *
 * @linkedlist: linked list structure
 * @val: value to be added
 *
 * Return: 0 if success else 1
 */
int insertAtBeginning(link_t **linkedlist, int val)
{
	link_t *new = malloc(sizeof(link_t));

	if (new == NULL)
		return (free(new), 1);

	new->val = val;
	new->next = *linkedlist;
	*linkedlist = new;
	return (0);
}

/**
 * insertAtEnd - insert a value
 * at the end of a linked list
 *
 * @linkedlist: linked list structure
 * @val: value to be added
 *
 * Return: 0 if success else 1
 */
int insertAtEnd(link_t **linkedlist, int val)
{
	link_t *new, *temp, *prev;

	if (*linkedlist == NULL)
		return (insertAtBeginning(linkedlist, val));

	new = malloc(sizeof(link_t));
	if (new == NULL)
		return (free(new), 1);
	new->val = val;

	prev = *linkedlist;
	temp = prev->next;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
	}

	new->next = prev->next;
	prev->next = new;
	return (0);
}

/**
 * deleteFromBeginning - delete a value
 * from the beginning of a linked list
 *
 * @linkedlist: linked list structure
 * @val: value deleted
 *
 * Return: 0 if success else 1
 */
int deleteFromBeginning(link_t **linkedlist, int *val)
{
	link_t *temp;

	if (*linkedlist == NULL)
		return (1);

	temp = (*linkedlist)->next;
	*val = (*linkedlist)->val;
	free(*linkedlist);
	*linkedlist = temp;
	return (0);
}

/**
 * deleteFromEnd - delete a value
 * from the end of a linked list
 *
 * @linkedlist: linked list structure
 * @val: value deleted
 *
 * Return: 0 if success else 1
 */
int deleteFromEnd(link_t **linkedlist, int *val)
{
	link_t *temp, *prev, *gprev;

	if (*linkedlist == NULL)
		return (1);

	if ((*linkedlist)->next == NULL)
	{
		temp = (*linkedlist)->next;
		*val = (*linkedlist)->val;
		free(*linkedlist);
		*linkedlist = temp;
	}

	gprev = *linkedlist;
	prev = gprev->next;
	temp = prev->next;
	while (temp != NULL)
	{
		gprev = prev;
		prev = temp;
		temp = temp->next;
	}

	*val = prev->val;
	free(prev);
	gprev->next = temp;
	return (0);
}
