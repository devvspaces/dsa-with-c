#include "main.h"

/**
 * _bt_postorder - traverse the binary tree
 * using postorder
 *
 * @head: head of the binary tree
 */
void _bt_postorder(bt_node *head)
{
	/* Base */
	if (head == NULL)
		return;

	/* recurse left */
	_bt_postorder(head->left);

	/* recurse right */
	_bt_postorder(head->right);

	/* process */
	printf("%d, ", head->val);
}

/**
 * bt_traverse_postorder - traverse the binary tree
 * using postorder
 *
 * @head: head of the binary tree
 */
void bt_traverse_postorder(bt_node *head)
{
	_bt_postorder(head);
	printf("\n");
}
