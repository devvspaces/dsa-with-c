#ifndef __BINARY_TREE_IMP_H__
#define __BINARY_TREE_IMP_H__

#include <stdio.h>
#include <stdlib.h>

/* Binary tree */

/**
 * struct binary_tree_node - binary node data
 *
 * @val: value in data
 * @left: left child
 * @right: right child
 */
typedef struct binary_tree_node
{
	int val;
	struct binary_tree_node *left;
	struct binary_tree_node *right;
} bt_node;

void free_bt(bt_node *head);
bt_node *create_bt_node(int val);
bt_node *bt_insert(bt_node **head, int val);
int bt_delete(bt_node *head, int *val);
void bt_traverse_preorder(bt_node *head);
void bt_traverse_inorder(bt_node *head);
void bt_traverse_postorder(bt_node *head);
void bt_traverse_levelorder(bt_node *head);

/* Queue */

/**
 * struct pqueue_item - queue data
 *
 * @val: value in data
 * @next: next data
 */
typedef struct pqueue_item
{
	bt_node *val;
	struct pqueue_item *next;
} pq_item;

/**
 * struct pqueue - queue data
 * structure
 *
 * @head: start of the queue
 * @tail: end of the queue
 */
typedef struct pqueue
{
	pq_item *head;
	pq_item *tail;
} pqueue_t;

pqueue_t *create_pqueue(void);
void free_pqueue(pqueue_t *queue);
int p_enqueue(pqueue_t *queue, bt_node *val);
int p_dequeue(pqueue_t *queue, bt_node **val);

#endif /* __BINARY_TREE_IMP_H__ */
