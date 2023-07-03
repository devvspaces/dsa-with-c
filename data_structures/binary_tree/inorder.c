#include "main.h"

/**
 * _bt_inorder - traverse the binary tree
 * using inorder
 *
 * @head: head of the binary tree
 */
void _bt_inorder(bt_node *head)
{
	/* Base */
	if (head == NULL)
		return;

	/* recurse left */
	_bt_inorder(head->left);

	/* process */
	printf("%d, ", head->val);

	/* recurse right */
	_bt_inorder(head->right);
}

/**
 * bt_traverse_inorder - traverse the binary tree
 * using inorder
 *
 * @head: head of the binary tree
 */
void bt_traverse_inorder(bt_node *head)
{
	_bt_inorder(head);
	printf("\n");
}
