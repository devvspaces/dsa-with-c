#include "main.h"

/**
 * _bt_get_last_node - get the last node from a binary tree
 * using level order recursion
 *
 * @fifo: queue
 *
 * Return: last node else null
 */
bt_node *_bt_get_last_node(pqueue_t *fifo)
{
	bt_node *node;
	int status;

	status = p_dequeue(fifo, &node);
	if (status != 0)
		return (NULL);

	/* Process */
	if (node->right == NULL)
	{
		if (node->left == NULL)
			return (node);
		return (node->left);
	}

	p_enqueue(fifo, node->right);
	p_enqueue(fifo, node->left);

	return (_bt_get_last_node(fifo));
}

/**
 * bt_delete - delete a node from a binary tree
 * using level order recursion
 *
 * @head: head of the binary tree
 * @val: pointer to store value
 *
 * Return: 0 if successful else 1
 */
int bt_delete(bt_node *head, int *val)
{
	pqueue_t *fifo;
	bt_node *node;

	/* Insert if head is null */
	if (head == NULL)
		return (1);

	/* Create queue */
	fifo = create_pqueue();
	if (fifo == NULL)
		return (1);

	/* Recurse insert */
	p_enqueue(fifo, head);
	node = _bt_get_last_node(fifo);
	free_pqueue(fifo);

	if (node == NULL)
		return (1);

	*val = node->val;
	free_bt(node);
	return (0);
}
