#include "main.h"

/**
 * _bst_delete - delete a node from a binary search tree
 *
 * @head: head of the binary search tree
 * @val: val to delete
 *
 * Return: 1 if successful else 0
 */
int _bst_delete(bst_node *head, int val)
{
	bst_node *temp;

	/* Base case */
	if (head == NULL)
		return (0);

	if (head->right != NULL && head->right->val == val)
	{
		/* Case 1 - No child */
		if (head->right->left == NULL && head->right->right == NULL)
		{
			free(head->right);
			head->right = NULL;
			return (1);
		}

		/* Case 2 - One Child */
		if (head->right->left == NULL && head->right->right != NULL)
		{
			temp = head->right->right;
			free(head->right);
			head->right = temp;
			return (1);
		}
		if (head->right->left != NULL && head->right->right == NULL)
		{
			temp = head->right->left;
			free(head->right);
			head->right = temp;
			return (1);
		}

		/* Case 3 - One or More child */
		/* Go left then go right till you can't go no more */
	}
		
	/* Recurse left */
	return (_bst_delete(head->left, val));
}


/**
 * bst_delete - delete a node from a binary search tree
 *
 * @head: head of the binary search tree
 * @val: val to delete
 *
 * Return: 1 if successful else 0
 */
int bst_delete(bst_node **head, int val)
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
