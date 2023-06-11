#include "main.h"

/**
 * cIsQueueFull - checks if a queue is
 * full
 *
 * @queue: queue structure
 *
 * Return: 0 if full else 1
 */
int cIsQueueFull(c_queue_t *queue)
{
	if (queue->front == ((queue->rear + 1) % queue->len))
		return (0);
	return (1);
}

/**
 * cIsQueueEmpty - checks if a queue is
 * empty
 *
 * @queue: queue structure
 *
 * Return: 0 if empty else 1
 */
int cIsQueueEmpty(c_queue_t *queue)
{
	if (queue->front == queue->rear)
		return (0);
	return (1);
}

/**
 * cEnqueue - adds a value to the end
 * of the queue
 *
 * @queue: queue structure
 * @val: value to be added
 *
 * Return: 0 if successfull else 1
 */
int cEnqueue(c_queue_t *queue, int val)
{
	int full;

	full = cIsQueueFull(queue);
	if (full == 0)
		return (1);

	queue->data[queue->rear] = val;
	queue->rear = (queue->rear + 1) % queue->len;
	return (0);
}

/**
 * cDequeue - removes a value from
 * the start of a queue
 *
 * @queue: queue structure
 * @val: stores value removed
 *
 * Return: 0 if successfull else 1
 */
int cDequeue(c_queue_t *queue, int *val)
{
	int empty;

	empty = cIsQueueEmpty(queue);
	if (empty == 0)
		return (1);

	*val = queue->data[queue->front];
	queue->front = (queue->front + 1) % queue->len;
	return (0);
}

/**
 * cPeekQueue - peeks at the value at
 * the start of a queue
 *
 * @queue: queue structure
 * @val: stores value peeked
 *
 * Return: 0 if successfull else 1
 */
int cPeekQueue(c_queue_t *queue, int *val)
{
	int empty;

	empty = cIsQueueEmpty(queue);
	if (empty == 0)
		return (1);

	*val = queue->data[queue->front];
	return (0);
}
