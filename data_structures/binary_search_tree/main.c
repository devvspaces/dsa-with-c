#include "main.h"

/**
 * free_bt - free binary search tree
 *
 * @head: head of the tree at
 * any level
 */
void free_bt(bst_node *head)
{
	if (head == NULL)
		return;

	free_bt(head->left);
	free_bt(head->right);
	free(head);
}

/**
 * create_bst_node - create a binary search tree node
 *
 * @val: value to be in the node
 *
 * Return: new bt node
 */
bst_node *create_bst_node(int val)
{
	bst_node *node;

	node = malloc(sizeof(bst_node));
	if (node == NULL)
		return (free(node), NULL);

	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
