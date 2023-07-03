#include "../../../data_structures/binary_tree/main.h"


/**
 * test_binary_tree_traverse_preorder - Test binary
 * tree traversal using preorder
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_traverse_preorder(void)
{
	bt_node *node;

	node = NULL;
	bt_insert(&node, 4), bt_insert(&node, 5), bt_insert(&node, 6);
	bt_insert(&node, 7), bt_insert(&node, 8), bt_insert(&node, 9);
	bt_insert(&node, 10);

	printf("BT Preorder = ");
	bt_traverse_preorder(node);
	return (free_bt(node), 0);
}

/**
 * test_binary_tree_traverse_inorder - Test binary
 * tree traversal using inorder
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_traverse_inorder(void)
{
	bt_node *node;

	node = NULL;
	bt_insert(&node, 4), bt_insert(&node, 5), bt_insert(&node, 6);
	bt_insert(&node, 7), bt_insert(&node, 8), bt_insert(&node, 9);
	bt_insert(&node, 10);

	printf("BT Inorder = ");
	bt_traverse_inorder(node);
	return (free_bt(node), 0);
}

/**
 * test_binary_tree_traverse_postorder - Test binary
 * tree traversal using postorder
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_traverse_postorder(void)
{
	bt_node *node;

	node = NULL;
	bt_insert(&node, 4), bt_insert(&node, 5), bt_insert(&node, 6);
	bt_insert(&node, 7), bt_insert(&node, 8), bt_insert(&node, 9);
	bt_insert(&node, 10);

	printf("BT Postorder = ");
	bt_traverse_postorder(node);
	return (free_bt(node), 0);
}

/**
 * test_binary_tree_traverse_levelorder - Test binary
 * tree traversal using levelorder
 *
 * Return: 0 on success, -1 on failure
 */
int test_binary_tree_traverse_levelorder(void)
{
	bt_node *node;

	node = NULL;
	bt_insert(&node, 4), bt_insert(&node, 5), bt_insert(&node, 6);
	bt_insert(&node, 7), bt_insert(&node, 8), bt_insert(&node, 9);
	bt_insert(&node, 10);

	printf("BT Levelorder = ");
	bt_traverse_levelorder(node);
	return (free_bt(node), 0);
}
