
#include "../../../data_structures/circular_queue/main.h"
#include "main.h"

/**
 * c_free_queue - free queue
 *
 * @qcase: queue
 */
void c_free_queue(c_queue_t *qcase)
{
	free(qcase->data);
	free(qcase);
}

/**
 * test_queue_circular - Test queue data
 * structure implemented using a circular array
 *
 * Return: 0 on success, -1 on failure
 */
int test_queue_circular(void)
{
	c_queue_t *qcase;
	int computed, error;

	qcase = malloc(sizeof(c_queue_t));
	if (qcase == NULL)
		return (free(qcase), -1);
	qcase->data = calloc(5, sizeof(int));
	if (qcase->data == NULL)
		return (c_free_queue(qcase), -1);
	qcase->len = 5, qcase->front = 0, qcase->rear = 0;

	error = cIsQueueEmpty(qcase);
	if (error != 0)
		return (c_free_queue(qcase), -1);
	error = cIsQueueFull(qcase);
	if (error == 0)
		return (c_free_queue(qcase), -1);
	error = cIsQueueEmpty(qcase);
	if (error != 0)
		return (c_free_queue(qcase), -1);
	error = cPeekQueue(qcase, &computed);
	if (error == 0)
		return (c_free_queue(qcase), -1);
	error = cDequeue(qcase, &computed);
	if (error == 0)
		return (c_free_queue(qcase), -1);
	error = cEnqueue(qcase, 5);
	if (error != 0)
		return (c_free_queue(qcase), -1);
	cEnqueue(qcase, 3), cEnqueue(qcase, 6), cEnqueue(qcase, 10);
	error = cIsQueueEmpty(qcase);
	if (error == 0)
		return (c_free_queue(qcase), -1);
	error = cIsQueueFull(qcase);
	if (error != 0)
		return (c_free_queue(qcase), -1);
	error = cPeekQueue(qcase, &computed);
	if (error != 0 || computed != 5)
		return (c_free_queue(qcase), -1);
	error = cDequeue(qcase, &computed);
	if (error != 0 || computed != 5)
		return (c_free_queue(qcase), -1);
	error = cDequeue(qcase, &computed);
	if (error != 0 || computed != 3)
		return (c_free_queue(qcase), -1);
	cDequeue(qcase, &computed), cDequeue(qcase, &computed);
	error = cDequeue(qcase, &computed);
	if (error == 0)
		return (c_free_queue(qcase), -1);
	return (c_free_queue(qcase), 0);
}
