#include "main.h"

/**
 * isQueueEmpty - checks if a queue is
 * empty
 *
 * @queue: queue structure
 *
 * Return: 0 if empty else 1
 */
int isQueueEmpty(queue_t *queue)
{
	if (queue->head == NULL)
		return (0);
	return (1);
}

/**
 * enqueue - adds a value to the end
 * of the queue
 *
 * @queue: queue structure
 * @val: value to be added
 *
 * Return: 0 if successfull else 1
 */
int enqueue(queue_t *queue, int val)
{
	qitem *new = malloc(sizeof(qitem));

	if (new == NULL)
		return (free(new), 1);

	new->val = val;

	if (queue->tail == NULL)
	{
		queue->head = new;
		queue->tail = new;
	}
	else
	{
		queue->tail->next = new;
		queue->tail = new;
	}
	return (0);
}

/**
 * dequeue - removes a value from
 * the start of a queue
 *
 * @queue: queue structure
 * @val: stores value removed
 *
 * Return: 0 if successfull else 1
 */
int dequeue(queue_t *queue, int *val)
{
	qitem *temp;

	if (queue->head == NULL)
		return (1);

	*val = queue->head->val;
	temp = queue->head;
	queue->head = queue->head->next;
	free(temp);
	return (0);
}

/**
 * peekQueue - peeks at the value at
 * the start of a queue
 *
 * @queue: queue structure
 * @val: stores value peeked
 *
 * Return: 0 if successfull else 1
 */
int peekQueue(queue_t *queue, int *val)
{
	if (queue->head == NULL)
		return (1);
	*val = queue->head->val;
	return (0);
}
