#ifndef __BINARY_SEARCH_TREE_IMP_H__
#define __BINARY_SEARCH_TREE_IMP_H__

#include <stdio.h>
#include <stdlib.h>

/* Binary tree */

/**
 * struct binary_search_tree_node - binary node
 *
 * @val: value in data
 * @left: left child
 * @right: right child
 */
typedef struct binary_search_tree_node
{
	int val;
	struct binary_search_tree_node *left;
	struct binary_search_tree_node *right;
} bst_node;

void free_bt(bst_node *head);
bst_node *create_bst_node(int val);
bst_node *bst_insert(bst_node **head, int val);
int bst_delete(bst_node **head, int val);
unsigned int bst_search(bst_node *head, int needle);
#endif /* __BINARY_SEARCH_TREE_IMP_H__ */
