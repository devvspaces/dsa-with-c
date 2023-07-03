#include "main.h"

/**
 * _bt_levelorder - traverse a binary tree on levelorder
 *
 * @fifo: queue
 */
void _bt_levelorder(pqueue_t *fifo)
{
	bt_node *dequeued_node;
	int status;

	status = p_dequeue(fifo, &dequeued_node);
	if (status != 0)
		return;

	/* Process */
	printf("%d, ", dequeued_node->val);

	if (dequeued_node->left)
		p_enqueue(fifo, dequeued_node->left);
	if (dequeued_node->right)
		p_enqueue(fifo, dequeued_node->right);
	_bt_levelorder(fifo);
}

/**
 * bt_traverse_levelorder - traverse a binary tree on levelorder
 *
 * @head: head of the binary tree
 */
void bt_traverse_levelorder(bt_node *head)
{
	pqueue_t *fifo;

	if (head == NULL)
		return;

	/* Create queue */
	fifo = create_pqueue();
	if (fifo == NULL)
		return;

	/* Recurse levelorder */
	p_enqueue(fifo, head);
	_bt_levelorder(fifo);
	printf("\n");
	free_pqueue(fifo);
}
