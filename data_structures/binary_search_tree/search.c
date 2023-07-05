#include "main.h"

/**
 * bst_search - search the bst using depth-first search
 *
 * @head: head of the binary search tree
 * @needle: value to search for
 *
 * Return: 1 if found, else 0
 */
unsigned int bst_search(bst_node *head, int needle)
{
	/* Base case */
	if (head == NULL)
		return (0);

	/* Compare case */
	if (head->val == needle)
		return (1);

	/* Recurse right */
	if (head->val < needle)
		return (bst_search(head->right, needle));

	/* Recurse left */
	return (bst_search(head->left, needle));
}
