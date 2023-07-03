
#include "../../../data_structures/binary_tree/main.h"
#include "main.h"

/**
 * test_binary_tree_create_bt_node - Test creating
 * a new node in a binary tree
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_create_bt_node(void)
{
	bt_node *node;

	node = create_bt_node(4);
	if (node == NULL)
		return (-1);

	if (node->val != 4)
		return (free_bt(node), -1);

	return (free_bt(node), 0);
}

/**
 * test_binary_tree_insert - Test insertion function
 * for a binary tree
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_insert(void)
{
	bt_node *node, *created;

	node = NULL;
	created = bt_insert(&node, 4);
	if (created == NULL)
		return (-1);
	if (created->val != 4)
		return (free_bt(created), -1);
	if (created != node)
		return (free_bt(created), -1);
	
	bt_insert(&node, 5), bt_insert(&node, 6), bt_insert(&node, 7);
	bt_insert(&node, 8), bt_insert(&node, 9);
	created = bt_insert(&node, 10);
	if (created->val != 10 || node->val != 4)
		return (free_bt(node), -1);

	return (free_bt(node), 0);
}

/**
 * test_binary_tree - Test binary tree
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree(void)
{
	int status;

	status = test_binary_tree_create_bt_node();
	if (status != 0)
		return (-1);

	status = test_binary_tree_insert();
	if (status != 0)
		return (-1);

	status = test_binary_tree_traverse_preorder();
	if (status != 0)
		return (-1);

	status = test_binary_tree_traverse_inorder();
	if (status != 0)
		return (-1);

	status = test_binary_tree_traverse_postorder();
	if (status != 0)
		return (-1);

	status = test_binary_tree_traverse_levelorder();
	if (status != 0)
		return (-1);
	return (0);
}
