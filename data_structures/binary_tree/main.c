#include "main.h"

/**
 * free_bt - free binary tree
 *
 * @head: head of the tree at
 * any level
 */
void free_bt(bt_node *head)
{
	if (head == NULL)
		return;

	free_bt(head->left);
	free_bt(head->right);
	free(head);
}

/**
 * create_bt_node - create a binary tree node
 *
 * @val: value to be in the node
 *
 * Return: new bt node
 */
bt_node *create_bt_node(int val)
{
	bt_node *node;

	node = malloc(sizeof(bt_node));
	if (node == NULL)
		return (free(node), NULL);
	
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
