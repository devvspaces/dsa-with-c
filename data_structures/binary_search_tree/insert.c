#include "main.h"

/**
 * _bst_insert - insert a new node in a binary search tree
 * using depth-first traversal
 *
 * @head: head of the current tree level
 * @node: node to be inserted
 *
 * Return: node being inserted if successful else NULL
 */
bst_node *_bst_insert(bst_node *head, bst_node *node)
{
	if (head->val <= node->val)
	{
		if (head->left != NULL)
			return _bst_insert(head->left, node);
		head->left = node;
	}
	else if (head->right != NULL)
		return _bst_insert(head->right, node);
	head->right = node;
	return (node);
}

/**
 * bst_insert - insert a val in a binary search tree
 * using level order recursion
 *
 * @head: pointer to the head of the binary search tree
 * @val: value to be inserted
 *
 * Return: new inserted node if successful else NULL
 */
bst_node *bst_insert(bst_node **head, int val)
{
	bst_node *node;

	/* Create new node */
	node = create_bst_node(val);
	if (node == NULL)
		return (NULL);

	/* Insert if head is null */
	if (*head == NULL)
		return (*head = node, node);

	/* Recurse insert */
	node = _bst_insert(head, node);

	if (node == NULL)
		return (free(node), NULL);

	return (node);
}
