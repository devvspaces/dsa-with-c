#include "main.h"

/**
 * _bt_preorder - traverse the binary tree
 * using preorder
 *
 * @head: head of the binary tree
 */
void _bt_preorder(bt_node *head)
{
	/* Base */
	if (head == NULL)
		return;

	/* process */
	printf("%d, ", head->val);

	/* recurse left */
	_bt_preorder(head->left);

	/* recurse right */
	_bt_preorder(head->right);
}

/**
 * bt_traverse_preorder - traverse the binary tree
 * using preorder
 *
 * @head: head of the binary tree
 */
void bt_traverse_preorder(bt_node *head)
{
	_bt_preorder(head);
	printf("\n");
}
