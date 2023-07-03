#include "main.h"

/**
 * _bt_insert - insert a new node in a binary tree
 * using level order recursion
 *
 * @fifo: queue
 * @node: node to be inserted
 *
 * Return: node being inserted if successful else NULL
 */
bt_node *_bt_insert(pqueue_t *fifo, bt_node *node)
{
	bt_node *dequeued_node;
	int status;

	status = p_dequeue(fifo, &dequeued_node);
	if (status != 0)
		return (NULL);

	/* Process */
	if (dequeued_node->left == NULL)
		return (dequeued_node->left = node, node);
	if (dequeued_node->right == NULL)
		return (dequeued_node->right = node, node);

	p_enqueue(fifo, dequeued_node->left);
	p_enqueue(fifo, dequeued_node->right);
	return (_bt_insert(fifo, node));
}

/**
 * bt_insert - insert a val in a binary tree
 * using level order recursion
 *
 * @head: pointer to the head of the binary tree
 * @val: value to be inserted
 *
 * Return: new inserted node if successful else NULL
 */
bt_node *bt_insert(bt_node **head, int val)
{
	pqueue_t *fifo;
	bt_node *node;

	/* Create new node */
	node = create_bt_node(val);
	if (node == NULL)
		return (NULL);

	/* Insert if head is null */
	if (*head == NULL)
		return (*head = node, node);

	/* Create queue */
	fifo = create_pqueue();
	if (fifo == NULL)
		return (NULL);

	/* Recurse insert */
	p_enqueue(fifo, *head);
	node = _bt_insert(fifo, node);
	free_pqueue(fifo);

	if (node == NULL)
		return (free(node), NULL);

	return (node);
}
